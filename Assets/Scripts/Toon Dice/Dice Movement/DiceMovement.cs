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

    void Update() {
        Swipe();
        KeyboardControlls();
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
