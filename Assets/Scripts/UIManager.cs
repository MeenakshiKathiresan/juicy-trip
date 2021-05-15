using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public Button hammer;
    int hammerCount = 5;


    void Start()
    {
        hammer.onClick.AddListener(HammerTap);
    }

    void HammerTap()
    {
        if (OnHammerTap != null && hammerCount > 0)
        {
            hammerCount--;
            OnHammerTap();
        }
    }
    
   

    // Update is called once per frame
    void Update()
    {
        
    }

    public delegate void HammerTapHandler();
    public static event HammerTapHandler OnHammerTap;

}
