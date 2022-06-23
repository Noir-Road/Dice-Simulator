using UnityEngine;

public class SettingsManager : MonoBehaviour
{
    [Header("Background Settings")] 
    [SerializeField] MeshRenderer mesh;
    [SerializeField] Material black;
    [SerializeField] Material purple;
    [SerializeField] Material concrete;

    [Header("Debug Options")] 
    [SerializeField] GameObject separator;
    [SerializeField] GameObject debugOptions;

    public void BackgroundChanger(int value)
    {
        mesh.material = value switch
        {
            0 => black,
            1 => purple,
            2 => concrete,
            _ => mesh.material
        };
    }

    public void MusicController(bool state)
    {
        if(state) SoundManager.Instance.PlaySound("Theme One");
        else SoundManager.Instance.StopSound("Theme One");
    }

    public void SoundsFxsController(bool state)
    {
        if (state)
        {
            SoundManager.Instance.RaiseVolume("Throw Sound One", 0.35f);
            SoundManager.Instance.RaiseVolume("Throw Sound Two", 0.35f);
            SoundManager.Instance.RaiseVolume("Throw Sound Three", 0.35f);
            SoundManager.Instance.RaiseVolume("Throw Sound Four", 0.35f);
            SoundManager.Instance.RaiseVolume("Throw Sound Five", 0.35f);
        }
        else
        {
            SoundManager.Instance.LowerVolume("Throw Sound One", 0f);
            SoundManager.Instance.LowerVolume("Throw Sound Two", 0f);
            SoundManager.Instance.LowerVolume("Throw Sound Three", 0f);
            SoundManager.Instance.LowerVolume("Throw Sound Four", 0f);
            SoundManager.Instance.LowerVolume("Throw Sound Five", 0f);
        }
    }

    public void DebugOptions(bool state)
    {
        if (state)
        {
            debugOptions.SetActive(true);
            separator.SetActive(false);
        }
        else
        {
            debugOptions.SetActive(false);
            separator.SetActive(true);
        }
    }

}
