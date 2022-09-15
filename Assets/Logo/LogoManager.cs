using UnityEngine.SceneManagement;
using UnityEngine;
using Sirenix.OdinInspector;
using UnityEngine.UI;
using TMPro;
using System.Threading.Tasks;

public class LogoManager : MonoBehaviour
{
    [InfoBox("This Script handles the Splash for Ocelot Manager. Please fill the fields with the required components")]
    [Title("Components to fade")]
    [SerializeField] Image ocelotImage;
    [SerializeField] TextMeshProUGUI ocelotText;
    [SerializeField] Image blackScreen;
    [SerializeField] Material ocelotMaterial;

    [Title("Fade Effect Duration(Timer)")]
    [SerializeField] float fadeTime;
    float currentTime;

    void Start() {
        OcelotTasker();  
    }

    async void OcelotTasker() // Wait for each function to be completed before running the next function.
    {
        await FadeImages(ocelotImage);
        await Task.Delay(500);
        await FadeInTexts();
        await ShineLerpMovement();
        await FadeImages(blackScreen);
       // Debug.Log("Tasker Completed");
       SceneManager.LoadScene("Toon Simulator");
    }

    async Task FadeImages(Image img)
    {
        currentTime = 0f;
        while(currentTime <= fadeTime)
        {
            currentTime += Time.deltaTime;
            var image = img.color;
            image.a = Mathf.Lerp(0,1, currentTime / fadeTime);
            img.color = image;
            await Task.Yield(); // Wait until task is completed before exit
        }
    }
    async Task FadeInTexts() // Fade In Text Mesh Pro. Need to update for more texts ?
    {
        currentTime = 0f;
        while(currentTime <= fadeTime)
        {
            currentTime += Time.deltaTime;
            var alpha = ocelotText.color;
            alpha.a = Mathf.Lerp(0,1, currentTime / fadeTime);
            ocelotText.color = alpha;
            await Task.Yield(); // Repeat if task is not completed
        }
    }

    // Lerp Shine Movement across the Ocelot Picture.
    // This color can be changed from the inspector is not hard coded.
    async Task ShineLerpMovement() 
    {
        currentTime = 0f;
        while(currentTime <= fadeTime)
        {
            currentTime += Time.deltaTime;
            var location = ocelotMaterial.GetFloat("_ShineLocation");
            location = Mathf.Lerp(0,1, currentTime / fadeTime);
            ocelotMaterial.SetFloat("_ShineLocation", location);
            await Task.Yield();
        }
    }


}