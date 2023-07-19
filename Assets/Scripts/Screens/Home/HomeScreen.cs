using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class HomeScreen : A_Screen
{
    public TextMeshProUGUI cointsText;
    public Toggle haptic;

    public PlayerData playerData;

    void Awake()
    {
        haptic.onValueChanged.AddListener(playerData.toggleHaptic);
        haptic.isOn = playerData.haptic;
        // playerData.toggleHaptic
    }



    // Update is called once per frame
    void Update()
    {

    }
}
