using UnityEngine.EventSystems;
using UnityEngine;
using System;

public class GameManager : MonoBehaviour
{
    public enum TypeOfMovement { SHAKING, TOUCHING } 
    public TypeOfMovement state = TypeOfMovement.TOUCHING;

    [Header("Touch Mobile Properties")] 
    [SerializeField] bool holdDice;
    [SerializeField] float holdTime;
    [SerializeField] float currentTime;
    
    [Header("Mobile Shake Properties")]
    [Tooltip("This variable represent how hard you must shake the phone to raise the dice(s)")]
    public float shakeThreshold;
    [HideInInspector] public bool blockShakeMovement = true;
    Vector3 mobileAccelerometer;
    
    [Header("Canvas")] 
    [SerializeField] GameObject settingCanvas;
    [SerializeField] GameObject diceCanvas;
    [SerializeField] GameObject customizerCanvas;
    GameObject lightObject;

    Transform test;
    Transform test2;

    void Start()
    {
        SoundManager.Instance.PlaySound("Theme One");
        blockShakeMovement = true;
    }

    //Runs on every frame
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
        if (EventSystem.current.currentSelectedGameObject != null) return false; // If touching canvas, cannot jump
        if (customizerCanvas.activeSelf || settingCanvas.activeSelf || diceCanvas.activeSelf) return false; // If a canvas is opened, cannot jump either
        holdDice = false;
        return true;
    }
    void DiceJumper()
    {
        if (blockShakeMovement)         // Auto Movement Switch *By default, both movements are enabled, by shake & touch*
        {
            mobileAccelerometer = Input.acceleration;
            if (mobileAccelerometer.sqrMagnitude >= shakeThreshold) state = TypeOfMovement.SHAKING;
        }

        if (Input.touchCount >= 1) state = TypeOfMovement.TOUCHING;
        switch (state)
        {
            case TypeOfMovement.TOUCHING:
                switch (Input.touchCount)
                {
                    case 1: // If 1 touch is detected and the below condition is meet, then invoke DiceLord
                        if (HoldMenu() && !holdDice)
                            if(TouchBlocker())
                                DiceLord.Roll?.Invoke();
                        break;
                }
        
                break;
        
            case TypeOfMovement.SHAKING:
                if (TouchBlocker())
                    DiceLord.Roll?.Invoke();
                break;
         }
    }
    
    
    bool HoldMenu()
    {
        foreach (Touch touch in Input.touches)
        {
            Ray ray = Camera.main.ScreenPointToRay(touch.position); // Shoot a ray at the touch position

            if (!Physics.Raycast(ray, out var hit)) continue;

         if (hit.collider.gameObject.CompareTag("Dice"))    // If we touch dice then ...
         {
             if (touch.phase == TouchPhase.Began)   // If touching (Holding) enable holdDice counter * Se Below *
             {
                 holdDice = true;
                 customizerCanvas.SetActive(false);
                 return false;
             }

             if (touch.phase == TouchPhase.Ended) // If we are just taping, call Dice Lord Jumping function
             {
                 holdDice = false;
                 currentTime = 0f;
                 return true;
             }
         }
         else holdDice = false; // If we dont touch a dice, then just exit and return false.

         if (holdDice) // This is the estimated time that I have to touch the dice in order to open the canvas Dice Customizer
            {
                currentTime += Time.deltaTime;
                if (!(currentTime >= holdTime)) continue;
                customizerCanvas.SetActive(true);
                ColorPicker.Instance.SetMesh(hit.collider.GetComponent<MeshRenderer>(), hit.transform.GetChild(0).gameObject); // Sent the mesh renderer & transform child of the Dice selected to the ColorPicker Function
            }
            else currentTime = 0f;
        }
        return true;
    }

    public void DeleteSaveInformation() // Delete all information stored in player prefs and clear the board
        {
            PlayerPrefs.DeleteAll();
            DicePhysics.Instance.SliderDefaultValues();
            DicePhysics.Instance.LoadSavedValues();
            ClearBoard.Instance.ClearDiceList();
        }
}
/// <summary>
/// Events, change information for all listeners, which are the Dice Scripts physics.
/// </summary>
public class DiceLord
{
    public static Action Roll;
    public static Action<float> Force;
    public static Action<float> Multiplier;
    public static Action<float> Rotation;
    public static Action<float> AnglesRotation;
    public static Action<float> Mass;
}