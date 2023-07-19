using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewGridManager : MonoBehaviour
{
    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789`~!@#$%^&*()-=[];',./_+{}:<>?|";
    List<Char> alphabets = new List<Char>();
    List<int> arrangedLetters = new List<int>();
    private void Awake()
    {
        // Debug.Log("letterscount" + letters.Length);
        foreach (Char c in letters)
        {
            alphabets.Add(c);
        }
    }

    public void startGame(List<Tile> tiles)
    {
        List<int> tileNumbers = new List<int>();
        arrangedLetters.Clear();
        for (int i = 0; i < alphabets.Count; i++)
        {
            arrangedLetters.Add(i);
        }
        for (int i = 0; i < tiles.Count; i++)
        {
            tileNumbers.Add(i);
        }
        arrangedLetters.Shuffle();
        arrangedLetters.Slice(tiles.Count);
        tileNumbers.Shuffle();

        for (int i = 0; i < tiles.Count; i++)
        {
            Tile tile = tiles[tileNumbers[i]];
            tile.textUIObject.SetActive(true);
            tile.gameObject.SetActive(true);
            tile.first = "";
            tile.second = "";
            if (i < tiles.Count - 1)
            {
                tile.first = alphabets[arrangedLetters[i]].ToString();
            }
            if (i > 0)
            {
                tile.second = alphabets[arrangedLetters[i - 1]].ToString();
            }
        }
    }
}
