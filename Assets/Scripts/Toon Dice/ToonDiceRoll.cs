using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ToonDiceRoll : MonoBehaviour
{
    [SerializeField] float upDiceForce;
    [SerializeField] Rigidbody rb;
    [SerializeField] PhysicMaterial bounce;
    [SerializeField] TextMeshProUGUI score;
    public float rotationAngles;
    public bool isMoving;

    public enum Dice
    {
        IDLE,
        ROLLING
    } // Either the Dice is Rolling or Idle

    public Dice state;

    void Update()
    {
        if (rb.velocity != Vector3.zero)
            isMoving = true;
        else
            isMoving = false;


        if (Input.GetKeyDown("space"))
        {

            state = Dice.ROLLING;
            LiftDice();
            RequestNewImpulse();



        }

        if (state == Dice.ROLLING)
        {
            score.text = Random.Range(1, 6).ToString();
            //score.outlineColor.CompareRGB(0);
            //return;
        }


        if (rb.transform.position.y <= 2)
        {

           // rb.MovePosition(Vector3);
            state = Dice.IDLE;
           // score.characterSpacing = score.characterSpacing + 3;
            
            //score.text = Random.Range(1, 6).ToString();
            //transform.position = new Vector3(0, 9, 0);
        }
    }
    
    void LiftDice()
    {
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.up * upDiceForce); // Raise the dice force
    }

    void RequestNewImpulse()
    {
        float dirX = RandomValues();
        float diry = RandomValues();
        float dirZ = RandomValues();
        rb.AddForce(dirX,Mathf.Abs(diry),dirZ, ForceMode.VelocityChange);
    }

    float RandomValues() => Random.Range(-rotationAngles, rotationAngles);
}
