using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class pixelartdesigner : MonoBehaviour
{
    public Texture2D levelTexture;
    public TextMeshProUGUI widthText;
    public PoolManager poolManager;
    public float gap;
    public List<Tile> gridTiles;
    public NewGridManager gridManager;

    void Start()
    {

    }

    public Color blackColor;

    public int whiteCount = 0;
    public int BlackCount = 0;

    public void getLevelTexure()
    {

    }

    public void generateGrid()
    {
        int width = levelTexture.width;
        int height = levelTexture.height;

        float startingX = (width / 2) * -gap;
        float startingY = (height / 2) * gap;

        if (width % 2 == 0)
        {
            startingX += (gap / 2);
        }

        if (height % 2 == 0)
        {
            startingY -= (gap / 2);
        }

        for (int i = 0; i < levelTexture.width; i++)
        {
            for (int j = 0; j < levelTexture.height; j++)
            {
                Color color = levelTexture.GetPixel(i, j);
                if (color == blackColor)
                {
                    Vector3 pos = new Vector3(startingX + (i * gap), startingY - (j * gap), 0);
                    Tile tile = poolManager.getTile(pos);
                    tile.gameObject.name = gridTiles.Count.ToString();
                    gridTiles.Add(tile);
                }
            }
        }
    }

    public void startGame()
    {
        gridManager.startGame(gridTiles);
    }


}
