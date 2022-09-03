using UnityEngine;
using Sirenix.OdinInspector;
using System.Collections;
public class Ground : MonoBehaviour
{
 [HideInInspector] public enum State{Idle, Spawning}
    [HideInInspector] public State state;

    [SerializeField] ToonDiceRoll toon;

    [Title("Dice Colors")]
    [SerializeField] Material diceMaterial;
    [SerializeField] Color32[] diceColors;
    [SerializeField] float transitionDuration;
    float currentTime;

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
                        StartCoroutine(ColorLerp(diceColors[0], diceColors[1]));
                        numberSide = 6;
                        state = State.Idle;
                        break;
                    case "C2"://rutina 2
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberFive);
                        StartCoroutine(ColorLerp(diceColors[1], diceColors[2]));
                        numberSide = 5;
                        state = State.Idle;
                        break;
                    case "C3"://rutina 3
                       if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberFour);
                        StartCoroutine(ColorLerp(diceColors[3], diceColors[4]));
                        numberSide = 4;
                        state = State.Idle;
                        break;
                    case "C4"://rutina 4
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberThree);
                        StartCoroutine(ColorLerp(diceColors[4], diceColors[5]));
                        numberSide = 3;
                        state = State.Idle;
                        break;
                    case "C5"://rutina 5
                        if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberTwo);
                        StartCoroutine(ColorLerp(diceColors[5], diceColors[1]));
                        numberSide = 2;
                        state = State.Idle;
                        break;
                    case "C6"://rutina 6
                       if(state != State.Spawning) return;
                        MultipleNumbers(PoolObjectType.NumberOne);
                        StartCoroutine(ColorLerp(diceColors[5], diceColors[0]));
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

     public void ChangeDiceColor(Color32 _color)
     {
        diceMaterial.SetColor("_MainColor", _color);
     }

     IEnumerator ColorLerp(Color32 originColor, Color32 colorDestination)
     {
        currentTime = 0f;
        while(currentTime < transitionDuration)
        {
            currentTime += Time.deltaTime;
            var colorTest = diceMaterial.GetColor("_MainColor");
            colorTest = Color32.Lerp(originColor,colorDestination, currentTime / transitionDuration);
            diceMaterial.SetColor("_MainColor", colorTest);
            yield return null;
        }

        Debug.Log("Primero");
        yield return new WaitForSeconds(3f);
        Debug.Log("Segundo");
        yield return new WaitForSeconds(5f);
        Application.Quit();
     }
}
