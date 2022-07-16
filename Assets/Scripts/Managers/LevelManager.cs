using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;
public class LevelManager : MonoBehaviour
{
    [SerializeField] Image fadeIn;
    [SerializeField] float duration;
    float current;
    [SerializeField] TextMeshPro title;
    
    public void MainMenu()
    {
        SceneManager.LoadScene("Main Menu");
    }
    
    public void LoadDiceSimulator()
    {
        SceneManager.LoadScene("Dice Simulator");
    }

    public void LoadDiceToon()
    {
        SceneManager.LoadScene("Toon Simulator");
    }
}