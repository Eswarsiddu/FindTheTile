using UnityEngine;
using TMPro;

public class Tile : MonoBehaviour
{
    private TextMeshPro textUI;
    public GameObject textUIObject;
    public GameObject ring;
    public string first;
    public string second;
    public bool selected = false;
    public BoardManager boardManager;

    void Awake()
    {
        textUI = textUIObject.GetComponent<TextMeshPro>();
        ring.SetActive(false);
    }

    private void Update()
    {
        if (textUIObject.activeSelf == false) { return; }
        if (first != "")
        {
            textUI.text = first;
        }
        else if (second != "")
        {
            textUI.text = second;
        }
        else
        {
            textUIObject.SetActive(false);
        }
        // if (second != "" && first == "")
        // {
        //     selected = true;
        //     boardManager.selectedString = second;
        //     boardManager.selectedTile = this;
        //     ring.SetActive(true);
        // }
        // else
        // {
        //     selected = false;
        //     ring.SetActive(false);
        // }
        if (printed == false)
        {
            Debug.Log("name" + gameObject.name + ", first: " + first + ", second: " + second);
            printed = true;
        }
    }
    private bool printed = false;

    private void OnMouseDown()
    {
        if (Time.timeScale == 0) return;
        if (selected)
        {
            Debug.Log("clicked on selected");
            return;
        }
        if (first == boardManager.selectedString)
        {
            selected = true;
            boardManager.selectedTile.ring.SetActive(false);
            ring.SetActive(true);
            boardManager.selectedTile.selected = false;
            boardManager.increaseScore();
            boardManager.selectedTile.second = "";
            first = "";
        }
    }
}
