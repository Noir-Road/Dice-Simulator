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

    void FadeEffect()
    {
        currentTime += Time.deltaTime;
        if(currentTime < timeBeforeFading) return;
        
        var color = mr.material.GetColor("_BaseColor"); 
        color.a -= fadeOutTime * Time.deltaTime;
        mr.material.SetColor("_BaseColor", color);
        if(color.a <= 0) Destroy(gameObject); // If alpha channel is 0, then, destroy the number
    }

    void Update() 
    { 
        FadeEffect();
    }
   // IEnumerator FadeOutAndDestroy(float time )
   //  {
   //      float elapsedTime = 0;
   //      Color startingColor = transform.GetComponent<Renderer>().material.color;
   //      Color finalColor = new Color(startingColor.r, startingColor.g, startingColor.b, 0);
   //      while (elapsedTime < time)
   //      {
   //          transform.GetComponent<Renderer>().material.color = Color.Lerp(startingColor, finalColor, (elapsedTime / time));
   //          elapsedTime += Time.deltaTime;
   //          yield return null;
   //      }
   //      Destroy(gameObject);
   //  }
}