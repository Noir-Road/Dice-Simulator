using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToonDiceRoll : MonoBehaviour
{
    [SerializeField] float upDiceForce;
    [SerializeField] Rigidbody rb;
    [SerializeField] PhysicMaterial bounce;
    public float rotationAngles;
    void Update()
    {
        if (Input.GetKeyDown("space"))
        {
            LiftDice();
            RequestNewImpulse();
        }

        if (gameObject.transform.position.y <= -6)
        {
            transform.position = new Vector3(0, 9, 0);
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
