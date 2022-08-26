using UnityEngine;

public class Ground : MonoBehaviour
{
    [HideInInspector] public enum State{Idle, Spawning}
    [HideInInspector] public State state;


    public static short numberSide = 0;

     public void OnTriggerStay(Collider collision)
     {
        var _name = collision.gameObject.name;
            switch (_name)
                {
                    case "C1"://rutina 1
                        if(state != State.Spawning) return;
                        SpawnerToonManager.Instance.SpawnNumber(PoolObjectType.NumberSix);;
                        state = State.Idle;
                        break;
                    case "C2"://rutina 2
                        if(state != State.Spawning) return;
                        SpawnerToonManager.Instance.SpawnNumber(PoolObjectType.NumberFive);;
                        state = State.Idle;
                        break;
                    case "C3"://rutina 3
                       if(state != State.Spawning) return;
                        SpawnerToonManager.Instance.SpawnNumber(PoolObjectType.NumberFour);;
                        state = State.Idle;
                        break;
                    case "C4"://rutina 4
                        if(state != State.Spawning) return;
                        SpawnerToonManager.Instance.SpawnNumber(PoolObjectType.NumberThree);;
                        state = State.Idle;
                        break;
                    case "C5"://rutina 5
                        if(state != State.Spawning) return;
                        SpawnerToonManager.Instance.SpawnNumber(PoolObjectType.NumberTwo);;
                        state = State.Idle;
                        break;
                    case "C6"://rutina 6
                       if(state != State.Spawning) return;
                        SpawnerToonManager.Instance.SpawnNumber(PoolObjectType.NumberOne);;
                        state = State.Idle;
                        break;
                }
     }
}
