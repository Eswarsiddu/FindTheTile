using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "PlayerData", menuName = "ScriptableObject/PlayerData")]
public class PlayerData : ScriptableObject
{
    [SerializeField] private bool _haptic;

    public bool haptic
    {
        get => _haptic;
    }

    public void toggleHaptic(bool _Haptic)
    {
        _haptic = _Haptic;
    }

    [SerializeField] private int _coins;
    public int coins
    {
        get => _coins;
    }

    public void IncreaseCoins(int _Coins)
    {
        _coins += _Coins;
    }

    public bool getCoins(int _Coins)
    {
        if (_Coins > _coins)
        {
            return false;
        }
        _coins -= _Coins;
        return true;
    }

}
