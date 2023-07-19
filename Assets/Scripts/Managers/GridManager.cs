using System;
using System.Collections.Generic;
using UnityEngine;

public class GridManager : MonoBehaviour
{
    // string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
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
    public void startGame(int gridSize, List<List<Tile>> tilesGrid)
    {
        int noOfElements = (gridSize * gridSize) - 1;
        arrangedLetters.Clear();
        for (int i = 0; i < alphabets.Count; i++)
        {
            arrangedLetters.Add(i);
        }
        arrangedLetters.Shuffle();
        arrangedLetters.Slice(noOfElements);

        List<List<int>> pairs = new List<List<int>>();
        for (int i = 0; i < gridSize; i++)
        {
            for (int j = 0; j < gridSize; j++)
            {
                List<int> _temp = new List<int>();
                _temp.Add(i);
                _temp.Add(j);
                pairs.Add(_temp);
            }
        }
        pairs.Shuffle();
        createGrid(tilesGrid, noOfElements, pairs);
    }

    private void createGrid(List<List<Tile>> grid, int noOfElements, List<List<int>> pairs)
    {
        int ind = 0;
        foreach (List<int> pair in pairs)
        {
            int _i = pair[0];
            int _j = pair[1];
            grid[_i][_j].textUIObject.SetActive(true);
            grid[_i][_j].gameObject.SetActive(true);
            grid[_i][_j].first = "";
            grid[_i][_j].second = "";
            if (ind < noOfElements)
            {
                grid[_i][_j].first = alphabets[arrangedLetters[ind]].ToString();
            }
            if (ind > 0)
            {
                grid[_i][_j].second = alphabets[arrangedLetters[ind - 1]].ToString();
            }
            ind++;
        }

    }
}