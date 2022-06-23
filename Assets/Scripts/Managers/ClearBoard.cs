using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClearBoard : Singleton<ClearBoard>
{
    [Header("Bullets")]
    public List<GameObject> dices = new();

    [Header("Canvas")] 
    [SerializeField] CanvasGroup diceCanvas;

    IEnumerator Start()
    {   // Is filled when the pool is created ? **BUG**
        yield return new WaitForSeconds(.5f);
        dices.Clear();
        diceCanvas.interactable = true;
    }
    public bool CheckList()
    {
        if (dices.Count >= 30) diceCanvas.interactable = false;
        return true;
    }
    public void AddDices(GameObject dice)
    {
        if (!dices.Contains(dice)) dices.Add(dice);
    }
    public void ClearDiceList()
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<MeshCollider>().enabled = false;
        }
        diceCanvas.interactable = true;
        dices.Clear();
    }

    void ChangeForce(float f)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<PlayerRoll>().upDiceForce = f;
        }
    }
    void ChangeRotation(float r)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<PlayerRoll>().rotationSpeed = r;
        }
    }
    void ChangeRotationAngles(float ra)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<PlayerRoll>().rotationAngles = ra;
        }
    }
    void ChangeMass(float m)
    {
        foreach (var dice in dices)
        {
            dice.GetComponent<PlayerRoll>().rb.mass = m;
        }
    }

    void OnEnable()
    {
        DiceLord.Force += ChangeForce;
        DiceLord.Rotation += ChangeRotation;
        DiceLord.AnglesRotation += ChangeRotationAngles;
        DiceLord.Mass += ChangeMass;
    }

    void OnDisable()
    {
        DiceLord.Force -= ChangeForce;
        DiceLord.Rotation -= ChangeRotation;
        DiceLord.AnglesRotation -= ChangeRotationAngles;
        DiceLord.Mass -= ChangeMass;
    }
}
