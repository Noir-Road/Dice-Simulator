using UnityEngine;

public class Ground : MonoBehaviour
{
    [HideInInspector] public enum State{Idle, Spawning}
    [HideInInspector] public State state;

    [SerializeField] ToonDiceRoll toon;

    int extraNumbers;

     public void OnTriggerStay(Collider collision)
     {
        var _name = collision.gameObject.name;
            switch (_name)
                {
                    case "C1"://rutina 1
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberSix);
                        state = State.Idle;
                        break;
                    case "C2"://rutina 2
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberFive);
                        state = State.Idle;
                        break;
                    case "C3"://rutina 3
                       if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberFour);
                        state = State.Idle;
                        break;
                    case "C4"://rutina 4
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberThree);
                        state = State.Idle;
                        break;
                    case "C5"://rutina 5
                        if(state != State.Spawning) return;
                       MultipleNumbers(PoolObjectType.NumberTwo);
                        state = State.Idle;
                        break;
                    case "C6"://rutina 6
                       if(state != State.Spawning) return;
                       MultipleNumbers(PoolObjectType.NumberOne);
                        state = State.Idle;
                        break;
                }
     }

     private void OnCollisionEnter(Collision other) {
        if(other.gameObject.CompareTag("Dice")) 
        {
           toon.state = ToonDiceRoll.Dice.IDLE;
        }
     }

     void MultipleNumbers(PoolObjectType type)
     {
        extraNumbers = Random.Range(1,16);
        for (int i = 0; i < extraNumbers; i++)
        {
            SpawnerToonManager.Instance.SpawnNumber(type);
        }
     }
}
