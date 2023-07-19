using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    public int noOfTile;
    public GameObject Tileprefab;
    public BoardManager boardManager;

    private Queue<GameObject> tilesQueue = new Queue<GameObject>();

    void Start()
    {
        for (int i = 0; i < noOfTile; i++)
        {
            GameObject tile = Instantiate(Tileprefab, transform);
            tile.GetComponent<Tile>().boardManager = boardManager;
            tile.SetActive(false);
            tilesQueue.Enqueue(tile);
        }
    }

    public Tile getTile(Vector3 position)
    {
        GameObject tile = tilesQueue.Dequeue();
        // tile.transform.parent = parent;
        tile.transform.position = position;
        tile.SetActive(true);
        tilesQueue.Enqueue(tile);
        return tile.GetComponent<Tile>();
    }


}
