using UnityEngine;

public class Ground : MonoBehaviour
{
    [HideInInspector] public enum State{Idle, Spawning}
    [HideInInspector] public State state;

    [SerializeField] ToonDiceRoll toon;

    public static short numberSide = 0;
    int extraNumbers;

     public void OnTriggerStay(Collider collision)
     {
        var _name = collision.gameObject.name;

        if(toon.state == ToonDiceRoll.Dice.IDLE)
        {
            switch (_name)
                {
                    case "C1"://rutina 1
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberSix);
                        numberSide = 6;
                        state = State.Idle;
                        break;
                    case "C2"://rutina 2
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberFive);
                        numberSide = 5;
                        state = State.Idle;
                        break;
                    case "C3"://rutina 3
                       if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberFour);
                        numberSide = 4;
                        state = State.Idle;
                        break;
                    case "C4"://rutina 4
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberThree);
                        numberSide = 3;
                        state = State.Idle;
                        break;
                    case "C5"://rutina 5
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberTwo);
                        numberSide = 2;
                        state = State.Idle;
                        break;
                    case "C6"://rutina 6
                       if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberOne);
                        numberSide = 1;
                        state = State.Idle;
                        break;
                    default:
                        Debug.Log("No valid collider:" + _name);
                        numberSide = -1;
                        break;
                }
        }

        Debug.Log("Collider: " + _name + " Side: " + numberSide);
     
     }

     private void OnCollisionEnter(Collision other) {
        if(other.gameObject.CompareTag("Dice")) 
        {
           toon.state = ToonDiceRoll.Dice.IDLE;
        }
     }

     void MultipleNumbers(PoolObjectType type)
     {
        extraNumbers = Random.Range(6,16);
        for (int i = 0; i < extraNumbers; i++)
        {
            SpawnerToonManager.Instance.SpawnNumber(type);
        }
     }
}
