using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DicePhysics : Singleton<DicePhysics>
{
    [Header("Gravity")]
    [SerializeField] Slider gravitySlider;
    [SerializeField] TextMeshProUGUI gravityValue;

    [Header("Force")]
    [SerializeField] Slider forceSlider;
    [SerializeField] TextMeshProUGUI forceValue;

    [Header("Rotation While Rolling")] 
    [SerializeField] Slider rotationSlider;
    [SerializeField] TextMeshProUGUI rotationValue;

    [Header("Angle Rotation")] 
    [SerializeField] Slider rotationAnglesSlider;
    [SerializeField] TextMeshProUGUI rotationAnglesValue;

    [Header("Dice Mass")]
    [SerializeField] Slider rigidbodySlider;
    [SerializeField] TextMeshProUGUI rigidbodyValue;

    [Header("Drag")] 
    [SerializeField] Slider dragSlider;
    [SerializeField] TextMeshProUGUI dragValue;

    [Header("Angular Drag")] 
    [SerializeField] Slider angularDragSlider;
    [SerializeField] TextMeshProUGUI angularDragValue;
    
    void Start()
    {
       SliderDefaultValues(); // Load default values for sliders;
       LoadSavedValues();
        
       gravitySlider.onValueChanged.AddListener((v) =>
       {
           gravityValue.text = v.ToString("0.00");
           Physics.gravity = new Vector3(0f, v, 0f);
           PlayerPrefs.SetFloat("Gravity", v);
       });

       forceSlider.onValueChanged.AddListener((v) =>
       {
           forceValue.text = v.ToString("0.00");
           DiceLord.Force?.Invoke(v);
           PlayerPrefs.SetFloat("Force", v);
       });
       
      rotationSlider.onValueChanged.AddListener((v) =>
      {
          rotationValue.text = v.ToString("0.00");
          DiceLord.Rotation?.Invoke(v);
          PlayerPrefs.SetFloat("Rotation", v);
      });

      rotationAnglesSlider.onValueChanged.AddListener((v) =>
      {
          rotationAnglesValue.text = v.ToString("0.00");
          DiceLord.AnglesRotation?.Invoke(v);
          PlayerPrefs.SetFloat("Angles", v);
      });
      
      rigidbodySlider.onValueChanged.AddListener((v) =>
      {
          rigidbodyValue.text = v.ToString("0.00");
          DiceLord.Mass?.Invoke(v);
          PlayerPrefs.SetFloat("Mass", v);
      });
  /*     
       dragSlider.onValueChanged.AddListener((v) =>
       {
           dragValue.text = v.ToString("0.00");
           rb.drag = v;
           PlayerPrefs.SetFloat("Drag", v);
       });
       
       angularDragSlider.onValueChanged.AddListener((v) =>
       {
           angularDragValue.text = v.ToString("0.00");
           rb.angularDrag = v;
           PlayerPrefs.SetFloat("AngularDrag",v);
       });
  */
    }

    public void LoadSavedValues()
    {
        if (PlayerPrefs.HasKey("Gravity"))
        {
            gravitySlider.value = PlayerPrefs.GetFloat("Gravity");
            gravityValue.text = PlayerPrefs.GetFloat("Gravity").ToString("0.00");
            Physics.gravity = new Vector3(0f, PlayerPrefs.GetFloat("Gravity"), 0f);
        }
        
        if (PlayerPrefs.HasKey("Force"))
        {
            forceSlider.value = PlayerPrefs.GetFloat("Force");
            forceValue.text = PlayerPrefs.GetFloat("Force").ToString("0.00");
        }

        if (PlayerPrefs.HasKey("Rotation"))
        {
            rotationSlider.value = PlayerPrefs.GetFloat("Rotation");
            rotationValue.text = PlayerPrefs.GetFloat("Rotation").ToString("0.00");
        }

        if (PlayerPrefs.HasKey("Angles"))
        {
            rotationAnglesSlider.value = PlayerPrefs.GetFloat("Angles");
            rotationAnglesValue.text = PlayerPrefs.GetFloat("Angles").ToString("0.00");
        }
        
        if (PlayerPrefs.HasKey("Mass"))
        {
            rigidbodySlider.value = PlayerPrefs.GetFloat("Mass");
            rigidbodyValue.text = PlayerPrefs.GetFloat("Mass").ToString("0.00");
        }
/*
        if (PlayerPrefs.HasKey("Drag"))
        {
            dragSlider.value = PlayerPrefs.GetFloat("Drag");
            dragValue.text = PlayerPrefs.GetFloat("Drag").ToString();
            rb.drag = PlayerPrefs.GetFloat("Drag");
        }

        if (PlayerPrefs.HasKey("AngularDrag"))
        {
            angularDragSlider.value = PlayerPrefs.GetFloat("AngularDrag");
            angularDragValue.text = PlayerPrefs.GetFloat("AngularDrag").ToString();
            rb.angularDrag = PlayerPrefs.GetFloat("AngularDrag");
} */
    }
    public void SliderDefaultValues()
    {
        gravitySlider.minValue = -500f;
        gravitySlider.maxValue = -9.81f;
        gravitySlider.value = -133.5f;

        forceSlider.minValue = 100f;
        forceSlider.maxValue = 5000f;
        forceSlider.value = 4000f;

        rotationSlider.minValue = 0f;
        rotationSlider.maxValue = 30f;
        rotationSlider.value = 30f;

        rotationAnglesSlider.minValue = 1f;
        rotationAnglesSlider.maxValue = 25f;
        rotationAnglesSlider.value = 25f;
        
        rigidbodySlider.minValue = 1f;
        rigidbodySlider.maxValue = 25f;
        rigidbodySlider.value = 6.3f;

      // dragSlider.minValue = 0f;
      // dragSlider.maxValue = 3f;
      // dragSlider.value = 3f;

      // angularDragSlider.minValue = 0f;
      // angularDragSlider.maxValue = 3f;
      // angularDragSlider.value = 3f;
    }
}