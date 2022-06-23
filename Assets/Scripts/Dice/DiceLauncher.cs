using UnityEngine;

public class DiceLauncher : MonoBehaviour
{
    [Header("Dice Properties")]
    [SerializeField] Rigidbody rb;
    [SerializeField] float diceSpeed;
    [SerializeField] float airSpinEffect;
    void OnEnable()
    {
        transform.rotation = Quaternion.identity; //Aligned for all axis
        rb.AddForce(transform.forward * diceSpeed); // Raise the dice force
        float dirX = RandomVelocity();
        float dirY = RandomVelocity();
        float dirZ = RandomVelocity();
        rb.AddTorque(dirX,dirY,dirZ); // Apply torque in all axis
    }

    float RandomVelocity() => Random.Range(-airSpinEffect, airSpinEffect); // Random Velocity for all axis
    
}