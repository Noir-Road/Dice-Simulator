using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceMovement : MonoBehaviour
{
    [SerializeField] ToonDiceRoller toonDiceRoller;
    [SerializeField] float tapRange;
    Touch touch;
    public float speedModifier;

    Vector2 startTouchPosition;
    Vector2 currentPosition;
    Vector2 endTouchPosition;
    bool stopTouch;

    void Start() {
        speedModifier = 0.01f;
    }

    void Update() {
        Swipe();    
    }

    void Swipe()
    {
        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            startTouchPosition = Input.GetTouch(0).position;
        }

        if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
        {
            currentPosition = Input.GetTouch(0).position;
            var distance = currentPosition - startTouchPosition;
            touch = Input.GetTouch(0);

            if(touch.phase == TouchPhase.Moved)
            {
                transform.position = new Vector3(transform.position.x + touch.deltaPosition.x * speedModifier, transform.position.y, transform.position.z + touch.deltaPosition.y * speedModifier);
            }

          //| if(!stopTouch)
          //| {
          //|     if(distance.x < -swipeRange || distance.x > swipeRange || distance.y > swipeRange || distance.y < -swipeRange) stopTouch = true;
          //| }
        }
    }

    private void FixedUpdate() {
    if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
          //  stopTouch = false;
            
            endTouchPosition = Input.GetTouch(0).position;

            var distance = endTouchPosition - startTouchPosition;

            if(Mathf.Abs(distance.x) < tapRange && Mathf.Abs(distance.y) < tapRange) toonDiceRoller.RequestNewImpulse();
        }
    }

}
