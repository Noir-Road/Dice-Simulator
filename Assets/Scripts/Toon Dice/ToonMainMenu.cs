using System.Collections;
using UnityEngine;
using Sirenix.OdinInspector;
using UnityEngine.UI;
public class ToonMainMenu : MonoBehaviour
{
    [Title("Canvas Group Fade Animation")]
    [SerializeField] CanvasGroup cGroup;
    [SerializeField] Image blackScreen;
    [SerializeField] float fadeInDuration;
    float currentTime;

    [Title("Cameras")]
    [SerializeField] GameObject mainMenuCamera;
    [SerializeField] GameObject inGameCamera;

    [Title("GameObjects")]
    [SerializeField] GameObject mainMenu;
    [SerializeField] GameObject scoreObject;
    [SerializeField] ToonDiceRoller toonDiceRoller;

    
    void Start() {
        cGroup.interactable = false;
        StartCoroutine(FadeIn());
    }

    IEnumerator FadeIn()
    {
        while(currentTime <= fadeInDuration)
        {
            currentTime += Time.deltaTime;
            var alpha = blackScreen.color;
            alpha.a = Mathf.Lerp(1,0, currentTime / fadeInDuration);
            blackScreen.color = alpha;
            yield return null;
        }
        cGroup.interactable = true;
    }

    public void FadeMenu()
    {
        StartCoroutine(FadeMainMenu());
        SoundManager.Instance.PlaySound("Main Theme");
        cGroup.interactable = false;
    }

    IEnumerator FadeMainMenu()
    {
        currentTime = 0f;
        while(currentTime <= fadeInDuration)
        {
            currentTime += Time.deltaTime;
            cGroup.alpha = Mathf.Lerp(1,0, currentTime / fadeInDuration);
            yield return null;
        }
        mainMenu.SetActive(false);
        mainMenuCamera.SetActive(false);
        inGameCamera.SetActive(true);
        scoreObject.SetActive(true);
        toonDiceRoller.enabled = true;
    }
}
