using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceMovement : MonoBehaviour
{
    [SerializeField] ToonDiceRoller toonDiceRoller;
    [SerializeField] float rollSpeed;
    [SerializeField] float swipeRange;
    [SerializeField] float tapRange;
    Vector2 startTouchPosition;
    Vector2 currentPosition;
    Vector2 endTouchPosition;
    bool stopTouch;
    bool isMoving;
    internal static GameObject dice;
    TrajectoryLine tl;
    public Camera cam;
    public Rigidbody rb;
    public Vector3 force;
    Vector3 startPoint;
    Vector3 endPoint;
    Vector3 currentPoint;
    public Vector3 minPower;
    public Vector3 maxPower;
    public float power = 10f;
    public float xRotationAngle = 0f;
    public float yLineRenderPower = 0f;
    public float rotateSpeed = 5f;
    public float shotPowerMultiplier = 30f;
    public float limitLengthShot = 10f;
    public float minRotationAngle = 120f;
    public float maxRotationAngle = 260f;


    private void Start() {
        cam = Camera.main;
        tl = GetComponent<TrajectoryLine>();
    }

    void Update() {
        //Swipe();
        DragAndShot();
        //ClickAndHit();
        KeyboardControlls();
    }

    void DragAndShot()
    {
        dice = GameObject.FindGameObjectWithTag("Dice");

        if(Input.GetMouseButtonDown(0))
        {
            transform.position = dice.transform.position;
        }
        if(Input.GetMouseButton(0))
        {
            xRotationAngle += Input.GetAxis("Mouse X") * rotateSpeed;
            yLineRenderPower += Input.GetAxis("Mouse Y") * rotateSpeed;
            
            if(yLineRenderPower < 0 )
            {
                yLineRenderPower = 0;
            }
            if(yLineRenderPower > limitLengthShot )
            {
                yLineRenderPower = limitLengthShot;
            }

            if(xRotationAngle < minRotationAngle )
            {
                xRotationAngle = minRotationAngle;
            }

            if(xRotationAngle > maxRotationAngle )
            {
                xRotationAngle = maxRotationAngle;
            }

            transform.rotation = Quaternion.Euler(0f, -xRotationAngle, 0f);
            
            startPoint =  transform.position;
            endPoint =  transform.position + transform.forward * Math.Abs(limitLengthShot - yLineRenderPower);
        
            tl.RenderLine(startPoint,endPoint);

        }

        if(Input.GetMouseButtonUp(0))
        {
            
            force = new Vector3(Mathf.Clamp(startPoint.x - endPoint.x, minPower.x, maxPower.x), Mathf.Clamp(startPoint.y - endPoint.y, minPower.y, maxPower.y), Mathf.Clamp(startPoint.z - endPoint.z, minPower.z, maxPower.z));
            //force = new Vector3(startPoint.x - endPoint.x, startPoint.y - endPoint.y, startPoint.z - endPoint.z);
            
            power = (endPoint - startPoint).magnitude * shotPowerMultiplier;

            rb.AddForce(force * power, ForceMode.Impulse);
            tl.EndLine();

            Debug.Log("FORCE: " + force + " POWER: " + power);
            Debug.Log("Inicio: " + startPoint);
            Debug.Log("Fin: " + endPoint);

        }

    }

    void ClickAndHit()
    {
        dice = GameObject.FindGameObjectWithTag("Dice");
        if(Input.GetMouseButtonDown(0))
        {
            //startPoint = cam.ScreenToWorldPoint(Input.mousePosition);
            startPoint = dice.transform.position;
            startPoint.y=0;
        }
        if(Input.GetMouseButton(0))
        {
            
            currentPoint = cam.ScreenToWorldPoint(Input.mousePosition);
            currentPoint = currentPoint * 0.1f;
            currentPoint.y=0;

            power = (startPoint-currentPoint).magnitude;

            Vector3 forward = Camera.main.transform.forward;
            Vector3 actualForward = Vector3.ProjectOnPlane(Input.mousePosition, Vector3.up).normalized;
            Vector3 endpoint = actualForward * 5;

            tl.RenderLine(startPoint, currentPoint);
            //Debug.DrawLine(currentPoint2, currentPoint, Color.green, 10f);
        }

        if(Input.GetMouseButtonUp(0))
        {
            endPoint = Camera.main.ScreenToWorldPoint(Input.mousePosition);

            //startPoint =  currentPoint2;
            endPoint = currentPoint;

            force = new Vector3(Mathf.Clamp(startPoint.x - endPoint.x, minPower.x, maxPower.x), Mathf.Clamp(startPoint.y - endPoint.y, minPower.y, maxPower.y), Mathf.Clamp(startPoint.z - endPoint.z, minPower.z, maxPower.z));
            //force = new Vector3(startPoint.x - endPoint.x, startPoint.y - endPoint.y, startPoint.z - endPoint.z);

            rb.AddForce(force * power, ForceMode.Impulse);
            tl.EndLine();

            Debug.Log("FORCE: " + force + " POWER: " + power);
            Debug.Log("Inicio: " + startPoint);
            Debug.Log("Fin: " + endPoint);
        }
    }

    void Swipe()
    {
        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            startTouchPosition = Input.GetTouch(0).position;
        }

        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
        {
            currentPosition = Input.GetTouch(0).position;
            var distance = currentPosition - startTouchPosition;

            if(!stopTouch)
            {
                if(distance.x < -swipeRange)
                {
                    Debug.Log("Left");
                    StartCoroutine(Roll(Vector3.left));
                }
                else if(distance.x > swipeRange)
                {
                    Debug.Log("Right");
                    StartCoroutine(Roll(Vector3.right));
                }
                else if(distance.y > swipeRange)
                {
                    Debug.Log("Up");
                    StartCoroutine(Roll(Vector3.forward));
                }
                else if(distance.y < -swipeRange)
                {
                    Debug.Log("Down");
                    StartCoroutine(Roll(Vector3.back));
                }
            }
        }
    }

    void KeyboardControlls()
    {
        if(isMoving) return;
        if(Input.GetKey(KeyCode.UpArrow)) StartCoroutine(Roll(Vector3.forward));
        else if(Input.GetKey(KeyCode.DownArrow)) StartCoroutine(Roll(Vector3.back));
        else if(Input.GetKey(KeyCode.RightArrow)) StartCoroutine(Roll(Vector3.right));
        else if(Input.GetKey(KeyCode.LeftArrow)) StartCoroutine(Roll(Vector3.left));

    }



    IEnumerator Roll( Vector3 direction)
    {
        isMoving = true;
        stopTouch = true;
        var remainingAngle = 90f;
        var rotationCenter = transform.position + direction / 2 + Vector3.down / 2;
        var rotationAxis = Vector3.Cross(Vector3.up, direction);

        while(remainingAngle > 0)
        {
            var rotationAngle = Mathf.Min(Time.deltaTime * rollSpeed, remainingAngle);
            transform.RotateAround(rotationCenter, rotationAxis, rotationAngle);
            remainingAngle -= rotationAngle;
            yield return null;
        }
        stopTouch = false;
        isMoving = false;
    }

    void FixedUpdate() {
    if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            stopTouch = false;
            
            endTouchPosition = Input.GetTouch(0).position;

            var distance = endTouchPosition - startTouchPosition;

            if(Mathf.Abs(distance.x) < tapRange && Mathf.Abs(distance.y) < tapRange) toonDiceRoller.RequestNewImpulse();
        }
    }

}
