using System.Collections.Generic;
using UnityEngine;

public class ClearBoard : Singleton<ClearBoard>
{
    [Header("Bullets")]
    public List<GameObject> dices = new();

    [Header("Canvas")] 
    [SerializeField] CanvasGroup diceCanvas;
    
    public bool CheckList() // Maximum Dices on PlayGround are 30. If this var is higher, needs to also tweak the Object Pooler
    {
        if (dices.Count >= 30) diceCanvas.interactable = false;
        return true;
    }
    int i =0;
    public void AddDices(GameObject dice) // Little check to see if the dice has not been added already into the list.
    {
        i++;
        dice.name="Dice_" +i;
        
        if (!dices.Contains(dice)) dices.Add(dice);
    }
    public void ClearDiceList() // Clear the dices by removing the collider and have them to fall into the ground.
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<MeshCollider>().enabled = false;
        }
        diceCanvas.interactable = true; // Re enabled canvas to spawn more Dices.
        dices.Clear();
    }

    #region DiceLord Listeners

    void ChangeForce(float f)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<DiceRoller>().upDiceForce = f;
        }
    }

    void ChangeMultiplier(float mu)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<DiceRoller>().mutiplyGravity = mu;
        }
    }
    void ChangeRotation(float r)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<DiceRoller>().rotationSpeed = r;
        }
    }
    void ChangeRotationAngles(float ra)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<DiceRoller>().rotationAngles = ra;
        }
    }
    void ChangeMass(float m)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<DiceRoller>().rb.mass = m;
        }
    }
    void OnEnable() // Subscribe to Dice Lord Event
    {
        DiceLord.Force += ChangeForce;
        DiceLord.Multiplier += ChangeMultiplier;
        DiceLord.Rotation += ChangeRotation;
        DiceLord.AnglesRotation += ChangeRotationAngles;
        DiceLord.Mass += ChangeMass;
    }

    void OnDisable() // Needs to unsubscribe to avoid any errors, Just a check, might not be needed.
    {
        DiceLord.Force -= ChangeForce;
        DiceLord.Multiplier -= ChangeMultiplier;
        DiceLord.Rotation -= ChangeRotation;
        DiceLord.AnglesRotation -= ChangeRotationAngles;
        DiceLord.Mass -= ChangeMass;
    }
    
    #endregion
}