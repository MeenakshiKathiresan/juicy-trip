using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Shark : MonoBehaviour, IPoolable
{	
	float currentAngle;

	public void PoolInstantiate(Vector3 position, Quaternion rotation)
	{
        GetComponent<Collider2D>().enabled = true;
        GetComponent<SpriteRenderer>().color = new Color(255, 255, 255, 1);
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
        GetComponent<Collider2D>().enabled = false;
		GetComponent<SpriteRenderer>().DOFade(0, 0.15f).OnComplete(() => gameObject.SetActive(false));	
	
	}

	public bool IsAlive()
	{
		return gameObject.activeSelf;
	}

	public GameObject GetGameObject()
	{
		return gameObject;
	}

	
	// Start is called before the first frame update
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
