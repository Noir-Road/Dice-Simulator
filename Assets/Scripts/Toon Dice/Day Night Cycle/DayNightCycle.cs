using UnityEngine;
using PolyverseSkiesAsset;
using Sirenix.OdinInspector;

public class DayNightCycle : MonoBehaviour
{
    PolyverseSkies skies;
    [InfoBox("Controls Day/Night cycle with this slider")]
    [Range(0.1f, .6f)]
    [SerializeField] float timeVelocity; // Velocity of the time. Increase the value for fastest results
    [SerializeField] bool dontCycle;
    float velocity;
    float timeOfDay = 1f;

    private void Awake()  => skies = GetComponent<PolyverseSkies>();

    private void Update()  => TimeCycle();

    void TimeCycle()
    {
        if (dontCycle) return;
        velocity = timeVelocity * Time.time;

        skies.timeOfDay = Mathf.PingPong(velocity, timeOfDay);
    }
}
