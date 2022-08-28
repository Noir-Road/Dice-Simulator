using UnityEngine;
using Sirenix.OdinInspector;
using System.Threading.Tasks;
using UnityEngine.UI;
public class ToonIntroManager : MonoBehaviour
{
    [Title("Components to fade")]
    [SerializeField] MeshRenderer diceMaterial;
    [SerializeField] MeshRenderer groundMaterial;
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
        await FadeEffect(diceMaterial, 2.81f); // Fade Dice
        noiser = true;
        await Task.Delay(2000);
        await FadeOutScreen();
    }

    async Task FadeEffect(MeshRenderer mr, float power)
    {
        currentTime = 0f;
        while(currentTime <= fadeInTime)
        {
            currentTime += Time.deltaTime;
            var color = mr.material.GetFloat("_MaiColPo"); 
            color = Mathf.Lerp(0, power, currentTime / fadeInTime);
            mr.material.SetFloat("_MaiColPo", color);
            await Task.Yield(); // Task completed, return to FadeTasker
        }
    }

    async Task FadeOutScreen()
    {
        currentTime = 0f;
        while(currentTime <= fadeInTime)
        {
            currentTime += Time.deltaTime;
            var image = blackImg.color;
            image.a = Mathf.Lerp(0,1, currentTime / fadeInTime);
            blackImg.color = image;
            await Task.Yield(); // Task completed, return to FadeTasker
            // Load New scene
        }
    }

    void Update()  => DiceNoise();

    void DiceNoise()
    {
        if(!noiser) return;
        diceMaterial.material.SetFloat("_MaiColPo", intensity = 1f + Mathf.PerlinNoise(Time.time * frequency, 0f) * magnitude);
    }
} 
