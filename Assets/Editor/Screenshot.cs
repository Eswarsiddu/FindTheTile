using UnityEngine;

public class Screenshot : MonoBehaviour
{
    public KeyCode ScreenshotKey = KeyCode.S;
    public int number = 0;

    void Update()
    {
        if (Input.GetKeyDown(ScreenshotKey))
        {
            ScreenCapture.CaptureScreenshot("screenshot_" + number.ToString() + ".png");
            Debug.Log("A screenshot was taken!");
        }
    }
}
