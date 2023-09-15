using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Rings : MonoBehaviour, IPoolable
{

	[SerializeField]
	float scaleFactor;

	public float myRotateSpeed;

	bool canRotate = true;

	[SerializeField]
	SpriteRenderer mySprite;

	[SerializeField]
    SpriteRenderer fillSprite;

	[SerializeField]
	int currentScaleStopIndex = 0;

	// Start is called before the first frame update
	void Start()
	{
		int dir = Random.Range(0, 2);
		if (dir == 0) { dir = -1; }

		transform.eulerAngles = new Vector3(0, 0, Random.Range(0, 360));
		myRotateSpeed *= dir;
	}

	// Update is called once per frame
	void Update()
	{
		if (canRotate && (GameManager.instance.gameState == GameManager.GameState.InGame))
		{
			transform.Rotate(new Vector3(0, 0, myRotateSpeed * Time.deltaTime));
		}
	}

	private void OnEnable()
	{
		GameManager.OnInput += ScaleUp;
		GameManager.OnGameOver += GameOver;
	}
	private void OnDisable()
	{
		GameManager.OnInput -= ScaleUp;
		GameManager.OnGameOver -= GameOver;
	}

	void ScaleUp()
	{
		currentScaleStopIndex++;
		float scaleTo = GameManager.instance.scaleStops[currentScaleStopIndex];

		transform.DOScale(new Vector2(scaleTo,scaleTo), 0.5f).OnComplete(() =>
		{
			//When it becomes last ring
			if (currentScaleStopIndex>4)
			{				
				GameManager.instance.IncreaseScore();
			}
		});

		if (currentScaleStopIndex<=4)
		{			
			fillSprite.DOFade(fillSprite.color.a - 0.25f, 0.5f);
			mySprite.DOFade(mySprite.color.a + 0.35f, 0.5f);
		}
		else
		{
			mySprite.DOFade(0, 0.5f).OnComplete(() => PoolDestroy());
			fillSprite.DOFade(0, 0.5f);
		}

	}


	void GameOver()
	{
		transform.DOKill();
		fillSprite.transform.DOKill();
		canRotate = false;
	}

	public void PoolInstantiate(Vector3 position, Quaternion rotation)
	{
		gameObject.SetActive(true);
		fillSprite.color = new Color(255, 255, 255, 1);
		mySprite.color = new Color(255, 255, 255, 0);
		currentScaleStopIndex = 0;
	}

	public void PoolDestroy()
	{
		gameObject.SetActive(false);
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
