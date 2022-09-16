using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class CustomizerManager : MonoBehaviour
{
    public static CustomizerManager Instance;
    
    void Awake() => Instance = this;

    [Title("Explosions")]
    [SerializeField] List<GameObject> explosionsList = new List<GameObject>();
    [SerializeField] Gradient[] gradients;

    [Title("Numbers")]
    [SerializeField] List<GameObject> numbersList = new List<GameObject>();
    [SerializeField] Color[] _colors;


#region Explosions
    public void AddexplosionsList(GameObject explosionEffect) // Add GameObjects to the list
    {
        if(!explosionsList.Contains(explosionEffect)) explosionsList.Add(explosionEffect);
    }

    public void ChangeExplosionColor(int _gradient) // Loop through all the GameObjects on list to change color based on Dice Color
    {
        foreach (var trails in explosionsList)
        {
            var particles = trails.transform.Find("SmokeTrail").transform.Find("Trail").GetComponent<ParticleSystem>().colorOverLifetime;
            particles.color = gradients[_gradient];
        }
        foreach (var clouds in explosionsList)
        {
            var particles = clouds.transform.Find("CloudBurst").GetComponent<ParticleSystem>().colorOverLifetime;
            particles.color = gradients[_gradient];
        }
    }
#endregion

    public void AddNumbers(GameObject numbers)
    {
        if(!numbersList.Contains(numbers)) numbersList.Add(numbers);
    }

    public void ChangeNumberColor(int _color)
    {
        foreach(var number in numbersList)
        {
            var _numberColor = number.GetComponent<MeshRenderer>().material;
            _numberColor.SetColor("_EmissionColor", _colors[_color]);
            _numberColor.SetColor("_BaseColor", _colors[_color]);

          // Testing Glow power. Not working, too much glow.  
          //  _numberColor.SetColor("_EmissionColor", new Color(255f,190f,100f,3f));
          //  _numberColor.SetColor("_BaseColor", new Color(255f,190f,100f,3f));
        }
    }


}
