using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    [SerializeField] private CanvasManager canvasMaanger;
    // [SerializeField] private 

    // Start is called before the first frame update
    void Start()
    {

    }

    public void openLevelSeclection()
    {
        canvasMaanger.openLevelSelection();
    }

    public void LevelSelected()
    {

    }

    private void StartGame()
    {

    }


}
