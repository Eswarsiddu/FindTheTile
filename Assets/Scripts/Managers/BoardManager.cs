using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class BoardManager : MonoBehaviour
{
    List<Transform> tilesTransform = new List<Transform>();
    public TextMeshProUGUI timerTextUI;
    public int score;
    public Tile selectedTile;
    public string selectedString;
    private GridManager GridManager;
    public GameObject tilePrefab;
    List<List<Tile>> tilesGrid;
    public TextMeshProUGUI scoreText;
    public int gridSize = 5;
    public float gap = 1.2f;

    private CanvasManager canvasManager;

    void Start()
    {
        // canvasManager = CanvasManager.instance;
        // score = 0;
        // GridManager = transform.GetComponentInChildren<GridManager>();
        // GameObject gridObject = GridManager.gameObject;

        // for (int i = 0; i < gridSize * gridSize; i++)
        // {
        //     GameObject temp = Instantiate(tilePrefab, gridObject.transform);
        //     tilesTransform.Add(temp.transform);
        //     temp.name = i.ToString();
        // }
        // float startingNumber = ((float)gridSize / 2) - 0.5f;
        // Vector3 gridPosition = new Vector3(-startingNumber, startingNumber, 0);
        // int transformIndex = 0;
        // tilesGrid = new List<List<Tile>>();
        // for (int i = 0; i < gridSize; i++)
        // {
        //     List<Tile> temp = new List<Tile>();
        //     for (int j = 0; j < gridSize; j++)
        //     {
        //         tilesTransform[transformIndex++].position = gridPosition;
        //         gridPosition.x += gap;
        //         tilesTransform[transformIndex - 1].gameObject.SetActive(false);
        //         Tile _tile = tilesTransform[transformIndex - 1].GetComponent<Tile>();
        //         // _tile.boardManager = this;
        //         temp.Add(_tile);
        //     }
        //     tilesGrid.Add(temp);
        //     gridPosition.y -= gap;
        //     gridPosition.x = -startingNumber;
        // }
    }
    public bool gamEnd = false;

    public void setSelected(string _selectedString)
    {
        selectedString = _selectedString;
    }

    public void increaseScore()
    {
        score++;
        if (score + 1 == (gridSize * gridSize))
        {
            gamEnd = true;
            gameStart = false;
            canvasManager.openGameEnd();
        }
        scoreText.text = score.ToString();
    }

    public void StartGame()
    {
        gameStart = true;
        timer = timeInSeconds;
        Time.timeScale = 1f;
        score = 0;
        scoreText.text = score.ToString();
        gamEnd = false;
        GridManager.startGame(gridSize, tilesGrid);
        canvasManager.openGameScreen();
    }

    private void generateGrid(int size)
    {
        int totalSize = size * size;
    }


    public void pauseGame()
    {
        Time.timeScale = 0f;
        canvasManager.pauseGame();
    }

    public void resumeGame()
    {
        Time.timeScale = 1f;
        canvasManager.resumeGame();
    }

    public float timer;
    public float timeInSeconds;
    public bool gameStart = false;

    private void Update()
    {
        if (gameStart)
        {
            if (timer >= 0)
            {
                timer -= Time.deltaTime;
                timerTextUI.text = Constants.timeToText((int)timer);
            }
            else
            {
                gamEnd = true;
                gameStart = false;
                canvasManager.openGameEnd();
            }
        }
    }

    public void endGame()
    {
        gamEnd = true;
        gameStart = false;
        // canvasManager.openGameEnd();
    }

    public void goHome()
    {
        canvasManager.openHomeScreen();
    }

}
