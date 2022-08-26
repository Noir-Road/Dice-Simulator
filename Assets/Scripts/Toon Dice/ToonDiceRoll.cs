using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ToonDiceRoll : MonoBehaviour
{

    [SerializeField] Ground diceState;

    [SerializeField] float upDiceForce;
    [SerializeField] public float rotationSpeed;
    [SerializeField] Vector3 _rotation;
    [SerializeField] Rigidbody rb;
    [SerializeField] PhysicMaterial bounce;
    [SerializeField] TextMeshProUGUI score;
    public float rotationAngles;
    public static bool isMoving;

    public enum Dice
    {
        IDLE,
        ROLLING
    } // Either the Dice is Rolling or Idle

    public Dice state;

    void Update()
    {
        if (rb.velocity != Vector3.zero)
        {
            isMoving = true;
        }
        else
        {
            isMoving = false;
            Debug.Log("Dice IDLE");
        }


        if (Input.GetMouseButton(1))
            rotationSpeed += 150.5f;


        if (Input.GetKeyDown("space") || Input.touchCount == 1)
        {

            state = Dice.ROLLING;
            LiftDice();
            RequestNewImpulse();
            RequestNewRotationValues();
            diceState.state = Ground.State.Spawning;
        }

        if (state == Dice.ROLLING)
        {
            transform.Rotate(_rotation * rotationSpeed * Time.deltaTime);
  //          score.text = Random.Range(1, 6).ToString();
            //score.outlineColor.CompareRGB(0);
            //return;
        }


        if (rb.transform.position.y <= 2)
        {

           // rb.MovePosition(Vector3);
            state = Dice.IDLE;
           // score.characterSpacing = score.characterSpacing + 3;
            
          //  score.text = Ground.numberSide.ToString();
            //score.text = Random.Range(1, 6).ToString();
            //transform.position = new Vector3(0, 9, 0);
        }
    }
    

    void LiftDice()
    {
       // transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(new Vector3(0f, Random.Range(1000, upDiceForce) ,0f)); // Raise the dice force
        rb.AddForce(0,Mathf.Abs(RandomValues()),0, ForceMode.Impulse);
        
    }

    void RequestNewImpulse()
    {
        float dirX = RandomValues();
        float diry = RandomValues();
        float dirZ = RandomValues();
        rb.AddForce(dirX,Mathf.Abs(diry),dirZ, ForceMode.VelocityChange);
    }

        void RequestNewRotationValues()
    {
        float dirX = RandomValues();
        float dirY = RandomValues();
        float dirZ = RandomValues();
        _rotation.x = dirX;
        _rotation.y = dirY;
        _rotation.z = dirZ;
    }

    float RandomValues() => Random.Range(-rotationAngles, rotationAngles);
}
