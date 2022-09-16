using System;
using UnityEngine;
using Sirenix.OdinInspector;
using Random = UnityEngine.Random; // System namespace cause issues with Random(). Need to be specific wich one I´ll be using

public class ToonDiceRoller : MonoBehaviour
{
    public enum State{Idle, Lift, Falling}
    public State state;

    [Title("Dice Physics")]
    [SerializeField] float upForce;
    [SerializeField] float impulseDirection;
    [SerializeField] float mutiplyGravity;
    [SerializeField] float rotationSpeed;
    [SerializeField] Vector3 rotationAngles;
    [HideInInspector] public float internalSpeed;

    [Title("Components")]
    [SerializeField] Ground ground;
    [SerializeField] Rigidbody rb;
    [HideInInspector] public bool isGrounded;
    bool playingSound;

    [Title("Explosions")]
    [InfoBox("If the value is too low can cause LAG on Mobile.", InfoMessageType.Warning)]
    [Range(0.01f, 0.1f)]
    [SerializeField] float spawnExplosionIn;
    float currentTime;

    void Awake() => internalSpeed = rb.velocity.magnitude;  // Puts the dice velocity in this var to switch states

    // Runs on every frame.
    void Update() {

        if(Input.touchCount >= 1 || Input.GetButton("Jump")) state = State.Lift;
        else if (Input.touchCount < 1 && !isGrounded) state = State.Falling;
        if(!isGrounded) transform.Rotate(rotationAngles * rotationSpeed * Time.deltaTime);

        
        SpawnExplosions();
    }

    // Fixed Update adjust physics accordingly
    void FixedUpdate() {

        DiceState();
    }

    void DiceState() // Handles the Dice´s states. Lift, Falling & Idle
    {
        switch (state)
        {
            case State.Lift: // Dice is Lifting
                isGrounded = false;
                playingSound = false;
                ground.state = Ground.State.Spawning;
                RequestANewLift();
                RequestNewImpulse();
                RequestNewRotationValues();
            break;

            case State.Falling: // Dice is Falling
            rb.AddForce(Physics.gravity * mutiplyGravity, ForceMode.Acceleration);
            break;
        }

        CheckDiceVelocity();
    }

    void CheckDiceVelocity() // If the velocity of the dice is NOT moving at all (or barely moving) ... then switch to Idle.
    {
        if(rb.velocity.sqrMagnitude <= 0.1f)
        {
            state = State.Idle;
        }
    }

    void SpawnExplosions() // Spawn Dice Explosions
    {
        if(state == State.Idle || state == State.Falling) // Depending on the state, then reset time and exit out of the function
        {
            currentTime = 0f;
            return;
        }
        else if(state == State.Lift) // If 1 or more finger is detected (means you are lifting the dice), spawn an explosion just below the dice Transform.
        {
            currentTime += Time.deltaTime;
            if(currentTime >= spawnExplosionIn) // Reset Timer after spawn explosion
            { 
                SpawnerToonManager.Instance.SpawnExplosion(PoolObjectType.ToonExplosion);
                currentTime = 0f;
            }
        }
    }

#region Dice Physic Requestor

    void RequestANewLift() // Lift Dice Straight in the Y Axis ONLY
    {
        rb.AddForce(0,Mathf.Abs(RandomLift()),0, ForceMode.Impulse);
    }

    void RequestNewImpulse() // Move Towards the Y Axis to another position.
    {
        float dirX = RandomImpulse();
        float diry = RandomImpulse();
        float dirZ = RandomImpulse();
        rb.AddForce(dirX,Mathf.Abs(diry),dirZ, ForceMode.VelocityChange);
    }

    void RequestNewRotationValues() // Random Rotation for the Dice
    {
        float dirX = RandomRotation();
        float dirY = RandomRotation();
        float dirZ = RandomRotation();
        rotationAngles.x = dirX;
        rotationAngles.y = dirY;
        rotationAngles.z = dirZ;
    }

#endregion

#region Random Generators


    float RandomLift() => Random.Range(0, upForce);
    float RandomImpulse() => Random.Range(-impulseDirection, impulseDirection);
    float RandomRotation() => Random.Range(-rotationSpeed, rotationSpeed);

#endregion

    void OnCollisionEnter(Collision other) {
        if(other.gameObject.CompareTag("Ground"))
        {
            isGrounded = true;
            if(!playingSound)
            {
                playingSound = true;
                SoundManager.Instance.PlaySound("Landing One");
            }
          //  if(internalSpeed == 0f) SoundManager.Instance.PlaySound("Landing Two");
        }
    }

}
