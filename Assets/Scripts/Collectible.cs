using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;


public class Collectible : MonoBehaviour, IPoolable
{	
	float currentAngle;

	public void PoolInstantiate(Vector3 position, Quaternion rotation)
	{
		gameObject.SetActive(true);
	}

	public void SetPosition(float displacement)
	{
		currentAngle = displacement;
		Vector2 sharkPosition = new Vector2(Mathf.Cos(currentAngle), Mathf.Sin(currentAngle));
		transform.position = sharkPosition * GameManager.instance.gameRadius;
	}

	public void PoolDestroy()
	{
		GetComponent<SpriteRenderer>().DOFade(0, 0.05f).OnComplete(() => gameObject.SetActive(false));

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
