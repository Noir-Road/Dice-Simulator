using System.Collections;
using UnityEngine;
using Cinemachine;

public class CameraZoom : MonoBehaviour
{
    [SerializeField] CinemachineVirtualCamera virtualCamera;
    [SerializeField] float zoomInDuration;
    CinemachineComponentBase cameraBase;
    float current;

    public void TestZoom()
    {
        StartCoroutine(Zoom());
    }

    IEnumerator Zoom()
    {
        while (current <= zoomInDuration)
        {
            current += Time.deltaTime;
            virtualCamera.m_Lens.FieldOfView = Mathf.Lerp(60f, 40f, current / zoomInDuration);
            yield return null;
        }

        current = 0f;
        
        while (current <= zoomInDuration)
        {
            current += Time.deltaTime;
            virtualCamera.m_Lens.FieldOfView = Mathf.Lerp(40f, 60f, current / zoomInDuration);
            yield return null;
        }

        current = 0f;
    }
    
    
}
