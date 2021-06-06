using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{

    float speed;

    public float radius;

    [HideInInspector]
    public float currentAngle = 0;

    private bool move = true;

    float attackDistance = 1.5f;

    float forwardAngle = 190;

    void Start()
    {
        radius = GameManager.instance.gameRadius;
    }
    void Update()
    {
        if (move && (GameManager.instance.gameState == GameManager.GameState.InGame))
        {
            speed = GameManager.instance.playerSpeed;
            currentAngle += speed * Time.deltaTime;
            transform.position = new Vector2(Mathf.Cos(currentAngle), Mathf.Sin(currentAngle)) * GameManager.instance.gameRadius;
            transform.eulerAngles = new Vector3(0, 0, Mathf.Rad2Deg * currentAngle - 90);
        }

        //remove later, only for debugging
        Vector3 forward = new Vector3(Mathf.Cos(Mathf.Deg2Rad * forwardAngle), Mathf.Sin(Mathf.Deg2Rad * forwardAngle));
        forward = transform.TransformDirection(forward);
        Debug.DrawRay(transform.position, forward * attackDistance, Color.green);
    }

    public void AttackForward()
    {
        Vector3 forward = new Vector3(Mathf.Cos(Mathf.Deg2Rad * forwardAngle), Mathf.Sin(Mathf.Deg2Rad * forwardAngle));
        forward = transform.TransformDirection(forward);
        RaycastHit2D hit = Physics2D.Raycast(transform.position , forward * attackDistance);


        if (hit.collider != null)
        {
            Debug.Log("Attacking " + hit.collider);
            if (hit.collider.GetComponent<Shark>())
            {
                hit.collider.GetComponent<Shark>().PoolDestroy();
                GameManager.instance.SharkKilled();
            }
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.GetComponent<Leaves>())
        {
            Debug.Log("Leaf: " + collision.gameObject);
            OnHealthChange(-25);
        }
        else if (collision.GetComponent<Shark>())
        {
            Debug.Log("Shark: " + collision.gameObject);
            OnHealthChange(-25);
        }
        else if (collision.GetComponent<Collectible>())
        {
            OnHealthChange(25);
            Collectible collectible = collision.GetComponent<Collectible>();
            collectible.PoolDestroy();
        }
        else
        {
            speed = 0;
            GameManager.instance.GameOver();
        }
    }

    public delegate void HealthChangeHandler(float change);
    public static event HealthChangeHandler OnHealthChange;



}
