using System.Collections;
using Sirenix.OdinInspector; // Utils for Unity Editor Inspector
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement; // Utils to change Scenes ( levels ) during runtime
using UnityEngine.UI;   // Handle UI components like Images, Raw Images, Canvases
public class LevelManager : MonoBehaviour
{
    [Title("Fader Options")]
    [Tooltip("This is the component <Image> we are going to fade.")]
    [SerializeField] Image backgroundFader;
    [Tooltip("Fade Duration")]
    [SerializeField] float duration;
    float current;

    [Title("Text Animations")] 
    [SerializeField] TextMeshProUGUI diceSimulatorText;
    [SerializeField] float minTextSize;
    [SerializeField] float maxTextSize;
    [Tooltip("Handles the Smoothness of the ping pong effect for the Main Text")]
    [SerializeField] float diceSimulatorEffectSmoothness;

    [Title("Dices & Canvas")]
    [SerializeField] Material toonDiceMat;
    [SerializeField] Material normalDiceMat;
    [SerializeField] CanvasGroup canvasGroup;
    [SerializeField] float fadeInDuration;
    float toonFader;
    float normalFader;
    float canvasFader;

    void OnEnable()
    {
        HideDices();
        StartCoroutine(Fader(1f, 0f, ""));
    }
    
    void Update()
    {
        DiceSimulatorTextAnimation();
    }
    public void MainMenu()
    {
        SceneManager.LoadScene("Main Menu");
    }
    
    public void LoadDiceSimulator()
    {
        StartCoroutine(Fader(0f, 1f, "Dice Simulator"));
    }

    public void LoadDiceToon()
    {
        StartCoroutine(Fader(0f, 1f, "Toon Simulator"));
    }

    void DiceSimulatorTextAnimation() // Increase and Decrease the size of "Dice Simulator Text"
    {
        var size = diceSimulatorText.fontSize; // Cant get it to work with Time.DeltaTime ?
        size = Mathf.Lerp(minTextSize, maxTextSize, Mathf.PingPong(Time.unscaledTime / diceSimulatorEffectSmoothness, 1));
        diceSimulatorText.fontSize = size;
    }
    #region Faders
    
    IEnumerator Fader(float start, float goal, string level) // Screen Fader
    {
        while (current <= duration) // While lower
        {
            current += Time.deltaTime; // Increase it
            var alpha = backgroundFader.color;
            alpha.a = Mathf.Lerp(start, goal, current / duration);
            backgroundFader.color = alpha;
            yield return null; // Repeat loop every frame
        }
        current = 0f; // Reset time to reuse coroutine
        StartCoroutine(FadeToonDice());
        StartCoroutine(FadeNormalDice());
        StartCoroutine(CanvasFader());
        if (level == "") yield break; // Is string is empty, break the loop
        SceneManager.LoadScene(level);
    }
    
    IEnumerator FadeToonDice() // Fade in the Dice Toon
   {
       while (toonFader <= fadeInDuration)
       {
           toonFader += Time.deltaTime;
           var alpha = toonDiceMat.GetFloat("_Opacity");
           alpha = Mathf.Lerp(0f, 1f, toonFader / fadeInDuration);
           toonDiceMat.SetFloat("_Opacity", alpha);
           yield return null;
       }
   }    
    IEnumerator FadeNormalDice() // Fade in Normal Dices
    {
        while (normalFader <= fadeInDuration)
        {
            normalFader += Time.deltaTime;
            var alpha = normalDiceMat.GetColor("_BaseColor");
            alpha.a = Mathf.Lerp(0f, 1f, normalFader / fadeInDuration);
            normalDiceMat.SetColor("_BaseColor", alpha);
            yield return null;
        }
    }

    IEnumerator CanvasFader() // Fade in Canvases ( Buttons & Texts )
    {
        while (canvasFader <= fadeInDuration)
        {
            canvasFader += Time.deltaTime;
            canvasGroup.alpha = Mathf.Lerp(0f, 1f, canvasFader / fadeInDuration);
            yield return null;
        }

        canvasGroup.blocksRaycasts = true;
    }
    #endregion
    
    void HideDices() // Set Material properties back to Zero ( Alpha Channel )
    {
        var alpha = normalDiceMat.GetColor("_BaseColor");
        alpha.a = 0f;
        normalDiceMat.SetColor("_BaseColor", alpha);
        
        var alphaOne = toonDiceMat.GetFloat("_Opacity");
        alphaOne = 0f;
        toonDiceMat.SetFloat("_Opacity", alphaOne);
    }
}