using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class EnemyBall : MonoBehaviour, IPoolable
{

	public float speed;

	public float radius;

	public float currentAngle = 90;


	
	void Update()
	{
		if (GameManager.instance.gameState == GameManager.GameState.InGame)
		{
			speed = GameManager.instance.CurrentLevel.enemySpeed;
			currentAngle += speed * Time.deltaTime;
			transform.position = new Vector2(Mathf.Cos(currentAngle), Mathf.Sin(currentAngle)) * radius;
			if (!GetComponent<SpriteRenderer>().enabled)
			{
				GetComponent<SpriteRenderer>().enabled = true;
			}
		}


	}
	

	public void PoolInstantiate(Vector3 position, Quaternion rotation)
	{
		gameObject.SetActive(true);
		radius = GameManager.instance.gameRadius;
		GetComponent<SpriteRenderer>().color = new Color(255, 255, 255, 1);
	}

	public void PoolDestroy()
	{
        GetComponent<SpriteRenderer>().DOFade(0, 0.15f).OnComplete(() =>
        {
            gameObject.SetActive(false);
            GetComponent<SpriteRenderer>().enabled = false;
        });
		
		
	}

	public bool IsAlive()
	{
		return gameObject.activeSelf;
	}

	public GameObject GetGameObject()
	{
		return gameObject;
	}
}
