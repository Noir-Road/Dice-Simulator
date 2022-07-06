using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceRoller : MonoBehaviour
{
    [Header("Object Pool")]
    [SerializeField] PoolObjectType type;
    
    [Header("Object Physics")]
    public float upDiceForce;
    public float rotationSpeed;
    public float rotationAngles;
    public float impulseDirection;
    public float mutiplyGravity;
    [SerializeField] Vector3 _rotation;
    
    [Header("Object Components")]
    public Rigidbody rb;
    [SerializeField] MeshCollider meshCollider;
    
    public enum Dice{IDLE, ROLLING}
    public Dice state;
    public bool isRolling;

    private void OnEnable() {
        DiceLord.Roll += DiceRolling; //Subscribing
        ClearBoard.Instance.AddDices(gameObject);
        meshCollider.enabled = true;
        LoadValues();
    }

    private void OnDisable() {
        DiceLord.Roll -= DiceRolling; // Unsubscribing
    }


    void DiceRolling()
    {
        state = Dice.ROLLING;
        LiftDice(); // Lift Dice upwards
        RequestNewRotationValues(); // Rotate Dice in all axis
        RequestNewImpulse(); // Impulse Dice in all axis
    }

    void Update()
    {
        if (state == Dice.ROLLING)
        {
            transform.Rotate(_rotation * rotationSpeed * Time.deltaTime);
        }
        if(transform.position.y <= -17f)
            PoolManager.Instance.ReturnObjectOfType(gameObject,type);
    }

    void FixedUpdate()
    {
        if(!(state == Dice.ROLLING)) return;
         rb.AddForce(Physics.gravity * mutiplyGravity, ForceMode.Acceleration);
    }

    void LiftDice()
    {
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.up * upDiceForce); // Raise the dice force
    }

    void RequestNewRotationValues()
    {
         float dirX = RandomRotation();
         float dirY = RandomRotation();
         float dirZ = RandomRotation();
         _rotation.x = dirX;
         _rotation.y = dirY;
         _rotation.z = dirZ;
    }

    void RequestNewImpulse()
    {
        float dirX = RandomImpulse();
        float dirY = RandomImpulse();
        float dirZ = RandomImpulse();
        rb.AddForce(dirX,0,dirZ, ForceMode.Acceleration);
    }

    float RandomRotation() => Random.Range(-rotationAngles, rotationAngles); // Random Velocity for all axis

    float RandomImpulse() => Random.Range(-impulseDirection, impulseDirection);

    void LoadValues()
    { //TODO SHORT OUT THIS METHOD
        if (PlayerPrefs.HasKey("Force"))
        {
            upDiceForce = PlayerPrefs.GetFloat("Force");
        }

        if (PlayerPrefs.HasKey("Rotation"))
        {
            rotationSpeed = PlayerPrefs.GetFloat("Rotation");
        }

        if (PlayerPrefs.HasKey("Angles"))
        {
            rotationAngles = PlayerPrefs.GetFloat("Angles");
        }
        
        if (PlayerPrefs.HasKey("Mass"))
        {
            rb.mass = PlayerPrefs.GetFloat("Mass");
        }
    }
}
