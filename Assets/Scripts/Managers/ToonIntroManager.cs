using UnityEngine;
using Sirenix.OdinInspector;
using System.Threading.Tasks;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
public class ToonIntroManager : MonoBehaviour
{
    [Title("Components to fade")]
    [SerializeField] MeshRenderer diceMaterial;
    [SerializeField] MeshRenderer groundMaterial;
    [SerializeField] TextMeshProUGUI gameText;
    [SerializeField] Image blackImg;

    [Title("Fade Effect Duration")]
    [SerializeField] float fadeInTime;
    float currentTime;

    [Title("Dice Noise Effect")]
    [SerializeField] float magnitude;
	[SerializeField] float frequency;
    float intensity;
    bool noiser;

    void Start() {

        intensity = groundMaterial.material.GetFloat("_MaiColPo");
        FadeTasker();
    }

    async void FadeTasker() // Wait for task before continue
    {
        await Task.Delay(2000); // Wait 2 seconds before proceed
        await FadeEffect(groundMaterial, 1f); // Fade in the ground
        await FadeInTexts();
        await FadeEffect(diceMaterial, 2.81f); // Fade Dice
        noiser = true;
        await Task.Delay(2000);
        await FadeInScreen();
        SceneManager.LoadScene("Toon Simulator");
    }

    async Task FadeEffect(MeshRenderer mr, float power) // Fade out Mesh's of Ground & Dice
    {
        currentTime = 0f;
        while(currentTime <= fadeInTime)
        {
            currentTime += Time.deltaTime;
            var color = mr.material.GetFloat("_MaiColPo"); 
            color = Mathf.Lerp(0, power, currentTime / fadeInTime);
            mr.material.SetFloat("_MaiColPo", color);
            await Task.Yield(); // Repeat if task is not completed
        }
    }

    async Task FadeInScreen() // Fade In a background black img.
    {
        currentTime = 0f;
        while(currentTime <= fadeInTime)
        {
            currentTime += Time.deltaTime;
            var image = blackImg.color;
            image.a = Mathf.Lerp(0,1, currentTime / fadeInTime);
            blackImg.color = image;
            await Task.Yield(); // Repeat if task is not completed
        }
    }

    async Task FadeInTexts() // Fade In Text Mesh Pro. Need to update for more texts ?
    {
        currentTime = 0f;
        while(currentTime <= fadeInTime)
        {
            currentTime += Time.deltaTime;
            var alpha = gameText.color;
            alpha.a = Mathf.Lerp(0,1, currentTime / fadeInTime);
            gameText.color = alpha;
            await Task.Yield(); // Repeat if task is not completed
        }
    }

    void Update()  => DiceNoise();

    void DiceNoise()
    {
        if(!noiser) return;
        diceMaterial.material.SetFloat("_MaiColPo", intensity = 1f + Mathf.PerlinNoise(Time.time * frequency, 0f) * magnitude);
    }
} 
