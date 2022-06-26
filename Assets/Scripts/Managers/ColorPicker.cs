using UnityEngine;

public class ColorPicker : MonoBehaviour
{
    public static ColorPicker Instance;
    [Header("Color Picker")]
    [SerializeField] RectTransform _texture;
    [SerializeField] Texture2D _sprite;
    MeshRenderer meshRenderer;
    GameObject lightHolder;

    [Header("Textures")] 
    [SerializeField] Texture blackOverWhite;
    [SerializeField] Texture whiteOverBlack;

    void Awake() => Instance = this;

    public void SetMesh(MeshRenderer mr, GameObject _light)
    {
        meshRenderer = mr;
        lightHolder = _light;
        _light.SetActive(true);
    }
    /// <summary>
    /// _BaseMap keyword for BaseMap Material render
    /// </summary>
    public void ChangeToBlack()
    {
        meshRenderer.material.SetTexture("_BaseMap", blackOverWhite);
    }

    public void ChangeToWhite()
    {
        meshRenderer.material.SetTexture("_BaseMap", whiteOverBlack);
    }

    public void ColorPickerColor()
    {
        SetColor();
    }

    void SetColor() // Gets global position of the touch over the Spectrum Image added and gets the pixel
    {
        Vector3 imagePos = _texture.position;
        float globalXPos = Input.GetTouch(0).position.x - imagePos.x;
        float globalYPos = Input.GetTouch(0).position.y - imagePos.y;

        int localPosX = (int) (globalXPos * (_sprite.width / _texture.rect.width));
        int localPosY = (int) (globalYPos * (_sprite.height / _texture.rect.height));

        Color c = _sprite.GetPixel(localPosX, localPosY);
        SetActualColor(c); // send color to mesh renderer selected
    }

    void SetActualColor(Color c)
    {
        meshRenderer.material.color = c;
    }

    void OnDisable()
    {
        lightHolder.SetActive(false);
    }
}