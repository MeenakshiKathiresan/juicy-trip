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

    int score = 0;

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

    int heartLevel = -1;

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
    }
    private void OnDisable()
    {
        Ball.OnHealthChange -= OnHealthChange;
    }



    // Update is called once per frame
    void Update()
    {

        float halfWidth = Screen.width / 2;
        bool input = (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0));

        if (input && gameState == GameState.InGame && tappable)
        {
            StartCoroutine(EnableInput());

            //Right tap to enter ring
            if (Input.mousePosition.x > halfWidth)
            {
                Debug.Log("right" + Input.mousePosition.x + " "  + halfWidth);
                ClearElements();

                Rings newRing = PoolManager.Instantiate(CurrentLevel.RingToSpawn, Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<Rings>();
                newRing.myRotateSpeed = Random.Range(nextLevel.minRotateSpeed, nextLevel.maxRotateSpeed);

                if (CurrentLevel.hasEnemy)
                {
                    StartCoroutine(InstantiateEnemyBall());
                }

                if (CurrentLevel.hasShark)
                {
                    StartCoroutine(InstantiateShark());
                }

                if(score == heartLevel)
                {
                    StartCoroutine(InstantiateHeart());
                }

                newRing.transform.localScale = Vector2.zero;


                OnInput();
                tap.Play();

            }
            //Left tap to attack
            else
            {
                Debug.Log("left" + Input.mousePosition.x + " " + halfWidth);
                player.AttackForward();           
            }             
                      
                  

                       
        }


        else if ((Input.GetKeyDown(KeyCode.Return) || Input.GetMouseButtonDown(0)) && (gameState == GameState.GameOver))
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
          //  Debug.Log("killing shark from GM");
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
        tappable = false;
        yield return new WaitForSeconds(0.5f);
        tappable = true;
    }

    IEnumerator InstantiateEnemyBall()
    {
        yield return new WaitForSeconds(0.5f);
        if (gameState != GameState.GameOver)
        {
            currentEnemyBall = PoolManager.Instantiate("Enemy", Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<EnemyBall>();
            currentEnemyBall.currentAngle = player.currentAngle + CurrentLevel.distanceFromPlayer / 57;
        }
    }

    IEnumerator InstantiateShark()
    {
        yield return new WaitForSeconds(0.5f);
        if (gameState != GameState.GameOver)
        {
            currentShark = PoolManager.Instantiate("Shark", Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<Shark>();
            float sharkDisplacement = player.currentAngle + (CurrentLevel.distanceFromPlayer - 40) / 57;
            currentShark.SetPosition(sharkDisplacement);
        }
    }
    IEnumerator InstantiateHeart()
    {
        yield return new WaitForSeconds(0.5f);
        if (gameState != GameState.GameOver)
        {
            currentCollectible = PoolManager.Instantiate("Collectible", Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<Collectible>();
            float displacement = player.currentAngle + CurrentLevel.distanceFromPlayer - 100 / 57;
            currentCollectible.SetPosition(displacement);
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
      //  Debug.Log("Life: " + totalLife);
        totalLife = Mathf.Clamp(totalLife, 0, 100);

        if (totalLife <= 0)
        {
            GameOver();
        }

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
        if (score % 4 == 0)
        {
            heartLevel = score + Random.Range(1, 4);
        }
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

    public enum GameState { Menu, GameOver, InGame }

    public delegate void InputHandler();
    public static event InputHandler OnInput;

    public delegate void GameOverHandler();
    public static event GameOverHandler OnGameOver;
}

[System.Serializable]
public class LevelData
{
    public bool hasEnemy;

    public bool hasShark;

    public float distanceFromPlayer;

    public float minRotateSpeed;
    public float maxRotateSpeed;

    public string RingToSpawn;

    public float enemySpeed;

    public float playerSpeed;
}
