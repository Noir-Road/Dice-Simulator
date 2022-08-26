using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class Numbers : MonoBehaviour
{
    [SerializeField] MeshRenderer mr; // Number Mesh Renderer
    [InfoBox("The time the number takes before fading out and be destroyed")]
    [SerializeField] float timeBeforeFading;
    float currentTime;
    [Range(1f,2f)]
    [SerializeField] float fadeOutTime; 
    [SerializeField] PoolObjectType type;
    Color32 full = new Color32(255,255,255,255);

    void FadeEffect()
    {
        currentTime += Time.deltaTime;
        if(currentTime < timeBeforeFading) return;
        
        var color = mr.material.GetColor("_BaseColor"); 
        color.a -= fadeOutTime * Time.deltaTime;
        mr.material.SetColor("_BaseColor", color);
        if(color.a <= 0) 
        {
            PoolManager.Instance.ReturnObjectOfType(gameObject,type); // If alpha channel is 0, then, destroy the number
            currentTime = 0f;
        }
    }

    void Update() 
    { 
        FadeEffect();
    }

    void OnEnable() {
        RestoreColor();
    }

    void RestoreColor()
    {
        var color = mr.material.GetColor("_BaseColor"); 
        mr.material.SetColor("_BaseColor", full);
    }

}