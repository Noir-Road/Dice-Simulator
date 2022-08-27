using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class ToonIntroManager : MonoBehaviour
{
    [SerializeField] MeshRenderer diceMaterial;
    [SerializeField] Material groundMaterial;

    [InfoBox("The time the number takes before fading out and be destroyed")]
    [SerializeField] float timeBeforeFading;
    float currentTime;
    [Range(1f,2f)]
    [SerializeField] float fadeOutTime;
    bool stop;

    void FadeEffect()
    {
        if(!stop)
        currentTime += Time.deltaTime;
        if(currentTime < timeBeforeFading) return;
        
        var color = diceMaterial.material.GetColor("Main Color Power"); 
        color.a += fadeOutTime * Time.deltaTime;
        diceMaterial.material.SetColor("Main Color Power", color);
        if(color.a >= 2.80f) stop = true;
        Debug.Log("Object Faded");
    }

    private void Update() {
        FadeEffect();
    }
} 
