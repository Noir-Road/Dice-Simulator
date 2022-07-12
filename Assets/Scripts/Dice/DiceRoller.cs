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
        //Ray ray = new Ray(gameObject. transform.position, transform.forward);


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

    Ray rayA, rayB;
    void Update()
    {

        if (state == Dice.ROLLING)
        {
            transform.Rotate(_rotation * rotationSpeed * Time.deltaTime);
        }
        else if (state == Dice.IDLE)
        {
    
            Ray ray1 = new Ray(transform.position, transform.forward);
            RaycastHit hitData;
            if (Physics.Raycast(ray1, out hitData))
            {
                // The Ray hit something!
                string name = hitData.collider.name;
                Debug.Log("HIT SOMETHING AFTER ROLLING: " + name);
            }

        }
        if (transform.position.y <= -17f)
            PoolManager.Instance.ReturnObjectOfType(gameObject,type);

        //Z == North
        //-Z == South
        //X == West
        //-X == East
        //Y == Roof
        //-Y == Ground
        
        //For Debug
        rayA = new Ray(transform.position, transform.forward);
        rayB = new Ray(transform.position, -transform.forward);

        Debug.DrawRay(rayA.origin, rayA.direction * 500, Color.green);
        Debug.DrawRay(rayB.origin, rayB.direction * 500, Color.red);

        /*
        switch (type)
        {
            case PoolObjectType.FourSides:
                //fire();
                break;
            case PoolObjectType.SixSides:
                // code block
                break;
            case PoolObjectType.EightSides:
                // code block
                break;
            case PoolObjectType.TenSides:
                // code block
                break;
            case PoolObjectType.TwelveSides:
                // code block
                break;
            case PoolObjectType.TwentySides:
                // code block
                break;
            default:
                // code block
                break;
        }
        */
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
