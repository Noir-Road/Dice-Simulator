using UnityEngine;

public class DiceCollisions : MonoBehaviour
{
    enum DiceSound{ON, OFF}
    DiceSound state;
    
    void OnCollisionEnter(Collision collision)
    {
        if (!collision.gameObject.CompareTag("Dice")) return;
            collision.gameObject.GetComponent<PlayerRoll>().isRolling = false;
        state = DiceSound.ON;
        RandomSound();
    }

    void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.CompareTag("Dice"))
            state = DiceSound.OFF;
    }

    void RandomSound()
    {
        if (state == DiceSound.OFF) return;
        var _sound = Random.Range(1, 6);
        switch (_sound)
        {
            case 1:
                SoundManager.Instance.PlaySound("Throw Sound One");
                break;
            case 2:
                SoundManager.Instance.PlaySound("Throw Sound Two");
                break;
            case 3:
                SoundManager.Instance.PlaySound("Throw Sound Three");
                break;            
            case 4:
                SoundManager.Instance.PlaySound("Throw Sound Four");
                break;            
            case 5:
                SoundManager.Instance.PlaySound("Throw Sound Five");
                break;
        }
    }
}
