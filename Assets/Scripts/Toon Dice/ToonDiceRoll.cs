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

    [SerializeField] float impulseDirection;
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
        
        BackToOrigin();
    }
    

    void LiftDice() // Straight Jump
    {
       // transform.rotation = Quaternion.identity; //Aligned for all axis
      //  rb.AddForce(new Vector3(0f, Random.Range(1000, upDiceForce) ,0f)); // Raise the dice force
        rb.AddForce(0,Mathf.Abs(RandomLift()),0, ForceMode.Impulse);
       // rb.AddForce(new Vector3(0,upDiceForce,0f));
        
    }

    void RequestNewImpulse() // Jump to any coordinate of the world
    {
        float dirX = RandomImpulse();
        float diry = RandomImpulse();
        float dirZ = RandomImpulse();
        rb.AddForce(dirX,Mathf.Abs(diry),dirZ, ForceMode.VelocityChange);
    }

    void RequestNewRotationValues() // Random Rotation
    {
        float dirX = RandomRotation();
        float dirY = RandomRotation();
        float dirZ = RandomRotation();
        _rotation.x = dirX;
        _rotation.y = dirY;
        _rotation.z = dirZ;
    }

    void FixedUpdate()
    {
        if(state == Dice.IDLE) return;
        transform.Rotate(_rotation * rotationSpeed * Time.fixedDeltaTime);
    }

    float RandomRotation() => Random.Range(-rotationSpeed, rotationSpeed);
    float RandomImpulse() => Random.Range(-impulseDirection, impulseDirection);
    float RandomLift() => Random.Range(0, upDiceForce);

    void BackToOrigin() // If Dice fall beyond -5, will set position back to origin.
    {
        if(rb.transform.position.y <= -5) transform.position = Vector3.zero;
    }
}
