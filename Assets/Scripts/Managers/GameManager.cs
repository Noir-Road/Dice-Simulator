using UnityEngine.EventSystems;
using UnityEngine;
using System;
public class GameManager : MonoBehaviour
{    
    [Header("Canvas")] 
    [SerializeField] GameObject settingCanvas;
    [SerializeField] GameObject diceCanvas;
    
    void Start()
    {
        SoundManager.Instance.PlaySound("Theme One");
    }

    void Update()
    {
        DiceJumper();
    }

    /// <summary>
    /// Whether you are touching the ground or if the panels are opens, this function
    /// will close them and avoid the player to Jump
    /// </summary>
    bool TouchBlocker()
    {
        if (EventSystem.current.currentSelectedGameObject != null) return false;

        if (settingCanvas.activeSelf && diceCanvas.activeSelf) return false;
        settingCanvas.SetActive(false);
        diceCanvas.SetActive(false);
        return true;
    }

    void DiceJumper()
    {
        switch (Input.touchCount)
        {
            case 1:
                if(TouchBlocker())
                    DiceLord.Jump?.Invoke(1);
                break;
            case 0:
                DiceLord.Jump?.Invoke(0);
                break;
        }
    }

    public void DeleteSaveInformation()
    {
        PlayerPrefs.DeleteAll();
        DicePhysics.Instance.SliderDefaultValues();
        DicePhysics.Instance.LoadSavedValues();
        ClearBoard.Instance.ClearDiceList();
    }
}
public class DiceLord
{
    public static Action<int> Jump;
    public static Action<float> Force;
    public static Action<float> Rotation;
    public static Action<float> AnglesRotation;
    public static Action<float> Mass;
}
