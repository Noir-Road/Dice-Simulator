using UnityEngine;
using System;
using System.Collections;
using Sirenix.OdinInspector;
public class SoundManager : MonoBehaviour
{
    public static SoundManager Instance;
    public Sounds[] sounds;
    void Awake() // Add sounds Components 
    {
        Instance = this;
        foreach (Sounds s in sounds)
        {
            s.source = gameObject.AddComponent<AudioSource>();
            s.source.clip = s.clip;
            s.source.volume = s.volume;
            s.source.pitch = s.pitch;
            s.source.loop = s.loop;
        }
    }
   public void PlaySound(string name) // Play sound function
   {
       Sounds s = Array.Find(sounds, sound => sound.clipName == name);
       if (s.fadeIn) StartCoroutine(FadeInSound(name));
       else s.source.Play();
   }
    public void StopSound(string name) // Stop sound function
    {
        Sounds s = Array.Find(sounds, sound => sound.clipName == name);
        if (s.fadeOut) StartCoroutine(FadeOutSound(name));
        else s.source.Stop();
    }

    public void LowerVolume(string name, float v)
    {
        Sounds s = Array.Find(sounds, sound => sound.clipName == name);
        s.source.volume = v;
    }

    public void RaiseVolume(string name, float v)
    {
        Sounds s = Array.Find(sounds, sound => sound.clipName == name);
        s.source.volume = v;
    }
    
    IEnumerator FadeInSound(string name) // If enable, at playing will fade in sound
    {
        Sounds s = Array.Find(sounds, sound => sound.clipName == name);
        s.source.Play();
        while (s.fadeInCurrentTime < s.fadeInDuration)
        {
            var fader = s.volume;
            s.source.volume = s.volume;
            s.fadeInCurrentTime += Time.deltaTime;
            fader = Mathf.Lerp(s.fadeInRange.x, s.fadeInRange.y, s.fadeInCurrentTime / s.fadeInDuration);
            s.volume = fader;
            yield return null;
        }
        s.fadeInCurrentTime = 0f;
    }
    IEnumerator FadeOutSound(string name) // If enabled, at stopping will fade out sound
    {
        Sounds s = Array.Find(sounds, sound => sound.clipName == name);
        while (s.fadeOutCurrentTime < s.fadeOutDuration)
        {
            var fader = s.volume;
            s.source.volume = s.volume;
            s.fadeOutCurrentTime += Time.deltaTime;
            fader = Mathf.Lerp(s.fadeInRange.y, s.fadeInRange.x, s.fadeOutCurrentTime / s.fadeOutDuration);
            s.volume = fader;
            yield return null;
        }
        s.source.Stop();
        s.fadeOutCurrentTime = 0f;
    }
}
[Serializable]
public class Sounds
{
    public string clipName;
    public AudioClip clip;

    [Range(0f, 1f)]
    public float volume;
    [Range(.1f, 3f)]
    public float pitch;
    public bool loop;
    #region FadeIn
    public bool fadeIn;
    [ShowIf("fadeIn")]
    [LabelText("Duration")]
    public float fadeInDuration;
    [ShowIf("fadeIn")]
    [VectorLabels("From","To")]
    [LabelText("Volume")]
    public Vector2 fadeInRange = new Vector2();
    #endregion
    #region FadeOut
    public bool fadeOut;
    [ShowIf("fadeOut")]
    [LabelText("Duration")]
    public float fadeOutDuration;
    [ShowIf("fadeOut")]
    [VectorLabels("From", "To")]
    [LabelText("Volume")]
    public Vector2 fadeOutRange = new Vector2();
    #endregion
    [HideInInspector]
    public float fadeInCurrentTime;
    [HideInInspector]
    public float fadeOutCurrentTime;
    [HideInInspector]
    public AudioSource source;
}