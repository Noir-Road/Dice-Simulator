using UnityEngine;
using Sirenix.OdinInspector;
using System.Collections;
using TMPro;
public class Ground : MonoBehaviour
{
     public enum State{Idle, Spawning}
     public State state;

    [Title("Components")]
    [SerializeField] ToonDiceRoller toon;
    [SerializeField] TextMeshProUGUI scoreText;
    [SerializeField] ParticleSystem ps;
    [SerializeField] Gradient[] grad;

    [Title("Dice Colors")]
    [SerializeField] Material diceMaterial;
    [SerializeField] Color32[] diceColors;
    [SerializeField] float transitionDuration;
    [SerializeField] float startTransitionDuration;
    float currentTime;

    public static short numberSide = 0;
    int numbersLimit;


    void OnTriggerStay(Collider collision)
    {
        var _name = collision.gameObject.name;
        if(toon.internalSpeed <= 0.01f && toon.isGrounded)
        {
            switch (_name)
                {
                    case "C1"://rutina 1
                        CustomDice(PoolObjectType.NumberSix, diceColors[0], "6", 0, 0);
                        break;
                    case "C2"://rutina 2
                        CustomDice(PoolObjectType.NumberFive, diceColors[1], "5", 1, 1);
                        break;
                    case "C3"://rutina 3
                        CustomDice(PoolObjectType.NumberFour, diceColors[2], "4", 2, 2);
                        break;
                    case "C4"://rutina 4
                        CustomDice(PoolObjectType.NumberThree, diceColors[3], "3", 3, 3);
                        break;
                    case "C5"://rutina 5
                        CustomDice(PoolObjectType.NumberTwo, diceColors[4], "2", 4, 4);
                        break;
                    case "C6"://rutina 6
                        CustomDice(PoolObjectType.NumberOne, diceColors[5], "1", 5, 5);
                        break;
                    default:
                        Debug.Log("No valid collider:" + _name);
                        numberSide = -1;
                        break;
                }
        }

       // Debug.Log("Collider: " + _name + " Side: " + numberSide);
    }

    void CustomDice(PoolObjectType _type, Color32 _color, string _text, int gradient, int colors)
    {
        if(state != State.Spawning) return;

        StartCoroutine(ColorLerp(_color)); // Color transition effect
        scoreText.text = _text.ToString(); // Set text on UI
        scoreText.color = _color; // Change color of text UI
        MultipleNumbers(_type); // Number Spawner
        CustomizerManager.Instance.ChangeExplosionColor(gradient); // Explosion Color Changer
        CustomizerManager.Instance.ChangeNumberColor(colors); // Change Numbers Color
        
        state = State.Idle;
    }

     void MultipleNumbers(PoolObjectType type)
     {
        numbersLimit = Random.Range(6,16);
        for (int i = 0; i < numbersLimit; i++)
        {
            SpawnerToonManager.Instance.SpawnNumber(type);
        }
     }

     IEnumerator ColorLerp(Color32 colorDestination)
     {
            currentTime = 0f;

            yield return new WaitForSeconds(startTransitionDuration);
            
            while(currentTime < transitionDuration)
            {
                currentTime += Time.deltaTime;
                var colorTest = diceMaterial.GetColor("_MainColor");
                colorTest = Color32.Lerp(diceMaterial.GetColor("_MainColor"),colorDestination, currentTime / transitionDuration);
                diceMaterial.SetColor("_MainColor", colorTest);
                yield return null;
            }
     }
}
