using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorPicker : MonoBehaviour
{

    [SerializeField] RectTransform _texture;
    [SerializeField] GameObject dice;
    [SerializeField] Texture2D _sprite;

    public void ColorPickerColor()
    {
        SetColor();
    }

    void SetColor()
    {
        Vector3 imagePos = _texture.position;
        float globalXPos = Input.GetTouch(0).position.x - imagePos.x;
        float globalYPos = Input.GetTouch(0).position.y - imagePos.y;

        int localPosX = (int) (globalXPos * (_sprite.width / _texture.rect.width));
        int localPosY = (int) (globalYPos * (_sprite.height / _texture.rect.height));

        Color c = _sprite.GetPixel(localPosX, localPosY);
        SetActualColor(c);
    }

    void SetActualColor(Color c)
    {
        dice.GetComponent<MeshRenderer>().material.color = c;
    }
}