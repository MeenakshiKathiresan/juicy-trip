using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    
   

    // Update is called once per frame
    void Update()
    {
        
    }

    public delegate void HammerTapHandler();
    public static event HammerTapHandler OnHammerTap;

}
