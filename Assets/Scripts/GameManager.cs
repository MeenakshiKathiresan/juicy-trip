using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField]
    Ball player;
           
    float score = 0;

    [SerializeField]
    int ringsPerLevel = 3;

    int currentLevelCount = 0;

    [SerializeField]
    GameObject gameover;

    [SerializeField]
    GameObject menu;

    [SerializeField]
    Text scoreText;

    [SerializeField]
    Text endScoreText;

    [SerializeField]
    public float playerSpeed;

    [SerializeField]
    AudioSource bgm;

    [SerializeField]
    AudioSource play;

    [SerializeField]
    AudioSource tap;

    [SerializeField]
    AudioSource lose;

    [SerializeField]
    public float gameRadius;

    float totalLife = 100;

    [SerializeField]
    List<LevelData> levels = new List<LevelData>();

    [SerializeField]
    public List<float> scaleStops = new List<float>();

    [HideInInspector]
    public LevelData currentLevel = new LevelData();

    Shark currentShark;
    EnemyBall currentEnemyBall;
    Collectible currentCollectible;

    

    bool tappable = true;


    public LevelData CurrentLevel
    {
        get
        {
            return currentLevel;
        }
        set
        {       
           currentLevel = value;
           playerSpeed = levels[currentLevelCount].playerSpeed;
           nextLevel = levels[currentLevelCount + 1];
        }
    }

    [HideInInspector]
    public LevelData nextLevel = new LevelData();

    public static GameManager instance;

    public GameState gameState = GameState.Menu;

    private void Awake()
    {
        instance = this;
        CurrentLevel = levels[0];
        bgm.Play();
    }

    private void OnEnable()
    {
        Ball.OnHealthChange += OnHealthChange;
        UIManager.OnHammerTap += OnHammerTap;
    }
    private void OnDisable()
    {
        Ball.OnHealthChange -= OnHealthChange;
        UIManager.OnHammerTap -= OnHammerTap;
    }


    // Update is called once per frame
    void Update()
    {
        bool input = (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0));
        if (input && gameState == GameState.InGame && tappable  && !EventSystem.current.IsPointerOverGameObject())
        {
            tappable = false;
            StartCoroutine(EnableInput());

            //transform.localScale = new Vector2(transform.localScale.x + scaleFactor, transform.localScale.y + scaleFactor);
            tap.Play();

            ClearElements();

            Rings newRing = PoolManager.Instantiate(CurrentLevel.RingToSpawn, Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<Rings>();
            newRing.myRotateSpeed = Random.Range(nextLevel.minRotateSpeed, nextLevel.maxRotateSpeed);

            currentShark =  PoolManager.Instantiate("Shark", Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<Shark>();
            float sharkDisplacement = player.currentAngle + CurrentLevel.distanceFromPlayer / 57;        
            currentShark.SetPosition(sharkDisplacement);

           // currentCollectible = PoolManager.Instantiate("Collectible", Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<Collectible>();
           // float displacement = player.currentAngle + CurrentLevel.distanceFromPlayer / 57;
           // currentCollectible.SetPosition(displacement);


            if (CurrentLevel.hasEnemy)
            {
                StartCoroutine(InstantiateEnemyBall());
            }
            newRing.transform.localScale = Vector2.zero;

            OnInput();

        }

        else if ((Input.GetKeyDown(KeyCode.Return) || Input.GetMouseButtonDown(0) ) && (gameState == GameState.GameOver))
        {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
            ShowMenu();
        }

        else if ((Input.GetKeyDown(KeyCode.Return) || Input.GetMouseButtonDown(0)) && (gameState == GameState.Menu))
		{
            GameStart();
		}
    }

    void ClearElements()
    {
        if (currentShark != null)
        {
            Debug.Log("killing shark from GM");
            currentShark.PoolDestroy();
        }
        if (currentEnemyBall != null)
        {
            currentEnemyBall.PoolDestroy();
        }
    }

    public void SharkKilled()
    {
        currentShark = null;
    }

    IEnumerator EnableInput()
	{
        yield return new WaitForSeconds(0.5f);
        tappable = true;
	}

    IEnumerator InstantiateEnemyBall()
    {
        yield return new WaitForSeconds(0.5f);
        if (gameState != GameState.GameOver)
        {
            currentEnemyBall = PoolManager.Instantiate("Enemy", Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<EnemyBall>();
            currentEnemyBall.currentAngle = player.currentAngle + CurrentLevel.distanceFromPlayer/57;           
        }
    }

    void ShowMenu()
	{
        gameState = GameState.Menu;
        menu.SetActive(true);
    }

    void GameStart()
	{
        play.Play();
        score = 0;
        scoreText.text = score.ToString();

        gameState = GameState.InGame;
        menu.SetActive(false);

    }

    public void OnHealthChange(float change)
    {
        totalLife += change;
        Debug.Log("Life: " + totalLife);
        totalLife = Mathf.Clamp(totalLife, 0, 100);

        if (totalLife <= 0)
        {
            GameOver();
        }

    }

    void OnHammerTap()
    {
        player.AttackForward();
    }


    public void GameOver()
    {
        lose.Play();
        gameState = GameState.GameOver;
        gameover.SetActive(true);
        OnGameOver();
        endScoreText.text = score.ToString();
    }

    public void IncreaseScore()
    {
        score++;
        scoreText.text = score.ToString();
        
        if (score % ringsPerLevel == 0)
        {
            LevelUp();
        }

    }

    void LevelUp()
    {       

        //loop second last level - so that we have next level data for spawning
        if (currentLevelCount < levels.Count - 2)
        {
            currentLevelCount++;
            CurrentLevel = levels[currentLevelCount];


        }
    }

    public enum GameState { Menu, GameOver, InGame}

    public delegate void InputHandler();
    public static event InputHandler OnInput;

    public delegate void GameOverHandler();
    public static event GameOverHandler OnGameOver;
}

[System.Serializable]
public class LevelData
{
    public bool hasEnemy;

    public float distanceFromPlayer;

    public float minRotateSpeed;
    public float maxRotateSpeed;

    public string RingToSpawn;

    public float enemySpeed;

    public float playerSpeed;
}
