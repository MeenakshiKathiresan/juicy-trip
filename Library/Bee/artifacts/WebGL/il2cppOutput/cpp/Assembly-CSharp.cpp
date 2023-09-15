#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<IPoolable>
struct List_1_t951EEA1FD675A7AC2515734A361670D068870191;
// System.Collections.Generic.List`1<LevelData>
struct List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// IPoolable[]
struct IPoolableU5BU5D_t4C9CDBE7BA14482E33980D2D203477E19F178621;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// LevelData[]
struct LevelDataU5BU5D_t1F77318E13E41A51407DA0EF55EAFF9B21A5C9D9;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// Pool[]
struct PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EpicToonFX.ETFXButtonScript
struct ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4;
// EpicToonFX.ETFXFireProjectile
struct ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3;
// EpicToonFX.ETFXLightFade
struct ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79;
// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B;
// EpicToonFX.ETFXMouseOrbit
struct ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0;
// EpicToonFX.ETFXPitchRandomizer
struct ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF;
// ETFXProjectileScript
struct ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B;
// EpicToonFX.ETFXRotation
struct ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71;
// ETFXSceneManager
struct ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E;
// EpicToonFX.ETFXTarget
struct ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// EnemyBall
struct EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// IPoolable
struct IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531;
// Leaves
struct Leaves_t644729D0A7BD9C74994E76126850908A0138BE06;
// LevelData
struct LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PEButtonScript
struct PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305;
// ParticleEffectsLibrary
struct ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Pool
struct Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5;
// PoolManager
struct PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Rings
struct Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// System.Type
struct Type_t;
// UICanvasManager
struct UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB;
// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Ball/HealthChangeHandler
struct HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92;
// EpicToonFX.ETFXTarget/<Respawn>d__7
struct U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3;
// GameManager/<EnableInput>d__31
struct U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA;
// GameManager/<InstantiateEnemyBall>d__32
struct U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC;
// GameManager/GameOverHandler
struct GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35;
// GameManager/InputHandler
struct InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UIManager/HammerTapHandler
struct HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882;

IL2CPP_EXTERN_C RuntimeClass* Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t951EEA1FD675A7AC2515734A361670D068870191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01228D97468F93F4C08D34049F3BE2138BFA15D8;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903;
IL2CPP_EXTERN_C String_t* _stringLiteral1034D8B07E225029FF095B4DB108E1A8C4087186;
IL2CPP_EXTERN_C String_t* _stringLiteral16B50E8F5851EEBF64831B0EAFD15BD9FCC57686;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A;
IL2CPP_EXTERN_C String_t* _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC;
IL2CPP_EXTERN_C String_t* _stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162;
IL2CPP_EXTERN_C String_t* _stringLiteral2940DE8D75B2E8B88DD329CDDC03D118CF148C79;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5F1D79B12F1C52B9B1E470CFFAFFA221390695;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9A7309AEEF5B192FD019E712D2973C5AF4E319;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral342FE8A631B1691BFAFBC5238E49C17B7A0188F8;
IL2CPP_EXTERN_C String_t* _stringLiteral3567C3794ABE76DD48E35F1DF7FC710B55520C9E;
IL2CPP_EXTERN_C String_t* _stringLiteral35976FFCA294560D7E4C40F81B41248FED8AD19E;
IL2CPP_EXTERN_C String_t* _stringLiteral3FA3643AE00785D4AAC8D94F75DBEC31C591CD8C;
IL2CPP_EXTERN_C String_t* _stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082;
IL2CPP_EXTERN_C String_t* _stringLiteral45F58255B95DE1B8D542021758DDAB3E1F464AE1;
IL2CPP_EXTERN_C String_t* _stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4;
IL2CPP_EXTERN_C String_t* _stringLiteral4907D619835F2CCA72462CBD2E9117F3D50AA239;
IL2CPP_EXTERN_C String_t* _stringLiteral4F6D9789D9A0D7483B15CB01BD0BEA1419B65721;
IL2CPP_EXTERN_C String_t* _stringLiteral5046BA9E70AC20B6F9AC56F496268F4CA54CB71D;
IL2CPP_EXTERN_C String_t* _stringLiteral5183CC718F042548CB17830F335CA1300798F98F;
IL2CPP_EXTERN_C String_t* _stringLiteral542C20BA146CC0FFF0BACCD64CCB27638EE2C535;
IL2CPP_EXTERN_C String_t* _stringLiteral551232956AEF66634A14B2FA7D5E43036EBAE5AE;
IL2CPP_EXTERN_C String_t* _stringLiteral55DCD3C41D65D7C0C6131E9F887E925D3D93D999;
IL2CPP_EXTERN_C String_t* _stringLiteral6FA6337DF8B49626C6F4D96CF07FF45586BDA214;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF7A265B2E2742BE4BF8DF078EB839FD342B9E9;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8DDB709CD0A40DF83139466BDB36786AAE75EE8F;
IL2CPP_EXTERN_C String_t* _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B;
IL2CPP_EXTERN_C String_t* _stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D108E69F651AE4F1653BCDCAA8D2C79B865B23A;
IL2CPP_EXTERN_C String_t* _stringLiteralA48328E12C38ADB209E5965BAF23D6A254F32EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B98DFD193C6BB1F1EE1FC7E48E5D716980E761;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAA90AC733B7E7E42D2C8D1D639DDE68DFECD7F;
IL2CPP_EXTERN_C String_t* _stringLiteralBF872ADFA6D009455788B01E0039910ABAA9AEE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC36E2206A2F7EED468C9DBF8C86A794A7BEF655A;
IL2CPP_EXTERN_C String_t* _stringLiteralCE8DBC7FFF52925F8AED0C5F50AEF43ABA6C6C36;
IL2CPP_EXTERN_C String_t* _stringLiteralD1679F19DA567DC41D2778CF07FA2C003E100369;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A460B57C708AAE5B3FE032970AB4EB08FDAB9B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8E0ECA9F25F385C1FA3517D8C8806DD14A52158;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF246C2C30DD050AD1D57A21AAC461FA49F6D42E;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B46BB36C025A58C6B5C47AF145C69CC35BB955;
IL2CPP_EXTERN_C String_t* _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640;
IL2CPP_EXTERN_C String_t* _stringLiteralE720B9F5A19BBE91E81F3577B920642AEA974C49;
IL2CPP_EXTERN_C String_t* _stringLiteralEE3DFD929D313E91FBB2A082F3CAAB07CE60AF87;
IL2CPP_EXTERN_C String_t* _stringLiteralEF0887D90DE9B75255B1C019432AC465E5794CEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF2A170901896DA9E535CB9AFD05D068A6DC3ED07;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLeaves_t644729D0A7BD9C74994E76126850908A0138BE06_mD1CEC2B4F4D42600BD0FB3BE1DC10B96FF5A4D30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnemyBall_U3CPoolDestroyU3Eb__6_0_m087CF02A7FE1BE7EE8272580E4C7B665EF76EC7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnHammerTap_m33ADB2DE1E01077D861BDC66208C89964BD9D45D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnHealthChange_m0CDF20434DCE9CF08C4061AB2889965C3127CA7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38_mBFA1ED64C9CA734730C87B4432B0E9D53687120C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_m5C13A3050F8838FD24E423A53324FC88CE3A22CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRings_t15AA9F7F7C02B9A759B163A77358B64493F667DA_m048E02B6142169E68317A59AB620C057332BB087_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0B8D5DF950C19F2EEFBBCBEB2ACA85184B226E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4C4170D2B14B4395DB2999B54698236AFA991718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m18577333F7379D8529FE97E6565703CE816DB25F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rings_GameOver_mCE18CC073301B5912157BCFAF2B1F8B870260CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rings_ScaleUp_m987ABB8A694A1B0177FF2FC3F355FDE9958255C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rings_U3CScaleUpU3Eb__10_0_m02236F3B0210D22FB7D16086C14C5C28436DBDDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rings_U3CScaleUpU3Eb__10_1_m2C311E19FE55A2FAF58BFF690B53FDA86157DB8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnableInputU3Ed__31_System_Collections_IEnumerator_Reset_mDF83806BA484CEC72BD6A0789B771F50029F3567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInstantiateEnemyBallU3Ed__32_System_Collections_IEnumerator_Reset_m62C6AECD22BE7263EBE6744D1B5DB84BF7F2D2C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<IPoolable>
struct List_1_t951EEA1FD675A7AC2515734A361670D068870191  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPoolableU5BU5D_t4C9CDBE7BA14482E33980D2D203477E19F178621* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t951EEA1FD675A7AC2515734A361670D068870191_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPoolableU5BU5D_t4C9CDBE7BA14482E33980D2D203477E19F178621* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LevelData>
struct List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LevelDataU5BU5D_t1F77318E13E41A51407DA0EF55EAFF9B21A5C9D9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LevelDataU5BU5D_t1F77318E13E41A51407DA0EF55EAFF9B21A5C9D9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// LevelData
struct LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5  : public RuntimeObject
{
	// System.Boolean LevelData::hasEnemy
	bool ___hasEnemy_0;
	// System.Single LevelData::distanceFromPlayer
	float ___distanceFromPlayer_1;
	// System.Single LevelData::minRotateSpeed
	float ___minRotateSpeed_2;
	// System.Single LevelData::maxRotateSpeed
	float ___maxRotateSpeed_3;
	// System.String LevelData::RingToSpawn
	String_t* ___RingToSpawn_4;
	// System.Single LevelData::enemySpeed
	float ___enemySpeed_5;
	// System.Single LevelData::playerSpeed
	float ___playerSpeed_6;
};

// Pool
struct Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5  : public RuntimeObject
{
	// System.String Pool::objectName
	String_t* ___objectName_0;
	// UnityEngine.GameObject Pool::objectToPool
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToPool_1;
	// System.Collections.Generic.List`1<IPoolable> Pool::pooledObject
	List_1_t951EEA1FD675A7AC2515734A361670D068870191* ___pooledObject_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXLoopScript EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>4__this
	ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* ___U3CU3E4__this_2;
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<effectPlayer>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CeffectPlayerU3E5__2_3;
};

// EpicToonFX.ETFXTarget/<Respawn>d__7
struct U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXTarget/<Respawn>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXTarget EpicToonFX.ETFXTarget/<Respawn>d__7::<>4__this
	ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* ___U3CU3E4__this_2;
};

// GameManager/<EnableInput>d__31
struct U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA  : public RuntimeObject
{
	// System.Int32 GameManager/<EnableInput>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<EnableInput>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<EnableInput>d__31::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// GameManager/<InstantiateEnemyBall>d__32
struct U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC  : public RuntimeObject
{
	// System.Int32 GameManager/<InstantiateEnemyBall>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<InstantiateEnemyBall>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<InstantiateEnemyBall>d__32::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_6;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_7;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_8;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_9;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_10;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_18;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_19;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_20;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_21;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_22;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_23;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_24;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_25;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_26;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_27;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_28;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_29;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_30;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_31;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_32;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_33;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_34;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_35;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_36;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_37;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_38;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_39;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_40;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_41;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_42;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_43;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_44;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_45;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_47;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_48;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_49;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_50;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_51;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_52;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_53;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_54;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_55;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_58;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_59;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_60;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_61;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_62;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_58;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_59;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_60;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_61;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_62;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// Ball/HealthChangeHandler
struct HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD  : public MulticastDelegate_t
{
};

// GameManager/GameOverHandler
struct GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35  : public MulticastDelegate_t
{
};

// GameManager/InputHandler
struct InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F  : public MulticastDelegate_t
{
};

// UIManager/HammerTapHandler
struct HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Ball
struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Ball::speed
	float ___speed_4;
	// System.Single Ball::radius
	float ___radius_5;
	// System.Single Ball::currentAngle
	float ___currentAngle_6;
	// System.Boolean Ball::move
	bool ___move_7;
};

struct Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_StaticFields
{
	// Ball/HealthChangeHandler Ball::OnHealthChange
	HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* ___OnHealthChange_8;
};

// EpicToonFX.ETFXButtonScript
struct ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXButtonScript::Button
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Button_4;
	// UnityEngine.UI.Text EpicToonFX.ETFXButtonScript::MyButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MyButtonText_5;
	// System.String EpicToonFX.ETFXButtonScript::projectileParticleName
	String_t* ___projectileParticleName_6;
	// EpicToonFX.ETFXFireProjectile EpicToonFX.ETFXButtonScript::effectScript
	ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* ___effectScript_7;
	// ETFXProjectileScript EpicToonFX.ETFXButtonScript::projectileScript
	ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* ___projectileScript_8;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsX
	float ___buttonsX_9;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsY
	float ___buttonsY_10;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsSizeX
	float ___buttonsSizeX_11;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsSizeY
	float ___buttonsSizeY_12;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsDistance
	float ___buttonsDistance_13;
};

// EpicToonFX.ETFXFireProjectile
struct ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EpicToonFX.ETFXFireProjectile::projectiles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___projectiles_4;
	// UnityEngine.Transform EpicToonFX.ETFXFireProjectile::spawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPosition_5;
	// System.Int32 EpicToonFX.ETFXFireProjectile::currentProjectile
	int32_t ___currentProjectile_6;
	// System.Single EpicToonFX.ETFXFireProjectile::speed
	float ___speed_7;
	// EpicToonFX.ETFXButtonScript EpicToonFX.ETFXFireProjectile::selectedProjectileButton
	ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* ___selectedProjectileButton_8;
	// UnityEngine.RaycastHit EpicToonFX.ETFXFireProjectile::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_9;
};

// EpicToonFX.ETFXLightFade
struct ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EpicToonFX.ETFXLightFade::life
	float ___life_4;
	// System.Boolean EpicToonFX.ETFXLightFade::killAfterLife
	bool ___killAfterLife_5;
	// UnityEngine.Light EpicToonFX.ETFXLightFade::li
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___li_6;
	// System.Single EpicToonFX.ETFXLightFade::initIntensity
	float ___initIntensity_7;
};

// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript::chosenEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chosenEffect_4;
	// System.Single EpicToonFX.ETFXLoopScript::loopTimeLimit
	float ___loopTimeLimit_5;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutLight
	bool ___spawnWithoutLight_6;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutSound
	bool ___spawnWithoutSound_7;
};

// EpicToonFX.ETFXMouseOrbit
struct ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EpicToonFX.ETFXMouseOrbit::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single EpicToonFX.ETFXMouseOrbit::distance
	float ___distance_5;
	// System.Single EpicToonFX.ETFXMouseOrbit::xSpeed
	float ___xSpeed_6;
	// System.Single EpicToonFX.ETFXMouseOrbit::ySpeed
	float ___ySpeed_7;
	// System.Single EpicToonFX.ETFXMouseOrbit::yMinLimit
	float ___yMinLimit_8;
	// System.Single EpicToonFX.ETFXMouseOrbit::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single EpicToonFX.ETFXMouseOrbit::distanceMin
	float ___distanceMin_10;
	// System.Single EpicToonFX.ETFXMouseOrbit::distanceMax
	float ___distanceMax_11;
	// System.Single EpicToonFX.ETFXMouseOrbit::smoothTime
	float ___smoothTime_12;
	// System.Single EpicToonFX.ETFXMouseOrbit::rotationYAxis
	float ___rotationYAxis_13;
	// System.Single EpicToonFX.ETFXMouseOrbit::rotationXAxis
	float ___rotationXAxis_14;
	// System.Single EpicToonFX.ETFXMouseOrbit::velocityX
	float ___velocityX_15;
	// System.Single EpicToonFX.ETFXMouseOrbit::velocityY
	float ___velocityY_16;
};

// EpicToonFX.ETFXPitchRandomizer
struct ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EpicToonFX.ETFXPitchRandomizer::randomPercent
	float ___randomPercent_4;
};

// ETFXProjectileScript
struct ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ETFXProjectileScript::impactParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactParticle_4;
	// UnityEngine.GameObject ETFXProjectileScript::projectileParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectileParticle_5;
	// UnityEngine.GameObject ETFXProjectileScript::muzzleParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muzzleParticle_6;
	// System.Single ETFXProjectileScript::colliderRadius
	float ___colliderRadius_7;
	// System.Single ETFXProjectileScript::collideOffset
	float ___collideOffset_8;
};

// EpicToonFX.ETFXRotation
struct ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 EpicToonFX.ETFXRotation::rotateVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotateVector_4;
	// EpicToonFX.ETFXRotation/spaceEnum EpicToonFX.ETFXRotation::rotateSpace
	int32_t ___rotateSpace_5;
};

// ETFXSceneManager
struct ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ETFXSceneManager::GUIHide
	bool ___GUIHide_4;
	// System.Boolean ETFXSceneManager::GUIHide2
	bool ___GUIHide2_5;
	// System.Boolean ETFXSceneManager::GUIHide3
	bool ___GUIHide3_6;
	// System.Boolean ETFXSceneManager::GUIHide4
	bool ___GUIHide4_7;
};

// EpicToonFX.ETFXTarget
struct ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXTarget::hitParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitParticle_4;
	// UnityEngine.GameObject EpicToonFX.ETFXTarget::respawnParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___respawnParticle_5;
	// UnityEngine.Renderer EpicToonFX.ETFXTarget::targetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___targetRenderer_6;
	// UnityEngine.Collider EpicToonFX.ETFXTarget::targetCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___targetCollider_7;
};

// EnemyBall
struct EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyBall::speed
	float ___speed_4;
	// System.Single EnemyBall::radius
	float ___radius_5;
	// System.Single EnemyBall::currentAngle
	float ___currentAngle_6;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Ball GameManager::player
	Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* ___player_4;
	// System.Single GameManager::score
	float ___score_5;
	// System.Int32 GameManager::ringsPerLevel
	int32_t ___ringsPerLevel_6;
	// System.Int32 GameManager::currentLevelCount
	int32_t ___currentLevelCount_7;
	// UnityEngine.GameObject GameManager::gameover
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameover_8;
	// UnityEngine.GameObject GameManager::menu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___menu_9;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_10;
	// UnityEngine.UI.Text GameManager::endScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___endScoreText_11;
	// System.Single GameManager::playerSpeed
	float ___playerSpeed_12;
	// UnityEngine.AudioSource GameManager::bgm
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgm_13;
	// UnityEngine.AudioSource GameManager::play
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___play_14;
	// UnityEngine.AudioSource GameManager::tap
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___tap_15;
	// UnityEngine.AudioSource GameManager::lose
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___lose_16;
	// System.Single GameManager::gameRadius
	float ___gameRadius_17;
	// System.Single GameManager::totalLife
	float ___totalLife_18;
	// System.Collections.Generic.List`1<LevelData> GameManager::levels
	List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* ___levels_19;
	// System.Collections.Generic.List`1<System.Single> GameManager::scaleStops
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___scaleStops_20;
	// LevelData GameManager::currentLevel
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ___currentLevel_21;
	// EnemyBall GameManager::currentEnemyBall
	EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* ___currentEnemyBall_22;
	// System.Boolean GameManager::tappable
	bool ___tappable_23;
	// LevelData GameManager::nextLevel
	LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ___nextLevel_24;
	// GameManager/GameState GameManager::gameState
	int32_t ___gameState_26;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_25;
	// GameManager/InputHandler GameManager::OnInput
	InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* ___OnInput_27;
	// GameManager/GameOverHandler GameManager::OnGameOver
	GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* ___OnGameOver_28;
};

// Leaves
struct Leaves_t644729D0A7BD9C74994E76126850908A0138BE06  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PEButtonScript
struct PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PEButtonScript::myButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___myButton_4;
	// ButtonTypes PEButtonScript::ButtonType
	int32_t ___ButtonType_5;
};

// ParticleEffectsLibrary
struct ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ParticleEffectsLibrary::TotalEffects
	int32_t ___TotalEffects_5;
	// System.Int32 ParticleEffectsLibrary::CurrentParticleEffectIndex
	int32_t ___CurrentParticleEffectIndex_6;
	// System.Int32 ParticleEffectsLibrary::CurrentParticleEffectNum
	int32_t ___CurrentParticleEffectNum_7;
	// UnityEngine.Vector3[] ParticleEffectsLibrary::ParticleEffectSpawnOffsets
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___ParticleEffectSpawnOffsets_8;
	// System.Single[] ParticleEffectsLibrary::ParticleEffectLifetimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ParticleEffectLifetimes_9;
	// UnityEngine.GameObject[] ParticleEffectsLibrary::ParticleEffectPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ParticleEffectPrefabs_10;
	// System.String ParticleEffectsLibrary::effectNameString
	String_t* ___effectNameString_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ParticleEffectsLibrary::currentActivePEList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___currentActivePEList_12;
	// UnityEngine.Vector3 ParticleEffectsLibrary::spawnPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPosition_13;
};

struct ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields
{
	// ParticleEffectsLibrary ParticleEffectsLibrary::GlobalAccess
	ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* ___GlobalAccess_4;
};

// PoolManager
struct PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Pool[] PoolManager::pools
	PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* ___pools_4;
};

struct PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields
{
	// PoolManager PoolManager::_instance
	PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* ____instance_5;
};

// Rings
struct Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Rings::scaleFactor
	float ___scaleFactor_4;
	// System.Single Rings::myRotateSpeed
	float ___myRotateSpeed_5;
	// System.Boolean Rings::canRotate
	bool ___canRotate_6;
	// UnityEngine.SpriteRenderer Rings::mySprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___mySprite_7;
	// UnityEngine.SpriteRenderer Rings::fillSprite
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___fillSprite_8;
	// System.Int32 Rings::currentScaleStopIndex
	int32_t ___currentScaleStopIndex_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UICanvasManager
struct UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UICanvasManager::MouseOverButton
	bool ___MouseOverButton_5;
	// UnityEngine.UI.Text UICanvasManager::PENameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PENameText_6;
	// UnityEngine.UI.Text UICanvasManager::ToolTipText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ToolTipText_7;
	// UnityEngine.RaycastHit UICanvasManager::rayHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___rayHit_8;
};

struct UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields
{
	// UICanvasManager UICanvasManager::GlobalAccess
	UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* ___GlobalAccess_4;
};

// UIManager
struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields
{
	// UIManager/HammerTapHandler UIManager::OnHammerTap
	HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* ___OnHammerTap_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Pool[]
struct PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A  : public RuntimeArray
{
	ALIGN_FIELD (8) Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* m_Items[1];

	inline Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mD53E280903384004D4304150552D50DD3F8C1F58 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
inline void List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UICanvasManager::UpdateToolTip(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___toolTipType0, const RuntimeMethod* method) ;
// System.Void UICanvasManager::ClearToolTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Void UICanvasManager::UIButtonClick(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___buttonTypeClicked0, const RuntimeMethod* method) ;
// System.String ParticleEffectsLibrary::GetCurrentPENameString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UICanvasManager::SpawnCurrentParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UICanvasManager::SelectPreviousPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Void UICanvasManager::SelectNextPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Void ParticleEffectsLibrary::PreviousParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) ;
// System.Void ParticleEffectsLibrary::NextParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// System.Void ParticleEffectsLibrary::SpawnParticleEffect(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionInWorldToSpawn0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Leaves>()
inline Leaves_t644729D0A7BD9C74994E76126850908A0138BE06* Component_GetComponent_TisLeaves_t644729D0A7BD9C74994E76126850908A0138BE06_mD1CEC2B4F4D42600BD0FB3BE1DC10B96FF5A4D30 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Leaves_t644729D0A7BD9C74994E76126850908A0138BE06* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Ball/HealthChangeHandler::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_inline (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method) ;
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// LevelData GameManager::get_CurrentLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* GameManager_get_CurrentLevel_m8A192C85E400A1DB9E53ED0A7CDF742347C57A7B_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleSprite_DOFade_m6AE51AD4E4655B3A03EE59353450C611725E6D1A (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766 (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* (*) (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___t0, ___action1, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<LevelData>::get_Item(System.Int32)
inline LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* (*) (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void GameManager::set_CurrentLevel(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_CurrentLevel_m467FC73118F6E920A455A487D2EBB8675E66270C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void Ball/HealthChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler__ctor_m80E8B07208B1EA1CD18BB15BD58D3FE916CC5102 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Ball::add_OnHealthChange(Ball/HealthChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_add_OnHealthChange_m8D63204D108839C5FCBC0766051A4A788C157E48 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* ___value0, const RuntimeMethod* method) ;
// System.Void UIManager/HammerTapHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HammerTapHandler__ctor_m036C046999336CB7C6433D47E8FA777F004F2D96 (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UIManager::add_OnHammerTap(UIManager/HammerTapHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_add_OnHammerTap_mB8967BFEEFF12C73C88798097D722711EA37D696 (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* ___value0, const RuntimeMethod* method) ;
// System.Void Ball::remove_OnHealthChange(Ball/HealthChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_remove_OnHealthChange_m072326789B8225B1497794743C4B93701C47C957 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* ___value0, const RuntimeMethod* method) ;
// System.Void UIManager::remove_OnHammerTap(UIManager/HammerTapHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_remove_OnHammerTap_mB19E9C1C67AE37F764D7032A16B0C223D1A95ACC (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::EnableInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_EnableInput_mE8CC7FF6E4A22C1381CEBBDAF259D95B928273C4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameManager::ClearElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ClearElements_mFBC2DC7A837307878B5C1ED32816F6EE7C351134 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// IPoolable PoolManager::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoolManager_Instantiate_m6DFB52DB575D85F64DEAEC66B9D0A90A9867B02A (String_t* ___gameObjectName0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Rings>()
inline Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* GameObject_GetComponent_TisRings_t15AA9F7F7C02B9A759B163A77358B64493F667DA_m048E02B6142169E68317A59AB620C057332BB087 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::InstantiateEnemyBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_InstantiateEnemyBall_m56EC2C21FA5420E6CACECB69EC2C1A4396FAF164 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void GameManager/InputHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_inline (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void GameManager::ShowMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowMenu_m6252DD32F4E645F8925C98D70FADD85D61445163 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameStart_m13D7CF637F648EE27334A03FF9B2132DA21A643B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void EnemyBall::PoolDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall_PoolDestroy_mA90A702AFBAD8C0709E3430F747040D177127F46 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<EnableInput>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputU3Ed__31__ctor_m5FE6E59338B11B5947AF1822BE084F25360756F5 (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<InstantiateEnemyBall>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateEnemyBallU3Ed__32__ctor_m6504658E14E1F8F879242BD6089F17BD5568B037 (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void Ball::AttackForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_AttackForward_mD4E98563A7897E3BFCA76604F3467FAAFA401CA3 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) ;
// System.Void GameManager/GameOverHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_inline (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method) ;
// System.Void GameManager::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelUp_m52E6CB2E7C0426C4BA7C2C69D4BD2CBFFE896FB1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<LevelData>::get_Count()
inline int32_t List_1_get_Count_m18577333F7379D8529FE97E6565703CE816DB25F_inline (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LevelData>::.ctor()
inline void List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor()
inline void List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_gshared)(__this, method);
}
// System.Void LevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData__ctor_m923000759B849E6F472A21ECEDD12006D85EDEDD (LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyBall>()
inline EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* GameObject_GetComponent_TisEnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38_mBFA1ED64C9CA734730C87B4432B0E9D53687120C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EnemyBall::SetCurrentPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall_SetCurrentPosition_m3D8A9E36EA399B064DA5F0A5D2E95760DEBE63F9 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, float ___angle0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void GameManager/InputHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler__ctor_m0FC0CE05D39AD3747F9CCA12D14F40B7B3B280F5 (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameManager::add_OnInput(GameManager/InputHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnInput_m7A4FFD6CF6933FB9AFEE2B1F11A8AC61CA8C5231 (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager/GameOverHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverHandler__ctor_mCE87DB3A9D587F469D51F0962BAA75F114C52948 (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GameManager::add_OnGameOver(GameManager/GameOverHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnGameOver_m088ADA539AD0ADCCD7606149C80B9F01EB97C64D (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::remove_OnInput(GameManager/InputHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnInput_m62C5C333711B9607C00DA8C536AADFD3672B4B2B (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::remove_OnGameOver(GameManager/GameOverHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnGameOver_mAEC9D7BF1A460CEC4AB996FAC313C85A47835425 (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>>(T,DG.Tweening.TweenCallback)
inline TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* (*) (TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___t0, ___action1, method);
}
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.ShortcutExtensions::DOKill(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShortcutExtensions_DOKill_m3F197E779AB6CA95FF3C4C2DD547B4B493E42D46 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___target0, bool ___complete1, const RuntimeMethod* method) ;
// System.Void GameManager::IncreaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_IncreaseScore_mC90BFC0FA7E37D5D4857A08D45151EC62964132C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void Rings::PoolDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_PoolDestroy_m4C198530DFBC8555C6E5126A411EF695E52CF475 (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) ;
// System.String Pool::get_ObjectName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pool_get_ObjectName_m6415B27B6C28252D5F6307B32D7E921AC44D4108_inline (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// IPoolable Pool::Instantiate(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pool_Instantiate_mC3699285021C7C8A02BFF0D25B225DF74E1547CC (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Pool::ClearOnScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_ClearOnScreen_m5A2AABCA7AAACFEE82C9E9D11655394BC27D919E (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<IPoolable>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA (List_1_t951EEA1FD675A7AC2515734A361670D068870191* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t951EEA1FD675A7AC2515734A361670D068870191*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<IPoolable>::get_Count()
inline int32_t List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_inline (List_1_t951EEA1FD675A7AC2515734A361670D068870191* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t951EEA1FD675A7AC2515734A361670D068870191*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<IPoolable>()
inline RuntimeObject* GameObject_GetComponent_TisIPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_m5C13A3050F8838FD24E423A53324FC88CE3A22CA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<IPoolable>::Add(T)
inline void List_1_Add_m0B8D5DF950C19F2EEFBBCBEB2ACA85184B226E4F_inline (List_1_t951EEA1FD675A7AC2515734A361670D068870191* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t951EEA1FD675A7AC2515734A361670D068870191*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<IPoolable>::.ctor()
inline void List_1__ctor_m4C4170D2B14B4395DB2999B54698236AFA991718 (List_1_t951EEA1FD675A7AC2515734A361670D068870191* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t951EEA1FD675A7AC2515734A361670D068870191*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXFireProjectile>()
inline ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ETFXProjectileScript>()
inline ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXButtonScript>()
inline ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EpicToonFX.ETFXFireProjectile::nextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXFireProjectile::previousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m4F2A0744FE106002EE26D12B6137FC21C019B932 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget::SpawnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ETFXProjectileScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript_Start_m0E1FB70AED6DE06208444A4B1EE0095D4495A5C0 (ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectileParticle = Instantiate(projectileParticle, transform.position, transform.rotation) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectileParticle_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___projectileParticle_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileParticle_5), (void*)L_5);
		// projectileParticle.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___projectileParticle_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// if (muzzleParticle)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___muzzleParticle_6;
		bool L_10;
		L_10 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_9, NULL);
		if (!L_10)
		{
			goto IL_0081;
		}
	}
	{
		// muzzleParticle = Instantiate(muzzleParticle, transform.position, transform.rotation) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___muzzleParticle_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_11, L_13, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___muzzleParticle_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muzzleParticle_6), (void*)L_16);
		// Destroy(muzzleParticle, 1.5f); // 2nd parameter is lifetime of effect in seconds
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___muzzleParticle_6;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_17, (1.5f), NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void ETFXProjectileScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript_FixedUpdate_m2FB7E63B404F5C701112656F5A4913E022A1553A (ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A460B57C708AAE5B3FE032970AB4EB08FDAB9B);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_6 = NULL;
	int32_t V_7 = 0;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_8 = NULL;
	{
		// if (GetComponent<Rigidbody>().velocity.magnitude != 0)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_4 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// transform.rotation = Quaternion.LookRotation(GetComponent<Rigidbody>().velocity); // Sets rotation to look at direction of movement
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_5, NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_6, NULL);
	}

IL_0036:
	{
		// if (transform.GetComponent<SphereCollider>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_8;
		L_8 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(L_7, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// radius = transform.GetComponent<SphereCollider>().radius;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_11;
		L_11 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(L_10, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		NullCheck(L_11);
		float L_12;
		L_12 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_11, NULL);
		V_1 = L_12;
		goto IL_0062;
	}

IL_005b:
	{
		// radius = colliderRadius;
		float L_13 = __this->___colliderRadius_7;
		V_1 = L_13;
	}

IL_0062:
	{
		// Vector3 direction = transform.GetComponent<Rigidbody>().velocity; // Gets the direction of the projectile, used for collision detection
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15;
		L_15 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_14, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_15, NULL);
		V_2 = L_16;
		// if (transform.GetComponent<Rigidbody>().useGravity)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18;
		L_18 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_17, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_18);
		bool L_19;
		L_19 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_18, NULL);
		if (!L_19)
		{
			goto IL_009b;
		}
	}
	{
		// direction += Physics.gravity * Time.deltaTime; // Accounts for gravity if enabled
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_23, NULL);
		V_2 = L_24;
	}

IL_009b:
	{
		// direction = direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_2 = L_25;
		// float detectionDistance = transform.GetComponent<Rigidbody>().velocity.magnitude * Time.deltaTime; // Distance of collision detection for this frame
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27;
		L_27 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_26, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_27, NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// if (Physics.SphereCast(transform.position, radius, direction, out hit, detectionDistance)) // Checks if collision will happen
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		float L_35 = V_3;
		bool L_36;
		L_36 = Physics_SphereCast_mD53E280903384004D4304150552D50DD3F8C1F58(L_32, L_33, L_34, (&V_0), L_35, NULL);
		if (!L_36)
		{
			goto IL_01ae;
		}
	}
	{
		// transform.position = hit.point + (hit.normal * collideOffset); // Move projectile to point of collision
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		float L_40 = __this->___collideOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_41, NULL);
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_42, NULL);
		// GameObject impactP = Instantiate(impactParticle, transform.position, Quaternion.FromToRotation(Vector3.up, hit.normal)) as GameObject; // Spawns impact effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___impactParticle_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_46, L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_43, L_45, L_48, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_5 = L_49;
		// ParticleSystem[] trails = GetComponentsInChildren<ParticleSystem>(); // Gets a list of particle systems, as we need to detach the trails
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_50;
		L_50 = Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D(__this, Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		V_6 = L_50;
		// for (int i = 1; i < trails.Length; i++) // Loop to cycle through found particle systems
		V_7 = 1;
		goto IL_017f;
	}

IL_013c:
	{
		// ParticleSystem trail = trails[i];
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_51 = V_6;
		int32_t L_52 = V_7;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_8 = L_54;
		// if (trail.gameObject.name.Contains("Trail"))
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_55 = V_8;
		NullCheck(L_55);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		NullCheck(L_56);
		String_t* L_57;
		L_57 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_56, NULL);
		NullCheck(L_57);
		bool L_58;
		L_58 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_57, _stringLiteralD8A460B57C708AAE5B3FE032970AB4EB08FDAB9B, NULL);
		if (!L_58)
		{
			goto IL_0179;
		}
	}
	{
		// trail.transform.SetParent(null); // Detaches the trail from the projectile
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_59 = V_8;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_59, NULL);
		NullCheck(L_60);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_60, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// Destroy(trail.gameObject, 2f); // Removes the trail after seconds
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_61 = V_8;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_62, (2.0f), NULL);
	}

IL_0179:
	{
		// for (int i = 1; i < trails.Length; i++) // Loop to cycle through found particle systems
		int32_t L_63 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_017f:
	{
		// for (int i = 1; i < trails.Length; i++) // Loop to cycle through found particle systems
		int32_t L_64 = V_7;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_65 = V_6;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_013c;
		}
	}
	{
		// Destroy(projectileParticle, 3f); // Removes particle effect after delay
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___projectileParticle_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_66, (3.0f), NULL);
		// Destroy(impactP, 3.5f); // Removes impact effect after delay
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_5;
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_67, (3.5f), NULL);
		// Destroy(gameObject); // Removes the projectile
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_68, NULL);
	}

IL_01ae:
	{
		// }
		return;
	}
}
// System.Void ETFXProjectileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript__ctor_mA40725837A6D1433D09D449D6AAFD1B47C127268 (ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* __this, const RuntimeMethod* method) 
{
	{
		// public float colliderRadius = 1f;
		__this->___colliderRadius_7 = (1.0f);
		// public float collideOffset = 0.15f;
		__this->___collideOffset_8 = (0.150000006f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ETFXSceneManager::LoadScene2DDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScene2DDemo_m166AEE719B3CBEC9FC515335DE96024A63A85DDE (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE8DBC7FFF52925F8AED0C5F50AEF43ABA6C6C36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_2ddemo");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralCE8DBC7FFF52925F8AED0C5F50AEF43ABA6C6C36, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneCards_mB6F24EFE58EF75B76ABA00ACEA57378F02431E05 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01228D97468F93F4C08D34049F3BE2138BFA15D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_cards");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral01228D97468F93F4C08D34049F3BE2138BFA15D8, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneCombat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneCombat_mCE714064D2C42D885FC23182E28D712841776A3D (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2A170901896DA9E535CB9AFD05D068A6DC3ED07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_combat");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF2A170901896DA9E535CB9AFD05D068A6DC3ED07, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneDecals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneDecals_mA158CAC129C42A88BEC4D62E13E95AAAAFFE6AFA (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35976FFCA294560D7E4C40F81B41248FED8AD19E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_decals");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral35976FFCA294560D7E4C40F81B41248FED8AD19E, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneDecals2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneDecals2_m184A79CC375CA61C1758EBAD3CAE31AB22910990 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5183CC718F042548CB17830F335CA1300798F98F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_decals2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5183CC718F042548CB17830F335CA1300798F98F, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneEmojis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneEmojis_m6B2D44847F224B852EE92930A1899AE0B668C82E (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D108E69F651AE4F1653BCDCAA8D2C79B865B23A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_emojis");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral9D108E69F651AE4F1653BCDCAA8D2C79B865B23A, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneEmojis2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneEmojis2_m666659BC62458A3476CB5FAEDFE82DAAB0767348 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48328E12C38ADB209E5965BAF23D6A254F32EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_emojis2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralA48328E12C38ADB209E5965BAF23D6A254F32EAA, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneExplosions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneExplosions_mD769ACD162F37878BA03F1087C3F54C452218EDB (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA6337DF8B49626C6F4D96CF07FF45586BDA214);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_explosions");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral6FA6337DF8B49626C6F4D96CF07FF45586BDA214, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneExplosions2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneExplosions2_m5DAA46AB9C03E980D042D43A9E4DF0098239A9E7 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral551232956AEF66634A14B2FA7D5E43036EBAE5AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_explosions2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral551232956AEF66634A14B2FA7D5E43036EBAE5AE, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFire_m265A0FE056A7394B2703C490DA983BAD77088070 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16B50E8F5851EEBF64831B0EAFD15BD9FCC57686);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fire");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral16B50E8F5851EEBF64831B0EAFD15BD9FCC57686, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFire2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFire2_mC60D6D1346670AFB87EBF57CB7A9E3EF006FBABE (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1679F19DA567DC41D2778CF07FA2C003E100369);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fire2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralD1679F19DA567DC41D2778CF07FA2C003E100369, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFire3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFire3_m612F02454CCBA7586A07E0F9CD22036A781D748C (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF246C2C30DD050AD1D57A21AAC461FA49F6D42E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fire3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralDF246C2C30DD050AD1D57A21AAC461FA49F6D42E, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFireworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFireworks_m7A3BDB3A9EFBD640FDB55EFF76AECBA710D67DF4 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DDB709CD0A40DF83139466BDB36786AAE75EE8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fireworks");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8DDB709CD0A40DF83139466BDB36786AAE75EE8F, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFlares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFlares_mBA39D71D779C26CC664E29DFF6E271A129948AD8 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF0887D90DE9B75255B1C019432AC465E5794CEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_flares");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralEF0887D90DE9B75255B1C019432AC465E5794CEB, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMagic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic_m4FD8415183E84CE25BEBBA3F8F11C51837971543 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral542C20BA146CC0FFF0BACCD64CCB27638EE2C535);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_magic");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral542C20BA146CC0FFF0BACCD64CCB27638EE2C535, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMagic2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic2_mE2E16D49C06756F213CF11AB7B4A41CA9B4F150C (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF872ADFA6D009455788B01E0039910ABAA9AEE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_magic2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralBF872ADFA6D009455788B01E0039910ABAA9AEE9, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMagic3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic3_mD289F0F5997DB1F43766BA61FD263FC4394A664B (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5F1D79B12F1C52B9B1E470CFFAFFA221390695);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_magic3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral2A5F1D79B12F1C52B9B1E470CFFAFFA221390695, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMainDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMainDemo_m70F4C7C5EE4597D9E841C29AECCFD0CA81C28E37 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5046BA9E70AC20B6F9AC56F496268F4CA54CB71D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_maindemo");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral5046BA9E70AC20B6F9AC56F496268F4CA54CB71D, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMissiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMissiles_mB99EAF3004F5DEA20BE35072805A10ECA57448E7 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4907D619835F2CCA72462CBD2E9117F3D50AA239);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_missiles");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4907D619835F2CCA72462CBD2E9117F3D50AA239, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePortals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePortals_m1B2413CADCA92522BDDD627784DF16FD60D2F689 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FA3643AE00785D4AAC8D94F75DBEC31C591CD8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_portals");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3FA3643AE00785D4AAC8D94F75DBEC31C591CD8C, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePortals2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePortals2_m3ACA5707C45EFFA6CF56DF4C46FA463F5A0C8234 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3567C3794ABE76DD48E35F1DF7FC710B55520C9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_portals2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral3567C3794ABE76DD48E35F1DF7FC710B55520C9E, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePowerups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePowerups_m17C376EDD497476395E80F44059E697969F02E45 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral342FE8A631B1691BFAFBC5238E49C17B7A0188F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_powerups");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral342FE8A631B1691BFAFBC5238E49C17B7A0188F8, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePowerups2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePowerups2_m794E525131173D846FF3E93E8D5EE43C2ED1F0E8 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF7A265B2E2742BE4BF8DF078EB839FD342B9E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_powerups2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7DF7A265B2E2742BE4BF8DF078EB839FD342B9E9, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneSparkles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSparkles_m88CDB8CDE008657DA1B5067FCA0DC212FD33F5FF (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55DCD3C41D65D7C0C6131E9F887E925D3D93D999);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_sparkles");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral55DCD3C41D65D7C0C6131E9F887E925D3D93D999, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneSwordCombat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSwordCombat_m9894108F9A1F0F0F3C41E949B971C3FC69D9F18E (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE720B9F5A19BBE91E81F3577B920642AEA974C49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_swordcombat");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE720B9F5A19BBE91E81F3577B920642AEA974C49, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneSwordCombat2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSwordCombat2_m0DB358EDEA5A3878935D46106295FE0896252325 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2940DE8D75B2E8B88DD329CDDC03D118CF148C79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_swordcombat2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral2940DE8D75B2E8B88DD329CDDC03D118CF148C79, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMoney_mBECE1A285111F033F4C07471B6E4C6D0D23A4BF4 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5B46BB36C025A58C6B5C47AF145C69CC35BB955);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_money");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralE5B46BB36C025A58C6B5C47AF145C69CC35BB955, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneHealing_mBEC91CD262B682CB6FCBDCA9CF9547E9B487B197 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAA90AC733B7E7E42D2C8D1D639DDE68DFECD7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_healing");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralBAAA90AC733B7E7E42D2C8D1D639DDE68DFECD7F, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneWind_mA896516E55DAF0CB0D04ECED1EFFDBEBA833FF69 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E9A7309AEEF5B192FD019E712D2973C5AF4E319);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_wind");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral2E9A7309AEEF5B192FD019E712D2973C5AF4E319, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_Update_m837F7099F9821C1978177139C1DC56D8DDFC132E (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.L))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)108), NULL);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// GUIHide = !GUIHide;
		bool L_1 = __this->___GUIHide_4;
		__this->___GUIHide_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// if (GUIHide)
		bool L_2 = __this->___GUIHide_4;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// GameObject.Find("CanvasSceneSelect").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162, NULL);
		NullCheck(L_3);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_3, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		goto IL_004c;
	}

IL_0037:
	{
		// GameObject.Find("CanvasSceneSelect").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162, NULL);
		NullCheck(L_5);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6;
		L_6 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_5, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
	}

IL_004c:
	{
		// if(Input.GetKeyDown(KeyCode.J))
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)106), NULL);
		if (!L_7)
		{
			goto IL_0098;
		}
	}
	{
		// GUIHide2 = !GUIHide2;
		bool L_8 = __this->___GUIHide2_5;
		__this->___GUIHide2_5 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// if (GUIHide2)
		bool L_9 = __this->___GUIHide2_5;
		if (!L_9)
		{
			goto IL_0083;
		}
	}
	{
		// GameObject.Find("Canvas").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		NullCheck(L_10);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11;
		L_11 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_10, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_11);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		goto IL_0098;
	}

IL_0083:
	{
		// GameObject.Find("Canvas").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		NullCheck(L_12);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13;
		L_13 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_12, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
	}

IL_0098:
	{
		// if(Input.GetKeyDown(KeyCode.H))
		bool L_14;
		L_14 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)104), NULL);
		if (!L_14)
		{
			goto IL_00e4;
		}
	}
	{
		// GUIHide3 = !GUIHide3;
		bool L_15 = __this->___GUIHide3_6;
		__this->___GUIHide3_6 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		// if (GUIHide3)
		bool L_16 = __this->___GUIHide3_6;
		if (!L_16)
		{
			goto IL_00cf;
		}
	}
	{
		// GameObject.Find("ParticleSysDisplayCanvas").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903, NULL);
		NullCheck(L_17);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_18;
		L_18 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_17, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_18);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
		goto IL_00e4;
	}

IL_00cf:
	{
		// GameObject.Find("ParticleSysDisplayCanvas").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903, NULL);
		NullCheck(L_19);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_20;
		L_20 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_19, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)1, NULL);
	}

IL_00e4:
	{
		// if(Input.GetKeyDown(KeyCode.K))
		bool L_21;
		L_21 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)107), NULL);
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// GUIHide4 = !GUIHide4;
		bool L_22 = __this->___GUIHide4_7;
		__this->___GUIHide4_7 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		// if (GUIHide3)
		bool L_23 = __this->___GUIHide3_6;
		if (!L_23)
		{
			goto IL_011a;
		}
	}
	{
		// GameObject.Find("CanvasTips").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A, NULL);
		NullCheck(L_24);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_25;
		L_25 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_24, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)0, NULL);
		return;
	}

IL_011a:
	{
		// GameObject.Find("CanvasTips").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A, NULL);
		NullCheck(L_26);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_27;
		L_27 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_26, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_27);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)1, NULL);
	}

IL_012f:
	{
		// }
		return;
	}
}
// System.Void ETFXSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager__ctor_m60E2AAFF19268179EAC55C8580C43FF2EB93FEFB (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ParticleEffectsLibrary::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_Awake_mF2AC0D83644D9429E668B1603C7F23D803AEEA46 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B98DFD193C6BB1F1EE1FC7E48E5D716980E761);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36E2206A2F7EED468C9DBF8C86A794A7BEF655A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalAccess = this;
		((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4), (void*)__this);
		// currentActivePEList = new List<Transform> ();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___currentActivePEList_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentActivePEList_12), (void*)L_0);
		// TotalEffects = ParticleEffectPrefabs.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___ParticleEffectPrefabs_10;
		NullCheck(L_1);
		__this->___TotalEffects_5 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// CurrentParticleEffectNum = 1;
		__this->___CurrentParticleEffectNum_7 = 1;
		// if (ParticleEffectSpawnOffsets.Length != TotalEffects) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___ParticleEffectSpawnOffsets_8;
		NullCheck(L_2);
		int32_t L_3 = __this->___TotalEffects_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)L_3)))
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError ("ParticleEffectsLibrary-ParticleEffectSpawnOffset: Not all arrays match length, double check counts.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB4B98DFD193C6BB1F1EE1FC7E48E5D716980E761, NULL);
	}

IL_0040:
	{
		// if (ParticleEffectPrefabs.Length != TotalEffects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___ParticleEffectPrefabs_10;
		NullCheck(L_4);
		int32_t L_5 = __this->___TotalEffects_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)L_5)))
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogError ("ParticleEffectsLibrary-ParticleEffectPrefabs: Not all arrays match length, double check counts.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC36E2206A2F7EED468C9DBF8C86A794A7BEF655A, NULL);
	}

IL_005a:
	{
		// effectNameString = ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___ParticleEffectPrefabs_10;
		int32_t L_9 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_7;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t* L_15 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		int32_t* L_19 = (&__this->___TotalEffects_5);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_22;
		L_22 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_21, NULL);
		__this->___effectNameString_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)L_22);
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_Start_mEB46C3D6FAF9CDCE0C134F6E807DBF702519CDC9 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String ParticleEffectsLibrary::GetCurrentPENameString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleEffectPrefabs_10;
		int32_t L_3 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		int32_t* L_9 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t* L_13 = (&__this->___TotalEffects_5);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		return L_16;
	}
}
// System.Void ParticleEffectsLibrary::PreviousParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] == 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___ParticleEffectLifetimes_9;
		int32_t L_1 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// if (currentActivePEList.Count > 0) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___currentActivePEList_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_4, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		V_0 = 0;
		goto IL_0054;
	}

IL_0026:
	{
		// if (currentActivePEList [i] != null) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_6 = __this->___currentActivePEList_12;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_6, L_7, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// Destroy (currentActivePEList [i].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___currentActivePEList_12;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_10, L_11, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_15 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_16 = __this->___currentActivePEList_12;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_16, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0026;
		}
	}
	{
		// currentActivePEList.Clear ();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_18 = __this->___currentActivePEList_12;
		NullCheck(L_18);
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_18, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (CurrentParticleEffectIndex > 0) {
		int32_t L_19 = __this->___CurrentParticleEffectIndex_6;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// CurrentParticleEffectIndex -= 1;
		int32_t L_20 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		goto IL_0094;
	}

IL_0086:
	{
		// CurrentParticleEffectIndex = TotalEffects - 1;
		int32_t L_21 = __this->___TotalEffects_5;
		__this->___CurrentParticleEffectIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0094:
	{
		// CurrentParticleEffectNum = CurrentParticleEffectIndex + 1;
		int32_t L_22 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectNum_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// effectNameString = ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___ParticleEffectPrefabs_10;
		int32_t L_26 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		String_t* L_29;
		L_29 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_28, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_24;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		int32_t* L_32 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		int32_t* L_36 = (&__this->___TotalEffects_5);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_36, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_35;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_39;
		L_39 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_38, NULL);
		__this->___effectNameString_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)L_39);
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::NextParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] == 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___ParticleEffectLifetimes_9;
		int32_t L_1 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// if (currentActivePEList.Count > 0) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___currentActivePEList_12;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_4, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		V_0 = 0;
		goto IL_0054;
	}

IL_0026:
	{
		// if (currentActivePEList [i] != null) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_6 = __this->___currentActivePEList_12;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_6, L_7, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// Destroy (currentActivePEList [i].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___currentActivePEList_12;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_10, L_11, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_15 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_16 = __this->___currentActivePEList_12;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_16, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0026;
		}
	}
	{
		// currentActivePEList.Clear ();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_18 = __this->___currentActivePEList_12;
		NullCheck(L_18);
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_18, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (CurrentParticleEffectIndex < TotalEffects - 1) {
		int32_t L_19 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_20 = __this->___TotalEffects_5;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_008d;
		}
	}
	{
		// CurrentParticleEffectIndex += 1;
		int32_t L_21 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectIndex_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_0094;
	}

IL_008d:
	{
		// CurrentParticleEffectIndex = 0;
		__this->___CurrentParticleEffectIndex_6 = 0;
	}

IL_0094:
	{
		// CurrentParticleEffectNum = CurrentParticleEffectIndex + 1;
		int32_t L_22 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectNum_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// effectNameString = ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___ParticleEffectPrefabs_10;
		int32_t L_26 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		String_t* L_29;
		L_29 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_28, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_24;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		int32_t* L_32 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		int32_t* L_36 = (&__this->___TotalEffects_5);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_36, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_35;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_39;
		L_39 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_38, NULL);
		__this->___effectNameString_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)L_39);
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::SpawnParticleEffect(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionInWorldToSpawn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_2 = NULL;
	{
		// spawnPosition = positionInWorldToSpawn + ParticleEffectSpawnOffsets[CurrentParticleEffectIndex];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___positionInWorldToSpawn0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___ParticleEffectSpawnOffsets_8;
		int32_t L_2 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_4, NULL);
		__this->___spawnPosition_13 = L_5;
		// GameObject newParticleEffect = GameObject.Instantiate(ParticleEffectPrefabs[CurrentParticleEffectIndex], spawnPosition, ParticleEffectPrefabs[CurrentParticleEffectIndex].transform.rotation) as GameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___ParticleEffectPrefabs_10;
		int32_t L_7 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___spawnPosition_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___ParticleEffectPrefabs_10;
		int32_t L_12 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_9, L_10, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_17;
		// newParticleEffect.name = "PE_" + ParticleEffectPrefabs[CurrentParticleEffectIndex];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___ParticleEffectPrefabs_10;
		int32_t L_20 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22;
		G_B1_0 = L_23;
		G_B1_1 = _stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D;
		G_B1_2 = L_18;
		if (L_23)
		{
			G_B2_0 = L_23;
			G_B2_1 = _stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D;
			G_B2_2 = L_18;
			goto IL_0067;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_006c;
	}

IL_0067:
	{
		NullCheck(G_B2_0);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_24;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_006c:
	{
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_2);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B3_2, L_25, NULL);
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] == 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = __this->___ParticleEffectLifetimes_9;
		int32_t L_27 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((float)L_29) == ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// currentActivePEList.Add (newParticleEffect.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_30 = __this->___currentActivePEList_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_0;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		NullCheck(L_30);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_30, L_32, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_009b:
	{
		// currentActivePEList.Add(newParticleEffect.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_33 = __this->___currentActivePEList_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_0;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		NullCheck(L_33);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_33, L_35, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] != 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = __this->___ParticleEffectLifetimes_9;
		int32_t L_37 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		float L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		if ((((float)L_39) == ((float)(0.0f))))
		{
			goto IL_00d3;
		}
	}
	{
		// Destroy(newParticleEffect, ParticleEffectLifetimes[CurrentParticleEffectIndex]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = __this->___ParticleEffectLifetimes_9;
		int32_t L_42 = __this->___CurrentParticleEffectIndex_6;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		float L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_40, L_44, NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary__ctor_m79285CB8E8EC1C6689AC297F476DC97D2B19620B (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string effectNameString = "";
		__this->___effectNameString_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private Vector3 spawnPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___spawnPosition_13 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PEButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_Start_mBAE6F283CF1BF849003C4A07636457CD26794A4A (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myButton = gameObject.GetComponent<Button> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___myButton_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myButton_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void PEButtonScript::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnPointerEnter_m13D52C4BBB849EEFBFE03A6150CCB45CBF76B661 (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.MouseOverButton = true;
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_0 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		L_0->___MouseOverButton_5 = (bool)1;
		// UICanvasManager.GlobalAccess.UpdateToolTip (ButtonType);
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_1 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		int32_t L_2 = __this->___ButtonType_5;
		NullCheck(L_1);
		UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PEButtonScript::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnPointerExit_m74437A2567B5F27EA507688085E363B1DA9B9DD7 (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.MouseOverButton = false;
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_0 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		L_0->___MouseOverButton_5 = (bool)0;
		// UICanvasManager.GlobalAccess.ClearToolTip ();
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_1 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_1);
		UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C(L_1, NULL);
		// }
		return;
	}
}
// System.Void PEButtonScript::OnButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnButtonClicked_mAAE0BE73FD4EE3BCE49D05419C3CF9C90CB3F6B1 (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.UIButtonClick(ButtonType);
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_0 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		int32_t L_1 = __this->___ButtonType_5;
		NullCheck(L_0);
		UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PEButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript__ctor_mF6CD7E0AB9B93D2AC0CD5B782A58ADBB40FE968E (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UICanvasManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Awake_mC3050903833E679EAD258432288E2E1AEF262F90 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalAccess = this;
		((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4), (void*)__this);
		// }
		return;
	}
}
// System.Void UICanvasManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Start_mF34E919B169144CB9C8666C9A8DCE009F5E6BD68 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PENameText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___PENameText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// PENameText.text = ParticleEffectsLibrary.GlobalAccess.GetCurrentPENameString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___PENameText_6;
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_3 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Update_mFD93AA63AD21FF943446DAD0C8BF3AD4275CD482 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	{
		// if (!MouseOverButton) {
		bool L_0 = __this->___MouseOverButton_5;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// if (Input.GetMouseButtonUp (0)) {
		bool L_1;
		L_1 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// SpawnCurrentParticleEffect();
		UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5(__this, NULL);
	}

IL_0016:
	{
		// if (Input.GetKeyUp (KeyCode.A)) {
		bool L_2;
		L_2 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)97), NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// SelectPreviousPE ();
		UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781(__this, NULL);
	}

IL_0025:
	{
		// if (Input.GetKeyUp (KeyCode.D)) {
		bool L_3;
		L_3 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)100), NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// SelectNextPE ();
		UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::UpdateToolTip(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___toolTipType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45F58255B95DE1B8D542021758DDAB3E1F464AE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F6D9789D9A0D7483B15CB01BD0BEA1419B65721);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ToolTipText != null) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___ToolTipText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (toolTipType == ButtonTypes.Previous) {
		int32_t L_2 = ___toolTipType0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// ToolTipText.text = "Select Previous Particle Effect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___ToolTipText_7;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral45F58255B95DE1B8D542021758DDAB3E1F464AE1);
		return;
	}

IL_0023:
	{
		// else if (toolTipType == ButtonTypes.Next) {
		int32_t L_4 = ___toolTipType0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}
	{
		// ToolTipText.text = "Select Next Particle Effect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___ToolTipText_7;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral4F6D9789D9A0D7483B15CB01BD0BEA1419B65721);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::ClearToolTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ToolTipText != null) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___ToolTipText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// ToolTipText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ToolTipText_7;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::SelectPreviousPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.PreviousParticleEffect();
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_0 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830(L_0, NULL);
		// if (PENameText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___PENameText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// PENameText.text = ParticleEffectsLibrary.GlobalAccess.GetCurrentPENameString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___PENameText_6;
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_4 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::SelectNextPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.NextParticleEffect();
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_0 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D(L_0, NULL);
		// if (PENameText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___PENameText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// PENameText.text = ParticleEffectsLibrary.GlobalAccess.GetCurrentPENameString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___PENameText_6;
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_4 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::SpawnCurrentParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Ray mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if (Physics.Raycast (mouseRay, out rayHit)) {
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___rayHit_8);
		bool L_4;
		L_4 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.SpawnParticleEffect (rayHit.point);
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_5 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___rayHit_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_6, NULL);
		NullCheck(L_5);
		ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57(L_5, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::UIButtonClick(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___buttonTypeClicked0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___buttonTypeClicked0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___buttonTypeClicked0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0009:
	{
		// SelectPreviousPE();
		UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781(__this, NULL);
		// break;
		return;
	}

IL_0010:
	{
		// SelectNextPE();
		UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4(__this, NULL);
		// }
		return;
	}
}
// System.Void UICanvasManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager__ctor_mB927EAA45E53F674F466CFDF2205E5A29ED838DD (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Ball::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Start_m6E8CBDA3753768BAFE8CE82AD74B01E8355C50D3 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// radius = GameManager.instance.gameRadius;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_0);
		float L_1 = L_0->___gameRadius_17;
		__this->___radius_5 = L_1;
		// }
		return;
	}
}
// System.Void Ball::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Update_mE1E2A0FEFCA0034896BB36FD9C75718E4D14E3B2 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (move && (GameManager.instance.gameState == GameManager.GameState.InGame))
		bool L_0 = __this->___move_7;
		if (!L_0)
		{
			goto IL_00aa;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_1);
		int32_t L_2 = L_1->___gameState_26;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_00aa;
		}
	}
	{
		// speed = GameManager.instance.playerSpeed;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_3);
		float L_4 = L_3->___playerSpeed_12;
		__this->___speed_4 = L_4;
		// currentAngle += speed * Time.deltaTime;
		float L_5 = __this->___currentAngle_6;
		float L_6 = __this->___speed_4;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currentAngle_6 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7))));
		// transform.position = new Vector2(Mathf.Cos(currentAngle), Mathf.Sin(currentAngle)) * GameManager.instance.gameRadius;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = __this->___currentAngle_6;
		float L_10;
		L_10 = cosf(L_9);
		float L_11 = __this->___currentAngle_6;
		float L_12;
		L_12 = sinf(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), L_10, L_12, /*hidden argument*/NULL);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_14 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_14);
		float L_15 = L_14->___gameRadius_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_13, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_16, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_17, NULL);
		// transform.eulerAngles = new Vector3(0, 0, Mathf.Rad2Deg * currentAngle - 90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_19 = __this->___currentAngle_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.0f), (0.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((57.2957802f), L_19)), (90.0f))), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_18, L_20, NULL);
	}

IL_00aa:
	{
		// Vector3 forward = transform.TransformDirection(Vector3.left);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_21, L_22, NULL);
		V_0 = L_23;
		// Debug.DrawRay(transform.position, forward, Color.green);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_25, L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Void Ball::AttackForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_AttackForward_mD4E98563A7897E3BFCA76604F3467FAAFA401CA3 (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 forward = transform.TransformDirection(Vector3.left);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_0, L_1, NULL);
		V_0 = L_2;
		// Debug.DrawRay(transform.position, forward, Color.green);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_4, L_5, L_6, NULL);
		// RaycastHit2D hit = Physics2D.Raycast(transform.position , forward *2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, (2.0f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_13;
		L_13 = Physics2D_Raycast_mBECD869F0788D0B0E665BBA3611362E6D5CD2947(L_9, L_12, NULL);
		// }
		return;
	}
}
// System.Void Ball::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_OnTriggerEnter2D_mD6B53B6FDB2D51D00FAAEC462DE2613928C3A81C (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLeaves_t644729D0A7BD9C74994E76126850908A0138BE06_mD1CEC2B4F4D42600BD0FB3BE1DC10B96FF5A4D30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8E0ECA9F25F385C1FA3517D8C8806DD14A52158);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// if (collision.GetComponent<Leaves>())
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		NullCheck(L_0);
		Leaves_t644729D0A7BD9C74994E76126850908A0138BE06* L_1;
		L_1 = Component_GetComponent_TisLeaves_t644729D0A7BD9C74994E76126850908A0138BE06_mD1CEC2B4F4D42600BD0FB3BE1DC10B96FF5A4D30(L_0, Component_GetComponent_TisLeaves_t644729D0A7BD9C74994E76126850908A0138BE06_mD1CEC2B4F4D42600BD0FB3BE1DC10B96FF5A4D30_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_003e;
		}
	}
	{
		// Debug.Log("Leaf: " + collision.gameObject);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___collision0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4;
		G_B2_0 = L_5;
		G_B2_1 = _stringLiteralD8E0ECA9F25F385C1FA3517D8C8806DD14A52158;
		if (L_5)
		{
			G_B3_0 = L_5;
			G_B3_1 = _stringLiteralD8E0ECA9F25F385C1FA3517D8C8806DD14A52158;
			goto IL_001f;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		goto IL_0024;
	}

IL_001f:
	{
		NullCheck(G_B3_0);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B3_0);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
	}

IL_0024:
	{
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// OnHealthChange(-25);
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_8 = ((Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_StaticFields*)il2cpp_codegen_static_fields_for(Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var))->___OnHealthChange_8;
		NullCheck(L_8);
		HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_inline(L_8, (-25.0f), NULL);
		return;
	}

IL_003e:
	{
		// speed = 0;
		__this->___speed_4 = (0.0f);
		// GameManager.instance.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_9 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_9);
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_9, NULL);
		// }
		return;
	}
}
// System.Void Ball::add_OnHealthChange(Ball/HealthChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_add_OnHealthChange_m8D63204D108839C5FCBC0766051A4A788C157E48 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* V_0 = NULL;
	HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* V_1 = NULL;
	HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* V_2 = NULL;
	{
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_0 = ((Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_StaticFields*)il2cpp_codegen_static_fields_for(Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var))->___OnHealthChange_8;
		V_0 = L_0;
	}

IL_0006:
	{
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_1 = V_0;
		V_1 = L_1;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_2 = V_1;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)CastclassSealed((RuntimeObject*)L_4, HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var));
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_5 = V_2;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_6 = V_1;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_7;
		L_7 = InterlockedCompareExchangeImpl<HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*>((&((Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_StaticFields*)il2cpp_codegen_static_fields_for(Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var))->___OnHealthChange_8), L_5, L_6);
		V_0 = L_7;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_8 = V_0;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_9 = V_1;
		if ((!(((RuntimeObject*)(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)L_8) == ((RuntimeObject*)(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Ball::remove_OnHealthChange(Ball/HealthChangeHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_remove_OnHealthChange_m072326789B8225B1497794743C4B93701C47C957 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* V_0 = NULL;
	HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* V_1 = NULL;
	HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* V_2 = NULL;
	{
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_0 = ((Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_StaticFields*)il2cpp_codegen_static_fields_for(Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var))->___OnHealthChange_8;
		V_0 = L_0;
	}

IL_0006:
	{
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_1 = V_0;
		V_1 = L_1;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_2 = V_1;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)CastclassSealed((RuntimeObject*)L_4, HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var));
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_5 = V_2;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_6 = V_1;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_7;
		L_7 = InterlockedCompareExchangeImpl<HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*>((&((Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_StaticFields*)il2cpp_codegen_static_fields_for(Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B_il2cpp_TypeInfo_var))->___OnHealthChange_8), L_5, L_6);
		V_0 = L_7;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_8 = V_0;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_9 = V_1;
		if ((!(((RuntimeObject*)(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)L_8) == ((RuntimeObject*)(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Ball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball__ctor_mDFF93D8FA13BD70DF4F2FA2B9B402E3B10BD6EDC (Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* __this, const RuntimeMethod* method) 
{
	{
		// private bool move = true;
		__this->___move_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_Multicast(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* currentDelegate = reinterpret_cast<HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___change0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_OpenInst(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___change0, method);
}
void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_OpenStatic(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___change0, method);
}
void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_OpenStaticInvoker(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< float >::Invoke(__this->___method_ptr_0, method, NULL, ___change0);
}
void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_ClosedStaticInvoker(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___change0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___change0);

}
// System.Void Ball/HealthChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler__ctor_m80E8B07208B1EA1CD18BB15BD58D3FE916CC5102 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_Multicast;
}
// System.Void Ball/HealthChangeHandler::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___change0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Ball/HealthChangeHandler::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthChangeHandler_BeginInvoke_mAE71F716DF453EC1072C7D3C20EC58699DB00F74 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___change0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Ball/HealthChangeHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthChangeHandler_EndInvoke_m132734C3834645CA831937D8DCB6097AC9603CF9 (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyBall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall_Update_mFD2B72EB6F998793BEDD99E9ED4D1A767C28EC3F (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance.gameState == GameManager.GameState.InGame)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_0);
		int32_t L_1 = L_0->___gameState_26;
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_008a;
		}
	}
	{
		// speed = GameManager.instance.CurrentLevel.enemySpeed;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_2);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_3;
		L_3 = GameManager_get_CurrentLevel_m8A192C85E400A1DB9E53ED0A7CDF742347C57A7B_inline(L_2, NULL);
		NullCheck(L_3);
		float L_4 = L_3->___enemySpeed_5;
		__this->___speed_4 = L_4;
		// currentAngle += speed * Time.deltaTime;
		float L_5 = __this->___currentAngle_6;
		float L_6 = __this->___speed_4;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currentAngle_6 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7))));
		// transform.position = new Vector2(Mathf.Cos(currentAngle), Mathf.Sin(currentAngle)) * radius;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_9 = __this->___currentAngle_6;
		float L_10;
		L_10 = cosf(L_9);
		float L_11 = __this->___currentAngle_6;
		float L_12;
		L_12 = sinf(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), L_10, L_12, /*hidden argument*/NULL);
		float L_14 = __this->___radius_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_15, NULL);
		NullCheck(L_8);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_16, NULL);
		// if (!GetComponent<SpriteRenderer>().enabled)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17;
		L_17 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_17);
		bool L_18;
		L_18 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_17, NULL);
		if (L_18)
		{
			goto IL_008a;
		}
	}
	{
		// GetComponent<SpriteRenderer>().enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19;
		L_19 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_19);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_19, (bool)1, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void EnemyBall::PoolInstantiate(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall_PoolInstantiate_m7744645DFA83B89677AAFC944BF6E53FB5D60980 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpriteRenderer sprite = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// radius = GameManager.instance.gameRadius;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_2);
		float L_3 = L_2->___gameRadius_17;
		__this->___radius_5 = L_3;
		// sprite.color = new Color(255, 255, 255, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (255.0f), (255.0f), (255.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void EnemyBall::SetCurrentPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall_SetCurrentPosition_m3D8A9E36EA399B064DA5F0A5D2E95760DEBE63F9 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, float ___angle0, const RuntimeMethod* method) 
{
	{
		// currentAngle = angle;
		float L_0 = ___angle0;
		__this->___currentAngle_6 = L_0;
		// transform.position = new Vector2(Mathf.Cos(currentAngle), Mathf.Sin(currentAngle)) * radius;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_2 = __this->___currentAngle_6;
		float L_3;
		L_3 = cosf(L_2);
		float L_4 = __this->___currentAngle_6;
		float L_5;
		L_5 = sinf(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_3, L_5, /*hidden argument*/NULL);
		float L_7 = __this->___radius_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_9, NULL);
		// }
		return;
	}
}
// System.Void EnemyBall::PoolDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall_PoolDestroy_mA90A702AFBAD8C0709E3430F747040D177127F46 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyBall_U3CPoolDestroyU3Eb__6_0_m087CF02A7FE1BE7EE8272580E4C7B665EF76EC7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<SpriteRenderer>().DOFade(0, 0.1f).OnComplete(() => gameObject.SetActive(false));
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_1;
		L_1 = DOTweenModuleSprite_DOFade_m6AE51AD4E4655B3A03EE59353450C611725E6D1A(L_0, (0.0f), (0.100000001f), NULL);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_2 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_2, __this, (intptr_t)((void*)EnemyBall_U3CPoolDestroyU3Eb__6_0_m087CF02A7FE1BE7EE8272580E4C7B665EF76EC7B_RuntimeMethod_var), NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_3;
		L_3 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766(L_1, L_2, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean EnemyBall::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyBall_IsAlive_mB8C3EAB1C5CC68E3DD457584E496F4BADDBCDB29 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, const RuntimeMethod* method) 
{
	{
		// return gameObject.activeSelf;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.GameObject EnemyBall::GetGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemyBall_GetGameObject_m732F7B2CC0848018DA78C935ECEDD12EA9BA7E17 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, const RuntimeMethod* method) 
{
	{
		// return gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
	}
}
// System.Void EnemyBall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall__ctor_m5EE4919D5ACA3D9D33D4B6BEDDBDA4980A3B7864 (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, const RuntimeMethod* method) 
{
	{
		// public float currentAngle = 90;
		__this->___currentAngle_6 = (90.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void EnemyBall::<PoolDestroy>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyBall_U3CPoolDestroyU3Eb__6_0_m087CF02A7FE1BE7EE8272580E4C7B665EF76EC7B (EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* __this, const RuntimeMethod* method) 
{
	{
		// GetComponent<SpriteRenderer>().DOFade(0, 0.1f).OnComplete(() => gameObject.SetActive(false));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LevelData GameManager::get_CurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* GameManager_get_CurrentLevel_m8A192C85E400A1DB9E53ED0A7CDF742347C57A7B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// return currentLevel;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_0 = __this->___currentLevel_21;
		return L_0;
	}
}
// System.Void GameManager::set_CurrentLevel(LevelData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_CurrentLevel_m467FC73118F6E920A455A487D2EBB8675E66270C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLevel = value;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_0 = ___value0;
		__this->___currentLevel_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLevel_21), (void*)L_0);
		// playerSpeed = levels[currentLevelCount].playerSpeed;
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_1 = __this->___levels_19;
		int32_t L_2 = __this->___currentLevelCount_7;
		NullCheck(L_1);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_3;
		L_3 = List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA(L_1, L_2, List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var);
		NullCheck(L_3);
		float L_4 = L_3->___playerSpeed_6;
		__this->___playerSpeed_12 = L_4;
		// nextLevel = levels[currentLevelCount + 1];
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_5 = __this->___levels_19;
		int32_t L_6 = __this->___currentLevelCount_7;
		NullCheck(L_5);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_7;
		L_7 = List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var);
		__this->___nextLevel_24 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextLevel_24), (void*)L_7);
		// }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25), (void*)__this);
		// CurrentLevel = levels[0];
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_0 = __this->___levels_19;
		NullCheck(L_0);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_1;
		L_1 = List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA(L_0, 0, List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var);
		GameManager_set_CurrentLevel_m467FC73118F6E920A455A487D2EBB8675E66270C(__this, L_1, NULL);
		// bgm.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___bgm_13;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnEnable_mCBA3C942196F2FE284CA416B26833E78468F635E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnHammerTap_m33ADB2DE1E01077D861BDC66208C89964BD9D45D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnHealthChange_m0CDF20434DCE9CF08C4061AB2889965C3127CA7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Ball.OnHealthChange += OnHealthChange;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_0 = (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)il2cpp_codegen_object_new(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HealthChangeHandler__ctor_m80E8B07208B1EA1CD18BB15BD58D3FE916CC5102(L_0, __this, (intptr_t)((void*)GameManager_OnHealthChange_m0CDF20434DCE9CF08C4061AB2889965C3127CA7A_RuntimeMethod_var), NULL);
		Ball_add_OnHealthChange_m8D63204D108839C5FCBC0766051A4A788C157E48(L_0, NULL);
		// UIManager.OnHammerTap += OnHammerTap;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_1 = (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)il2cpp_codegen_object_new(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HammerTapHandler__ctor_m036C046999336CB7C6433D47E8FA777F004F2D96(L_1, __this, (intptr_t)((void*)GameManager_OnHammerTap_m33ADB2DE1E01077D861BDC66208C89964BD9D45D_RuntimeMethod_var), NULL);
		UIManager_add_OnHammerTap_mB8967BFEEFF12C73C88798097D722711EA37D696(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnDisable_mF3CB4DACBE9C8FF46B0ED4D4E7BD71315230B968 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnHammerTap_m33ADB2DE1E01077D861BDC66208C89964BD9D45D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnHealthChange_m0CDF20434DCE9CF08C4061AB2889965C3127CA7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Ball.OnHealthChange -= OnHealthChange;
		HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* L_0 = (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD*)il2cpp_codegen_object_new(HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HealthChangeHandler__ctor_m80E8B07208B1EA1CD18BB15BD58D3FE916CC5102(L_0, __this, (intptr_t)((void*)GameManager_OnHealthChange_m0CDF20434DCE9CF08C4061AB2889965C3127CA7A_RuntimeMethod_var), NULL);
		Ball_remove_OnHealthChange_m072326789B8225B1497794743C4B93701C47C957(L_0, NULL);
		// UIManager.OnHammerTap -= OnHammerTap;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_1 = (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)il2cpp_codegen_object_new(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HammerTapHandler__ctor_m036C046999336CB7C6433D47E8FA777F004F2D96(L_1, __this, (intptr_t)((void*)GameManager_OnHammerTap_m33ADB2DE1E01077D861BDC66208C89964BD9D45D_RuntimeMethod_var), NULL);
		UIManager_remove_OnHammerTap_mB19E9C1C67AE37F764D7032A16B0C223D1A95ACC(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRings_t15AA9F7F7C02B9A759B163A77358B64493F667DA_m048E02B6142169E68317A59AB620C057332BB087_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* G_B8_0 = NULL;
	Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* G_B7_0 = NULL;
	{
		// bool input = (Input.GetKeyDown(KeyCode.Space) || Input.GetMouseButtonDown(0));
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		// if (input && gameState == GameState.InGame && tappable)
		if (!G_B3_0)
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_2 = __this->___gameState_26;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_00d1;
		}
	}
	{
		bool L_3 = __this->___tappable_23;
		if (!L_3)
		{
			goto IL_00d1;
		}
	}
	{
		// tappable = false;
		__this->___tappable_23 = (bool)0;
		// StartCoroutine(EnableInput());
		RuntimeObject* L_4;
		L_4 = GameManager_EnableInput_mE8CC7FF6E4A22C1381CEBBDAF259D95B928273C4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// tap.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___tap_15;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// ClearElements();
		GameManager_ClearElements_mFBC2DC7A837307878B5C1ED32816F6EE7C351134(__this, NULL);
		// Rings newRing = PoolManager.Instantiate(CurrentLevel.RingToSpawn, Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<Rings>();
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_7;
		L_7 = GameManager_get_CurrentLevel_m8A192C85E400A1DB9E53ED0A7CDF742347C57A7B_inline(__this, NULL);
		NullCheck(L_7);
		String_t* L_8 = L_7->___RingToSpawn_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		RuntimeObject* L_11;
		L_11 = PoolManager_Instantiate_m6DFB52DB575D85F64DEAEC66B9D0A90A9867B02A(L_8, L_9, L_10, NULL);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(3 /* UnityEngine.GameObject IPoolable::GetGameObject() */, IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* L_13;
		L_13 = GameObject_GetComponent_TisRings_t15AA9F7F7C02B9A759B163A77358B64493F667DA_m048E02B6142169E68317A59AB620C057332BB087(L_12, GameObject_GetComponent_TisRings_t15AA9F7F7C02B9A759B163A77358B64493F667DA_m048E02B6142169E68317A59AB620C057332BB087_RuntimeMethod_var);
		// newRing.myRotateSpeed = Random.Range(nextLevel.minRotateSpeed, nextLevel.maxRotateSpeed);
		Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* L_14 = L_13;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_15 = __this->___nextLevel_24;
		NullCheck(L_15);
		float L_16 = L_15->___minRotateSpeed_2;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_17 = __this->___nextLevel_24;
		NullCheck(L_17);
		float L_18 = L_17->___maxRotateSpeed_3;
		float L_19;
		L_19 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_16, L_18, NULL);
		NullCheck(L_14);
		L_14->___myRotateSpeed_5 = L_19;
		// if (CurrentLevel.hasEnemy)
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_20;
		L_20 = GameManager_get_CurrentLevel_m8A192C85E400A1DB9E53ED0A7CDF742347C57A7B_inline(__this, NULL);
		NullCheck(L_20);
		bool L_21 = L_20->___hasEnemy_0;
		G_B7_0 = L_14;
		if (!L_21)
		{
			G_B8_0 = L_14;
			goto IL_00b2;
		}
	}
	{
		// StartCoroutine(InstantiateEnemyBall());
		RuntimeObject* L_22;
		L_22 = GameManager_InstantiateEnemyBall_m56EC2C21FA5420E6CACECB69EC2C1A4396FAF164(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
		G_B8_0 = G_B7_0;
	}

IL_00b2:
	{
		// newRing.transform.localScale = Vector2.zero;
		NullCheck(G_B8_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(G_B8_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_25, NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_26, NULL);
		// OnInput();
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_27 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnInput_27;
		NullCheck(L_27);
		InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_inline(L_27, NULL);
		return;
	}

IL_00d1:
	{
		// else if ((Input.GetKeyDown(KeyCode.Return) || Input.GetMouseButtonDown(0)) && (gameState == GameState.GameOver))
		bool L_28;
		L_28 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)13), NULL);
		if (L_28)
		{
			goto IL_00e2;
		}
	}
	{
		bool L_29;
		L_29 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_29)
		{
			goto IL_0104;
		}
	}

IL_00e2:
	{
		int32_t L_30 = __this->___gameState_26;
		if ((!(((uint32_t)L_30) == ((uint32_t)1))))
		{
			goto IL_0104;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_31;
		L_31 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_31;
		int32_t L_32;
		L_32 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_32, NULL);
		// ShowMenu();
		GameManager_ShowMenu_m6252DD32F4E645F8925C98D70FADD85D61445163(__this, NULL);
		return;
	}

IL_0104:
	{
		// else if ((Input.GetKeyDown(KeyCode.Return) || Input.GetMouseButtonDown(0)) && (gameState == GameState.Menu))
		bool L_33;
		L_33 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)13), NULL);
		if (L_33)
		{
			goto IL_0115;
		}
	}
	{
		bool L_34;
		L_34 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_34)
		{
			goto IL_0123;
		}
	}

IL_0115:
	{
		int32_t L_35 = __this->___gameState_26;
		if (L_35)
		{
			goto IL_0123;
		}
	}
	{
		// GameStart();
		GameManager_GameStart_m13D7CF637F648EE27334A03FF9B2132DA21A643B(__this, NULL);
	}

IL_0123:
	{
		// }
		return;
	}
}
// System.Void GameManager::ClearElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ClearElements_mFBC2DC7A837307878B5C1ED32816F6EE7C351134 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentEnemyBall != null)
		EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* L_0 = __this->___currentEnemyBall_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// currentEnemyBall.PoolDestroy();
		EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* L_2 = __this->___currentEnemyBall_22;
		NullCheck(L_2);
		EnemyBall_PoolDestroy_mA90A702AFBAD8C0709E3430F747040D177127F46(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::EnableInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_EnableInput_mE8CC7FF6E4A22C1381CEBBDAF259D95B928273C4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* L_0 = (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA*)il2cpp_codegen_object_new(U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnableInputU3Ed__31__ctor_m5FE6E59338B11B5947AF1822BE084F25360756F5(L_0, 0, NULL);
		U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameManager::InstantiateEnemyBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_InstantiateEnemyBall_m56EC2C21FA5420E6CACECB69EC2C1A4396FAF164 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* L_0 = (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC*)il2cpp_codegen_object_new(U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInstantiateEnemyBallU3Ed__32__ctor_m6504658E14E1F8F879242BD6089F17BD5568B037(L_0, 0, NULL);
		U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::ShowMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ShowMenu_m6252DD32F4E645F8925C98D70FADD85D61445163 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// gameState = GameState.Menu;
		__this->___gameState_26 = 0;
		// menu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___menu_9;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameStart_m13D7CF637F648EE27334A03FF9B2132DA21A643B (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// play.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___play_14;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// score = 0;
		__this->___score_5 = (0.0f);
		// scoreText.text = score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___scoreText_10;
		float* L_2 = (&__this->___score_5);
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// gameState = GameState.InGame;
		__this->___gameState_26 = 2;
		// menu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___menu_9;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnHealthChange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnHealthChange_m0CDF20434DCE9CF08C4061AB2889965C3127CA7A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___change0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1034D8B07E225029FF095B4DB108E1A8C4087186);
		s_Il2CppMethodInitialized = true;
	}
	{
		// totalLife += change;
		float L_0 = __this->___totalLife_18;
		float L_1 = ___change0;
		__this->___totalLife_18 = ((float)il2cpp_codegen_add(L_0, L_1));
		// Debug.Log("Life: " + totalLife);
		float* L_2 = (&__this->___totalLife_18);
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1034D8B07E225029FF095B4DB108E1A8C4087186, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// totalLife = Mathf.Clamp(totalLife, 0, 100);
		float L_5 = __this->___totalLife_18;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_5, (0.0f), (100.0f), NULL);
		__this->___totalLife_18 = L_6;
		// if (totalLife <= 0)
		float L_7 = __this->___totalLife_18;
		if ((!(((float)L_7) <= ((float)(0.0f)))))
		{
			goto IL_0056;
		}
	}
	{
		// GameOver();
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(__this, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnHammerTap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnHammerTap_m33ADB2DE1E01077D861BDC66208C89964BD9D45D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// player.AttackForward();
		Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_0 = __this->___player_4;
		NullCheck(L_0);
		Ball_AttackForward_mD4E98563A7897E3BFCA76604F3467FAAFA401CA3(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lose.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___lose_16;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// gameState = GameState.GameOver;
		__this->___gameState_26 = 1;
		// gameover.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___gameover_8;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// OnGameOver();
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOver_28;
		NullCheck(L_2);
		GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_inline(L_2, NULL);
		// endScoreText.text = score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___endScoreText_11;
		float* L_4 = (&__this->___score_5);
		String_t* L_5;
		L_5 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void GameManager::IncreaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_IncreaseScore_mC90BFC0FA7E37D5D4857A08D45151EC62964132C (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// score++;
		float L_0 = __this->___score_5;
		__this->___score_5 = ((float)il2cpp_codegen_add(L_0, (1.0f)));
		// scoreText.text = score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___scoreText_10;
		float* L_2 = (&__this->___score_5);
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// if (score % ringsPerLevel == 0)
		float L_4 = __this->___score_5;
		int32_t L_5 = __this->___ringsPerLevel_6;
		if ((!(((float)(fmodf(L_4, ((float)L_5)))) == ((float)(0.0f)))))
		{
			goto IL_0043;
		}
	}
	{
		// LevelUp();
		GameManager_LevelUp_m52E6CB2E7C0426C4BA7C2C69D4BD2CBFFE896FB1(__this, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void GameManager::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelUp_m52E6CB2E7C0426C4BA7C2C69D4BD2CBFFE896FB1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m18577333F7379D8529FE97E6565703CE816DB25F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentLevelCount < levels.Count - 2)
		int32_t L_0 = __this->___currentLevelCount_7;
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_1 = __this->___levels_19;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m18577333F7379D8529FE97E6565703CE816DB25F_inline(L_1, List_1_get_Count_m18577333F7379D8529FE97E6565703CE816DB25F_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 2)))))
		{
			goto IL_003a;
		}
	}
	{
		// currentLevelCount++;
		int32_t L_3 = __this->___currentLevelCount_7;
		__this->___currentLevelCount_7 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// CurrentLevel = levels[currentLevelCount];
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_4 = __this->___levels_19;
		int32_t L_5 = __this->___currentLevelCount_7;
		NullCheck(L_4);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_6;
		L_6 = List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA(L_4, L_5, List_1_get_Item_mA0F37776A5F60DA6A00547E7716C658A2ECD77CA_RuntimeMethod_var);
		GameManager_set_CurrentLevel_m467FC73118F6E920A455A487D2EBB8675E66270C(__this, L_6, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void GameManager::add_OnInput(GameManager/InputHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnInput_m7A4FFD6CF6933FB9AFEE2B1F11A8AC61CA8C5231 (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* V_0 = NULL;
	InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* V_1 = NULL;
	InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* V_2 = NULL;
	{
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnInput_27;
		V_0 = L_0;
	}

IL_0006:
	{
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_1 = V_0;
		V_1 = L_1;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_2 = V_1;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)CastclassSealed((RuntimeObject*)L_4, InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var));
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_5 = V_2;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_6 = V_1;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_7;
		L_7 = InterlockedCompareExchangeImpl<InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnInput_27), L_5, L_6);
		V_0 = L_7;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_8 = V_0;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_9 = V_1;
		if ((!(((RuntimeObject*)(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)L_8) == ((RuntimeObject*)(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_OnInput(GameManager/InputHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnInput_m62C5C333711B9607C00DA8C536AADFD3672B4B2B (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* V_0 = NULL;
	InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* V_1 = NULL;
	InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* V_2 = NULL;
	{
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnInput_27;
		V_0 = L_0;
	}

IL_0006:
	{
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_1 = V_0;
		V_1 = L_1;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_2 = V_1;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)CastclassSealed((RuntimeObject*)L_4, InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var));
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_5 = V_2;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_6 = V_1;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_7;
		L_7 = InterlockedCompareExchangeImpl<InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnInput_27), L_5, L_6);
		V_0 = L_7;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_8 = V_0;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_9 = V_1;
		if ((!(((RuntimeObject*)(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)L_8) == ((RuntimeObject*)(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::add_OnGameOver(GameManager/GameOverHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_OnGameOver_m088ADA539AD0ADCCD7606149C80B9F01EB97C64D (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* V_0 = NULL;
	GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* V_1 = NULL;
	GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* V_2 = NULL;
	{
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOver_28;
		V_0 = L_0;
	}

IL_0006:
	{
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_1 = V_0;
		V_1 = L_1;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_2 = V_1;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)CastclassSealed((RuntimeObject*)L_4, GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var));
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_5 = V_2;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_6 = V_1;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOver_28), L_5, L_6);
		V_0 = L_7;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_8 = V_0;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)L_8) == ((RuntimeObject*)(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_OnGameOver(GameManager/GameOverHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_OnGameOver_mAEC9D7BF1A460CEC4AB996FAC313C85A47835425 (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* V_0 = NULL;
	GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* V_1 = NULL;
	GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* V_2 = NULL;
	{
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOver_28;
		V_0 = L_0;
	}

IL_0006:
	{
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_1 = V_0;
		V_1 = L_1;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_2 = V_1;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)CastclassSealed((RuntimeObject*)L_4, GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var));
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_5 = V_2;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_6 = V_1;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___OnGameOver_28), L_5, L_6);
		V_0 = L_7;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_8 = V_0;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)L_8) == ((RuntimeObject*)(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int ringsPerLevel = 3;
		__this->___ringsPerLevel_6 = 3;
		// float totalLife = 100;
		__this->___totalLife_18 = (100.0f);
		// List<LevelData> levels = new List<LevelData>();
		List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A* L_0 = (List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A*)il2cpp_codegen_object_new(List_1_t5D51C2F548F7E4364A14BB81D41C0CAE0A900E0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D(L_0, List_1__ctor_m8F27E8AABFB53268913A2C731EF1CB13B00F1A2D_RuntimeMethod_var);
		__this->___levels_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levels_19), (void*)L_0);
		// public List<float> scaleStops = new List<float>();
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_1 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802(L_1, List_1__ctor_mC29D3D824786832A31096310B3B3016B8B42B802_RuntimeMethod_var);
		__this->___scaleStops_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scaleStops_20), (void*)L_1);
		// public LevelData currentLevel = new LevelData();
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_2 = (LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5*)il2cpp_codegen_object_new(LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LevelData__ctor_m923000759B849E6F472A21ECEDD12006D85EDEDD(L_2, NULL);
		__this->___currentLevel_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLevel_21), (void*)L_2);
		// bool tappable = true;
		__this->___tappable_23 = (bool)1;
		// public LevelData nextLevel = new LevelData();
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_3 = (LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5*)il2cpp_codegen_object_new(LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LevelData__ctor_m923000759B849E6F472A21ECEDD12006D85EDEDD(L_3, NULL);
		__this->___nextLevel_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextLevel_24), (void*)L_3);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_Multicast(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* currentDelegate = reinterpret_cast<InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_OpenInst(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_OpenStatic(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_OpenStaticInvoker(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_ClosedStaticInvoker(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameManager/InputHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler__ctor_m0FC0CE05D39AD3747F9CCA12D14F40B7B3B280F5 (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_Multicast;
}
// System.Void GameManager/InputHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1 (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameManager/InputHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputHandler_BeginInvoke_m2CECB7DB1F29AA14A6EE4D304CE5F6B00008197B (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void GameManager/InputHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputHandler_EndInvoke_m0FA387D680A0FCBB1B44441E012437D31DD961A8 (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_Multicast(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* currentDelegate = reinterpret_cast<GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_OpenInst(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_OpenStatic(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_OpenStaticInvoker(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_ClosedStaticInvoker(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35 (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameManager/GameOverHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverHandler__ctor_mCE87DB3A9D587F469D51F0962BAA75F114C52948 (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_Multicast;
}
// System.Void GameManager/GameOverHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameManager/GameOverHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOverHandler_BeginInvoke_mB8F7B543920C041ADD966FDF58B83A7E068B87BC (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void GameManager/GameOverHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverHandler_EndInvoke_mA02518157184ABC2ECB2CFCC4D94CF5FD649170F (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<EnableInput>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputU3Ed__31__ctor_m5FE6E59338B11B5947AF1822BE084F25360756F5 (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<EnableInput>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputU3Ed__31_System_IDisposable_Dispose_mE44EC32C3B3972F2F9F86BAD3A4FE28899EB37FC (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<EnableInput>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnableInputU3Ed__31_MoveNext_mF20D7DDC34FA2A014485CCE8FCE08B3F3DEDEAB2 (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// tappable = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		L_5->___tappable_23 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<EnableInput>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableInputU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBBEAD705DC510D35792888B81CC5E39E8D830EF9 (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<EnableInput>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInputU3Ed__31_System_Collections_IEnumerator_Reset_mDF83806BA484CEC72BD6A0789B771F50029F3567 (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnableInputU3Ed__31_System_Collections_IEnumerator_Reset_mDF83806BA484CEC72BD6A0789B771F50029F3567_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<EnableInput>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnableInputU3Ed__31_System_Collections_IEnumerator_get_Current_m3A294D82CBB261BDBBF32815D72B0100CB2E2B02 (U3CEnableInputU3Ed__31_tF1EFF6AFB32EF4509A98EF793E2547DF2EF25AFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<InstantiateEnemyBall>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateEnemyBallU3Ed__32__ctor_m6504658E14E1F8F879242BD6089F17BD5568B037 (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<InstantiateEnemyBall>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateEnemyBallU3Ed__32_System_IDisposable_Dispose_m4C78C41FD943D88BF9CD93A5B02F0C2A963F176A (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<InstantiateEnemyBall>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInstantiateEnemyBallU3Ed__32_MoveNext_mFAA025E7071FB4278652E69AA0A538CFE78F36B0 (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38_mBFA1ED64C9CA734730C87B4432B0E9D53687120C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (gameState != GameState.GameOver)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___gameState_26;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		// currentEnemyBall = PoolManager.Instantiate("Enemy", Vector3.zero, Quaternion.identity).GetGameObject().GetComponent<EnemyBall>();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		RuntimeObject* L_10;
		L_10 = PoolManager_Instantiate_m6DFB52DB575D85F64DEAEC66B9D0A90A9867B02A(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, L_8, L_9, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(3 /* UnityEngine.GameObject IPoolable::GetGameObject() */, IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* L_12;
		L_12 = GameObject_GetComponent_TisEnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38_mBFA1ED64C9CA734730C87B4432B0E9D53687120C(L_11, GameObject_GetComponent_TisEnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38_mBFA1ED64C9CA734730C87B4432B0E9D53687120C_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___currentEnemyBall_22 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___currentEnemyBall_22), (void*)L_12);
		// currentEnemyBall.SetCurrentPosition(player.currentAngle + CurrentLevel.distanceFromPlayer / 57);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		NullCheck(L_13);
		EnemyBall_t725F32B3F056ADB45C1974E9D0D6127768197B38* L_14 = L_13->___currentEnemyBall_22;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = V_1;
		NullCheck(L_15);
		Ball_t3B9BED2176F4B268C18E329E499D8EC9914B5E2B* L_16 = L_15->___player_4;
		NullCheck(L_16);
		float L_17 = L_16->___currentAngle_6;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		NullCheck(L_18);
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_19;
		L_19 = GameManager_get_CurrentLevel_m8A192C85E400A1DB9E53ED0A7CDF742347C57A7B_inline(L_18, NULL);
		NullCheck(L_19);
		float L_20 = L_19->___distanceFromPlayer_1;
		NullCheck(L_14);
		EnemyBall_SetCurrentPosition_m3D8A9E36EA399B064DA5F0A5D2E95760DEBE63F9(L_14, ((float)il2cpp_codegen_add(L_17, ((float)(L_20/(57.0f))))), NULL);
	}

IL_0093:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<InstantiateEnemyBall>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateEnemyBallU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE797E8996132BF104F3C6717F493CC6FC622C1D (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<InstantiateEnemyBall>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInstantiateEnemyBallU3Ed__32_System_Collections_IEnumerator_Reset_m62C6AECD22BE7263EBE6744D1B5DB84BF7F2D2C3 (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInstantiateEnemyBallU3Ed__32_System_Collections_IEnumerator_Reset_m62C6AECD22BE7263EBE6744D1B5DB84BF7F2D2C3_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<InstantiateEnemyBall>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInstantiateEnemyBallU3Ed__32_System_Collections_IEnumerator_get_Current_m5467696EC8DF20D041159161944A3EC8B52E2780 (U3CInstantiateEnemyBallU3Ed__32_t92D1FEBE14EB1D0013F617AF4502CCA9055637AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LevelData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelData__ctor_m923000759B849E6F472A21ECEDD12006D85EDEDD (LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leaves::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaves_Start_m8E032F3A17796D23ED1C0482DFD8A1C5585423C1 (Leaves_t644729D0A7BD9C74994E76126850908A0138BE06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Leaves::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaves_Update_mEB8AB9BDFFCFCA93FF8BB2ED009655367B7363DF (Leaves_t644729D0A7BD9C74994E76126850908A0138BE06* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Leaves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaves__ctor_m2997EEB0FC7A47275E05CD6E7504E79B348EA294 (Leaves_t644729D0A7BD9C74994E76126850908A0138BE06* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_Start_m1334D3D5A25EB3B81113B2D69C1F4D1467C1571C (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int dir = Random.Range(0, 2);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_0 = L_0;
		// if (dir == 0) { dir = -1; }
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// if (dir == 0) { dir = -1; }
		V_0 = (-1);
	}

IL_000d:
	{
		// transform.eulerAngles = new Vector3(0, 0, Random.Range(0, 360));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)360), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), (0.0f), (0.0f), ((float)L_3), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_2, L_4, NULL);
		// myRotateSpeed *= dir;
		float L_5 = __this->___myRotateSpeed_5;
		int32_t L_6 = V_0;
		__this->___myRotateSpeed_5 = ((float)il2cpp_codegen_multiply(L_5, ((float)L_6)));
		// }
		return;
	}
}
// System.Void Rings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_Update_m64F50CB4417EAA13A415FC53B7746F0EF9B2995A (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (canRotate && (GameManager.instance.gameState == GameManager.GameState.InGame))
		bool L_0 = __this->___canRotate_6;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_1);
		int32_t L_2 = L_1->___gameState_26;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_003b;
		}
	}
	{
		// transform.Rotate(new Vector3(0, 0, myRotateSpeed * Time.deltaTime));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_4 = __this->___myRotateSpeed_5;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_3, L_6, NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void Rings::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_OnEnable_m7359D62FCC87EB336F7614C87EDE705C22999301 (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rings_GameOver_mCE18CC073301B5912157BCFAF2B1F8B870260CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rings_ScaleUp_m987ABB8A694A1B0177FF2FC3F355FDE9958255C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.OnInput += ScaleUp;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_0 = (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)il2cpp_codegen_object_new(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InputHandler__ctor_m0FC0CE05D39AD3747F9CCA12D14F40B7B3B280F5(L_0, __this, (intptr_t)((void*)Rings_ScaleUp_m987ABB8A694A1B0177FF2FC3F355FDE9958255C6_RuntimeMethod_var), NULL);
		GameManager_add_OnInput_m7A4FFD6CF6933FB9AFEE2B1F11A8AC61CA8C5231(L_0, NULL);
		// GameManager.OnGameOver += GameOver;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_1 = (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)il2cpp_codegen_object_new(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameOverHandler__ctor_mCE87DB3A9D587F469D51F0962BAA75F114C52948(L_1, __this, (intptr_t)((void*)Rings_GameOver_mCE18CC073301B5912157BCFAF2B1F8B870260CC3_RuntimeMethod_var), NULL);
		GameManager_add_OnGameOver_m088ADA539AD0ADCCD7606149C80B9F01EB97C64D(L_1, NULL);
		// }
		return;
	}
}
// System.Void Rings::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_OnDisable_m5B07B79A9EDD154977E02044C84C6F39B334F94E (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rings_GameOver_mCE18CC073301B5912157BCFAF2B1F8B870260CC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rings_ScaleUp_m987ABB8A694A1B0177FF2FC3F355FDE9958255C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.OnInput -= ScaleUp;
		InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* L_0 = (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F*)il2cpp_codegen_object_new(InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		InputHandler__ctor_m0FC0CE05D39AD3747F9CCA12D14F40B7B3B280F5(L_0, __this, (intptr_t)((void*)Rings_ScaleUp_m987ABB8A694A1B0177FF2FC3F355FDE9958255C6_RuntimeMethod_var), NULL);
		GameManager_remove_OnInput_m62C5C333711B9607C00DA8C536AADFD3672B4B2B(L_0, NULL);
		// GameManager.OnGameOver -= GameOver;
		GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* L_1 = (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35*)il2cpp_codegen_object_new(GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameOverHandler__ctor_mCE87DB3A9D587F469D51F0962BAA75F114C52948(L_1, __this, (intptr_t)((void*)Rings_GameOver_mCE18CC073301B5912157BCFAF2B1F8B870260CC3_RuntimeMethod_var), NULL);
		GameManager_remove_OnGameOver_mAEC9D7BF1A460CEC4AB996FAC313C85A47835425(L_1, NULL);
		// }
		return;
	}
}
// System.Void Rings::ScaleUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_ScaleUp_m987ABB8A694A1B0177FF2FC3F355FDE9958255C6 (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rings_U3CScaleUpU3Eb__10_0_m02236F3B0210D22FB7D16086C14C5C28436DBDDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rings_U3CScaleUpU3Eb__10_1_m2C311E19FE55A2FAF58BFF690B53FDA86157DB8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// currentScaleStopIndex++;
		int32_t L_0 = __this->___currentScaleStopIndex_9;
		__this->___currentScaleStopIndex_9 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// float scaleTo = GameManager.instance.scaleStops[currentScaleStopIndex];
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_1);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2 = L_1->___scaleStops_20;
		int32_t L_3 = __this->___currentScaleStopIndex_9;
		NullCheck(L_2);
		float L_4;
		L_4 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_2, L_3, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		V_0 = L_4;
		// transform.DOScale(new Vector2(scaleTo,scaleTo), 0.5f).OnComplete(() =>
		// {
		//     //When it becomes last ring
		//     if (currentScaleStopIndex>4)
		//     {
		//         GameManager.instance.IncreaseScore();
		//     }
		// });
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_6 = V_0;
		float L_7 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), L_6, L_7, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_10;
		L_10 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(L_5, L_9, (0.5f), NULL);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_11 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_11, __this, (intptr_t)((void*)Rings_U3CScaleUpU3Eb__10_0_m02236F3B0210D22FB7D16086C14C5C28436DBDDC_RuntimeMethod_var), NULL);
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_12;
		L_12 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F(L_10, L_11, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77_m5D6178C188AE17452C826243FDD0E412B6304A3F_RuntimeMethod_var);
		// if (currentScaleStopIndex<=4)
		int32_t L_13 = __this->___currentScaleStopIndex_9;
		if ((((int32_t)L_13) > ((int32_t)4)))
		{
			goto IL_00aa;
		}
	}
	{
		// fillSprite.DOFade(fillSprite.color.a - 0.25f, 0.5f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_14 = __this->___fillSprite_8;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___fillSprite_8;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_15, NULL);
		float L_17 = L_16.___a_3;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_18;
		L_18 = DOTweenModuleSprite_DOFade_m6AE51AD4E4655B3A03EE59353450C611725E6D1A(L_14, ((float)il2cpp_codegen_subtract(L_17, (0.25f))), (0.5f), NULL);
		// mySprite.DOFade(mySprite.color.a + 0.35f, 0.5f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___mySprite_7;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_20 = __this->___mySprite_7;
		NullCheck(L_20);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_20, NULL);
		float L_22 = L_21.___a_3;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_23;
		L_23 = DOTweenModuleSprite_DOFade_m6AE51AD4E4655B3A03EE59353450C611725E6D1A(L_19, ((float)il2cpp_codegen_add(L_22, (0.349999994f))), (0.5f), NULL);
		return;
	}

IL_00aa:
	{
		// mySprite.DOFade(0, 0.5f).OnComplete(() => PoolDestroy());
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_24 = __this->___mySprite_7;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_25;
		L_25 = DOTweenModuleSprite_DOFade_m6AE51AD4E4655B3A03EE59353450C611725E6D1A(L_24, (0.0f), (0.5f), NULL);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_26 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_26, __this, (intptr_t)((void*)Rings_U3CScaleUpU3Eb__10_1_m2C311E19FE55A2FAF58BFF690B53FDA86157DB8D_RuntimeMethod_var), NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_27;
		L_27 = TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766(L_25, L_26, TweenSettingsExtensions_OnComplete_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mE0198286069BCC9A37B43FB54AB01A71A7731766_RuntimeMethod_var);
		// fillSprite.DOFade(0, 0.5f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_28 = __this->___fillSprite_8;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_29;
		L_29 = DOTweenModuleSprite_DOFade_m6AE51AD4E4655B3A03EE59353450C611725E6D1A(L_28, (0.0f), (0.5f), NULL);
		// }
		return;
	}
}
// System.Void Rings::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_GameOver_mCE18CC073301B5912157BCFAF2B1F8B870260CC3 (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	{
		// transform.DOKill();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_1;
		L_1 = ShortcutExtensions_DOKill_m3F197E779AB6CA95FF3C4C2DD547B4B493E42D46(L_0, (bool)0, NULL);
		// fillSprite.transform.DOKill();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___fillSprite_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		int32_t L_4;
		L_4 = ShortcutExtensions_DOKill_m3F197E779AB6CA95FF3C4C2DD547B4B493E42D46(L_3, (bool)0, NULL);
		// canRotate = false;
		__this->___canRotate_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Rings::PoolInstantiate(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_PoolInstantiate_mA68611577791A2ABEA80E8FDF52AC25A83E4449E (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// fillSprite.color = new Color(255, 255, 255, 1);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___fillSprite_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (255.0f), (255.0f), (255.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_1, L_2, NULL);
		// mySprite.color = new Color(255, 255, 255, 0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___mySprite_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (255.0f), (255.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_3, L_4, NULL);
		// currentScaleStopIndex = 0;
		__this->___currentScaleStopIndex_9 = 0;
		// }
		return;
	}
}
// System.Void Rings::PoolDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_PoolDestroy_m4C198530DFBC8555C6E5126A411EF695E52CF475 (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Boolean Rings::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rings_IsAlive_m568E2AD752CAAE446DA3F4F3EC7F80A6E2E8B031 (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	{
		// return gameObject.activeSelf;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.GameObject Rings::GetGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Rings_GetGameObject_m02A44E66244FC8449BC23AB572C35AA43C467143 (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	{
		// return gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_0;
	}
}
// System.Void Rings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings__ctor_m020F5C81927F0DFCE22570658EB99BA5E991674B (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	{
		// bool canRotate = true;
		__this->___canRotate_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Rings::<ScaleUp>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_U3CScaleUpU3Eb__10_0_m02236F3B0210D22FB7D16086C14C5C28436DBDDC (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentScaleStopIndex>4)
		int32_t L_0 = __this->___currentScaleStopIndex_9;
		if ((((int32_t)L_0) <= ((int32_t)4)))
		{
			goto IL_0013;
		}
	}
	{
		// GameManager.instance.IncreaseScore();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_25;
		NullCheck(L_1);
		GameManager_IncreaseScore_mC90BFC0FA7E37D5D4857A08D45151EC62964132C(L_1, NULL);
	}

IL_0013:
	{
		// });
		return;
	}
}
// System.Void Rings::<ScaleUp>b__10_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rings_U3CScaleUpU3Eb__10_1_m2C311E19FE55A2FAF58BFF690B53FDA86157DB8D (Rings_t15AA9F7F7C02B9A759B163A77358B64493F667DA* __this, const RuntimeMethod* method) 
{
	{
		// mySprite.DOFade(0, 0.5f).OnComplete(() => PoolDestroy());
		Rings_PoolDestroy_m4C198530DFBC8555C6E5126A411EF695E52CF475(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m95D2E80B8F461F15C1B9BD6DB0811F5CC18571AB (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UIManager::add_OnHammerTap(UIManager/HammerTapHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_add_OnHammerTap_mB8967BFEEFF12C73C88798097D722711EA37D696 (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* V_0 = NULL;
	HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* V_1 = NULL;
	HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* V_2 = NULL;
	{
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_0 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___OnHammerTap_4;
		V_0 = L_0;
	}

IL_0006:
	{
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_1 = V_0;
		V_1 = L_1;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_2 = V_1;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)CastclassSealed((RuntimeObject*)L_4, HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var));
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_5 = V_2;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_6 = V_1;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_7;
		L_7 = InterlockedCompareExchangeImpl<HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*>((&((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___OnHammerTap_4), L_5, L_6);
		V_0 = L_7;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_8 = V_0;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_9 = V_1;
		if ((!(((RuntimeObject*)(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)L_8) == ((RuntimeObject*)(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UIManager::remove_OnHammerTap(UIManager/HammerTapHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_remove_OnHammerTap_mB19E9C1C67AE37F764D7032A16B0C223D1A95ACC (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* V_0 = NULL;
	HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* V_1 = NULL;
	HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* V_2 = NULL;
	{
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_0 = ((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___OnHammerTap_4;
		V_0 = L_0;
	}

IL_0006:
	{
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_1 = V_0;
		V_1 = L_1;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_2 = V_1;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)CastclassSealed((RuntimeObject*)L_4, HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882_il2cpp_TypeInfo_var));
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_5 = V_2;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_6 = V_1;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_7;
		L_7 = InterlockedCompareExchangeImpl<HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*>((&((UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3_il2cpp_TypeInfo_var))->___OnHammerTap_4), L_5, L_6);
		V_0 = L_7;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_8 = V_0;
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* L_9 = V_1;
		if ((!(((RuntimeObject*)(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)L_8) == ((RuntimeObject*)(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mC9DC2B8984E76F424E73C1860AD4BD3DEBF6573F (UIManager_t16825A2483574F37D7D47AB939A6FA639678B1F3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_Multicast(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* currentDelegate = reinterpret_cast<HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_OpenInst(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_OpenStatic(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_OpenStaticInvoker(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_ClosedStaticInvoker(HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882 (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UIManager/HammerTapHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HammerTapHandler__ctor_m036C046999336CB7C6433D47E8FA777F004F2D96 (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B_Multicast;
}
// System.Void UIManager/HammerTapHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HammerTapHandler_Invoke_m546FB7A7CFC886472B3D01E3C50C7D2B652DF17B (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UIManager/HammerTapHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HammerTapHandler_BeginInvoke_m7761E740F8D29E6FA92106167DD3039376F03B49 (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void UIManager/HammerTapHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HammerTapHandler_EndInvoke_mF98CD6B7FCB49B62BCE7DDC276EC158AF905D424 (HammerTapHandler_t70BF813D7222A4F09B8974F4B75E858C0CF0E882* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Pool[] PoolManager::get_Pools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* PoolManager_get_Pools_m551A27F68C7037A66168E4AE95677B451C932E6A (PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* __this, const RuntimeMethod* method) 
{
	{
		// get { return pools; }
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_0 = __this->___pools_4;
		return L_0;
	}
}
// System.Void PoolManager::set_Pools(Pool[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_set_Pools_m750E8F7026F8A9D145D6FD2DBB40B982703A2539 (PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* __this, PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* ___value0, const RuntimeMethod* method) 
{
	{
		// set { pools = value; }
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_0 = ___value0;
		__this->___pools_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pools_4), (void*)L_0);
		// set { pools = value; }
		return;
	}
}
// IPoolable PoolManager::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PoolManager_Instantiate_m6DFB52DB575D85F64DEAEC66B9D0A90A9867B02A (String_t* ___gameObjectName0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE3DFD929D313E91FBB2A082F3CAAB07CE60AF87);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _instance.pools.Length; i++) {
		V_0 = 0;
		goto IL_0035;
	}

IL_0004:
	{
		// if (gameObjectName == _instance.pools[i].ObjectName) {
		String_t* L_0 = ___gameObjectName0;
		PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* L_1 = ((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5;
		NullCheck(L_1);
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_2 = L_1->___pools_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Pool_get_ObjectName_m6415B27B6C28252D5F6307B32D7E921AC44D4108_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_6, NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// return _instance.pools[i].Instantiate(position, rotation);
		PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* L_8 = ((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5;
		NullCheck(L_8);
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_9 = L_8->___pools_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rotation2;
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = Pool_Instantiate_mC3699285021C7C8A02BFF0D25B225DF74E1547CC(L_12, L_13, L_14, NULL);
		return L_15;
	}

IL_0031:
	{
		// for (int i = 0; i < _instance.pools.Length; i++) {
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0035:
	{
		// for (int i = 0; i < _instance.pools.Length; i++) {
		int32_t L_17 = V_0;
		PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* L_18 = ((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5;
		NullCheck(L_18);
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_19 = L_18->___pools_4;
		NullCheck(L_19);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// Debug.LogErrorFormat("{0} is not found in the pool", gameObjectName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		String_t* L_22 = ___gameObjectName0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralEE3DFD929D313E91FBB2A082F3CAAB07CE60AF87, L_21, NULL);
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void PoolManager::ClearOnScreen(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_ClearOnScreen_m0121DBC388A590512143434BD9736603B02BFB65 (String_t* ___gameObjectName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < _instance.pools.Length; i++) {
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// if (gameObjectName == _instance.pools[i].ObjectName) {
		String_t* L_0 = ___gameObjectName0;
		PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* L_1 = ((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5;
		NullCheck(L_1);
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_2 = L_1->___pools_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Pool_get_ObjectName_m6415B27B6C28252D5F6307B32D7E921AC44D4108_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_6, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		// _instance.pools[i].ClearOnScreen();
		PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* L_8 = ((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5;
		NullCheck(L_8);
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_9 = L_8->___pools_4;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Pool_ClearOnScreen_m5A2AABCA7AAACFEE82C9E9D11655394BC27D919E(L_12, NULL);
	}

IL_002e:
	{
		// for (int i = 0; i < _instance.pools.Length; i++) {
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0032:
	{
		// for (int i = 0; i < _instance.pools.Length; i++) {
		int32_t L_14 = V_0;
		PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* L_15 = ((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5;
		NullCheck(L_15);
		PoolU5BU5D_t8C2EF380AED6527B8B3E7AA56DA0239E310DA70A* L_16 = L_15->___pools_4;
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PoolManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_Awake_m24E91438FC07109028C3E58A351E9185F1CA3B4F (PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance = this;
		((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5_il2cpp_TypeInfo_var))->____instance_5), (void*)__this);
		// }
		return;
	}
}
// System.Void PoolManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager__ctor_m9F56D45F7F8730BE0D42F25639C20D63A860CB6B (PoolManager_tB2670F29BADD91F177A60C94E40A891FE36E2EA5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Pool::get_ObjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pool_get_ObjectName_m6415B27B6C28252D5F6307B32D7E921AC44D4108 (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, const RuntimeMethod* method) 
{
	{
		// get { return objectName; }
		String_t* L_0 = __this->___objectName_0;
		return L_0;
	}
}
// IPoolable Pool::Instantiate(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pool_Instantiate_mC3699285021C7C8A02BFF0D25B225DF74E1547CC (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_m5C13A3050F8838FD24E423A53324FC88CE3A22CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0B8D5DF950C19F2EEFBBCBEB2ACA85184B226E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < pooledObject.Count; i++) {
		V_1 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// if (!pooledObject[i].IsAlive()) {
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_0 = __this->___pooledObject_2;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA(L_0, L_1, List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA_RuntimeMethod_var);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean IPoolable::IsAlive() */, IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		// pooledObject[i].PoolInstantiate(position, rotation);
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_4 = __this->___pooledObject_2;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA(L_4, L_5, List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___rotation1;
		NullCheck(L_6);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(0 /* System.Void IPoolable::PoolInstantiate(UnityEngine.Vector3,UnityEngine.Quaternion) */, IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		// return pooledObject[i];
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_9 = __this->___pooledObject_2;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA(L_9, L_10, List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA_RuntimeMethod_var);
		return L_11;
	}

IL_0037:
	{
		// for (int i = 0; i < pooledObject.Count; i++) {
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003b:
	{
		// for (int i = 0; i < pooledObject.Count; i++) {
		int32_t L_13 = V_1;
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_14 = __this->___pooledObject_2;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_inline(L_14, List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0004;
		}
	}
	{
		// GameObject newObjectGO = GameObject.Instantiate(objectToPool, position, rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___objectToPool_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rotation1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_16, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// IPoolable newObject = newObjectGO.GetComponent<IPoolable>();
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = GameObject_GetComponent_TisIPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_m5C13A3050F8838FD24E423A53324FC88CE3A22CA(L_19, GameObject_GetComponent_TisIPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_m5C13A3050F8838FD24E423A53324FC88CE3A22CA_RuntimeMethod_var);
		V_0 = L_20;
		// newObject.PoolInstantiate(position, rotation);
		RuntimeObject* L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___position0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = ___rotation1;
		NullCheck(L_21);
		InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 >::Invoke(0 /* System.Void IPoolable::PoolInstantiate(UnityEngine.Vector3,UnityEngine.Quaternion) */, IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		// pooledObject.Add(newObject);
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_24 = __this->___pooledObject_2;
		RuntimeObject* L_25 = V_0;
		NullCheck(L_24);
		List_1_Add_m0B8D5DF950C19F2EEFBBCBEB2ACA85184B226E4F_inline(L_24, L_25, List_1_Add_m0B8D5DF950C19F2EEFBBCBEB2ACA85184B226E4F_RuntimeMethod_var);
		// return newObject;
		RuntimeObject* L_26 = V_0;
		return L_26;
	}
}
// System.Void Pool::ClearOnScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_ClearOnScreen_m5A2AABCA7AAACFEE82C9E9D11655394BC27D919E (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < pooledObject.Count; i++) {
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// pooledObject[i].GetGameObject().SetActive(false);
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_0 = __this->___pooledObject_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA(L_0, L_1, List_1_get_Item_m27141EB8C52ED6FC200A0DE11D7E7BC66F9D1FAA_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(3 /* UnityEngine.GameObject IPoolable::GetGameObject() */, IPoolable_t39E50D15DFBE745ACD1DFCD104539F1817C0B531_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < pooledObject.Count; i++) {
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < pooledObject.Count; i++) {
		int32_t L_5 = V_0;
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_6 = __this->___pooledObject_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_inline(L_6, List_1_get_Count_mB2545C181BF99CA66BC155A6D6019CB055195848_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Pool::DestroyAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_DestroyAll_mA2994C2ADB09D7DF890C179F474C34E31A3FEB44 (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Pool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool__ctor_m008F81020922EA4E5DF1717B0A81D918B85CD8CF (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4C4170D2B14B4395DB2999B54698236AFA991718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t951EEA1FD675A7AC2515734A361670D068870191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<IPoolable> pooledObject = new List<IPoolable>();
		List_1_t951EEA1FD675A7AC2515734A361670D068870191* L_0 = (List_1_t951EEA1FD675A7AC2515734A361670D068870191*)il2cpp_codegen_object_new(List_1_t951EEA1FD675A7AC2515734A361670D068870191_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4C4170D2B14B4395DB2999B54698236AFA991718(L_0, List_1__ctor_m4C4170D2B14B4395DB2999B54698236AFA991718_RuntimeMethod_var);
		__this->___pooledObject_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pooledObject_2), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_Start_m0F7F0CFD5169405746F313FF1D7ED1534412844D (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// effectScript = GameObject.Find("ETFXFireProjectile").GetComponent<ETFXFireProjectile>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC, NULL);
		NullCheck(L_0);
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_1;
		L_1 = GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791(L_0, GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var);
		__this->___effectScript_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectScript_7), (void*)L_1);
		// getProjectileNames();
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(__this, NULL);
		// MyButtonText = Button.transform.Find("Text").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Button_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9, NULL);
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_4, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___MyButtonText_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MyButtonText_5), (void*)L_5);
		// MyButtonText.text = projectileParticleName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___MyButtonText_5;
		String_t* L_7 = __this->___projectileParticleName_6;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_Update_m81BD65853D34C93426A7D596C3DE2194AA0DDE65 (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	{
		// MyButtonText.text = projectileParticleName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___MyButtonText_5;
		String_t* L_1 = __this->___projectileParticleName_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectileScript = effectScript.projectiles[effectScript.currentProjectile].GetComponent<ETFXProjectileScript>();
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_0 = __this->___effectScript_7;
		NullCheck(L_0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = L_0->___projectiles_4;
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_2 = __this->___effectScript_7;
		NullCheck(L_2);
		int32_t L_3 = L_2->___currentProjectile_6;
		NullCheck(L_1);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* L_6;
		L_6 = GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436(L_5, GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var);
		__this->___projectileScript_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileScript_8), (void*)L_6);
		// projectileParticleName = projectileScript.projectileParticle.name;    // Assign the name of the currently selected projectile to projectileParticleName
		ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* L_7 = __this->___projectileScript_8;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___projectileParticle_5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		__this->___projectileParticleName_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileParticleName_6), (void*)L_9);
		// }
		return;
	}
}
// System.Boolean EpicToonFX.ETFXButtonScript::overButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETFXButtonScript_overButton_m91409E8AD5D3F2F253116858FFC90E972C7BA9B2 (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Rect button1 = new Rect(buttonsX, buttonsY, buttonsSizeX, buttonsSizeY);
		float L_0 = __this->___buttonsX_9;
		float L_1 = __this->___buttonsY_10;
		float L_2 = __this->___buttonsSizeX_11;
		float L_3 = __this->___buttonsSizeY_12;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), L_0, L_1, L_2, L_3, NULL);
		// Rect button2 = new Rect(buttonsX + buttonsDistance, buttonsY, buttonsSizeX, buttonsSizeY);
		float L_4 = __this->___buttonsX_9;
		float L_5 = __this->___buttonsDistance_13;
		float L_6 = __this->___buttonsY_10;
		float L_7 = __this->___buttonsSizeX_11;
		float L_8 = __this->___buttonsSizeY_12;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)il2cpp_codegen_add(L_4, L_5)), L_6, L_7, L_8, NULL);
		// if(button1.Contains(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y)) ||
		//    button2.Contains(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y)))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_10 = L_9.___x_2;
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_13 = L_12.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_10, ((float)il2cpp_codegen_subtract(((float)L_11), L_13)), /*hidden argument*/NULL);
		bool L_15;
		L_15 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_0), L_14, NULL);
		if (L_15)
		{
			goto IL_0097;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_17 = L_16.___x_2;
		int32_t L_18;
		L_18 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_20 = L_19.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_17, ((float)il2cpp_codegen_subtract(((float)L_18), L_20)), /*hidden argument*/NULL);
		bool L_22;
		L_22 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_1), L_21, NULL);
		if (!L_22)
		{
			goto IL_0099;
		}
	}

IL_0097:
	{
		// return true;
		return (bool)1;
	}

IL_0099:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript__ctor_m517511C6802BD4A71C24EB8F22F6CDB5C429FECE (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXFireProjectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_Start_m71FE79B72E21B59B68A10A40490B898D259A1E79 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedProjectileButton = GameObject.Find("Button").GetComponent<ETFXButtonScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, NULL);
		NullCheck(L_0);
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_1;
		L_1 = GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2(L_0, GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var);
		__this->___selectedProjectileButton_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedProjectileButton_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_Update_mA610052D76161FC9BE9184F05BC78C01D1D2664D (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// nextEffect();
		ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE(__this, NULL);
	}

IL_0012:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// nextEffect();
		ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE(__this, NULL);
	}

IL_0021:
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// previousEffect();
		ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492(__this, NULL);
		goto IL_0044;
	}

IL_0032:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// previousEffect();
		ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492(__this, NULL);
	}

IL_0044:
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0)) //On left mouse down-click
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)323), NULL);
		if (!L_4)
		{
			goto IL_00da;
		}
	}
	{
		// if (!EventSystem.current.IsPointerOverGameObject()) //Checks if the mouse is not over a UI part
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_5, NULL);
		if (L_6)
		{
			goto IL_00da;
		}
	}
	{
		// if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 100f)) //Finds the point where you click with the mouse
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_7);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_9;
		L_9 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_7, L_8, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_10 = (&__this->___hit_9);
		bool L_11;
		L_11 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_9, L_10, (100.0f), NULL);
		if (!L_11)
		{
			goto IL_00da;
		}
	}
	{
		// GameObject projectile = Instantiate(projectiles[currentProjectile], spawnPosition.position, Quaternion.identity) as GameObject; //Spawns the selected projectile
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___projectiles_4;
		int32_t L_13 = __this->___currentProjectile_6;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___spawnPosition_5;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_15, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_19;
		// projectile.transform.LookAt(hit.point); //Sets the projectiles rotation to look at the point clicked
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_22 = (&__this->___hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_22, NULL);
		NullCheck(L_21);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_21, L_23, NULL);
		// projectile.GetComponent<Rigidbody>().AddForce(projectile.transform.forward * speed); //Set the speed of the projectile by applying force to the rigidbody
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		NullCheck(L_24);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25;
		L_25 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_24, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_0;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_27, NULL);
		float L_29 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		NullCheck(L_25);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_25, L_30, NULL);
	}

IL_00da:
	{
		// Debug.DrawRay(Camera.main.ScreenPointToRay(Input.mousePosition).origin, Camera.main.ScreenPointToRay(Input.mousePosition).direction * 100, Color.yellow);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
		L_31 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_31);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_33;
		L_33 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_31, L_32, NULL);
		V_1 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_1), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35;
		L_35 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_35);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_37;
		L_37 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_35, L_36, NULL);
		V_1 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, (100.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_34, L_39, L_40, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::nextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	{
		// if (currentProjectile < projectiles.Length - 1)
		int32_t L_0 = __this->___currentProjectile_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___projectiles_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0022;
		}
	}
	{
		// currentProjectile++;
		int32_t L_2 = __this->___currentProjectile_6;
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0029;
	}

IL_0022:
	{
		// currentProjectile = 0;
		__this->___currentProjectile_6 = 0;
	}

IL_0029:
	{
		// selectedProjectileButton.getProjectileNames();
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_3 = __this->___selectedProjectileButton_8;
		NullCheck(L_3);
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(L_3, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::previousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	{
		// if (currentProjectile > 0)
		int32_t L_0 = __this->___currentProjectile_6;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// currentProjectile--;
		int32_t L_1 = __this->___currentProjectile_6;
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0029;
	}

IL_0019:
	{
		// currentProjectile = projectiles.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___projectiles_4;
		NullCheck(L_2);
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0029:
	{
		// selectedProjectileButton.getProjectileNames();
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_3 = __this->___selectedProjectileButton_8;
		NullCheck(L_3);
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(L_3, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::AdjustSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_AdjustSpeed_m9A00824BF1347E0F8FE0E6126CF794676B7BB8FB (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, float ___newSpeed0, const RuntimeMethod* method) 
{
	{
		// speed = newSpeed;
		float L_0 = ___newSpeed0;
		__this->___speed_7 = L_0;
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile__ctor_m0454A1D37EA11E608273AB3987BD6D93213A31A8 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 500;
		__this->___speed_7 = (500.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXLoopScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_Start_m8B9F608C71269FF287FF5CF6A0D12F728446FE59 (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	{
		// PlayEffect();
		ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB(__this, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("EffectLoop");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXLoopScript::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXLoopScript_EffectLoop_m9BD0D9DFE864FB2692165E94270E5CFB64CBE5BE (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* L_0 = (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92*)il2cpp_codegen_object_new(U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C(L_0, 0, NULL);
		U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXLoopScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript__ctor_m7D358DD45F488706D4E3340A8540A6AF526BB6B7 (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	{
		// public float loopTimeLimit = 2.0f;
		__this->___loopTimeLimit_5 = (2.0f);
		// public bool spawnWithoutLight = true;
		__this->___spawnWithoutLight_6 = (bool)1;
		// public bool spawnWithoutSound = true;
		__this->___spawnWithoutSound_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_IDisposable_Dispose_mE9D671CFBC0674F6D6F1E16BCD8DB26A1FCB4B57 (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEffectLoopU3Ed__6_MoveNext_m327965464B09214DB41A74AD12ACC109A74F1DDC (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject effectPlayer = (GameObject) Instantiate(chosenEffect, transform.position, transform.rotation);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___chosenEffect_4;
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_8, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___U3CeffectPlayerU3E5__2_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeffectPlayerU3E5__2_3), (void*)L_12);
		// if(spawnWithoutLight = true && effectPlayer.GetComponent<Light>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_14);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15;
		L_15 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_14, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		bool L_17 = L_16;
		V_2 = L_17;
		NullCheck(L_13);
		L_13->___spawnWithoutLight_6 = L_17;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		// effectPlayer.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_19);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_20;
		L_20 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_19, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_20);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)0, NULL);
	}

IL_0074:
	{
		// if(spawnWithoutSound = true && effectPlayer.GetComponent<AudioSource>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_21 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_22);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23;
		L_23 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_22, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		bool L_25 = L_24;
		V_2 = L_25;
		NullCheck(L_21);
		L_21->___spawnWithoutSound_7 = L_25;
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00a0;
		}
	}
	{
		// effectPlayer.GetComponent<AudioSource>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_27);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28;
		L_28 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_27, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_28);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)0, NULL);
	}

IL_00a0:
	{
		// yield return new WaitForSeconds(loopTimeLimit);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_29 = V_1;
		NullCheck(L_29);
		float L_30 = L_29->___loopTimeLimit_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, L_30, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ba:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy (effectPlayer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___U3CeffectPlayerU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_32, NULL);
		// PlayEffect();
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_33 = V_1;
		NullCheck(L_33);
		ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB(L_33, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4095FEA0B6FAFD62E68FBC39B482787B6889936B (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_get_Current_m62DB043819328D994B722601E774742FB16DBE29 (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXMouseOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_Start_m883ED864D07ED2B013CBEC297E413AC4F7E8403A (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 angles = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		V_0 = L_1;
		// rotationYAxis = angles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___y_3;
		__this->___rotationYAxis_13 = L_3;
		// rotationXAxis = angles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		__this->___rotationXAxis_14 = L_5;
		// if (GetComponent<Rigidbody>())
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		NullCheck(L_8);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_8, (bool)1, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_LateUpdate_m88BAD2785B3447A239E1094CBEBEC160B1D5C270 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (target)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_01ae;
		}
	}
	{
		// if (Input.GetMouseButton(1))
		bool L_2;
		L_2 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		// velocityX += xSpeed * Input.GetAxis("Mouse X") * distance * 0.02f;
		float L_3 = __this->___velocityX_15;
		float L_4 = __this->___xSpeed_6;
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_6 = __this->___distance_5;
		__this->___velocityX_15 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), (0.0199999996f)))));
		// velocityY += ySpeed * Input.GetAxis("Mouse Y") * 0.02f;
		float L_7 = __this->___velocityY_16;
		float L_8 = __this->___ySpeed_7;
		float L_9;
		L_9 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___velocityY_16 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), (0.0199999996f)))));
	}

IL_0067:
	{
		// rotationYAxis += velocityX;
		float L_10 = __this->___rotationYAxis_13;
		float L_11 = __this->___velocityX_15;
		__this->___rotationYAxis_13 = ((float)il2cpp_codegen_add(L_10, L_11));
		// rotationXAxis -= velocityY;
		float L_12 = __this->___rotationXAxis_14;
		float L_13 = __this->___velocityY_16;
		__this->___rotationXAxis_14 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// rotationXAxis = ClampAngle(rotationXAxis, yMinLimit, yMaxLimit);
		float L_14 = __this->___rotationXAxis_14;
		float L_15 = __this->___yMinLimit_8;
		float L_16 = __this->___yMaxLimit_9;
		float L_17;
		L_17 = ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F(L_14, L_15, L_16, NULL);
		__this->___rotationXAxis_14 = L_17;
		// Quaternion toRotation = Quaternion.Euler(rotationXAxis, rotationYAxis, 0);
		float L_18 = __this->___rotationXAxis_14;
		float L_19 = __this->___rotationYAxis_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_18, L_19, (0.0f), NULL);
		// Quaternion rotation = toRotation;
		V_0 = L_20;
		// distance = Mathf.Clamp(distance - Input.GetAxis("Mouse ScrollWheel") * 5, distanceMin, distanceMax);
		float L_21 = __this->___distance_5;
		float L_22;
		L_22 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_23 = __this->___distanceMin_10;
		float L_24 = __this->___distanceMax_11;
		float L_25;
		L_25 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_21, ((float)il2cpp_codegen_multiply(L_22, (5.0f))))), L_23, L_24, NULL);
		__this->___distance_5 = L_25;
		// if (Physics.Linecast(target.position, transform.position, out hit))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___target_4;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		bool L_30;
		L_30 = Physics_Linecast_m4F2A0744FE106002EE26D12B6137FC21C019B932(L_27, L_29, (&V_1), NULL);
		if (!L_30)
		{
			goto IL_0122;
		}
	}
	{
		// distance -= hit.distance;
		float L_31 = __this->___distance_5;
		float L_32;
		L_32 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		__this->___distance_5 = ((float)il2cpp_codegen_subtract(L_31, L_32));
	}

IL_0122:
	{
		// Vector3 negDistance = new Vector3(0.0f, 0.0f, -distance);
		float L_33 = __this->___distance_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), ((-L_33)), NULL);
		// Vector3 position = rotation * negDistance + target.position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_34, L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___target_4;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_38, NULL);
		V_3 = L_39;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = V_0;
		NullCheck(L_40);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_41, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_3;
		NullCheck(L_42);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_43, NULL);
		// velocityX = Mathf.Lerp(velocityX, 0, Time.deltaTime * smoothTime);
		float L_44 = __this->___velocityX_15;
		float L_45;
		L_45 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_46 = __this->___smoothTime_12;
		float L_47;
		L_47 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_44, (0.0f), ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
		__this->___velocityX_15 = L_47;
		// velocityY = Mathf.Lerp(velocityY, 0, Time.deltaTime * smoothTime);
		float L_48 = __this->___velocityY_16;
		float L_49;
		L_49 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_50 = __this->___smoothTime_12;
		float L_51;
		L_51 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_48, (0.0f), ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		__this->___velocityY_16 = L_51;
	}

IL_01ae:
	{
		// }
		return;
	}
}
// System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// if (angle < -360F)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360F;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360F)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360F;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit__ctor_mCCECFB7E06C2B4F0D1F93D142B8CA91738C63370 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	{
		// public float distance = 5.0f;
		__this->___distance_5 = (5.0f);
		// public float xSpeed = 120.0f;
		__this->___xSpeed_6 = (120.0f);
		// public float ySpeed = 120.0f;
		__this->___ySpeed_7 = (120.0f);
		// public float yMinLimit = -20f;
		__this->___yMinLimit_8 = (-20.0f);
		// public float yMaxLimit = 80f;
		__this->___yMaxLimit_9 = (80.0f);
		// public float distanceMin = .5f;
		__this->___distanceMin_10 = (0.5f);
		// public float distanceMax = 15f;
		__this->___distanceMax_11 = (15.0f);
		// public float smoothTime = 2f;
		__this->___smoothTime_12 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_Start_m4453DDD66DCD94DE34E122A858EF37B3622FBDDE (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___targetRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetRenderer_6), (void*)L_0);
		// targetCollider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___targetCollider_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetCollider_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget::SpawnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetRenderer.enabled = true; //Shows the target
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___targetRenderer_6;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// targetCollider.enabled = true; //Enables the collider
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___targetCollider_7;
		NullCheck(L_1);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_1, (bool)1, NULL);
		// GameObject respawnEffect = Instantiate(respawnParticle, transform.position, transform.rotation) as GameObject; //Spawns attached respawn effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___respawnParticle_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(respawnEffect, 3.5f); //Removes attached respawn effect after x seconds
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_7, (3.5f), NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_OnTriggerEnter_m02835C9D449C3DF9EF0F1ED51651FBB8B81EC58A (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.tag == "Missile") // If collider is tagged as missile
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4, NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		// if (hitParticle)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___hitParticle_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_006f;
		}
	}
	{
		// GameObject destructibleEffect = Instantiate(hitParticle, transform.position, transform.rotation) as GameObject; // Spawns attached hit effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___hitParticle_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_7, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// Destroy(destructibleEffect, 2f); // Removes hit effect after x seconds
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_10, (2.0f), NULL);
		// targetRenderer.enabled = false; // Hides the target
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11 = __this->___targetRenderer_6;
		NullCheck(L_11);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_11, (bool)0, NULL);
		// targetCollider.enabled = false; // Disables target collider
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = __this->___targetCollider_7;
		NullCheck(L_12);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_12, (bool)0, NULL);
		// StartCoroutine(Respawn()); // Sets timer for respawning the target
		RuntimeObject* L_13;
		L_13 = ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* L_0 = (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3*)il2cpp_codegen_object_new(U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1(L_0, 0, NULL);
		U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget__ctor_m6D27B723D5EE302E348D7A5A7052A37FF09EFB33 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7_System_IDisposable_Dispose_m2A539129FAD324FCCFE7570356787FA4CE45616B (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXTarget/<Respawn>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRespawnU3Ed__7_MoveNext_m98CEBFB0B767AF44163EF68F42B2F00DA7C99D1A (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SpawnTarget();
		ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* L_5 = V_1;
		NullCheck(L_5);
		ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E9C4DF0C87738322C436CFF672F3C0FDD320374 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnU3Ed__7_System_Collections_IEnumerator_get_Current_mFCD05AB83ED3E741E6D5D7F5F8B51CEA97F24FBF (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXLightFade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade_Start_m0D678058F25EBDBD14494760618ED99E7EED9A60 (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.GetComponent<Light>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_0, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// li = gameObject.GetComponent<Light>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4;
		L_4 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_3, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		__this->___li_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___li_6), (void*)L_4);
		// initIntensity = li.intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_5 = __this->___li_6;
		NullCheck(L_5);
		float L_6;
		L_6 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_5, NULL);
		__this->___initIntensity_7 = L_6;
		return;
	}

IL_0035:
	{
		// print("No light object found on " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082, L_8, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_9, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLightFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade_Update_mE8F13E85F7C1AD93E0B9D2CE9737638E9BD340AF (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.GetComponent<Light>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_0, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		// li.intensity -= initIntensity * (Time.deltaTime / life);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = __this->___li_6;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = L_3;
		NullCheck(L_4);
		float L_5;
		L_5 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_4, NULL);
		float L_6 = __this->___initIntensity_7;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_8 = __this->___life_4;
		NullCheck(L_4);
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_4, ((float)il2cpp_codegen_subtract(L_5, ((float)il2cpp_codegen_multiply(L_6, ((float)(L_7/L_8)))))), NULL);
		// if (killAfterLife && li.intensity <= 0)
		bool L_9 = __this->___killAfterLife_5;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = __this->___li_6;
		NullCheck(L_10);
		float L_11;
		L_11 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_10, NULL);
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// Destroy(gameObject.GetComponent<Light>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13;
		L_13 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_12, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLightFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade__ctor_m1ED5D845611A6F5D0DEE7066BD50B26BCD197107 (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	{
		// public float life = 0.2f;
		__this->___life_4 = (0.200000003f);
		// public bool killAfterLife = true;
		__this->___killAfterLife_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXPitchRandomizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXPitchRandomizer_Start_m59C6A78C8AEBFB7E0C1475BC3AC48D3EE0E96832 (ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponent<AudioSource>().pitch *= 1 + Random.Range(-randomPercent / 100, randomPercent / 100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_0, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = L_1;
		NullCheck(L_2);
		float L_3;
		L_3 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_2, NULL);
		float L_4 = __this->___randomPercent_4;
		float L_5 = __this->___randomPercent_4;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((float)(((-L_4))/(100.0f))), ((float)(L_5/(100.0f))), NULL);
		NullCheck(L_2);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_2, ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_add((1.0f), L_6)))), NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXPitchRandomizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXPitchRandomizer__ctor_m5A7D44A2501727B8D8CFA36DF1DAAD0652A78BD2 (ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF* __this, const RuntimeMethod* method) 
{
	{
		// public float randomPercent = 10;
		__this->___randomPercent_4 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EpicToonFX.ETFXRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation_Start_mE170B11ECA9897944DF1D88D87CE6C393707E7D5 (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation_Update_mFEF375BFB4CEA01E6D71EF0CC11ADD6014784F6A (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// if (rotateSpace == spaceEnum.Local)
		int32_t L_0 = __this->___rotateSpace_5;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// transform.Rotate(rotateVector * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___rotateVector_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_4, NULL);
	}

IL_0023:
	{
		// if (rotateSpace == spaceEnum.World)
		int32_t L_5 = __this->___rotateSpace_5;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		// transform.Rotate(rotateVector * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___rotateVector_4;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_6, L_9, 0, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation__ctor_m819E8377B916CB68CEA35D318A4B1EFED3B1D007 (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 rotateVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___rotateVector_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HealthChangeHandler_Invoke_m6891DD8AB4E19C9631C51D0E1F418A0AF84A5F67_inline (HealthChangeHandler_t99F189C5D6080297E47D4F5AF077E539557D9ECD* __this, float ___change0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___change0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* GameManager_get_CurrentLevel_m8A192C85E400A1DB9E53ED0A7CDF742347C57A7B_inline (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// return currentLevel;
		LevelData_tE6EAE053C277D3E4ED073363F0BF24BDBADFC4D5* L_0 = __this->___currentLevel_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InputHandler_Invoke_m4C12D2B5701FE54CB282E980FCA318ECB7A6EDE1_inline (InputHandler_t7BA575802446D85248A79D23824103F20ADCDD1F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameOverHandler_Invoke_m6239EBB9489E45990E5847751F7B7A369CA9F1ED_inline (GameOverHandler_t8B412816322B705BE5DC020C750EE1FA605B9B35* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Pool_get_ObjectName_m6415B27B6C28252D5F6307B32D7E921AC44D4108_inline (Pool_tD26C4E724DD443CEB143293744A568DB49E0A6B5* __this, const RuntimeMethod* method) 
{
	{
		// get { return objectName; }
		String_t* L_0 = __this->___objectName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
