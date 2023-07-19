using System.Collections.Generic;
using UnityEngine;

public class CanvasManager : MonoBehaviour
{
    private UISCREENS HOME = UISCREENS.HOME;
    private UISCREENS GAME = UISCREENS.GAME;
    private UISCREENS GAMEEND = UISCREENS.GAMEEND;
    private UISCREENS PAUSE = UISCREENS.PAUSE;
    private UISCREENS LEVEL = UISCREENS.LEVEL;

    Dictionary<UISCREENS, GameObject> screens = new Dictionary<UISCREENS, GameObject>();

    void Awake()
    {
        foreach (Transform screen in transform)
        {
            A_Screen _screen = screen.GetComponent<A_Screen>();
            if (_screen != null)
            {
                screens.Add(_screen.screen, _screen.gameObject);
            }
        }
        openHomeScreen();
    }

    private void changeScreens(UISCREENS[] enableScreens, UISCREENS[] disableScreens)
    {
        foreach (UISCREENS screen in disableScreens)
        {
            screens[screen].SetActive(false);
        }

        foreach (UISCREENS screen in enableScreens)
        {
            screens[screen].SetActive(true);
        }
    }

    public void openHomeScreen()
    {
        UISCREENS[] enableScreens = { HOME };
        UISCREENS[] disableScreens = { GAME, GAMEEND, PAUSE, LEVEL };

        changeScreens(enableScreens, disableScreens);
    }

    public void openGameScreen()
    {
        UISCREENS[] enableScreens = { GAME };
        UISCREENS[] disableScreens = { HOME, GAMEEND, PAUSE, LEVEL };

        changeScreens(enableScreens, disableScreens);
    }

    public void pauseGame()
    {
        screens[PAUSE].SetActive(true);
    }

    public void resumeGame()
    {
        screens[PAUSE].SetActive(false);
    }

    public void openGameEnd()
    {
        UISCREENS[] enableScreens = { GAMEEND };
        UISCREENS[] disableScreens = { HOME, GAME, PAUSE, LEVEL };

        changeScreens(enableScreens, disableScreens);
    }

    public void openLevelSelection()
    {
        UISCREENS[] enableScreens = { LEVEL };
        UISCREENS[] disableScreens = { HOME, GAME, PAUSE, LEVEL };

        changeScreens(enableScreens, disableScreens);
    }


}
