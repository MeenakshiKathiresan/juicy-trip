using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

	public class PoolManager : MonoBehaviour {

		[SerializeField]
		private Pool[] pools;

        public Pool[] Pools {
            get { return pools; }
            set { pools = value; }
        }

		public static IPoolable Instantiate(string gameObjectName, Vector3 position, Quaternion rotation) {
			for (int i = 0; i < _instance.pools.Length; i++) {
				if (gameObjectName == _instance.pools[i].ObjectName) {
					return _instance.pools[i].Instantiate(position, rotation);
				}
			}

			Debug.LogErrorFormat("{0} is not found in the pool", gameObjectName);

			return null;
		}

		public static void ClearOnScreen(string gameObjectName) {
			for (int i = 0; i < _instance.pools.Length; i++) {
				if (gameObjectName == _instance.pools[i].ObjectName) {
					_instance.pools[i].ClearOnScreen();
				}
			}
		}

		public static PoolManager _instance;

		private void Awake() {
			_instance = this;
		}
	}

	[System.Serializable]
	public class Pool {

		[SerializeField]
		private string objectName;

		public string ObjectName {
			get { return objectName; }
		}

		[SerializeField]
		private GameObject objectToPool;

		private List<IPoolable> pooledObject = new List<IPoolable>();

		public IPoolable Instantiate(Vector3 position, Quaternion rotation) {
			for (int i = 0; i < pooledObject.Count; i++) {
				if (!pooledObject[i].IsAlive()) {
					pooledObject[i].PoolInstantiate(position, rotation);
					return pooledObject[i];
				}
			}

			GameObject newObjectGO = GameObject.Instantiate(objectToPool, position, rotation);

			IPoolable newObject = newObjectGO.GetComponent<IPoolable>();
			newObject.PoolInstantiate(position, rotation);
			pooledObject.Add(newObject);

			return newObject;
		}

		public void ClearOnScreen() {
			for (int i = 0; i < pooledObject.Count; i++) {
				pooledObject[i].GetGameObject().SetActive(false);
			}
		}

		public void DestroyAll() {

		}

	}

