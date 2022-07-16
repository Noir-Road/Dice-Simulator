using Unity.VisualScripting;
using UnityEngine;
public class PlayerRoll : MonoBehaviour
{
    [Header("Object Pool")] 
    [SerializeField] PoolObjectType type;
    
    [Header("Object Physics")]
    public float upDiceForce;
    public float rotationSpeed;
    public float rotationAngles;
    [SerializeField] Vector3 _rotation;
    
    [Header("Object Components")]
    public Rigidbody rb;
    [SerializeField] MeshCollider meshCollider;
    
    public enum Dice{IDLE, ROLLING, FALLING}
    public Dice state;
    public bool isRolling;
    
    void OnEnable()
    {
       // DiceLord.Jump += DiceJumper;
        ClearBoard.Instance.AddDices(gameObject);
        meshCollider.enabled = true;
        LoadValues();
    }

    void OnDisable()
    {
      //  DiceLord.Jump -= DiceJumper;
    }

    void Update()
    {
        if (isRolling)
        {
            transform.Rotate(_rotation * rotationSpeed * Time.deltaTime);
        }
        if(transform.position.y <= -17f)
            PoolManager.Instance.ReturnObjectOfType(gameObject,type);
    }

    void DiceJumper(int _input)
    {
        switch (_input)
        {
            case 1 when state == Dice.IDLE:
                state = Dice.ROLLING;
                isRolling = true;
                RequestNewRotationValues();
                RequestNewImpulse();
                break;
            case 0:
                
                break;
        }
    }

    void DiceJump()
    {
        if (state != Dice.IDLE) return;
        state = Dice.ROLLING;
        isRolling = true;
        RequestNewRotationValues();
        RequestNewImpulse();
    }

    void FixedUpdate()
    {
        switch (state)
        {
            case Dice.IDLE:
                return;
            case Dice.FALLING:
                rb.AddForce(Physics.gravity, ForceMode.Impulse);
                break;
            case Dice.ROLLING:
                LiftDice();
                break;
        }
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

    void RequestNewImpulse()
    {
        float dirX = RandomValues();
        float dirZ = RandomValues();
        rb.AddForce(dirX,0,dirZ, ForceMode.VelocityChange);
    }

    void LiftDice()
    {
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.up * upDiceForce); // Raise the dice force
    }
    float RandomValues() => Random.Range(-rotationAngles, rotationAngles); // Random Velocity for all axis

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