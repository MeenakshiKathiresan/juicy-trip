using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using DG.Tweening;

public class UIManager : MonoBehaviour
{
    [SerializeField]
    Image healthIndicator;

    private void OnEnable()
    {
        Ball.OnHealthChange += OnHealthChange;
    }
    private void OnDisable()
    {
        Ball.OnHealthChange -= OnHealthChange;
    }

    private void OnHealthChange(float change)
    {
        float currentHealth = healthIndicator.fillAmount;
        currentHealth += change / 100;

        healthIndicator.DOFillAmount(currentHealth, 0.25f);
    }






    // Update is called once per frame
    void Update()
    {

    }


}
