#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Char>
struct Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>
struct Action_1_t2C020566EC707FE07F1D33D252E0183830E3EE54;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.IEnumerable`1<Enemy>
struct IEnumerable_1_t6A7532A07D1CECE011EA4B42EB64990A2908390D;
// System.Collections.Generic.IEnumerable`1<EnemySpawner>
struct IEnumerable_1_t612513E6F7DDEFCFE6CEDA6D2A9A73417B62A713;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UIelement>
struct IEnumerable_1_t2D9BB7E132FA3BF5F56919C7D1EAF30FF5883AD5;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>
struct InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C;
// System.Collections.Generic.List`1<EnemySpawner>
struct List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<ShootingController>
struct List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2;
// System.Collections.Generic.List`1<UIPage>
struct List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD;
// System.Collections.Generic.List`1<UIelement>
struct List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<UIPage>
struct Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Action`1<System.Char>[]
struct Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA;
// System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>[]
struct Action_1U5BU5D_tD70C41321349B00CC149827E5DED37CD57883870;
// UnityEngine.InputSystem.InputProcessor`1<System.Single>[]
struct InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
// EnemySpawner[]
struct EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648;
// UnityEngine.InputSystem.Controls.KeyControl[]
struct KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// ShootingController[]
struct ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UIPage[]
struct UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UIelement[]
struct UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.InputSystem.Controls.AnyKeyControl
struct AnyKeyControl_t48489FBF55FEA0C6B00AFD412DCE079A20E07B98;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Controller
struct Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// CursorChanger
struct CursorChanger_tF96791A48F42EF65902156CCA7FE7185F6B403F5;
// Damage
struct Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DirectionalMover
struct DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemySpawner
struct EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Health
struct Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96;
// HighScoreDisplay
struct HighScoreDisplay_t5048A49C2F80ABFD44736CBCE44BA71881B455AE;
// HighlightFix
struct HighlightFix_t78E5E5D7159CB92B74587BE3B49A3CDC51829B3C;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323;
// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A;
// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t916B88BC80A33CCFB1FCACE4F721498831885C91;
// UnityEngine.InputSystem.Keyboard
struct Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA;
// LevelLoadButton
struct LevelLoadButton_t82AF66BD3147D5694F41F1C2E1E22F0BBA1A194B;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// QuitGameButton
struct QuitGameButton_t3E0ABE520A7973062C0E581168B878FE1F6AC215;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreDisplay
struct ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A;
// ScoreReseter
struct ScoreReseter_tEDB5071910ACDAF7E9456B270B5DEEAABD9D07E4;
// ScreenshotUtility
struct ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// ShootingController
struct ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TimedObjectDestroyer
struct TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UIPage
struct UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF;
// UIelement
struct UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// InputManager/<ResetFireStart>d__12
struct U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C;
// InputManager/<ResetPausePressed>d__15
struct U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UIManager/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7;
IL2CPP_EXTERN_C String_t* _stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral250AD2AA88B10E79E7D4445BF3F77BE587F43B12;
IL2CPP_EXTERN_C String_t* _stringLiteral370ADCA67A4A44D3DD6F644476A178477F67FE98;
IL2CPP_EXTERN_C String_t* _stringLiteral43878D65F1C6074DCCD24113E5432F59B56E0B00;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral636B76D4620286F9357E4B4D21A324B107DDEB96;
IL2CPP_EXTERN_C String_t* _stringLiteral63E1EEBD6ECE8B7D68D22188064C573DFB8CEDD3;
IL2CPP_EXTERN_C String_t* _stringLiteral7E29A76E9A1C7ADBEE5C1295F374673305C5CC08;
IL2CPP_EXTERN_C String_t* _stringLiteral9024CD43578CA780788DA74EE5DD0BBA9CB7921B;
IL2CPP_EXTERN_C String_t* _stringLiteral93998F8FCA1C9BD2B32008E15C9DE4DAAF4A0CBC;
IL2CPP_EXTERN_C String_t* _stringLiteral96D744F31FA544E3D7485A422B5684085BF01677;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB4714CDC37E7C2334E05539DECE7510E200D97;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA8AA7C0722AB255AB2EA4C3D1885E050F82430;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC30623B7A8C1856DFF2AA6A6C1B7D01F7FDFDB9C;
IL2CPP_EXTERN_C String_t* _stringLiteralC4888D2EF4A871EAA8D9B97DBF13E314B92206C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A93DAF348D468AD6F581D4010C1663A75B7765;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE81AD9B311980AE2868B06A8AE531D6EF12FA6AB;
IL2CPP_EXTERN_C const RuntimeMethod* CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_mF8D66AA0D51C9764CA2B87F51B41FC7E61656A81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSelectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_m2714EF15B06CF6AF3ABDA79514691A9D4364B0E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m7BD759CCEF5159E971867780E15E1D1A234EA990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m29E3166BBDE481FD8F9D89CB2E0934FB80F4D385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mCEC25F25A37DEC7CF5342569F8E64A960C38168E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3AC64F5BF52E6F789064D3B50CCFA014AF7D4843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6F27EBD77F3F5F55B17254996BB754AA0AA93D27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB9EDD53837C9E0FB933A434A1174A1692E97C5B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCAB91EFF5FD71D9A6E7ABEC2ACDD2CC35C33E7DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m010B62E1AFD053C6E02CFDB3B04875D0D38E28BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9D7E3951E837E0393257C4825A95D439EC95EF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9F5329F570D6652AD4882A0C84F4E0165FFD0A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE43F3AA97D70AEBEFC88A96691EEF84767820D6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4D266227EC503836E9BEEF76AAE06463649DDD7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m819777AB53057294645C10D1F7369D443709DE36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBA1E74C79F0B0A85B038580B7298FEF1CEDD8254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC9DA313E0E9DAD38F581C9B456D78123282A4BEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4_mFF74B9CA5050B6F9F1429F1BDB80FDB24A6EEACA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m857846AD63752B9D9BE2C0EEEC0F686669E471D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m03792C8C7F289A7640CFF47532926DDA94C69115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1F81844CF7218AE44786D3EDF9A4F0E13F49CA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m48E5600EC26AD7087E57E60F8FE3590D6530B30F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE58740915151C731F1EAC76E0A3B78AE3898D855_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mF733F57FC32460856FD46663E78EF66762D0926E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC7F8F2D41400918F62D1904301AD4D9F8DC06B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m86DF089BE1978D3A4E7532CB2CCE2902AD04BC46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m5AF0F578095725B77D644E9D6EADC3B294370A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mC3AAF69FE2AE5FF85F3D199377D1095799148C75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m1E4AF509B6444AD08E9D39C11D581A39D0F3360D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetFireStartU3Ed__12_System_Collections_IEnumerator_Reset_m5250C374FFA872C00B352B24081BECE54527523B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetPausePressedU3Ed__15_System_Collections_IEnumerator_Reset_m880373AA8B7F73CE4DCA1F79629418C804F47915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CGoToPageByNameU3Eb__0_m7B1526CFB5BC9BC366CE24C2247E020E63546C1D_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0;
struct EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Enemy>
struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____items_1)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C_StaticFields, ____emptyArray_5)); }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<EnemySpawner>
struct List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1, ____items_1)); }
	inline EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* get__items_1() const { return ____items_1; }
	inline EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1_StaticFields, ____emptyArray_5)); }
	inline EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ShootingController>
struct List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2, ____items_1)); }
	inline ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* get__items_1() const { return ____items_1; }
	inline ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2_StaticFields, ____emptyArray_5)); }
	inline ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UIPage>
struct List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD, ____items_1)); }
	inline UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729* get__items_1() const { return ____items_1; }
	inline UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD_StaticFields, ____emptyArray_5)); }
	inline UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIPageU5BU5D_t48EE0F11B744994FBF198A78E28176124B8A9729* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UIelement>
struct List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4, ____items_1)); }
	inline UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* get__items_1() const { return ____items_1; }
	inline UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4_StaticFields, ____emptyArray_5)); }
	inline UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// InputManager/<ResetFireStart>d__12
struct U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C  : public RuntimeObject
{
public:
	// System.Int32 InputManager/<ResetFireStart>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InputManager/<ResetFireStart>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// InputManager InputManager/<ResetFireStart>d__12::<>4__this
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C, ___U3CU3E4__this_2)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// InputManager/<ResetPausePressed>d__15
struct U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC  : public RuntimeObject
{
public:
	// System.Int32 InputManager/<ResetPausePressed>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InputManager/<ResetPausePressed>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// InputManager InputManager/<ResetPausePressed>d__15::<>4__this
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC, ___U3CU3E4__this_2)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UIManager/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12  : public RuntimeObject
{
public:
	// System.String UIManager/<>c__DisplayClass20_0::pageName
	String_t* ___pageName_0;

public:
	inline static int32_t get_offset_of_pageName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12, ___pageName_0)); }
	inline String_t* get_pageName_0() const { return ___pageName_0; }
	inline String_t** get_address_of_pageName_0() { return &___pageName_0; }
	inline void set_pageName_0(String_t* value)
	{
		___pageName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pageName_0), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<EnemySpawner>
struct Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23, ___list_0)); }
	inline List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 * get_list_0() const { return ___list_0; }
	inline List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23, ___current_3)); }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * get_current_3() const { return ___current_3; }
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<ShootingController>
struct Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461, ___list_0)); }
	inline List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * get_list_0() const { return ___list_0; }
	inline List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461, ___current_3)); }
	inline ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * get_current_3() const { return ___current_3; }
	inline ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UIPage>
struct Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t662389D5740170895123E2081C3EF405AA533AC5, ___list_0)); }
	inline List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * get_list_0() const { return ___list_0; }
	inline List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t662389D5740170895123E2081C3EF405AA533AC5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t662389D5740170895123E2081C3EF405AA533AC5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t662389D5740170895123E2081C3EF405AA533AC5, ___current_3)); }
	inline UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * get_current_3() const { return ___current_3; }
	inline UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UIelement>
struct Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745, ___list_0)); }
	inline List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * get_list_0() const { return ___list_0; }
	inline List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745, ___current_3)); }
	inline UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * get_current_3() const { return ___current_3; }
	inline UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>>
struct InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F, ___firstValue_1)); }
	inline Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_tCE61A5061D6E81AA0796E994EE9E76AC99E8D172 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F, ___additionalValues_2)); }
	inline Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t3D914437066BF4C080433238136C05E1856588AA* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>>
struct InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t2C020566EC707FE07F1D33D252E0183830E3EE54 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tD70C41321349B00CC149827E5DED37CD57883870* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918, ___firstValue_1)); }
	inline Action_1_t2C020566EC707FE07F1D33D252E0183830E3EE54 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t2C020566EC707FE07F1D33D252E0183830E3EE54 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t2C020566EC707FE07F1D33D252E0183830E3EE54 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918, ___additionalValues_2)); }
	inline Action_1U5BU5D_tD70C41321349B00CC149827E5DED37CD57883870* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_tD70C41321349B00CC149827E5DED37CD57883870** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_tD70C41321349B00CC149827E5DED37CD57883870* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<System.Single>>
struct InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295, ___firstValue_1)); }
	inline InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputProcessor_1_tFB08CD7FA12EA4CF8097B65708FCE9D05BBE0D42 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295, ___additionalValues_2)); }
	inline InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputProcessor_1U5BU5D_tC69A936A5977DEC187E1F4C71B6CAF1359C39997* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;

public:
	inline static int32_t get_offset_of_m_Code_0() { return static_cast<int32_t>(offsetof(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D, ___m_Code_0)); }
	inline int32_t get_m_Code_0() const { return ___m_Code_0; }
	inline int32_t* get_address_of_m_Code_0() { return &___m_Code_0; }
	inline void set_m_Code_0(int32_t value)
	{
		___m_Code_0 = value;
	}
};


// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 
{
public:
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;

public:
	inline static int32_t get_offset_of_m_InterfaceName_0() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_InterfaceName_0)); }
	inline String_t* get_m_InterfaceName_0() const { return ___m_InterfaceName_0; }
	inline String_t** get_address_of_m_InterfaceName_0() { return &___m_InterfaceName_0; }
	inline void set_m_InterfaceName_0(String_t* value)
	{
		___m_InterfaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterfaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceClass_1() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_DeviceClass_1)); }
	inline String_t* get_m_DeviceClass_1() const { return ___m_DeviceClass_1; }
	inline String_t** get_address_of_m_DeviceClass_1() { return &___m_DeviceClass_1; }
	inline void set_m_DeviceClass_1(String_t* value)
	{
		___m_DeviceClass_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceClass_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Manufacturer_2() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Manufacturer_2)); }
	inline String_t* get_m_Manufacturer_2() const { return ___m_Manufacturer_2; }
	inline String_t** get_address_of_m_Manufacturer_2() { return &___m_Manufacturer_2; }
	inline void set_m_Manufacturer_2(String_t* value)
	{
		___m_Manufacturer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Manufacturer_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Product_3() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Product_3)); }
	inline String_t* get_m_Product_3() const { return ___m_Product_3; }
	inline String_t** get_address_of_m_Product_3() { return &___m_Product_3; }
	inline void set_m_Product_3(String_t* value)
	{
		___m_Product_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Product_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Serial_4() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Serial_4)); }
	inline String_t* get_m_Serial_4() const { return ___m_Serial_4; }
	inline String_t** get_address_of_m_Serial_4() { return &___m_Serial_4; }
	inline void set_m_Serial_4(String_t* value)
	{
		___m_Serial_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Serial_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Version_5)); }
	inline String_t* get_m_Version_5() const { return ___m_Version_5; }
	inline String_t** get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(String_t* value)
	{
		___m_Version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Version_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capabilities_6() { return static_cast<int32_t>(offsetof(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3, ___m_Capabilities_6)); }
	inline String_t* get_m_Capabilities_6() const { return ___m_Capabilities_6; }
	inline String_t** get_address_of_m_Capabilities_6() { return &___m_Capabilities_6; }
	inline void set_m_Capabilities_6(String_t* value)
	{
		___m_Capabilities_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Capabilities_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CursorMode
struct CursorMode_t7E5099ADC88D7CC5EAD437FFD4A8DF4622DA6FC2 
{
public:
	// System.Int32 UnityEngine.CursorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorMode_t7E5099ADC88D7CC5EAD437FFD4A8DF4622DA6FC2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___U3CformatU3Ek__BackingField_21;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_22;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_23;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_U3CformatU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CformatU3Ek__BackingField_21)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_U3CformatU3Ek__BackingField_21() const { return ___U3CformatU3Ek__BackingField_21; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_U3CformatU3Ek__BackingField_21() { return &___U3CformatU3Ek__BackingField_21; }
	inline void set_U3CformatU3Ek__BackingField_21(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___U3CformatU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbyteOffsetU3Ek__BackingField_22)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_22() const { return ___U3CbyteOffsetU3Ek__BackingField_22; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_22() { return &___U3CbyteOffsetU3Ek__BackingField_22; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_22(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbitOffsetU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CbitOffsetU3Ek__BackingField_23)); }
	inline uint32_t get_U3CbitOffsetU3Ek__BackingField_23() const { return ___U3CbitOffsetU3Ek__BackingField_23; }
	inline uint32_t* get_address_of_U3CbitOffsetU3Ek__BackingField_23() { return &___U3CbitOffsetU3Ek__BackingField_23; }
	inline void set_U3CbitOffsetU3Ek__BackingField_23(uint32_t value)
	{
		___U3CbitOffsetU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CsizeInBitsU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291, ___U3CsizeInBitsU3Ek__BackingField_24)); }
	inline uint32_t get_U3CsizeInBitsU3Ek__BackingField_24() const { return ___U3CsizeInBitsU3Ek__BackingField_24; }
	inline uint32_t* get_address_of_U3CsizeInBitsU3Ek__BackingField_24() { return &___U3CsizeInBitsU3Ek__BackingField_24; }
	inline void set_U3CsizeInBitsU3Ek__BackingField_24(uint32_t value)
	{
		___U3CsizeInBitsU3Ek__BackingField_24 = value;
	}
};

struct InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSBit_3;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatInt_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUInt_5;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatShort_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatUShort_7;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatByte_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatSByte_9;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatLong_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatULong_11;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatFloat_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatDouble_13;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3_15;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatQuaternion_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Short_17;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Short_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector2Byte_19;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  ___FormatVector3Byte_20;

public:
	inline static int32_t get_offset_of_FormatBit_2() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatBit_2)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatBit_2() const { return ___FormatBit_2; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatBit_2() { return &___FormatBit_2; }
	inline void set_FormatBit_2(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatBit_2 = value;
	}

	inline static int32_t get_offset_of_FormatSBit_3() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSBit_3)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSBit_3() const { return ___FormatSBit_3; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSBit_3() { return &___FormatSBit_3; }
	inline void set_FormatSBit_3(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSBit_3 = value;
	}

	inline static int32_t get_offset_of_FormatInt_4() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatInt_4)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatInt_4() const { return ___FormatInt_4; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatInt_4() { return &___FormatInt_4; }
	inline void set_FormatInt_4(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatInt_4 = value;
	}

	inline static int32_t get_offset_of_FormatUInt_5() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUInt_5)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUInt_5() const { return ___FormatUInt_5; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUInt_5() { return &___FormatUInt_5; }
	inline void set_FormatUInt_5(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUInt_5 = value;
	}

	inline static int32_t get_offset_of_FormatShort_6() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatShort_6)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatShort_6() const { return ___FormatShort_6; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatShort_6() { return &___FormatShort_6; }
	inline void set_FormatShort_6(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatShort_6 = value;
	}

	inline static int32_t get_offset_of_FormatUShort_7() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatUShort_7)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatUShort_7() const { return ___FormatUShort_7; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatUShort_7() { return &___FormatUShort_7; }
	inline void set_FormatUShort_7(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatUShort_7 = value;
	}

	inline static int32_t get_offset_of_FormatByte_8() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatByte_8)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatByte_8() const { return ___FormatByte_8; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatByte_8() { return &___FormatByte_8; }
	inline void set_FormatByte_8(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatByte_8 = value;
	}

	inline static int32_t get_offset_of_FormatSByte_9() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatSByte_9)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatSByte_9() const { return ___FormatSByte_9; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatSByte_9() { return &___FormatSByte_9; }
	inline void set_FormatSByte_9(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatSByte_9 = value;
	}

	inline static int32_t get_offset_of_FormatLong_10() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatLong_10)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatLong_10() const { return ___FormatLong_10; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatLong_10() { return &___FormatLong_10; }
	inline void set_FormatLong_10(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatLong_10 = value;
	}

	inline static int32_t get_offset_of_FormatULong_11() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatULong_11)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatULong_11() const { return ___FormatULong_11; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatULong_11() { return &___FormatULong_11; }
	inline void set_FormatULong_11(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatULong_11 = value;
	}

	inline static int32_t get_offset_of_FormatFloat_12() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatFloat_12)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatFloat_12() const { return ___FormatFloat_12; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatFloat_12() { return &___FormatFloat_12; }
	inline void set_FormatFloat_12(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatFloat_12 = value;
	}

	inline static int32_t get_offset_of_FormatDouble_13() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatDouble_13)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatDouble_13() const { return ___FormatDouble_13; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatDouble_13() { return &___FormatDouble_13; }
	inline void set_FormatDouble_13(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatDouble_13 = value;
	}

	inline static int32_t get_offset_of_FormatVector2_14() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2_14)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2_14() const { return ___FormatVector2_14; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2_14() { return &___FormatVector2_14; }
	inline void set_FormatVector2_14(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2_14 = value;
	}

	inline static int32_t get_offset_of_FormatVector3_15() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3_15)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3_15() const { return ___FormatVector3_15; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3_15() { return &___FormatVector3_15; }
	inline void set_FormatVector3_15(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3_15 = value;
	}

	inline static int32_t get_offset_of_FormatQuaternion_16() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatQuaternion_16)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatQuaternion_16() const { return ___FormatQuaternion_16; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatQuaternion_16() { return &___FormatQuaternion_16; }
	inline void set_FormatQuaternion_16(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatQuaternion_16 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Short_17() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Short_17)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Short_17() const { return ___FormatVector2Short_17; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Short_17() { return &___FormatVector2Short_17; }
	inline void set_FormatVector2Short_17(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Short_17 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Short_18() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Short_18)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Short_18() const { return ___FormatVector3Short_18; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Short_18() { return &___FormatVector3Short_18; }
	inline void set_FormatVector3Short_18(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Short_18 = value;
	}

	inline static int32_t get_offset_of_FormatVector2Byte_19() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector2Byte_19)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector2Byte_19() const { return ___FormatVector2Byte_19; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector2Byte_19() { return &___FormatVector2Byte_19; }
	inline void set_FormatVector2Byte_19(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector2Byte_19 = value;
	}

	inline static int32_t get_offset_of_FormatVector3Byte_20() { return static_cast<int32_t>(offsetof(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291_StaticFields, ___FormatVector3Byte_20)); }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  get_FormatVector3Byte_20() const { return ___FormatVector3Byte_20; }
	inline FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D * get_address_of_FormatVector3Byte_20() { return &___FormatVector3Byte_20; }
	inline void set_FormatVector3Byte_20(FourCC_tB18951639903964A6B5533C4BAFD8DA17AA8FD9D  value)
	{
		___FormatVector3Byte_20 = value;
	}
};


// UnityEngine.InputSystem.Key
struct Key_t93DC98D8186EB4FF5CAEDAA8A05EA85C81DCE555 
{
public:
	// System.Int32 UnityEngine.InputSystem.Key::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Key_t93DC98D8186EB4FF5CAEDAA8A05EA85C81DCE555, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
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
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.Controls.AxisControl/Clamp
struct Clamp_t99A62C871DB5BC7AC9872FD2CC84139C0E7ED6DD 
{
public:
	// System.Int32 UnityEngine.InputSystem.Controls.AxisControl/Clamp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Clamp_t99A62C871DB5BC7AC9872FD2CC84139C0E7ED6DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CameraController/CameraStyles
struct CameraStyles_t2263775A9F64A76075D435D49587237DC75AA8E5 
{
public:
	// System.Int32 CameraController/CameraStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraStyles_t2263775A9F64A76075D435D49587237DC75AA8E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Controller/AimModes
struct AimModes_tF67601938018899336774C126F7601A9194FF27D 
{
public:
	// System.Int32 Controller/AimModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AimModes_tF67601938018899336774C126F7601A9194FF27D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Controller/MovementModes
struct MovementModes_tF14FB5F318012884A654444DB56F1853024D8294 
{
public:
	// System.Int32 Controller/MovementModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementModes_tF14FB5F318012884A654444DB56F1853024D8294, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Enemy/MovementModes
struct MovementModes_tF73DA728A5026D1A2F694EE07D4C9C0741CA2370 
{
public:
	// System.Int32 Enemy/MovementModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementModes_tF73DA728A5026D1A2F694EE07D4C9C0741CA2370, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Enemy/ShootMode
struct ShootMode_t8613AD43724BDDC529A4B1BD2CEF46A6F6851079 
{
public:
	// System.Int32 Enemy/ShootMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShootMode_t8613AD43724BDDC529A4B1BD2CEF46A6F6851079, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlFlags_t4E905D93025A8EA82F8A643C2CF1B96150A035AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceFlags_tFA512F7F09EC7A0F7A695F96DC860C91EF15BCFF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Predicate`1<UIPage>
struct Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControl
struct InputControl_t3CDD1115017147EEC9D825834637D7700669C006  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  ___m_MaxValue_20;

public:
	inline static int32_t get_offset_of_m_StateBlock_0() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_StateBlock_0)); }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  get_m_StateBlock_0() const { return ___m_StateBlock_0; }
	inline InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291 * get_address_of_m_StateBlock_0() { return &___m_StateBlock_0; }
	inline void set_m_StateBlock_0(InputStateBlock_tD9C8DE6181F5D1871DA69E53EB426B9303915291  value)
	{
		___m_StateBlock_0 = value;
	}

	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Name_1)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Name_1() const { return ___m_Name_1; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Path_2() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Path_2)); }
	inline String_t* get_m_Path_2() const { return ___m_Path_2; }
	inline String_t** get_address_of_m_Path_2() { return &___m_Path_2; }
	inline void set_m_Path_2(String_t* value)
	{
		___m_Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayName_3)); }
	inline String_t* get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline String_t** get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(String_t* value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisplayNameFromLayout_4() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DisplayNameFromLayout_4)); }
	inline String_t* get_m_DisplayNameFromLayout_4() const { return ___m_DisplayNameFromLayout_4; }
	inline String_t** get_address_of_m_DisplayNameFromLayout_4() { return &___m_DisplayNameFromLayout_4; }
	inline void set_m_DisplayNameFromLayout_4(String_t* value)
	{
		___m_DisplayNameFromLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayNameFromLayout_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayName_5() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayName_5)); }
	inline String_t* get_m_ShortDisplayName_5() const { return ___m_ShortDisplayName_5; }
	inline String_t** get_address_of_m_ShortDisplayName_5() { return &___m_ShortDisplayName_5; }
	inline void set_m_ShortDisplayName_5(String_t* value)
	{
		___m_ShortDisplayName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayName_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShortDisplayNameFromLayout_6() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ShortDisplayNameFromLayout_6)); }
	inline String_t* get_m_ShortDisplayNameFromLayout_6() const { return ___m_ShortDisplayNameFromLayout_6; }
	inline String_t** get_address_of_m_ShortDisplayNameFromLayout_6() { return &___m_ShortDisplayNameFromLayout_6; }
	inline void set_m_ShortDisplayNameFromLayout_6(String_t* value)
	{
		___m_ShortDisplayNameFromLayout_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShortDisplayNameFromLayout_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Layout_7() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Layout_7)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Layout_7() const { return ___m_Layout_7; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Layout_7() { return &___m_Layout_7; }
	inline void set_m_Layout_7(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Layout_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_7))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Variants_8() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Variants_8)); }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  get_m_Variants_8() const { return ___m_Variants_8; }
	inline InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8 * get_address_of_m_Variants_8() { return &___m_Variants_8; }
	inline void set_m_Variants_8(InternedString_tD1138602E8B7EA0F5B4851812B13C7E0551E25C8  value)
	{
		___m_Variants_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Variants_8))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Device_9() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Device_9)); }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * get_m_Device_9() const { return ___m_Device_9; }
	inline InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 ** get_address_of_m_Device_9() { return &___m_Device_9; }
	inline void set_m_Device_9(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323 * value)
	{
		___m_Device_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_10() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_Parent_10)); }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * get_m_Parent_10() const { return ___m_Parent_10; }
	inline InputControl_t3CDD1115017147EEC9D825834637D7700669C006 ** get_address_of_m_Parent_10() { return &___m_Parent_10; }
	inline void set_m_Parent_10(InputControl_t3CDD1115017147EEC9D825834637D7700669C006 * value)
	{
		___m_Parent_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageCount_11() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageCount_11)); }
	inline int32_t get_m_UsageCount_11() const { return ___m_UsageCount_11; }
	inline int32_t* get_address_of_m_UsageCount_11() { return &___m_UsageCount_11; }
	inline void set_m_UsageCount_11(int32_t value)
	{
		___m_UsageCount_11 = value;
	}

	inline static int32_t get_offset_of_m_UsageStartIndex_12() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_UsageStartIndex_12)); }
	inline int32_t get_m_UsageStartIndex_12() const { return ___m_UsageStartIndex_12; }
	inline int32_t* get_address_of_m_UsageStartIndex_12() { return &___m_UsageStartIndex_12; }
	inline void set_m_UsageStartIndex_12(int32_t value)
	{
		___m_UsageStartIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AliasCount_13() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasCount_13)); }
	inline int32_t get_m_AliasCount_13() const { return ___m_AliasCount_13; }
	inline int32_t* get_address_of_m_AliasCount_13() { return &___m_AliasCount_13; }
	inline void set_m_AliasCount_13(int32_t value)
	{
		___m_AliasCount_13 = value;
	}

	inline static int32_t get_offset_of_m_AliasStartIndex_14() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_AliasStartIndex_14)); }
	inline int32_t get_m_AliasStartIndex_14() const { return ___m_AliasStartIndex_14; }
	inline int32_t* get_address_of_m_AliasStartIndex_14() { return &___m_AliasStartIndex_14; }
	inline void set_m_AliasStartIndex_14(int32_t value)
	{
		___m_AliasStartIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_ChildCount_15() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildCount_15)); }
	inline int32_t get_m_ChildCount_15() const { return ___m_ChildCount_15; }
	inline int32_t* get_address_of_m_ChildCount_15() { return &___m_ChildCount_15; }
	inline void set_m_ChildCount_15(int32_t value)
	{
		___m_ChildCount_15 = value;
	}

	inline static int32_t get_offset_of_m_ChildStartIndex_16() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ChildStartIndex_16)); }
	inline int32_t get_m_ChildStartIndex_16() const { return ___m_ChildStartIndex_16; }
	inline int32_t* get_address_of_m_ChildStartIndex_16() { return &___m_ChildStartIndex_16; }
	inline void set_m_ChildStartIndex_16(int32_t value)
	{
		___m_ChildStartIndex_16 = value;
	}

	inline static int32_t get_offset_of_m_ControlFlags_17() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_ControlFlags_17)); }
	inline int32_t get_m_ControlFlags_17() const { return ___m_ControlFlags_17; }
	inline int32_t* get_address_of_m_ControlFlags_17() { return &___m_ControlFlags_17; }
	inline void set_m_ControlFlags_17(int32_t value)
	{
		___m_ControlFlags_17 = value;
	}

	inline static int32_t get_offset_of_m_DefaultState_18() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_DefaultState_18)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_DefaultState_18() const { return ___m_DefaultState_18; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_DefaultState_18() { return &___m_DefaultState_18; }
	inline void set_m_DefaultState_18(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_DefaultState_18 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_19() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MinValue_19)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MinValue_19() const { return ___m_MinValue_19; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MinValue_19() { return &___m_MinValue_19; }
	inline void set_m_MinValue_19(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MinValue_19 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_20() { return static_cast<int32_t>(offsetof(InputControl_t3CDD1115017147EEC9D825834637D7700669C006, ___m_MaxValue_20)); }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  get_m_MaxValue_20() const { return ___m_MaxValue_20; }
	inline PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8 * get_address_of_m_MaxValue_20() { return &___m_MaxValue_20; }
	inline void set_m_MaxValue_20(PrimitiveValue_tB787C76E9A37444599C45519DD7E4D3A1D4730C8  value)
	{
		___m_MaxValue_20 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.InputSystem.InputControl`1<System.Single>
struct InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputProcessor`1<TValue>> UnityEngine.InputSystem.InputControl`1::m_ProcessorStack
	InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295  ___m_ProcessorStack_21;

public:
	inline static int32_t get_offset_of_m_ProcessorStack_21() { return static_cast<int32_t>(offsetof(InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534, ___m_ProcessorStack_21)); }
	inline InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295  get_m_ProcessorStack_21() const { return ___m_ProcessorStack_21; }
	inline InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295 * get_address_of_m_ProcessorStack_21() { return &___m_ProcessorStack_21; }
	inline void set_m_ProcessorStack_21(InlinedArray_1_tE926E83FD60D1DECCDEFEAEBE207D6E1625E7295  value)
	{
		___m_ProcessorStack_21 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ProcessorStack_21))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.InputSystem.InputDevice
struct InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323  : public InputControl_t3CDD1115017147EEC9D825834637D7700669C006
{
public:
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_24;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_25;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_26;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_27;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  ___m_Description_28;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_29;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_30;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_AliasesForEachControl_31;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* ___m_UsagesForEachControl_32;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_UsageToControl_33;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ChildrenForEachControl_34;

public:
	inline static int32_t get_offset_of_m_DeviceFlags_24() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceFlags_24)); }
	inline int32_t get_m_DeviceFlags_24() const { return ___m_DeviceFlags_24; }
	inline int32_t* get_address_of_m_DeviceFlags_24() { return &___m_DeviceFlags_24; }
	inline void set_m_DeviceFlags_24(int32_t value)
	{
		___m_DeviceFlags_24 = value;
	}

	inline static int32_t get_offset_of_m_DeviceId_25() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceId_25)); }
	inline int32_t get_m_DeviceId_25() const { return ___m_DeviceId_25; }
	inline int32_t* get_address_of_m_DeviceId_25() { return &___m_DeviceId_25; }
	inline void set_m_DeviceId_25(int32_t value)
	{
		___m_DeviceId_25 = value;
	}

	inline static int32_t get_offset_of_m_ParticipantId_26() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ParticipantId_26)); }
	inline int32_t get_m_ParticipantId_26() const { return ___m_ParticipantId_26; }
	inline int32_t* get_address_of_m_ParticipantId_26() { return &___m_ParticipantId_26; }
	inline void set_m_ParticipantId_26(int32_t value)
	{
		___m_ParticipantId_26 = value;
	}

	inline static int32_t get_offset_of_m_DeviceIndex_27() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_DeviceIndex_27)); }
	inline int32_t get_m_DeviceIndex_27() const { return ___m_DeviceIndex_27; }
	inline int32_t* get_address_of_m_DeviceIndex_27() { return &___m_DeviceIndex_27; }
	inline void set_m_DeviceIndex_27(int32_t value)
	{
		___m_DeviceIndex_27 = value;
	}

	inline static int32_t get_offset_of_m_Description_28() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_Description_28)); }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  get_m_Description_28() const { return ___m_Description_28; }
	inline InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3 * get_address_of_m_Description_28() { return &___m_Description_28; }
	inline void set_m_Description_28(InputDeviceDescription_tDCF3D4C660B97F28D8AB46D82C0BA8EA727E48C3  value)
	{
		___m_Description_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_InterfaceName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_DeviceClass_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Manufacturer_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Product_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Serial_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Version_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Description_28))->___m_Capabilities_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_LastUpdateTimeInternal_29() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_LastUpdateTimeInternal_29)); }
	inline double get_m_LastUpdateTimeInternal_29() const { return ___m_LastUpdateTimeInternal_29; }
	inline double* get_address_of_m_LastUpdateTimeInternal_29() { return &___m_LastUpdateTimeInternal_29; }
	inline void set_m_LastUpdateTimeInternal_29(double value)
	{
		___m_LastUpdateTimeInternal_29 = value;
	}

	inline static int32_t get_offset_of_m_CurrentUpdateStepCount_30() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_CurrentUpdateStepCount_30)); }
	inline uint32_t get_m_CurrentUpdateStepCount_30() const { return ___m_CurrentUpdateStepCount_30; }
	inline uint32_t* get_address_of_m_CurrentUpdateStepCount_30() { return &___m_CurrentUpdateStepCount_30; }
	inline void set_m_CurrentUpdateStepCount_30(uint32_t value)
	{
		___m_CurrentUpdateStepCount_30 = value;
	}

	inline static int32_t get_offset_of_m_AliasesForEachControl_31() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_AliasesForEachControl_31)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_AliasesForEachControl_31() const { return ___m_AliasesForEachControl_31; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_AliasesForEachControl_31() { return &___m_AliasesForEachControl_31; }
	inline void set_m_AliasesForEachControl_31(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_AliasesForEachControl_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AliasesForEachControl_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsagesForEachControl_32() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsagesForEachControl_32)); }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* get_m_UsagesForEachControl_32() const { return ___m_UsagesForEachControl_32; }
	inline InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648** get_address_of_m_UsagesForEachControl_32() { return &___m_UsagesForEachControl_32; }
	inline void set_m_UsagesForEachControl_32(InternedStringU5BU5D_t1B3BD9ED90129E67B58E1681B1944E72F8E0E648* value)
	{
		___m_UsagesForEachControl_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsagesForEachControl_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_UsageToControl_33() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_UsageToControl_33)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_UsageToControl_33() const { return ___m_UsageToControl_33; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_UsageToControl_33() { return &___m_UsageToControl_33; }
	inline void set_m_UsageToControl_33(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_UsageToControl_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UsageToControl_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChildrenForEachControl_34() { return static_cast<int32_t>(offsetof(InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323, ___m_ChildrenForEachControl_34)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ChildrenForEachControl_34() const { return ___m_ChildrenForEachControl_34; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ChildrenForEachControl_34() { return &___m_ChildrenForEachControl_34; }
	inline void set_m_ChildrenForEachControl_34(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ChildrenForEachControl_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildrenForEachControl_34), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4  : public InputControl_1_t4D360CEC69DAD55B4F8A268395C05C92F7FBC534
{
public:
	// UnityEngine.InputSystem.Controls.AxisControl/Clamp UnityEngine.InputSystem.Controls.AxisControl::clamp
	int32_t ___clamp_22;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMin
	float ___clampMin_23;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampMax
	float ___clampMax_24;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::clampConstant
	float ___clampConstant_25;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::invert
	bool ___invert_26;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::normalize
	bool ___normalize_27;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMin
	float ___normalizeMin_28;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeMax
	float ___normalizeMax_29;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::normalizeZero
	float ___normalizeZero_30;
	// System.Boolean UnityEngine.InputSystem.Controls.AxisControl::scale
	bool ___scale_31;
	// System.Single UnityEngine.InputSystem.Controls.AxisControl::scaleFactor
	float ___scaleFactor_32;

public:
	inline static int32_t get_offset_of_clamp_22() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___clamp_22)); }
	inline int32_t get_clamp_22() const { return ___clamp_22; }
	inline int32_t* get_address_of_clamp_22() { return &___clamp_22; }
	inline void set_clamp_22(int32_t value)
	{
		___clamp_22 = value;
	}

	inline static int32_t get_offset_of_clampMin_23() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___clampMin_23)); }
	inline float get_clampMin_23() const { return ___clampMin_23; }
	inline float* get_address_of_clampMin_23() { return &___clampMin_23; }
	inline void set_clampMin_23(float value)
	{
		___clampMin_23 = value;
	}

	inline static int32_t get_offset_of_clampMax_24() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___clampMax_24)); }
	inline float get_clampMax_24() const { return ___clampMax_24; }
	inline float* get_address_of_clampMax_24() { return &___clampMax_24; }
	inline void set_clampMax_24(float value)
	{
		___clampMax_24 = value;
	}

	inline static int32_t get_offset_of_clampConstant_25() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___clampConstant_25)); }
	inline float get_clampConstant_25() const { return ___clampConstant_25; }
	inline float* get_address_of_clampConstant_25() { return &___clampConstant_25; }
	inline void set_clampConstant_25(float value)
	{
		___clampConstant_25 = value;
	}

	inline static int32_t get_offset_of_invert_26() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___invert_26)); }
	inline bool get_invert_26() const { return ___invert_26; }
	inline bool* get_address_of_invert_26() { return &___invert_26; }
	inline void set_invert_26(bool value)
	{
		___invert_26 = value;
	}

	inline static int32_t get_offset_of_normalize_27() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___normalize_27)); }
	inline bool get_normalize_27() const { return ___normalize_27; }
	inline bool* get_address_of_normalize_27() { return &___normalize_27; }
	inline void set_normalize_27(bool value)
	{
		___normalize_27 = value;
	}

	inline static int32_t get_offset_of_normalizeMin_28() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___normalizeMin_28)); }
	inline float get_normalizeMin_28() const { return ___normalizeMin_28; }
	inline float* get_address_of_normalizeMin_28() { return &___normalizeMin_28; }
	inline void set_normalizeMin_28(float value)
	{
		___normalizeMin_28 = value;
	}

	inline static int32_t get_offset_of_normalizeMax_29() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___normalizeMax_29)); }
	inline float get_normalizeMax_29() const { return ___normalizeMax_29; }
	inline float* get_address_of_normalizeMax_29() { return &___normalizeMax_29; }
	inline void set_normalizeMax_29(float value)
	{
		___normalizeMax_29 = value;
	}

	inline static int32_t get_offset_of_normalizeZero_30() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___normalizeZero_30)); }
	inline float get_normalizeZero_30() const { return ___normalizeZero_30; }
	inline float* get_address_of_normalizeZero_30() { return &___normalizeZero_30; }
	inline void set_normalizeZero_30(float value)
	{
		___normalizeZero_30 = value;
	}

	inline static int32_t get_offset_of_scale_31() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___scale_31)); }
	inline bool get_scale_31() const { return ___scale_31; }
	inline bool* get_address_of_scale_31() { return &___scale_31; }
	inline void set_scale_31(bool value)
	{
		___scale_31 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_32() { return static_cast<int32_t>(offsetof(AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4, ___scaleFactor_32)); }
	inline float get_scaleFactor_32() const { return ___scaleFactor_32; }
	inline float* get_address_of_scaleFactor_32() { return &___scaleFactor_32; }
	inline void set_scaleFactor_32(float value)
	{
		___scaleFactor_32 = value;
	}
};


// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera CameraController::playerCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___playerCamera_4;
	// UnityEngine.Transform CameraController::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_5;
	// CameraController/CameraStyles CameraController::cameraMovementStyle
	int32_t ___cameraMovementStyle_6;
	// System.Single CameraController::freeCameraMouseTracking
	float ___freeCameraMouseTracking_7;
	// System.Single CameraController::maxDistanceFromTarget
	float ___maxDistanceFromTarget_8;
	// System.Single CameraController::cameraZCoordinate
	float ___cameraZCoordinate_9;
	// InputManager CameraController::inputManager
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___inputManager_10;

public:
	inline static int32_t get_offset_of_playerCamera_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___playerCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_playerCamera_4() const { return ___playerCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_playerCamera_4() { return &___playerCamera_4; }
	inline void set_playerCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___playerCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___target_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_5() const { return ___target_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_cameraMovementStyle_6() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___cameraMovementStyle_6)); }
	inline int32_t get_cameraMovementStyle_6() const { return ___cameraMovementStyle_6; }
	inline int32_t* get_address_of_cameraMovementStyle_6() { return &___cameraMovementStyle_6; }
	inline void set_cameraMovementStyle_6(int32_t value)
	{
		___cameraMovementStyle_6 = value;
	}

	inline static int32_t get_offset_of_freeCameraMouseTracking_7() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___freeCameraMouseTracking_7)); }
	inline float get_freeCameraMouseTracking_7() const { return ___freeCameraMouseTracking_7; }
	inline float* get_address_of_freeCameraMouseTracking_7() { return &___freeCameraMouseTracking_7; }
	inline void set_freeCameraMouseTracking_7(float value)
	{
		___freeCameraMouseTracking_7 = value;
	}

	inline static int32_t get_offset_of_maxDistanceFromTarget_8() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___maxDistanceFromTarget_8)); }
	inline float get_maxDistanceFromTarget_8() const { return ___maxDistanceFromTarget_8; }
	inline float* get_address_of_maxDistanceFromTarget_8() { return &___maxDistanceFromTarget_8; }
	inline void set_maxDistanceFromTarget_8(float value)
	{
		___maxDistanceFromTarget_8 = value;
	}

	inline static int32_t get_offset_of_cameraZCoordinate_9() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___cameraZCoordinate_9)); }
	inline float get_cameraZCoordinate_9() const { return ___cameraZCoordinate_9; }
	inline float* get_address_of_cameraZCoordinate_9() { return &___cameraZCoordinate_9; }
	inline void set_cameraZCoordinate_9(float value)
	{
		___cameraZCoordinate_9 = value;
	}

	inline static int32_t get_offset_of_inputManager_10() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___inputManager_10)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_inputManager_10() const { return ___inputManager_10; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_inputManager_10() { return &___inputManager_10; }
	inline void set_inputManager_10(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___inputManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_10), (void*)value);
	}
};


// Controller
struct Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.RuntimeAnimatorController Controller::animator
	RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * ___animator_4;
	// UnityEngine.Rigidbody2D Controller::myRigidbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___myRigidbody_5;
	// System.Single Controller::moveSpeed
	float ___moveSpeed_6;
	// System.Single Controller::rotationSpeed
	float ___rotationSpeed_7;
	// InputManager Controller::inputManager
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___inputManager_8;
	// Controller/AimModes Controller::aimMode
	int32_t ___aimMode_9;
	// Controller/MovementModes Controller::movementMode
	int32_t ___movementMode_10;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC, ___animator_4)); }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * get_animator_4() const { return ___animator_4; }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_myRigidbody_5() { return static_cast<int32_t>(offsetof(Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC, ___myRigidbody_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_myRigidbody_5() const { return ___myRigidbody_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_myRigidbody_5() { return &___myRigidbody_5; }
	inline void set_myRigidbody_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___myRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myRigidbody_5), (void*)value);
	}

	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_7() { return static_cast<int32_t>(offsetof(Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC, ___rotationSpeed_7)); }
	inline float get_rotationSpeed_7() const { return ___rotationSpeed_7; }
	inline float* get_address_of_rotationSpeed_7() { return &___rotationSpeed_7; }
	inline void set_rotationSpeed_7(float value)
	{
		___rotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_inputManager_8() { return static_cast<int32_t>(offsetof(Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC, ___inputManager_8)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_inputManager_8() const { return ___inputManager_8; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_inputManager_8() { return &___inputManager_8; }
	inline void set_inputManager_8(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___inputManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_aimMode_9() { return static_cast<int32_t>(offsetof(Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC, ___aimMode_9)); }
	inline int32_t get_aimMode_9() const { return ___aimMode_9; }
	inline int32_t* get_address_of_aimMode_9() { return &___aimMode_9; }
	inline void set_aimMode_9(int32_t value)
	{
		___aimMode_9 = value;
	}

	inline static int32_t get_offset_of_movementMode_10() { return static_cast<int32_t>(offsetof(Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC, ___movementMode_10)); }
	inline int32_t get_movementMode_10() const { return ___movementMode_10; }
	inline int32_t* get_address_of_movementMode_10() { return &___movementMode_10; }
	inline void set_movementMode_10(int32_t value)
	{
		___movementMode_10 = value;
	}
};


// CursorChanger
struct CursorChanger_tF96791A48F42EF65902156CCA7FE7185F6B403F5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D CursorChanger::newCursorSprite
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___newCursorSprite_4;

public:
	inline static int32_t get_offset_of_newCursorSprite_4() { return static_cast<int32_t>(offsetof(CursorChanger_tF96791A48F42EF65902156CCA7FE7185F6B403F5, ___newCursorSprite_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_newCursorSprite_4() const { return ___newCursorSprite_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_newCursorSprite_4() { return &___newCursorSprite_4; }
	inline void set_newCursorSprite_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___newCursorSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newCursorSprite_4), (void*)value);
	}
};


// Damage
struct Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Damage::teamId
	int32_t ___teamId_4;
	// System.Int32 Damage::damageAmount
	int32_t ___damageAmount_5;
	// UnityEngine.GameObject Damage::hitEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitEffect_6;
	// System.Boolean Damage::destroyAfterDamage
	bool ___destroyAfterDamage_7;
	// System.Boolean Damage::dealDamageOnTriggerEnter
	bool ___dealDamageOnTriggerEnter_8;
	// System.Boolean Damage::dealDamageOnTriggerStay
	bool ___dealDamageOnTriggerStay_9;
	// System.Boolean Damage::dealDamageOnCollision
	bool ___dealDamageOnCollision_10;

public:
	inline static int32_t get_offset_of_teamId_4() { return static_cast<int32_t>(offsetof(Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631, ___teamId_4)); }
	inline int32_t get_teamId_4() const { return ___teamId_4; }
	inline int32_t* get_address_of_teamId_4() { return &___teamId_4; }
	inline void set_teamId_4(int32_t value)
	{
		___teamId_4 = value;
	}

	inline static int32_t get_offset_of_damageAmount_5() { return static_cast<int32_t>(offsetof(Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631, ___damageAmount_5)); }
	inline int32_t get_damageAmount_5() const { return ___damageAmount_5; }
	inline int32_t* get_address_of_damageAmount_5() { return &___damageAmount_5; }
	inline void set_damageAmount_5(int32_t value)
	{
		___damageAmount_5 = value;
	}

	inline static int32_t get_offset_of_hitEffect_6() { return static_cast<int32_t>(offsetof(Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631, ___hitEffect_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitEffect_6() const { return ___hitEffect_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitEffect_6() { return &___hitEffect_6; }
	inline void set_hitEffect_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitEffect_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitEffect_6), (void*)value);
	}

	inline static int32_t get_offset_of_destroyAfterDamage_7() { return static_cast<int32_t>(offsetof(Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631, ___destroyAfterDamage_7)); }
	inline bool get_destroyAfterDamage_7() const { return ___destroyAfterDamage_7; }
	inline bool* get_address_of_destroyAfterDamage_7() { return &___destroyAfterDamage_7; }
	inline void set_destroyAfterDamage_7(bool value)
	{
		___destroyAfterDamage_7 = value;
	}

	inline static int32_t get_offset_of_dealDamageOnTriggerEnter_8() { return static_cast<int32_t>(offsetof(Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631, ___dealDamageOnTriggerEnter_8)); }
	inline bool get_dealDamageOnTriggerEnter_8() const { return ___dealDamageOnTriggerEnter_8; }
	inline bool* get_address_of_dealDamageOnTriggerEnter_8() { return &___dealDamageOnTriggerEnter_8; }
	inline void set_dealDamageOnTriggerEnter_8(bool value)
	{
		___dealDamageOnTriggerEnter_8 = value;
	}

	inline static int32_t get_offset_of_dealDamageOnTriggerStay_9() { return static_cast<int32_t>(offsetof(Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631, ___dealDamageOnTriggerStay_9)); }
	inline bool get_dealDamageOnTriggerStay_9() const { return ___dealDamageOnTriggerStay_9; }
	inline bool* get_address_of_dealDamageOnTriggerStay_9() { return &___dealDamageOnTriggerStay_9; }
	inline void set_dealDamageOnTriggerStay_9(bool value)
	{
		___dealDamageOnTriggerStay_9 = value;
	}

	inline static int32_t get_offset_of_dealDamageOnCollision_10() { return static_cast<int32_t>(offsetof(Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631, ___dealDamageOnCollision_10)); }
	inline bool get_dealDamageOnCollision_10() const { return ___dealDamageOnCollision_10; }
	inline bool* get_address_of_dealDamageOnCollision_10() { return &___dealDamageOnCollision_10; }
	inline void set_dealDamageOnCollision_10(bool value)
	{
		___dealDamageOnCollision_10 = value;
	}
};


// DirectionalMover
struct DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 DirectionalMover::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_4;
	// System.Single DirectionalMover::speed
	float ___speed_5;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC, ___direction_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_4() const { return ___direction_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Enemy::moveSpeed
	float ___moveSpeed_4;
	// System.Int32 Enemy::scoreValue
	int32_t ___scoreValue_5;
	// UnityEngine.Transform Enemy::followTarget
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___followTarget_6;
	// System.Single Enemy::followRange
	float ___followRange_7;
	// System.Collections.Generic.List`1<ShootingController> Enemy::guns
	List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * ___guns_8;
	// Enemy/ShootMode Enemy::shootMode
	int32_t ___shootMode_9;
	// Enemy/MovementModes Enemy::movementMode
	int32_t ___movementMode_10;
	// UnityEngine.Vector3 Enemy::scrollDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scrollDirection_11;

public:
	inline static int32_t get_offset_of_moveSpeed_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___moveSpeed_4)); }
	inline float get_moveSpeed_4() const { return ___moveSpeed_4; }
	inline float* get_address_of_moveSpeed_4() { return &___moveSpeed_4; }
	inline void set_moveSpeed_4(float value)
	{
		___moveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_scoreValue_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___scoreValue_5)); }
	inline int32_t get_scoreValue_5() const { return ___scoreValue_5; }
	inline int32_t* get_address_of_scoreValue_5() { return &___scoreValue_5; }
	inline void set_scoreValue_5(int32_t value)
	{
		___scoreValue_5 = value;
	}

	inline static int32_t get_offset_of_followTarget_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___followTarget_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_followTarget_6() const { return ___followTarget_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_followTarget_6() { return &___followTarget_6; }
	inline void set_followTarget_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___followTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___followTarget_6), (void*)value);
	}

	inline static int32_t get_offset_of_followRange_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___followRange_7)); }
	inline float get_followRange_7() const { return ___followRange_7; }
	inline float* get_address_of_followRange_7() { return &___followRange_7; }
	inline void set_followRange_7(float value)
	{
		___followRange_7 = value;
	}

	inline static int32_t get_offset_of_guns_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___guns_8)); }
	inline List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * get_guns_8() const { return ___guns_8; }
	inline List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 ** get_address_of_guns_8() { return &___guns_8; }
	inline void set_guns_8(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * value)
	{
		___guns_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guns_8), (void*)value);
	}

	inline static int32_t get_offset_of_shootMode_9() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___shootMode_9)); }
	inline int32_t get_shootMode_9() const { return ___shootMode_9; }
	inline int32_t* get_address_of_shootMode_9() { return &___shootMode_9; }
	inline void set_shootMode_9(int32_t value)
	{
		___shootMode_9 = value;
	}

	inline static int32_t get_offset_of_movementMode_10() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___movementMode_10)); }
	inline int32_t get_movementMode_10() const { return ___movementMode_10; }
	inline int32_t* get_address_of_movementMode_10() { return &___movementMode_10; }
	inline void set_movementMode_10(int32_t value)
	{
		___movementMode_10 = value;
	}

	inline static int32_t get_offset_of_scrollDirection_11() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___scrollDirection_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scrollDirection_11() const { return ___scrollDirection_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scrollDirection_11() { return &___scrollDirection_11; }
	inline void set_scrollDirection_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scrollDirection_11 = value;
	}
};


// EnemySpawner
struct EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_4;
	// UnityEngine.Transform EnemySpawner::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_5;
	// System.Single EnemySpawner::spawnRangeX
	float ___spawnRangeX_6;
	// System.Single EnemySpawner::spawnRangeY
	float ___spawnRangeY_7;
	// System.Int32 EnemySpawner::maxSpawn
	int32_t ___maxSpawn_8;
	// System.Boolean EnemySpawner::spawnInfinite
	bool ___spawnInfinite_9;
	// System.Int32 EnemySpawner::currentlySpawned
	int32_t ___currentlySpawned_10;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_11;
	// System.Single EnemySpawner::lastSpawnTime
	float ___lastSpawnTime_12;
	// UnityEngine.Transform EnemySpawner::projectileHolder
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___projectileHolder_13;

public:
	inline static int32_t get_offset_of_enemyPrefab_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___enemyPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_4() const { return ___enemyPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_4() { return &___enemyPrefab_4; }
	inline void set_enemyPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___target_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_5() const { return ___target_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_spawnRangeX_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___spawnRangeX_6)); }
	inline float get_spawnRangeX_6() const { return ___spawnRangeX_6; }
	inline float* get_address_of_spawnRangeX_6() { return &___spawnRangeX_6; }
	inline void set_spawnRangeX_6(float value)
	{
		___spawnRangeX_6 = value;
	}

	inline static int32_t get_offset_of_spawnRangeY_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___spawnRangeY_7)); }
	inline float get_spawnRangeY_7() const { return ___spawnRangeY_7; }
	inline float* get_address_of_spawnRangeY_7() { return &___spawnRangeY_7; }
	inline void set_spawnRangeY_7(float value)
	{
		___spawnRangeY_7 = value;
	}

	inline static int32_t get_offset_of_maxSpawn_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___maxSpawn_8)); }
	inline int32_t get_maxSpawn_8() const { return ___maxSpawn_8; }
	inline int32_t* get_address_of_maxSpawn_8() { return &___maxSpawn_8; }
	inline void set_maxSpawn_8(int32_t value)
	{
		___maxSpawn_8 = value;
	}

	inline static int32_t get_offset_of_spawnInfinite_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___spawnInfinite_9)); }
	inline bool get_spawnInfinite_9() const { return ___spawnInfinite_9; }
	inline bool* get_address_of_spawnInfinite_9() { return &___spawnInfinite_9; }
	inline void set_spawnInfinite_9(bool value)
	{
		___spawnInfinite_9 = value;
	}

	inline static int32_t get_offset_of_currentlySpawned_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___currentlySpawned_10)); }
	inline int32_t get_currentlySpawned_10() const { return ___currentlySpawned_10; }
	inline int32_t* get_address_of_currentlySpawned_10() { return &___currentlySpawned_10; }
	inline void set_currentlySpawned_10(int32_t value)
	{
		___currentlySpawned_10 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_11() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___spawnDelay_11)); }
	inline float get_spawnDelay_11() const { return ___spawnDelay_11; }
	inline float* get_address_of_spawnDelay_11() { return &___spawnDelay_11; }
	inline void set_spawnDelay_11(float value)
	{
		___spawnDelay_11 = value;
	}

	inline static int32_t get_offset_of_lastSpawnTime_12() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___lastSpawnTime_12)); }
	inline float get_lastSpawnTime_12() const { return ___lastSpawnTime_12; }
	inline float* get_address_of_lastSpawnTime_12() { return &___lastSpawnTime_12; }
	inline void set_lastSpawnTime_12(float value)
	{
		___lastSpawnTime_12 = value;
	}

	inline static int32_t get_offset_of_projectileHolder_13() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___projectileHolder_13)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_projectileHolder_13() const { return ___projectileHolder_13; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_projectileHolder_13() { return &___projectileHolder_13; }
	inline void set_projectileHolder_13(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___projectileHolder_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectileHolder_13), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UIManager GameManager::uiManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___uiManager_5;
	// UnityEngine.GameObject GameManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_6;
	// System.Int32 GameManager::gameManagerScore
	int32_t ___gameManagerScore_7;
	// System.Int32 GameManager::highScore
	int32_t ___highScore_8;
	// System.Boolean GameManager::gameIsWinnable
	bool ___gameIsWinnable_9;
	// System.Int32 GameManager::enemiesToDefeat
	int32_t ___enemiesToDefeat_10;
	// System.Int32 GameManager::enemiesDefeated
	int32_t ___enemiesDefeated_11;
	// System.Boolean GameManager::printDebugOfWinnableStatus
	bool ___printDebugOfWinnableStatus_12;
	// System.Int32 GameManager::gameVictoryPageIndex
	int32_t ___gameVictoryPageIndex_13;
	// UnityEngine.GameObject GameManager::victoryEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___victoryEffect_14;
	// System.Int32 GameManager::numberOfEnemiesFoundAtStart
	int32_t ___numberOfEnemiesFoundAtStart_15;
	// System.Int32 GameManager::gameOverPageIndex
	int32_t ___gameOverPageIndex_16;
	// UnityEngine.GameObject GameManager::gameOverEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverEffect_17;
	// System.Boolean GameManager::gameIsOver
	bool ___gameIsOver_18;

public:
	inline static int32_t get_offset_of_uiManager_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___uiManager_5)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_uiManager_5() const { return ___uiManager_5; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_uiManager_5() { return &___uiManager_5; }
	inline void set_uiManager_5(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___uiManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_6() const { return ___player_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameManagerScore_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameManagerScore_7)); }
	inline int32_t get_gameManagerScore_7() const { return ___gameManagerScore_7; }
	inline int32_t* get_address_of_gameManagerScore_7() { return &___gameManagerScore_7; }
	inline void set_gameManagerScore_7(int32_t value)
	{
		___gameManagerScore_7 = value;
	}

	inline static int32_t get_offset_of_highScore_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___highScore_8)); }
	inline int32_t get_highScore_8() const { return ___highScore_8; }
	inline int32_t* get_address_of_highScore_8() { return &___highScore_8; }
	inline void set_highScore_8(int32_t value)
	{
		___highScore_8 = value;
	}

	inline static int32_t get_offset_of_gameIsWinnable_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameIsWinnable_9)); }
	inline bool get_gameIsWinnable_9() const { return ___gameIsWinnable_9; }
	inline bool* get_address_of_gameIsWinnable_9() { return &___gameIsWinnable_9; }
	inline void set_gameIsWinnable_9(bool value)
	{
		___gameIsWinnable_9 = value;
	}

	inline static int32_t get_offset_of_enemiesToDefeat_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemiesToDefeat_10)); }
	inline int32_t get_enemiesToDefeat_10() const { return ___enemiesToDefeat_10; }
	inline int32_t* get_address_of_enemiesToDefeat_10() { return &___enemiesToDefeat_10; }
	inline void set_enemiesToDefeat_10(int32_t value)
	{
		___enemiesToDefeat_10 = value;
	}

	inline static int32_t get_offset_of_enemiesDefeated_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___enemiesDefeated_11)); }
	inline int32_t get_enemiesDefeated_11() const { return ___enemiesDefeated_11; }
	inline int32_t* get_address_of_enemiesDefeated_11() { return &___enemiesDefeated_11; }
	inline void set_enemiesDefeated_11(int32_t value)
	{
		___enemiesDefeated_11 = value;
	}

	inline static int32_t get_offset_of_printDebugOfWinnableStatus_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___printDebugOfWinnableStatus_12)); }
	inline bool get_printDebugOfWinnableStatus_12() const { return ___printDebugOfWinnableStatus_12; }
	inline bool* get_address_of_printDebugOfWinnableStatus_12() { return &___printDebugOfWinnableStatus_12; }
	inline void set_printDebugOfWinnableStatus_12(bool value)
	{
		___printDebugOfWinnableStatus_12 = value;
	}

	inline static int32_t get_offset_of_gameVictoryPageIndex_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameVictoryPageIndex_13)); }
	inline int32_t get_gameVictoryPageIndex_13() const { return ___gameVictoryPageIndex_13; }
	inline int32_t* get_address_of_gameVictoryPageIndex_13() { return &___gameVictoryPageIndex_13; }
	inline void set_gameVictoryPageIndex_13(int32_t value)
	{
		___gameVictoryPageIndex_13 = value;
	}

	inline static int32_t get_offset_of_victoryEffect_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___victoryEffect_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_victoryEffect_14() const { return ___victoryEffect_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_victoryEffect_14() { return &___victoryEffect_14; }
	inline void set_victoryEffect_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___victoryEffect_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___victoryEffect_14), (void*)value);
	}

	inline static int32_t get_offset_of_numberOfEnemiesFoundAtStart_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___numberOfEnemiesFoundAtStart_15)); }
	inline int32_t get_numberOfEnemiesFoundAtStart_15() const { return ___numberOfEnemiesFoundAtStart_15; }
	inline int32_t* get_address_of_numberOfEnemiesFoundAtStart_15() { return &___numberOfEnemiesFoundAtStart_15; }
	inline void set_numberOfEnemiesFoundAtStart_15(int32_t value)
	{
		___numberOfEnemiesFoundAtStart_15 = value;
	}

	inline static int32_t get_offset_of_gameOverPageIndex_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameOverPageIndex_16)); }
	inline int32_t get_gameOverPageIndex_16() const { return ___gameOverPageIndex_16; }
	inline int32_t* get_address_of_gameOverPageIndex_16() { return &___gameOverPageIndex_16; }
	inline void set_gameOverPageIndex_16(int32_t value)
	{
		___gameOverPageIndex_16 = value;
	}

	inline static int32_t get_offset_of_gameOverEffect_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameOverEffect_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverEffect_17() const { return ___gameOverEffect_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverEffect_17() { return &___gameOverEffect_17; }
	inline void set_gameOverEffect_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverEffect_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverEffect_17), (void*)value);
	}

	inline static int32_t get_offset_of_gameIsOver_18() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___gameIsOver_18)); }
	inline bool get_gameIsOver_18() const { return ___gameIsOver_18; }
	inline bool* get_address_of_gameIsOver_18() { return &___gameIsOver_18; }
	inline void set_gameIsOver_18(bool value)
	{
		___gameIsOver_18 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___instance_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_instance_4() const { return ___instance_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// Health
struct Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Health::teamId
	int32_t ___teamId_4;
	// System.Int32 Health::defaultHealth
	int32_t ___defaultHealth_5;
	// System.Int32 Health::maximumHealth
	int32_t ___maximumHealth_6;
	// System.Int32 Health::currentHealth
	int32_t ___currentHealth_7;
	// System.Single Health::invincibilityTime
	float ___invincibilityTime_8;
	// System.Boolean Health::isAlwaysInvincible
	bool ___isAlwaysInvincible_9;
	// System.Boolean Health::useLives
	bool ___useLives_10;
	// System.Int32 Health::currentLives
	int32_t ___currentLives_11;
	// System.Int32 Health::maximumLives
	int32_t ___maximumLives_12;
	// System.Single Health::timeToBecomeDamagableAgain
	float ___timeToBecomeDamagableAgain_13;
	// System.Boolean Health::isInvincableFromDamage
	bool ___isInvincableFromDamage_14;
	// UnityEngine.Vector3 Health::respawnPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___respawnPosition_15;
	// UnityEngine.GameObject Health::deathEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathEffect_16;
	// UnityEngine.GameObject Health::hitEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitEffect_17;

public:
	inline static int32_t get_offset_of_teamId_4() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___teamId_4)); }
	inline int32_t get_teamId_4() const { return ___teamId_4; }
	inline int32_t* get_address_of_teamId_4() { return &___teamId_4; }
	inline void set_teamId_4(int32_t value)
	{
		___teamId_4 = value;
	}

	inline static int32_t get_offset_of_defaultHealth_5() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___defaultHealth_5)); }
	inline int32_t get_defaultHealth_5() const { return ___defaultHealth_5; }
	inline int32_t* get_address_of_defaultHealth_5() { return &___defaultHealth_5; }
	inline void set_defaultHealth_5(int32_t value)
	{
		___defaultHealth_5 = value;
	}

	inline static int32_t get_offset_of_maximumHealth_6() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___maximumHealth_6)); }
	inline int32_t get_maximumHealth_6() const { return ___maximumHealth_6; }
	inline int32_t* get_address_of_maximumHealth_6() { return &___maximumHealth_6; }
	inline void set_maximumHealth_6(int32_t value)
	{
		___maximumHealth_6 = value;
	}

	inline static int32_t get_offset_of_currentHealth_7() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___currentHealth_7)); }
	inline int32_t get_currentHealth_7() const { return ___currentHealth_7; }
	inline int32_t* get_address_of_currentHealth_7() { return &___currentHealth_7; }
	inline void set_currentHealth_7(int32_t value)
	{
		___currentHealth_7 = value;
	}

	inline static int32_t get_offset_of_invincibilityTime_8() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___invincibilityTime_8)); }
	inline float get_invincibilityTime_8() const { return ___invincibilityTime_8; }
	inline float* get_address_of_invincibilityTime_8() { return &___invincibilityTime_8; }
	inline void set_invincibilityTime_8(float value)
	{
		___invincibilityTime_8 = value;
	}

	inline static int32_t get_offset_of_isAlwaysInvincible_9() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___isAlwaysInvincible_9)); }
	inline bool get_isAlwaysInvincible_9() const { return ___isAlwaysInvincible_9; }
	inline bool* get_address_of_isAlwaysInvincible_9() { return &___isAlwaysInvincible_9; }
	inline void set_isAlwaysInvincible_9(bool value)
	{
		___isAlwaysInvincible_9 = value;
	}

	inline static int32_t get_offset_of_useLives_10() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___useLives_10)); }
	inline bool get_useLives_10() const { return ___useLives_10; }
	inline bool* get_address_of_useLives_10() { return &___useLives_10; }
	inline void set_useLives_10(bool value)
	{
		___useLives_10 = value;
	}

	inline static int32_t get_offset_of_currentLives_11() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___currentLives_11)); }
	inline int32_t get_currentLives_11() const { return ___currentLives_11; }
	inline int32_t* get_address_of_currentLives_11() { return &___currentLives_11; }
	inline void set_currentLives_11(int32_t value)
	{
		___currentLives_11 = value;
	}

	inline static int32_t get_offset_of_maximumLives_12() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___maximumLives_12)); }
	inline int32_t get_maximumLives_12() const { return ___maximumLives_12; }
	inline int32_t* get_address_of_maximumLives_12() { return &___maximumLives_12; }
	inline void set_maximumLives_12(int32_t value)
	{
		___maximumLives_12 = value;
	}

	inline static int32_t get_offset_of_timeToBecomeDamagableAgain_13() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___timeToBecomeDamagableAgain_13)); }
	inline float get_timeToBecomeDamagableAgain_13() const { return ___timeToBecomeDamagableAgain_13; }
	inline float* get_address_of_timeToBecomeDamagableAgain_13() { return &___timeToBecomeDamagableAgain_13; }
	inline void set_timeToBecomeDamagableAgain_13(float value)
	{
		___timeToBecomeDamagableAgain_13 = value;
	}

	inline static int32_t get_offset_of_isInvincableFromDamage_14() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___isInvincableFromDamage_14)); }
	inline bool get_isInvincableFromDamage_14() const { return ___isInvincableFromDamage_14; }
	inline bool* get_address_of_isInvincableFromDamage_14() { return &___isInvincableFromDamage_14; }
	inline void set_isInvincableFromDamage_14(bool value)
	{
		___isInvincableFromDamage_14 = value;
	}

	inline static int32_t get_offset_of_respawnPosition_15() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___respawnPosition_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_respawnPosition_15() const { return ___respawnPosition_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_respawnPosition_15() { return &___respawnPosition_15; }
	inline void set_respawnPosition_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___respawnPosition_15 = value;
	}

	inline static int32_t get_offset_of_deathEffect_16() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___deathEffect_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathEffect_16() const { return ___deathEffect_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathEffect_16() { return &___deathEffect_16; }
	inline void set_deathEffect_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathEffect_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathEffect_16), (void*)value);
	}

	inline static int32_t get_offset_of_hitEffect_17() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___hitEffect_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitEffect_17() const { return ___hitEffect_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitEffect_17() { return &___hitEffect_17; }
	inline void set_hitEffect_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitEffect_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitEffect_17), (void*)value);
	}
};


// HighlightFix
struct HighlightFix_t78E5E5D7159CB92B74587BE3B49A3CDC51829B3C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// InputManager
struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single InputManager::horizontalMoveAxis
	float ___horizontalMoveAxis_5;
	// System.Single InputManager::verticalMoveAxis
	float ___verticalMoveAxis_6;
	// System.Single InputManager::horizontalLookAxis
	float ___horizontalLookAxis_7;
	// System.Single InputManager::verticalLookAxis
	float ___verticalLookAxis_8;
	// System.Boolean InputManager::firePressed
	bool ___firePressed_9;
	// System.Boolean InputManager::fireHeld
	bool ___fireHeld_10;
	// System.Boolean InputManager::pausePressed
	bool ___pausePressed_11;

public:
	inline static int32_t get_offset_of_horizontalMoveAxis_5() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___horizontalMoveAxis_5)); }
	inline float get_horizontalMoveAxis_5() const { return ___horizontalMoveAxis_5; }
	inline float* get_address_of_horizontalMoveAxis_5() { return &___horizontalMoveAxis_5; }
	inline void set_horizontalMoveAxis_5(float value)
	{
		___horizontalMoveAxis_5 = value;
	}

	inline static int32_t get_offset_of_verticalMoveAxis_6() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___verticalMoveAxis_6)); }
	inline float get_verticalMoveAxis_6() const { return ___verticalMoveAxis_6; }
	inline float* get_address_of_verticalMoveAxis_6() { return &___verticalMoveAxis_6; }
	inline void set_verticalMoveAxis_6(float value)
	{
		___verticalMoveAxis_6 = value;
	}

	inline static int32_t get_offset_of_horizontalLookAxis_7() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___horizontalLookAxis_7)); }
	inline float get_horizontalLookAxis_7() const { return ___horizontalLookAxis_7; }
	inline float* get_address_of_horizontalLookAxis_7() { return &___horizontalLookAxis_7; }
	inline void set_horizontalLookAxis_7(float value)
	{
		___horizontalLookAxis_7 = value;
	}

	inline static int32_t get_offset_of_verticalLookAxis_8() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___verticalLookAxis_8)); }
	inline float get_verticalLookAxis_8() const { return ___verticalLookAxis_8; }
	inline float* get_address_of_verticalLookAxis_8() { return &___verticalLookAxis_8; }
	inline void set_verticalLookAxis_8(float value)
	{
		___verticalLookAxis_8 = value;
	}

	inline static int32_t get_offset_of_firePressed_9() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___firePressed_9)); }
	inline bool get_firePressed_9() const { return ___firePressed_9; }
	inline bool* get_address_of_firePressed_9() { return &___firePressed_9; }
	inline void set_firePressed_9(bool value)
	{
		___firePressed_9 = value;
	}

	inline static int32_t get_offset_of_fireHeld_10() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___fireHeld_10)); }
	inline bool get_fireHeld_10() const { return ___fireHeld_10; }
	inline bool* get_address_of_fireHeld_10() { return &___fireHeld_10; }
	inline void set_fireHeld_10(bool value)
	{
		___fireHeld_10 = value;
	}

	inline static int32_t get_offset_of_pausePressed_11() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A, ___pausePressed_11)); }
	inline bool get_pausePressed_11() const { return ___pausePressed_11; }
	inline bool* get_address_of_pausePressed_11() { return &___pausePressed_11; }
	inline void set_pausePressed_11(bool value)
	{
		___pausePressed_11 = value;
	}
};

struct InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields
{
public:
	// InputManager InputManager::instance
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields, ___instance_4)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_instance_4() const { return ___instance_4; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.InputSystem.Keyboard
struct Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA  : public InputDevice_t9E276EAE78C382539051998DEA1CD0ECF2E91323
{
public:
	// UnityEngine.InputSystem.Controls.AnyKeyControl UnityEngine.InputSystem.Keyboard::<anyKey>k__BackingField
	AnyKeyControl_t48489FBF55FEA0C6B00AFD412DCE079A20E07B98 * ___U3CanyKeyU3Ek__BackingField_36;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<shiftKey>k__BackingField
	ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * ___U3CshiftKeyU3Ek__BackingField_37;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<ctrlKey>k__BackingField
	ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * ___U3CctrlKeyU3Ek__BackingField_38;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<altKey>k__BackingField
	ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * ___U3CaltKeyU3Ek__BackingField_39;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Keyboard::<imeSelected>k__BackingField
	ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * ___U3CimeSelectedU3Ek__BackingField_40;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<System.Char>> UnityEngine.InputSystem.Keyboard::m_TextInputListeners
	InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F  ___m_TextInputListeners_42;
	// System.String UnityEngine.InputSystem.Keyboard::m_KeyboardLayoutName
	String_t* ___m_KeyboardLayoutName_43;
	// UnityEngine.InputSystem.Controls.KeyControl[] UnityEngine.InputSystem.Keyboard::m_Keys
	KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF* ___m_Keys_44;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.LowLevel.IMECompositionString>> UnityEngine.InputSystem.Keyboard::m_ImeCompositionListeners
	InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918  ___m_ImeCompositionListeners_45;

public:
	inline static int32_t get_offset_of_U3CanyKeyU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___U3CanyKeyU3Ek__BackingField_36)); }
	inline AnyKeyControl_t48489FBF55FEA0C6B00AFD412DCE079A20E07B98 * get_U3CanyKeyU3Ek__BackingField_36() const { return ___U3CanyKeyU3Ek__BackingField_36; }
	inline AnyKeyControl_t48489FBF55FEA0C6B00AFD412DCE079A20E07B98 ** get_address_of_U3CanyKeyU3Ek__BackingField_36() { return &___U3CanyKeyU3Ek__BackingField_36; }
	inline void set_U3CanyKeyU3Ek__BackingField_36(AnyKeyControl_t48489FBF55FEA0C6B00AFD412DCE079A20E07B98 * value)
	{
		___U3CanyKeyU3Ek__BackingField_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CanyKeyU3Ek__BackingField_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshiftKeyU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___U3CshiftKeyU3Ek__BackingField_37)); }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * get_U3CshiftKeyU3Ek__BackingField_37() const { return ___U3CshiftKeyU3Ek__BackingField_37; }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F ** get_address_of_U3CshiftKeyU3Ek__BackingField_37() { return &___U3CshiftKeyU3Ek__BackingField_37; }
	inline void set_U3CshiftKeyU3Ek__BackingField_37(ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * value)
	{
		___U3CshiftKeyU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshiftKeyU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CctrlKeyU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___U3CctrlKeyU3Ek__BackingField_38)); }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * get_U3CctrlKeyU3Ek__BackingField_38() const { return ___U3CctrlKeyU3Ek__BackingField_38; }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F ** get_address_of_U3CctrlKeyU3Ek__BackingField_38() { return &___U3CctrlKeyU3Ek__BackingField_38; }
	inline void set_U3CctrlKeyU3Ek__BackingField_38(ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * value)
	{
		___U3CctrlKeyU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CctrlKeyU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaltKeyU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___U3CaltKeyU3Ek__BackingField_39)); }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * get_U3CaltKeyU3Ek__BackingField_39() const { return ___U3CaltKeyU3Ek__BackingField_39; }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F ** get_address_of_U3CaltKeyU3Ek__BackingField_39() { return &___U3CaltKeyU3Ek__BackingField_39; }
	inline void set_U3CaltKeyU3Ek__BackingField_39(ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * value)
	{
		___U3CaltKeyU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaltKeyU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CimeSelectedU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___U3CimeSelectedU3Ek__BackingField_40)); }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * get_U3CimeSelectedU3Ek__BackingField_40() const { return ___U3CimeSelectedU3Ek__BackingField_40; }
	inline ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F ** get_address_of_U3CimeSelectedU3Ek__BackingField_40() { return &___U3CimeSelectedU3Ek__BackingField_40; }
	inline void set_U3CimeSelectedU3Ek__BackingField_40(ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * value)
	{
		___U3CimeSelectedU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CimeSelectedU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextInputListeners_42() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___m_TextInputListeners_42)); }
	inline InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F  get_m_TextInputListeners_42() const { return ___m_TextInputListeners_42; }
	inline InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F * get_address_of_m_TextInputListeners_42() { return &___m_TextInputListeners_42; }
	inline void set_m_TextInputListeners_42(InlinedArray_1_t618A44A472056105DB156306D069EDAE43EC200F  value)
	{
		___m_TextInputListeners_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextInputListeners_42))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_TextInputListeners_42))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_KeyboardLayoutName_43() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___m_KeyboardLayoutName_43)); }
	inline String_t* get_m_KeyboardLayoutName_43() const { return ___m_KeyboardLayoutName_43; }
	inline String_t** get_address_of_m_KeyboardLayoutName_43() { return &___m_KeyboardLayoutName_43; }
	inline void set_m_KeyboardLayoutName_43(String_t* value)
	{
		___m_KeyboardLayoutName_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_KeyboardLayoutName_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_Keys_44() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___m_Keys_44)); }
	inline KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF* get_m_Keys_44() const { return ___m_Keys_44; }
	inline KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF** get_address_of_m_Keys_44() { return &___m_Keys_44; }
	inline void set_m_Keys_44(KeyControlU5BU5D_t676791A3992675BD1F3E21399CE4996877ED48EF* value)
	{
		___m_Keys_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Keys_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_ImeCompositionListeners_45() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA, ___m_ImeCompositionListeners_45)); }
	inline InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918  get_m_ImeCompositionListeners_45() const { return ___m_ImeCompositionListeners_45; }
	inline InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918 * get_address_of_m_ImeCompositionListeners_45() { return &___m_ImeCompositionListeners_45; }
	inline void set_m_ImeCompositionListeners_45(InlinedArray_1_tD3DA565564F82E13F3052FF3CE85205564E3B918  value)
	{
		___m_ImeCompositionListeners_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ImeCompositionListeners_45))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ImeCompositionListeners_45))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA_StaticFields
{
public:
	// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::<current>k__BackingField
	Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * ___U3CcurrentU3Ek__BackingField_41;

public:
	inline static int32_t get_offset_of_U3CcurrentU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA_StaticFields, ___U3CcurrentU3Ek__BackingField_41)); }
	inline Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * get_U3CcurrentU3Ek__BackingField_41() const { return ___U3CcurrentU3Ek__BackingField_41; }
	inline Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA ** get_address_of_U3CcurrentU3Ek__BackingField_41() { return &___U3CcurrentU3Ek__BackingField_41; }
	inline void set_U3CcurrentU3Ek__BackingField_41(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * value)
	{
		___U3CcurrentU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurrentU3Ek__BackingField_41), (void*)value);
	}
};


// LevelLoadButton
struct LevelLoadButton_t82AF66BD3147D5694F41F1C2E1E22F0BBA1A194B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Projectile::projectileSpeed
	float ___projectileSpeed_4;

public:
	inline static int32_t get_offset_of_projectileSpeed_4() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___projectileSpeed_4)); }
	inline float get_projectileSpeed_4() const { return ___projectileSpeed_4; }
	inline float* get_address_of_projectileSpeed_4() { return &___projectileSpeed_4; }
	inline void set_projectileSpeed_4(float value)
	{
		___projectileSpeed_4 = value;
	}
};


// QuitGameButton
struct QuitGameButton_t3E0ABE520A7973062C0E581168B878FE1F6AC215  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ScoreReseter
struct ScoreReseter_tEDB5071910ACDAF7E9456B270B5DEEAABD9D07E4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ScreenshotUtility
struct ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean ScreenshotUtility::runOnlyInEditor
	bool ___runOnlyInEditor_5;
	// System.String ScreenshotUtility::m_ScreenshotKey
	String_t* ___m_ScreenshotKey_6;
	// System.Int32 ScreenshotUtility::m_ScaleFactor
	int32_t ___m_ScaleFactor_7;
	// System.Boolean ScreenshotUtility::includeImageSizeInFilename
	bool ___includeImageSizeInFilename_8;
	// System.Int32 ScreenshotUtility::m_ImageCount
	int32_t ___m_ImageCount_9;

public:
	inline static int32_t get_offset_of_runOnlyInEditor_5() { return static_cast<int32_t>(offsetof(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D, ___runOnlyInEditor_5)); }
	inline bool get_runOnlyInEditor_5() const { return ___runOnlyInEditor_5; }
	inline bool* get_address_of_runOnlyInEditor_5() { return &___runOnlyInEditor_5; }
	inline void set_runOnlyInEditor_5(bool value)
	{
		___runOnlyInEditor_5 = value;
	}

	inline static int32_t get_offset_of_m_ScreenshotKey_6() { return static_cast<int32_t>(offsetof(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D, ___m_ScreenshotKey_6)); }
	inline String_t* get_m_ScreenshotKey_6() const { return ___m_ScreenshotKey_6; }
	inline String_t** get_address_of_m_ScreenshotKey_6() { return &___m_ScreenshotKey_6; }
	inline void set_m_ScreenshotKey_6(String_t* value)
	{
		___m_ScreenshotKey_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScreenshotKey_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScaleFactor_7() { return static_cast<int32_t>(offsetof(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D, ___m_ScaleFactor_7)); }
	inline int32_t get_m_ScaleFactor_7() const { return ___m_ScaleFactor_7; }
	inline int32_t* get_address_of_m_ScaleFactor_7() { return &___m_ScaleFactor_7; }
	inline void set_m_ScaleFactor_7(int32_t value)
	{
		___m_ScaleFactor_7 = value;
	}

	inline static int32_t get_offset_of_includeImageSizeInFilename_8() { return static_cast<int32_t>(offsetof(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D, ___includeImageSizeInFilename_8)); }
	inline bool get_includeImageSizeInFilename_8() const { return ___includeImageSizeInFilename_8; }
	inline bool* get_address_of_includeImageSizeInFilename_8() { return &___includeImageSizeInFilename_8; }
	inline void set_includeImageSizeInFilename_8(bool value)
	{
		___includeImageSizeInFilename_8 = value;
	}

	inline static int32_t get_offset_of_m_ImageCount_9() { return static_cast<int32_t>(offsetof(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D, ___m_ImageCount_9)); }
	inline int32_t get_m_ImageCount_9() const { return ___m_ImageCount_9; }
	inline int32_t* get_address_of_m_ImageCount_9() { return &___m_ImageCount_9; }
	inline void set_m_ImageCount_9(int32_t value)
	{
		___m_ImageCount_9 = value;
	}
};

struct ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_StaticFields
{
public:
	// ScreenshotUtility ScreenshotUtility::screenShotUtility
	ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * ___screenShotUtility_4;

public:
	inline static int32_t get_offset_of_screenShotUtility_4() { return static_cast<int32_t>(offsetof(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_StaticFields, ___screenShotUtility_4)); }
	inline ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * get_screenShotUtility_4() const { return ___screenShotUtility_4; }
	inline ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D ** get_address_of_screenShotUtility_4() { return &___screenShotUtility_4; }
	inline void set_screenShotUtility_4(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * value)
	{
		___screenShotUtility_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___screenShotUtility_4), (void*)value);
	}
};


// ShootingController
struct ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ShootingController::projectilePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectilePrefab_4;
	// UnityEngine.Transform ShootingController::projectileHolder
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___projectileHolder_5;
	// System.Boolean ShootingController::isPlayerControlled
	bool ___isPlayerControlled_6;
	// System.Single ShootingController::fireRate
	float ___fireRate_7;
	// System.Single ShootingController::projectileSpread
	float ___projectileSpread_8;
	// System.Single ShootingController::lastFired
	float ___lastFired_9;
	// UnityEngine.GameObject ShootingController::fireEffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fireEffect_10;
	// InputManager ShootingController::inputManager
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___inputManager_11;

public:
	inline static int32_t get_offset_of_projectilePrefab_4() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___projectilePrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectilePrefab_4() const { return ___projectilePrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectilePrefab_4() { return &___projectilePrefab_4; }
	inline void set_projectilePrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectilePrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectilePrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_projectileHolder_5() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___projectileHolder_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_projectileHolder_5() const { return ___projectileHolder_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_projectileHolder_5() { return &___projectileHolder_5; }
	inline void set_projectileHolder_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___projectileHolder_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectileHolder_5), (void*)value);
	}

	inline static int32_t get_offset_of_isPlayerControlled_6() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___isPlayerControlled_6)); }
	inline bool get_isPlayerControlled_6() const { return ___isPlayerControlled_6; }
	inline bool* get_address_of_isPlayerControlled_6() { return &___isPlayerControlled_6; }
	inline void set_isPlayerControlled_6(bool value)
	{
		___isPlayerControlled_6 = value;
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_projectileSpread_8() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___projectileSpread_8)); }
	inline float get_projectileSpread_8() const { return ___projectileSpread_8; }
	inline float* get_address_of_projectileSpread_8() { return &___projectileSpread_8; }
	inline void set_projectileSpread_8(float value)
	{
		___projectileSpread_8 = value;
	}

	inline static int32_t get_offset_of_lastFired_9() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___lastFired_9)); }
	inline float get_lastFired_9() const { return ___lastFired_9; }
	inline float* get_address_of_lastFired_9() { return &___lastFired_9; }
	inline void set_lastFired_9(float value)
	{
		___lastFired_9 = value;
	}

	inline static int32_t get_offset_of_fireEffect_10() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___fireEffect_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fireEffect_10() const { return ___fireEffect_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fireEffect_10() { return &___fireEffect_10; }
	inline void set_fireEffect_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fireEffect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fireEffect_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputManager_11() { return static_cast<int32_t>(offsetof(ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4, ___inputManager_11)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_inputManager_11() const { return ___inputManager_11; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_inputManager_11() { return &___inputManager_11; }
	inline void set_inputManager_11(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___inputManager_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_11), (void*)value);
	}
};


// TimedObjectDestroyer
struct TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TimedObjectDestroyer::lifetime
	float ___lifetime_4;
	// System.Single TimedObjectDestroyer::timeAlive
	float ___timeAlive_5;
	// System.Boolean TimedObjectDestroyer::destroyChildrenOnDeath
	bool ___destroyChildrenOnDeath_6;

public:
	inline static int32_t get_offset_of_lifetime_4() { return static_cast<int32_t>(offsetof(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365, ___lifetime_4)); }
	inline float get_lifetime_4() const { return ___lifetime_4; }
	inline float* get_address_of_lifetime_4() { return &___lifetime_4; }
	inline void set_lifetime_4(float value)
	{
		___lifetime_4 = value;
	}

	inline static int32_t get_offset_of_timeAlive_5() { return static_cast<int32_t>(offsetof(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365, ___timeAlive_5)); }
	inline float get_timeAlive_5() const { return ___timeAlive_5; }
	inline float* get_address_of_timeAlive_5() { return &___timeAlive_5; }
	inline void set_timeAlive_5(float value)
	{
		___timeAlive_5 = value;
	}

	inline static int32_t get_offset_of_destroyChildrenOnDeath_6() { return static_cast<int32_t>(offsetof(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365, ___destroyChildrenOnDeath_6)); }
	inline bool get_destroyChildrenOnDeath_6() const { return ___destroyChildrenOnDeath_6; }
	inline bool* get_address_of_destroyChildrenOnDeath_6() { return &___destroyChildrenOnDeath_6; }
	inline void set_destroyChildrenOnDeath_6(bool value)
	{
		___destroyChildrenOnDeath_6 = value;
	}
};

struct TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_StaticFields
{
public:
	// System.Boolean TimedObjectDestroyer::quitting
	bool ___quitting_7;

public:
	inline static int32_t get_offset_of_quitting_7() { return static_cast<int32_t>(offsetof(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_StaticFields, ___quitting_7)); }
	inline bool get_quitting_7() const { return ___quitting_7; }
	inline bool* get_address_of_quitting_7() { return &___quitting_7; }
	inline void set_quitting_7(bool value)
	{
		___quitting_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UIPage> UIManager::pages
	List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * ___pages_4;
	// System.Int32 UIManager::currentPage
	int32_t ___currentPage_5;
	// System.Int32 UIManager::defaultPage
	int32_t ___defaultPage_6;
	// System.Int32 UIManager::pausePageIndex
	int32_t ___pausePageIndex_7;
	// System.Boolean UIManager::allowPause
	bool ___allowPause_8;
	// System.Boolean UIManager::isPaused
	bool ___isPaused_9;
	// System.Collections.Generic.List`1<UIelement> UIManager::UIelements
	List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * ___UIelements_10;
	// UnityEngine.EventSystems.EventSystem UIManager::eventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem_11;
	// InputManager UIManager::inputManager
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * ___inputManager_12;

public:
	inline static int32_t get_offset_of_pages_4() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___pages_4)); }
	inline List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * get_pages_4() const { return ___pages_4; }
	inline List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD ** get_address_of_pages_4() { return &___pages_4; }
	inline void set_pages_4(List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * value)
	{
		___pages_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pages_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentPage_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___currentPage_5)); }
	inline int32_t get_currentPage_5() const { return ___currentPage_5; }
	inline int32_t* get_address_of_currentPage_5() { return &___currentPage_5; }
	inline void set_currentPage_5(int32_t value)
	{
		___currentPage_5 = value;
	}

	inline static int32_t get_offset_of_defaultPage_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___defaultPage_6)); }
	inline int32_t get_defaultPage_6() const { return ___defaultPage_6; }
	inline int32_t* get_address_of_defaultPage_6() { return &___defaultPage_6; }
	inline void set_defaultPage_6(int32_t value)
	{
		___defaultPage_6 = value;
	}

	inline static int32_t get_offset_of_pausePageIndex_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___pausePageIndex_7)); }
	inline int32_t get_pausePageIndex_7() const { return ___pausePageIndex_7; }
	inline int32_t* get_address_of_pausePageIndex_7() { return &___pausePageIndex_7; }
	inline void set_pausePageIndex_7(int32_t value)
	{
		___pausePageIndex_7 = value;
	}

	inline static int32_t get_offset_of_allowPause_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___allowPause_8)); }
	inline bool get_allowPause_8() const { return ___allowPause_8; }
	inline bool* get_address_of_allowPause_8() { return &___allowPause_8; }
	inline void set_allowPause_8(bool value)
	{
		___allowPause_8 = value;
	}

	inline static int32_t get_offset_of_isPaused_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___isPaused_9)); }
	inline bool get_isPaused_9() const { return ___isPaused_9; }
	inline bool* get_address_of_isPaused_9() { return &___isPaused_9; }
	inline void set_isPaused_9(bool value)
	{
		___isPaused_9 = value;
	}

	inline static int32_t get_offset_of_UIelements_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___UIelements_10)); }
	inline List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * get_UIelements_10() const { return ___UIelements_10; }
	inline List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 ** get_address_of_UIelements_10() { return &___UIelements_10; }
	inline void set_UIelements_10(List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * value)
	{
		___UIelements_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIelements_10), (void*)value);
	}

	inline static int32_t get_offset_of_eventSystem_11() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___eventSystem_11)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_eventSystem_11() const { return ___eventSystem_11; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_eventSystem_11() { return &___eventSystem_11; }
	inline void set_eventSystem_11(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___eventSystem_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystem_11), (void*)value);
	}

	inline static int32_t get_offset_of_inputManager_12() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___inputManager_12)); }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * get_inputManager_12() const { return ___inputManager_12; }
	inline InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A ** get_address_of_inputManager_12() { return &___inputManager_12; }
	inline void set_inputManager_12(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * value)
	{
		___inputManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputManager_12), (void*)value);
	}
};


// UIPage
struct UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UIPage::defaultSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___defaultSelected_4;

public:
	inline static int32_t get_offset_of_defaultSelected_4() { return static_cast<int32_t>(offsetof(UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF, ___defaultSelected_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_defaultSelected_4() const { return ___defaultSelected_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_defaultSelected_4() { return &___defaultSelected_4; }
	inline void set_defaultSelected_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___defaultSelected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSelected_4), (void*)value);
	}
};


// UIelement
struct UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F  : public AxisControl_t1D073A5E272359459D359EBAFB0E2F76889EE9B4
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::pressPoint
	float ___pressPoint_33;

public:
	inline static int32_t get_offset_of_pressPoint_33() { return static_cast<int32_t>(offsetof(ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F, ___pressPoint_33)); }
	inline float get_pressPoint_33() const { return ___pressPoint_33; }
	inline float* get_address_of_pressPoint_33() { return &___pressPoint_33; }
	inline void set_pressPoint_33(float value)
	{
		___pressPoint_33 = value;
	}
};

struct ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F_StaticFields
{
public:
	// System.Single UnityEngine.InputSystem.Controls.ButtonControl::s_GlobalDefaultButtonPressPoint
	float ___s_GlobalDefaultButtonPressPoint_34;

public:
	inline static int32_t get_offset_of_s_GlobalDefaultButtonPressPoint_34() { return static_cast<int32_t>(offsetof(ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F_StaticFields, ___s_GlobalDefaultButtonPressPoint_34)); }
	inline float get_s_GlobalDefaultButtonPressPoint_34() const { return ___s_GlobalDefaultButtonPressPoint_34; }
	inline float* get_address_of_s_GlobalDefaultButtonPressPoint_34() { return &___s_GlobalDefaultButtonPressPoint_34; }
	inline void set_s_GlobalDefaultButtonPressPoint_34(float value)
	{
		___s_GlobalDefaultButtonPressPoint_34 = value;
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// HighScoreDisplay
struct HighScoreDisplay_t5048A49C2F80ABFD44736CBCE44BA71881B455AE  : public UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF
{
public:
	// UnityEngine.UI.Text HighScoreDisplay::displayText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___displayText_4;

public:
	inline static int32_t get_offset_of_displayText_4() { return static_cast<int32_t>(offsetof(HighScoreDisplay_t5048A49C2F80ABFD44736CBCE44BA71881B455AE, ___displayText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_displayText_4() const { return ___displayText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_displayText_4() { return &___displayText_4; }
	inline void set_displayText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___displayText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayText_4), (void*)value);
	}
};


// ScoreDisplay
struct ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A  : public UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF
{
public:
	// UnityEngine.UI.Text ScoreDisplay::displayText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___displayText_4;

public:
	inline static int32_t get_offset_of_displayText_4() { return static_cast<int32_t>(offsetof(ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A, ___displayText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_displayText_4() const { return ___displayText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_displayText_4() { return &___displayText_4; }
	inline void set_displayText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___displayText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayText_4), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.InputSystem.Controls.KeyControl
struct KeyControl_t916B88BC80A33CCFB1FCACE4F721498831885C91  : public ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F
{
public:
	// UnityEngine.InputSystem.Key UnityEngine.InputSystem.Controls.KeyControl::<keyCode>k__BackingField
	int32_t ___U3CkeyCodeU3Ek__BackingField_35;
	// System.Int32 UnityEngine.InputSystem.Controls.KeyControl::m_ScanCode
	int32_t ___m_ScanCode_36;

public:
	inline static int32_t get_offset_of_U3CkeyCodeU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(KeyControl_t916B88BC80A33CCFB1FCACE4F721498831885C91, ___U3CkeyCodeU3Ek__BackingField_35)); }
	inline int32_t get_U3CkeyCodeU3Ek__BackingField_35() const { return ___U3CkeyCodeU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CkeyCodeU3Ek__BackingField_35() { return &___U3CkeyCodeU3Ek__BackingField_35; }
	inline void set_U3CkeyCodeU3Ek__BackingField_35(int32_t value)
	{
		___U3CkeyCodeU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_m_ScanCode_36() { return static_cast<int32_t>(offsetof(KeyControl_t916B88BC80A33CCFB1FCACE4F721498831885C91, ___m_ScanCode_36)); }
	inline int32_t get_m_ScanCode_36() const { return ___m_ScanCode_36; }
	inline int32_t* get_address_of_m_ScanCode_36() { return &___m_ScanCode_36; }
	inline void set_m_ScanCode_36(int32_t value)
	{
		___m_ScanCode_36 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// ShootingController[]
struct ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * m_Items[1];

public:
	inline ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// EnemySpawner[]
struct EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * m_Items[1];

public:
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Enemy[]
struct EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * m_Items[1];

public:
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UIelement[]
struct UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * m_Items[1];

public:
	inline UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void CameraController::SetCameraPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_SetCameraPosition_mBB70D6C989501CE1CE45F456C27F9357B997F959 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 CameraController::GetTargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraController_GetTargetPosition_m9AB0A4583577240C86482A0CAEBB41B6BB185752 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 CameraController::GetPlayerMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraController_GetPlayerMousePosition_mD020C5EBD1B6BE6597A7E5FD0DD6DA8140FF5EFC (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 CameraController::ComputeCameraPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraController_ComputeCameraPosition_m2FEA5FB111E2C4CA2CF36E0C6B9C27829335CB38 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePosition1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Controller::SetupInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_SetupInput_m09145BEE35A8DCB1173311772123D68C9693BCA2 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// System.Void Controller::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_HandleInput_m564AA963D2EF981582544F8BF306455C52F687A5 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// System.Void Controller::SignalAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_SignalAnimator_mD2B82BC486D78BF9E33EDB25229D7ACD97152D89 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Controller::GetLookPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Controller_GetLookPosition_m4B9F5835C4577F19BBC563B23764E8744A43D903 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void Controller::MovePlayer(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_MovePlayer_m74C6901BD528FF0A11989763AF1BDCF69201A49A (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movement0, const RuntimeMethod* method);
// System.Void Controller::LookAtPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_LookAtPoint_m2BD596131E70AE934FB79C4AD3D7994A93B64EE4 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean Controller::get_lockXCoordinate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_get_lockXCoordinate_m16170D0B4B0EF56B787B02465125260191381C23 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// System.Boolean Controller::get_lockYCoordinate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_get_lockYCoordinate_m6E0D1918865352ECFF607776066563C626BD4052 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Boolean Controller::get_canAimWithMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_get_canAimWithMouse_m37B1BDFCC8220346DF61049AED5997C182EA37B0 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_up(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_up_m3D2B71DA51EA167C367FD275B7B28241C565F127 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_freezeRotation_mF8E01A84694933A5E21F71869CAA42DB247CE987 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void CursorChanger::ChangeCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorChanger_ChangeCursor_m72448079424AF7A1F02B0E6890519AB4D12BF004 (CursorChanger_tF96791A48F42EF65902156CCA7FE7185F6B403F5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::SetCursor(UnityEngine.Texture2D,UnityEngine.Vector2,UnityEngine.CursorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_SetCursor_m7EBC8C73DB36A950EFA4AC7DA1EC4E8CD10867FC (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___hotspot1, int32_t ___cursorMode2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Damage::DealDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_DealDamage_m82B0E9CB6FB76DD8D33388F7432B9C31AFD8C381 (Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___collisionGameObject0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Health>()
inline Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m402507DD6ECA75FCA7761EE37906226BA103EAE4 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___damageAmount0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Enemy::DoBeforeDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_DoBeforeDestroy_mFBEF6F41EDB6DE5E19B55EB79226DCF4D97B61E3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void DirectionalMover::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalMover_Move_m10B81BC27C00FE245E70E18B7C408E5EDB5F0F6A (DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// System.Void Enemy::HandleBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_HandleBehaviour_m7B951C1DABFCDF0F24935F112E66C3FE68AEAE5A (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::TryToShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_TryToShoot_m7373746A08B0F572F40476828A2332136E7BEB7C (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::AddToScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_AddToScore_m0BDDC37C5E7F733BE23AC60F394D1A311356426F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void Enemy::IncrementEnemiesDefeated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_IncrementEnemiesDefeated_mBB73B5CBD8C820BDBCA12E5A013CA2A5B43810B5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void GameManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226 (int32_t ___scoreAmount0, const RuntimeMethod* method);
// System.Void GameManager::IncrementEnemiesDefeated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_IncrementEnemiesDefeated_m869BEC0C175830CB2185EFF9F5117264659BF2B5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Enemy::GetFollowPlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_GetFollowPlayerMovement_mA21733EF3075072B7A9B589580D39FD476C873DE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Enemy::GetScrollingMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_GetScrollingMovement_mA54E3CE578517BB7E832AFC17799D546236D36F5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Enemy::GetFollowPlayerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Enemy_GetFollowPlayerRotation_m5AFADA703E8E046BBC3F4D12443818C4FDA8F0E0 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Enemy::GetScrollingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Enemy_GetScrollingRotation_m5E189D9E112CAA1BAE2469E305EE8CF2E6B2B916 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ShootingController>::GetEnumerator()
inline Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461  List_1_GetEnumerator_m03792C8C7F289A7640CFF47532926DDA94C69115 (List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461  (*) (List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ShootingController>::get_Current()
inline ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * Enumerator_get_Current_m819777AB53057294645C10D1F7369D443709DE36_inline (Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 * __this, const RuntimeMethod* method)
{
	return ((  ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * (*) (Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void ShootingController::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_Fire_m603501B97F8D6F4F760BDBF1E638FDCEF3FA0A3C (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<ShootingController>::MoveNext()
inline bool Enumerator_MoveNext_m9D7E3951E837E0393257C4825A95D439EC95EF1E (Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ShootingController>::Dispose()
inline void Enumerator_Dispose_m3AC64F5BF52E6F789064D3B50CCFA014AF7D4843 (Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 Enemy::GetScrollDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_GetScrollDirection_mF2539E072FD7B21C108DB73FFB3282D0FD93348E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  Camera_get_pixelRect_m58284153875DDE6470D4BDCAF2DFC9F5C9DE3D3A (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ShootingController>::.ctor()
inline void List_1__ctor_mC7F8F2D41400918F62D1904301AD4D9F8DC06B3B (List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// System.Void EnemySpawner::CheckSpawnTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_CheckSpawnTimer_mF8B120A50068F5CADA8B8C0ABDD4C09000652117 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB (const RuntimeMethod* method);
// System.Void EnemySpawner::SpawnEnemy(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemy_mF3C16AFD170E8D300979A061E11FFF71F22C7D6C (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___spawnLocation0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<ShootingController>()
inline ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* GameObject_GetComponentsInChildren_TisShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4_mFF74B9CA5050B6F9F1429F1BDB80FDB24A6EEACA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void GameManager::HandleStartUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleStartUp_mC5703FAD90689590C67D6145CC038FBF8E28296C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void GameManager::set_score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_score_mDDC2391B636303367BE16F2F245D58F1450A63D6 (int32_t ___value0, const RuntimeMethod* method);
// System.Void GameManager::UpdateUIElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateUIElements_m7A8029CC94936A4F92330824C585842A9E07C64E (const RuntimeMethod* method);
// System.Void GameManager::FigureOutHowManyEnemiesExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_FigureOutHowManyEnemiesExist_m7BF38901EAB643B0A3EDD20ED8E8C7B73EF0C093 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<EnemySpawner>()
inline EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* Object_FindObjectsOfType_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m5AF0F578095725B77D644E9D6EADC3B294370A2A (const RuntimeMethod* method)
{
	return ((  EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<EnemySpawner>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 * Enumerable_ToList_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m7BD759CCEF5159E971867780E15E1D1A234EA990 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<Enemy>()
inline EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B (const RuntimeMethod* method)
{
	return ((  EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<Enemy>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * Enumerable_ToList_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m29E3166BBDE481FD8F9D89CB2E0934FB80F4D385 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<EnemySpawner>::GetEnumerator()
inline Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23  List_1_GetEnumerator_mE58740915151C731F1EAC76E0A3B78AE3898D855 (List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23  (*) (List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<EnemySpawner>::get_Current()
inline EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * Enumerator_get_Current_m4D266227EC503836E9BEEF76AAE06463649DDD7D_inline (Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 * __this, const RuntimeMethod* method)
{
	return ((  EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * (*) (Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<EnemySpawner>::MoveNext()
inline bool Enumerator_MoveNext_m010B62E1AFD053C6E02CFDB3B04875D0D38E28BC (Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<EnemySpawner>::Dispose()
inline void Enumerator_Dispose_mB9EDD53837C9E0FB933A434A1174A1692E97C5B6 (Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void GameManager::LevelCleared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelCleared_mAE0B07BA699143B9130950F26C630EC6E5034810 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::SaveHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SaveHighScore_mC3A1BAF109666EF264EB8A7894CD551B3A89FE42 (const RuntimeMethod* method);
// System.Void GameManager::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetScore_m1304BBBD789363D43CDFBBFD10039C24EA5D2BB8 (const RuntimeMethod* method);
// System.Int32 GameManager::get_score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC (const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UIManager::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateUI_m9076046EDAF6AD406801B952F8BE9CC84D9CE60F (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UIManager::GoToPage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GoToPage_m12550768F317DBF8B2A3D2EC97DA96B033BA45A7 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___pageIndex0, const RuntimeMethod* method);
// System.Void Health::SetRespawnPoint(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Health_SetRespawnPoint_m224FAED437C49D5CD5C765284CBCDAFBF419772B_inline (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newRespawnPosition0, const RuntimeMethod* method);
// System.Void Health::InvincibilityCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_InvincibilityCheck_mF17C2FF7AED9C870485A807AE2EF08BB197DE499 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean Health::CheckDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Health_CheckDeath_m1DFE1880336042745C5FCE646B0CF963525AF537 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_mD1FF509C5EA28113F0FE5D086F321EA2E716A3CE (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.Void Health::HandleDeathWithLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_HandleDeathWithLives_mDFD8C5E96B246F371480BE4B1A4F44E2ED2854F1 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.Void Health::HandleDeathWithoutLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_HandleDeathWithoutLives_m108D37CE7E2CBF84649F1D4D8D79B49690927842 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.Void Health::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Respawn_mF8484CBA879B2A92C080F46092CD84677415761A (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UIelement::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIelement_UpdateUI_m69DBCB77CC3775997BE1608B5646EFCBF4D535CC (UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * __this, const RuntimeMethod* method);
// System.Void HighScoreDisplay::DisplayHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScoreDisplay_DisplayHighScore_m0BAD841832B22E756EEB509800EC850E6B9475B7 (HighScoreDisplay_t5048A49C2F80ABFD44736CBCE44BA71881B455AE * __this, const RuntimeMethod* method);
// System.Void UIelement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIelement__ctor_mADE6221C2EFA2428D7E0D0450CB7D348BFA3D761 (UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * __this, const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_alreadySelecting_mEC3798F034DC597BFD2D0E36E072C37196F1991A_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55 (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___selected0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Selectable>()
inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * Component_GetComponent_TisSelectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_m2714EF15B06CF6AF3ABDA79514691A9D4364B0E9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void InputManager::ResetValuesToDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_ResetValuesToDefault_mE77F4DC1B7E37A703DA86C026CB28B43AF4CDABF (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction/CallbackContext::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *, const RuntimeMethod*))CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.InputAction/CallbackContext::get_canceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CallbackContext_get_canceled_m0BB5B9147F7C34A8A7E656A373ACE305A1A65AC6 (CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void InputManager/<ResetFireStart>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetFireStartU3Ed__12__ctor_m8A7FFF283B4BE689E7150649442F1590A18F0B14 (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator InputManager::ResetPausePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputManager_ResetPausePressed_m66E13B13FC71AD48632F248324C659F26ABC3CD7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void InputManager/<ResetPausePressed>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPausePressedU3Ed__15__ctor_m656918222CC9F3E94F062C5A50171737AA8D65FE (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void Projectile::MoveProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_MoveProjectile_m29D8098E768ECAD550EEC481BC9704BC51E7984C (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void ScoreDisplay::DisplayScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_DisplayScore_mBACE3C104B2FA7A4DE9F15D63DB8F6D1CC9BCE3E (ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ScreenshotUtility>()
inline ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * Component_GetComponent_TisScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_mF8D66AA0D51C9764CA2B87F51B41FC7E61656A81 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Keyboard UnityEngine.InputSystem.Keyboard::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * Keyboard_get_current_mA5FF0443C556DC01EE94171F720A551F21A1CD14_inline (const RuntimeMethod* method);
// UnityEngine.InputSystem.Controls.KeyControl UnityEngine.InputSystem.Keyboard::FindKeyOnCurrentKeyboardLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyControl_t916B88BC80A33CCFB1FCACE4F721498831885C91 * Keyboard_FindKeyOnCurrentKeyboardLayout_mB0FF3BC6D75B8736A78F7B637BB853D0D0B54244 (Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * __this, String_t* ___displayName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.Controls.ButtonControl::get_wasPressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonControl_get_wasPressedThisFrame_mBADEAF40CE754948E85834A9E8D631458A990189 (ButtonControl_t0083B4C0648E285548A814EC38890BB1A2F17E7F * __this, const RuntimeMethod* method);
// System.Void ScreenshotUtility::TakeScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotUtility_TakeScreenshot_m25105D13F060ADFDF3E3CA95DBF7A2C5483DDE5A (ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE (const RuntimeMethod* method);
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_mB0DE010388F478603FB22C2DE37E2E01C5F49A28 (String_t* ___filename0, int32_t ___superSize1, const RuntimeMethod* method);
// System.Void ShootingController::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_ProcessInput_m7B988D36ABC61638AE083000736C64F2D73B79CE (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method);
// System.Void ShootingController::SetupInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_SetupInput_m71CC581139BA5A7861C3BCDABDC61F02C9C22C75 (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ShootingController::SpawnProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_SpawnProjectile_m58277388A136B818517FF91FC946F55770768174 (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::DetachChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UIManager::SetupGameManagerUIManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetupGameManagerUIManager_m5C3D9DDF9AEC1346DF64C818EE0CF0B70D186A8B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UIelement>()
inline UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* Object_FindObjectsOfType_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mC3AAF69FE2AE5FF85F3D199377D1095799148C75 (const RuntimeMethod* method)
{
	return ((  UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UIelement>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * Enumerable_ToList_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mCEC25F25A37DEC7CF5342569F8E64A960C38168E (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801 (const RuntimeMethod* method)
{
	return ((  EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void UIManager::SetActiveAllPages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetActiveAllPages_m3E007C5253E63531326CF4E3771DFB28AA27C304 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, bool ___activated0, const RuntimeMethod* method);
// System.Void UIManager::SetUpUIElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetUpUIElements_mD53A419FCF2878B16D679B5D96CA5CF8EF448F37 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UIelement>::GetEnumerator()
inline Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745  List_1_GetEnumerator_m1F81844CF7218AE44786D3EDF9A4F0E13F49CA10 (List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745  (*) (List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UIelement>::get_Current()
inline UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * Enumerator_get_Current_mC9DA313E0E9DAD38F581C9B456D78123282A4BEE_inline (Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 * __this, const RuntimeMethod* method)
{
	return ((  UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * (*) (Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UIelement>::MoveNext()
inline bool Enumerator_MoveNext_m9F5329F570D6652AD4882A0C84F4E0165FFD0A9A (Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UIelement>::Dispose()
inline void Enumerator_Dispose_m6F27EBD77F3F5F55B17254996BB754AA0AA93D27 (Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UIManager::SetUpInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetUpInputManager_m25652E6EA2E65B79E55B0E91AD16FB68BDEB56B9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::SetUpEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetUpEventSystem_mF01886E5DC3E8A3BA7D408864B4231CE5AA2A1D4 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::CheckPauseInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CheckPauseInput_mAF9C5C227C084523658D66F63F2652CCBBCDE788 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_TogglePause_m1FFA893B04FFDFD53FD57ABD82B6900A2D2382AF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UIPage>::get_Count()
inline int32_t List_1_get_Count_m86DF089BE1978D3A4E7532CB2CCE2902AD04BC46_inline (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UIPage>::get_Item(System.Int32)
inline UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_inline (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * (*) (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UIPage::SetSelectedUIToDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPage_SetSelectedUIToDefault_mEE5F46851B7CC533227F3CAE35A4B3B4F5D31EC0 (UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * __this, const RuntimeMethod* method);
// System.Void UIManager/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mC79A1F1D34720231A16BF4DC399413A7EA263333 (U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UIPage>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m1E4AF509B6444AD08E9D39C11D581A39D0F3360D (Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<UIPage>::Find(System.Predicate`1<!0>)
inline UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * List_1_Find_m857846AD63752B9D9BE2C0EEEC0F686669E471D6 (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * __this, Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7 * ___match0, const RuntimeMethod* method)
{
	return ((  UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * (*) (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD *, Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7 *, const RuntimeMethod*))List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared)(__this, ___match0, method);
}
// System.Int32 System.Collections.Generic.List`1<UIPage>::IndexOf(!0)
inline int32_t List_1_IndexOf_mF733F57FC32460856FD46663E78EF66762D0926E (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * __this, UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD *, UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UIPage>::GetEnumerator()
inline Enumerator_t662389D5740170895123E2081C3EF405AA533AC5  List_1_GetEnumerator_m48E5600EC26AD7087E57E60F8FE3590D6530B30F (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t662389D5740170895123E2081C3EF405AA533AC5  (*) (List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UIPage>::get_Current()
inline UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * Enumerator_get_Current_mBA1E74C79F0B0A85B038580B7298FEF1CEDD8254_inline (Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 * __this, const RuntimeMethod* method)
{
	return ((  UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * (*) (Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UIPage>::MoveNext()
inline bool Enumerator_MoveNext_mE43F3AA97D70AEBEFC88A96691EEF84767820D6E (Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UIPage>::Dispose()
inline void Enumerator_Dispose_mCAB91EFF5FD71D9A6E7ABEC2ACDD2CC35C33E7DB (Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_mBDE87C2FCF352957C2B86B67610667663422FBE6 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E29A76E9A1C7ADBEE5C1295F374673305C5CC08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerCamera = GetComponent<Camera>();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320(__this, /*hidden argument*/Component_GetComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_mE17146EF5B0D8E9F9D2D2D94567BF211AD00D320_RuntimeMethod_var);
		__this->set_playerCamera_4(L_0);
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_inputManager_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// inputManager = InputManager.instance;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_3 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_inputManager_10(L_3);
	}

IL_0025:
	{
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_4 = __this->get_inputManager_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.LogWarning("The Camera Controller can not find an Input Manager in the scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral7E29A76E9A1C7ADBEE5C1295F374673305C5CC08, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_m3C257AC762117CFDDAD03C9C4FBBFDE51C61D534 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// SetCameraPosition();
		CameraController_SetCameraPosition_mBB70D6C989501CE1CE45F456C27F9357B997F959(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::SetCameraPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_SetCameraPosition_mBB70D6C989501CE1CE45F456C27F9357B997F959 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (target != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// Vector3 targetPosition = GetTargetPosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = CameraController_GetTargetPosition_m9AB0A4583577240C86482A0CAEBB41B6BB185752(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		// Vector3 mousePosition = GetPlayerMousePosition();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = CameraController_GetPlayerMousePosition_mD020C5EBD1B6BE6597A7E5FD0DD6DA8140FF5EFC(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		// Vector3 desiredCameraPosition = ComputeCameraPosition(targetPosition, mousePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = CameraController_ComputeCameraPosition_m2FEA5FB111E2C4CA2CF36E0C6B9C27829335CB38(__this, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		// transform.position = desiredCameraPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_2;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 CameraController::GetTargetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraController_GetTargetPosition_m9AB0A4583577240C86482A0CAEBB41B6BB185752 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return target.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_target_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001a:
	{
		// return transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector3 CameraController::GetPlayerMousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraController_GetPlayerMousePosition_mD020C5EBD1B6BE6597A7E5FD0DD6DA8140FF5EFC (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// if (cameraMovementStyle == CameraStyles.Locked)
		int32_t L_0 = __this->get_cameraMovementStyle_6();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		return L_1;
	}

IL_000e:
	{
		// return playerCamera.ScreenToWorldPoint(new Vector2(inputManager.horizontalLookAxis, inputManager.verticalLookAxis));
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_playerCamera_4();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_3 = __this->get_inputManager_10();
		float L_4 = L_3->get_horizontalLookAxis_7();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_5 = __this->get_inputManager_10();
		float L_6 = L_5->get_verticalLookAxis_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), L_4, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// UnityEngine.Vector3 CameraController::ComputeCameraPosition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  CameraController_ComputeCameraPosition_m2FEA5FB111E2C4CA2CF36E0C6B9C27829335CB38 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePosition1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// Vector3 result = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// switch (cameraMovementStyle)
		int32_t L_1 = __this->get_cameraMovementStyle_6();
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0021:
	{
		// result = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// break;
		goto IL_005c;
	}

IL_002f:
	{
		// result = targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = ___targetPosition0;
		V_0 = L_5;
		// break;
		goto IL_005c;
	}

IL_0033:
	{
		// Vector3 desiredPosition = Vector3.Lerp(targetPosition, mousePosition, freeCameraMouseTracking);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___targetPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___mousePosition1;
		float L_8 = __this->get_freeCameraMouseTracking_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_6, L_7, L_8, /*hidden argument*/NULL);
		// Vector3 difference = desiredPosition - targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___targetPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_9, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// difference = Vector3.ClampMagnitude(difference, maxDistanceFromTarget);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_1;
		float L_13 = __this->get_maxDistanceFromTarget_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_ClampMagnitude_mF85598307D6CF3B4E5BEEB218CEDDCE39CDF3336(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// result = targetPosition + difference;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = ___targetPosition0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_15, L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_005c:
	{
		// result.z = cameraZCoordinate;
		float L_18 = __this->get_cameraZCoordinate_9();
		(&V_0)->set_z_4(L_18);
		// return result;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_0;
		return L_19;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// [Range(0, 0.75f)] public float freeCameraMouseTracking = 0.5f;
		__this->set_freeCameraMouseTracking_7((0.5f));
		// public float maxDistanceFromTarget = 5.0f;
		__this->set_maxDistanceFromTarget_8((5.0f));
		// public float cameraZCoordinate = -10.0f;
		__this->set_cameraZCoordinate_9((-10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean Controller::get_canAimWithMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_get_canAimWithMouse_m37B1BDFCC8220346DF61049AED5997C182EA37B0 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// return aimMode == AimModes.AimTowardsMouse;
		int32_t L_0 = __this->get_aimMode_9();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Controller::get_lockXCoordinate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_get_lockXCoordinate_m16170D0B4B0EF56B787B02465125260191381C23 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// return movementMode == MovementModes.MoveVertically;
		int32_t L_0 = __this->get_movementMode_10();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean Controller::get_lockYCoordinate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Controller_get_lockYCoordinate_m6E0D1918865352ECFF607776066563C626BD4052 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// return movementMode == MovementModes.MoveHorizontally;
		int32_t L_0 = __this->get_movementMode_10();
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Start_mD256D29928E12349C2565BD046108EE5A3537157 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// SetupInput();
		Controller_SetupInput_m09145BEE35A8DCB1173311772123D68C9693BCA2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_Update_mBC27223743238412D4F6FF7B8B3E3FB2DF47F1A0 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// HandleInput();
		Controller_HandleInput_m564AA963D2EF981582544F8BF306455C52F687A5(__this, /*hidden argument*/NULL);
		// SignalAnimator();
		Controller_SignalAnimator_mD2B82BC486D78BF9E33EDB25229D7ACD97152D89(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Controller::SetupInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_SetupInput_m09145BEE35A8DCB1173311772123D68C9693BCA2 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93998F8FCA1C9BD2B32008E15C9DE4DAAF4A0CBC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// inputManager = InputManager.instance;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_2 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_inputManager_8(L_2);
	}

IL_0019:
	{
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_3 = __this->get_inputManager_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogWarning("There is no player input manager in the scene, there needs to be one for the Controller to work");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral93998F8FCA1C9BD2B32008E15C9DE4DAAF4A0CBC, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Controller::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_HandleInput_m564AA963D2EF981582544F8BF306455C52F687A5 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 lookPosition = GetLookPosition();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Controller_GetLookPosition_m4B9F5835C4577F19BBC563B23764E8744A43D903(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 movementVector = new Vector3(inputManager.horizontalMoveAxis, inputManager.verticalMoveAxis, 0);
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_inputManager_8();
		float L_2 = L_1->get_horizontalMoveAxis_5();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_3 = __this->get_inputManager_8();
		float L_4 = L_3->get_verticalMoveAxis_6();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_2, L_4, (0.0f), /*hidden argument*/NULL);
		// MovePlayer(movementVector);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_1;
		Controller_MovePlayer_m74C6901BD528FF0A11989763AF1BDCF69201A49A(__this, L_5, /*hidden argument*/NULL);
		// LookAtPoint(lookPosition);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		Controller_LookAtPoint_m2BD596131E70AE934FB79C4AD3D7994A93B64EE4(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Controller::SignalAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_SignalAnimator_mD2B82BC486D78BF9E33EDB25229D7ACD97152D89 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (animator != null)
		RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * L_0 = __this->get_animator_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Controller::GetLookPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Controller_GetLookPosition_m4B9F5835C4577F19BBC563B23764E8744A43D903 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 result = transform.up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (aimMode != AimModes.AimForwards)
		int32_t L_3 = __this->get_aimMode_9();
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}
	{
		// result = new Vector2(inputManager.horizontalLookAxis, inputManager.verticalLookAxis);
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_4 = __this->get_inputManager_8();
		float L_5 = L_4->get_horizontalLookAxis_7();
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_6 = __this->get_inputManager_8();
		float L_7 = L_6->get_verticalLookAxis_8();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_5, L_7, /*hidden argument*/NULL);
		// }
		goto IL_004a;
	}

IL_0039:
	{
		// result = transform.up;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_004a:
	{
		// return result;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		return L_11;
	}
}
// System.Void Controller::MovePlayer(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_MovePlayer_m74C6901BD528FF0A11989763AF1BDCF69201A49A (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___movement0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (movementMode == MovementModes.Astroids)
		int32_t L_0 = __this->get_movementMode_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_00d5;
		}
	}
	{
		// if (myRigidbody == null)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_myRigidbody_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// myRigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_myRigidbody_5(L_3);
	}

IL_0026:
	{
		// Vector2 force = transform.up * movement.y * Time.deltaTime * moveSpeed;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___movement0;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_moveSpeed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// Debug.Log(force);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = L_14;
		RuntimeObject * L_16 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_16, /*hidden argument*/NULL);
		// myRigidbody.AddForce(force);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_17 = __this->get_myRigidbody_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18 = V_0;
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_17, L_18, /*hidden argument*/NULL);
		// Vector3 newRotationEulars = transform.rotation.eulerAngles;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_3), /*hidden argument*/NULL);
		V_1 = L_21;
		// float zAxisRotation = transform.rotation.eulerAngles.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_3), /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		// float newZAxisRotation = zAxisRotation - rotationSpeed * movement.x * Time.deltaTime;
		float L_26 = __this->get_rotationSpeed_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = ___movement0;
		float L_28 = L_27.get_x_2();
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_subtract((float)L_25, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_26, (float)L_28)), (float)L_29))));
		// newRotationEulars = new Vector3(newRotationEulars.x, newRotationEulars.y, newZAxisRotation);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_1;
		float L_31 = L_30.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_1;
		float L_33 = L_32.get_y_3();
		float L_34 = V_2;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_31, L_33, L_34, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.Euler(newRotationEulars);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_36, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_35, L_37, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d5:
	{
		// if (lockXCoordinate)
		bool L_38;
		L_38 = Controller_get_lockXCoordinate_m16170D0B4B0EF56B787B02465125260191381C23(__this, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00e9;
		}
	}
	{
		// movement.x = 0;
		(&___movement0)->set_x_2((0.0f));
	}

IL_00e9:
	{
		// if (lockYCoordinate)
		bool L_39;
		L_39 = Controller_get_lockYCoordinate_m6E0D1918865352ECFF607776066563C626BD4052(__this, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00fd;
		}
	}
	{
		// movement.y = 0;
		(&___movement0)->set_y_3((0.0f));
	}

IL_00fd:
	{
		// transform.position = transform.position + (movement * Time.deltaTime * moveSpeed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = ___movement0;
		float L_44;
		L_44 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, L_44, /*hidden argument*/NULL);
		float L_46 = __this->get_moveSpeed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_45, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_47, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_40, L_48, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Controller::LookAtPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller_LookAtPoint_m2BD596131E70AE934FB79C4AD3D7994A93B64EE4 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Time.timeScale > 0)
		float L_0;
		L_0 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// Vector2 lookDirection = Camera.main.ScreenToWorldPoint(point) - transform.position;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___point0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (canAimWithMouse)
		bool L_8;
		L_8 = Controller_get_canAimWithMouse_m37B1BDFCC8220346DF61049AED5997C182EA37B0(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// transform.up = lookDirection;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_10, /*hidden argument*/NULL);
		Transform_set_up_m3D2B71DA51EA167C367FD275B7B28241C565F127(L_9, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0047:
	{
		// if (myRigidbody != null)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_12 = __this->get_myRigidbody_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// myRigidbody.freezeRotation = true;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_14 = __this->get_myRigidbody_5();
		Rigidbody2D_set_freezeRotation_mF8E01A84694933A5E21F71869CAA42DB247CE987(L_14, (bool)1, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Controller__ctor_m50D06C2CAE9B5496780A83ABCF68C529A44EE9F7 (Controller_tB694EDC1BC19B0E57E8D94237A07C19F0D3992FC * __this, const RuntimeMethod* method)
{
	{
		// public float moveSpeed = 10.0f;
		__this->set_moveSpeed_6((10.0f));
		// public float rotationSpeed = 60f;
		__this->set_rotationSpeed_7((60.0f));
		// public MovementModes movementMode = MovementModes.FreeRoam;
		__this->set_movementMode_10(2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CursorChanger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorChanger_Start_m6423AA1B898E57D06D4F1817C896C34BD197F36B (CursorChanger_tF96791A48F42EF65902156CCA7FE7185F6B403F5 * __this, const RuntimeMethod* method)
{
	{
		// ChangeCursor();
		CursorChanger_ChangeCursor_m72448079424AF7A1F02B0E6890519AB4D12BF004(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CursorChanger::ChangeCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorChanger_ChangeCursor_m72448079424AF7A1F02B0E6890519AB4D12BF004 (CursorChanger_tF96791A48F42EF65902156CCA7FE7185F6B403F5 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Cursor.lockState = CursorLockMode.Confined;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(2, /*hidden argument*/NULL);
		// Vector2 hotSpot = new Vector2();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// hotSpot.x = newCursorSprite.width / 2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_0 = __this->get_newCursorSprite_4();
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		(&V_0)->set_x_0(((float)((float)((int32_t)((int32_t)L_1/(int32_t)2)))));
		// hotSpot.y = newCursorSprite.height / 2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = __this->get_newCursorSprite_4();
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		(&V_0)->set_y_1(((float)((float)((int32_t)((int32_t)L_3/(int32_t)2)))));
		// Cursor.SetCursor(newCursorSprite, hotSpot, CursorMode.Auto);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = __this->get_newCursorSprite_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		Cursor_SetCursor_m7EBC8C73DB36A950EFA4AC7DA1EC4E8CD10867FC(L_4, L_5, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CursorChanger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CursorChanger__ctor_m6F93F573035A5D45EC0BC88202CBFCB99780FB09 (CursorChanger_tF96791A48F42EF65902156CCA7FE7185F6B403F5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Damage::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_OnTriggerEnter2D_m157E4CAF48515A61BEE72C13A467BE2B50A050CB (Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	{
		// if (dealDamageOnTriggerEnter)
		bool L_0 = __this->get_dealDamageOnTriggerEnter_8();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// DealDamage(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		Damage_DealDamage_m82B0E9CB6FB76DD8D33388F7432B9C31AFD8C381(__this, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Damage::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_OnTriggerStay2D_m18CCE0E87967B1AFA0695A45A72A47C3F97EE99B (Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	{
		// if (dealDamageOnTriggerStay)
		bool L_0 = __this->get_dealDamageOnTriggerStay_9();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// DealDamage(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		Damage_DealDamage_m82B0E9CB6FB76DD8D33388F7432B9C31AFD8C381(__this, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Damage::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_OnCollisionEnter2D_m21F70347100BCC9B3F9292CD6664223F0ECE04D3 (Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	{
		// if (dealDamageOnCollision)
		bool L_0 = __this->get_dealDamageOnCollision_10();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// DealDamage(collision.gameObject);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_1, /*hidden argument*/NULL);
		Damage_DealDamage_m82B0E9CB6FB76DD8D33388F7432B9C31AFD8C381(__this, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Damage::DealDamage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage_DealDamage_m82B0E9CB6FB76DD8D33388F7432B9C31AFD8C381 (Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___collisionGameObject0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * V_0 = NULL;
	{
		// Health collidedHealth = collisionGameObject.GetComponent<Health>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___collisionGameObject0;
		Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * L_1;
		L_1 = GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570(L_0, /*hidden argument*/GameObject_GetComponent_TisHealth_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96_m51AE0CFCE2B84137462CD38079641E797E862570_RuntimeMethod_var);
		V_0 = L_1;
		// if (collidedHealth != null)
		Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0094;
		}
	}
	{
		// if (collidedHealth.teamId != this.teamId)
		Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * L_4 = V_0;
		int32_t L_5 = L_4->get_teamId_4();
		int32_t L_6 = __this->get_teamId_4();
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0094;
		}
	}
	{
		// collidedHealth.TakeDamage(damageAmount);
		Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * L_7 = V_0;
		int32_t L_8 = __this->get_damageAmount_5();
		Health_TakeDamage_m402507DD6ECA75FCA7761EE37906226BA103EAE4(L_7, L_8, /*hidden argument*/NULL);
		// if (hitEffect != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_hitEffect_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		// Instantiate(hitEffect, transform.position, transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_hitEffect_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_11, L_13, L_15, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
	}

IL_005e:
	{
		// if (destroyAfterDamage)
		bool L_17 = __this->get_destroyAfterDamage_7();
		if (!L_17)
		{
			goto IL_0094;
		}
	}
	{
		// if (gameObject.GetComponent<Enemy>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_19;
		L_19 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_18, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0089;
		}
	}
	{
		// gameObject.GetComponent<Enemy>().DoBeforeDestroy();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_22;
		L_22 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_21, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		Enemy_DoBeforeDestroy_mFBEF6F41EDB6DE5E19B55EB79226DCF4D97B61E3(L_22, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_23, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damage__ctor_m448736D790344E455BBE20282D3D73C91E6E2CAB (Damage_tF03686559EE2A75E7FB5C86FDC5B966CB31BE631 * __this, const RuntimeMethod* method)
{
	{
		// public int damageAmount = 1;
		__this->set_damageAmount_5(1);
		// public bool destroyAfterDamage = true;
		__this->set_destroyAfterDamage_7((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DirectionalMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalMover_Update_m30FBA57DFD9F1D847ADBF7A35C0B831DB1D67967 (DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC * __this, const RuntimeMethod* method)
{
	{
		// Move();
		DirectionalMover_Move_m10B81BC27C00FE245E70E18B7C408E5EDB5F0F6A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DirectionalMover::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalMover_Move_m10B81BC27C00FE245E70E18B7C408E5EDB5F0F6A (DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC * __this, const RuntimeMethod* method)
{
	{
		// transform.position = transform.position + direction.normalized * speed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_direction_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_speed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_8, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DirectionalMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectionalMover__ctor_m5EAE2C69280A94E5F558B4229FEAB95A08285CF9 (DirectionalMover_t7B90C8B7A99533C1181CF6625716C8C88E3F94AC * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 direction = Vector3.down;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		__this->set_direction_4(L_0);
		// public float speed = 5.0f;
		__this->set_speed_5((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_LateUpdate_m32DBFADC692C65B13C7A47C672B7B8A3079F75F4 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// HandleBehaviour();
		Enemy_HandleBehaviour_m7B951C1DABFCDF0F24935F112E66C3FE68AEAE5A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (movementMode == MovementModes.FollowTarget && followTarget == null)
		int32_t L_0 = __this->get_movementMode_10();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_followTarget_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// if (GameManager.instance != null && GameManager.instance.player != null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_player_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// followTarget = GameManager.instance.player.transform;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_player_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		__this->set_followTarget_6(L_10);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Enemy::HandleBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_HandleBehaviour_m7B951C1DABFCDF0F24935F112E66C3FE68AEAE5A (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (followTarget != null && (followTarget.position - transform.position).magnitude < followRange)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_followTarget_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_followTarget_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		float L_8 = __this->get_followRange_7();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_003f;
		}
	}
	{
		// MoveEnemy();
		Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5(__this, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// TryToShoot();
		Enemy_TryToShoot_m7373746A08B0F572F40476828A2332136E7BEB7C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::DoBeforeDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_DoBeforeDestroy_mFBEF6F41EDB6DE5E19B55EB79226DCF4D97B61E3 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// AddToScore();
		Enemy_AddToScore_m0BDDC37C5E7F733BE23AC60F394D1A311356426F(__this, /*hidden argument*/NULL);
		// IncrementEnemiesDefeated();
		Enemy_IncrementEnemiesDefeated_mBB73B5CBD8C820BDBCA12E5A013CA2A5B43810B5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::AddToScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_AddToScore_m0BDDC37C5E7F733BE23AC60F394D1A311356426F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance != null && !GameManager.instance.gameIsOver)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_3 = L_2->get_gameIsOver_18();
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// GameManager.AddScore(scoreValue);
		int32_t L_4 = __this->get_scoreValue_5();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226(L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Enemy::IncrementEnemiesDefeated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_IncrementEnemiesDefeated_mBB73B5CBD8C820BDBCA12E5A013CA2A5B43810B5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance != null && !GameManager.instance.gameIsOver)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		bool L_3 = L_2->get_gameIsOver_18();
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// GameManager.instance.IncrementEnemiesDefeated();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		GameManager_IncrementEnemiesDefeated_m869BEC0C175830CB2185EFF9F5117264659BF2B5(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m97D831D3D5C6924EA6E4477F8C5F0BB4D26468A5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 movement = GetDesiredMovement();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(4 /* UnityEngine.Vector3 Enemy::GetDesiredMovement() */, __this);
		V_0 = L_0;
		// Quaternion rotationToTarget = GetDesiredRotation();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = VirtFuncInvoker0< Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(5 /* UnityEngine.Quaternion Enemy::GetDesiredRotation() */, __this);
		V_1 = L_1;
		// transform.position = transform.position + movement;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_6, /*hidden argument*/NULL);
		// transform.rotation = rotationToTarget;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = V_1;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 Enemy::GetDesiredMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_GetDesiredMovement_m86862EAC9DE3DCE227143ABECFFAACFD89626119 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// switch(movementMode)
		int32_t L_0 = __this->get_movementMode_10();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0023;
	}

IL_0011:
	{
		// movement = GetFollowPlayerMovement();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Enemy_GetFollowPlayerMovement_mA21733EF3075072B7A9B589580D39FD476C873DE(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		// break;
		goto IL_0029;
	}

IL_001a:
	{
		// movement = GetScrollingMovement();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Enemy_GetScrollingMovement_mA54E3CE578517BB7E832AFC17799D546236D36F5(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		// break;
		goto IL_0029;
	}

IL_0023:
	{
		// movement = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0029:
	{
		// return movement;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Quaternion Enemy::GetDesiredRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Enemy_GetDesiredRotation_m3454CCAAFAC1E6DA2DF4AE56899AE00A30D942F8 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// switch (movementMode)
		int32_t L_0 = __this->get_movementMode_10();
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0023;
	}

IL_0011:
	{
		// rotation = GetFollowPlayerRotation();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Enemy_GetFollowPlayerRotation_m5AFADA703E8E046BBC3F4D12443818C4FDA8F0E0(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		// break;
		goto IL_002f;
	}

IL_001a:
	{
		// rotation = GetScrollingRotation();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Enemy_GetScrollingRotation_m5E189D9E112CAA1BAE2469E305EE8CF2E6B2B916(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		// break;
		goto IL_002f;
	}

IL_0023:
	{
		// rotation = transform.rotation; ;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_002f:
	{
		// return rotation;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = V_0;
		return L_7;
	}
}
// System.Void Enemy::TryToShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_TryToShoot_m7373746A08B0F572F40476828A2332136E7BEB7C (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3AC64F5BF52E6F789064D3B50CCFA014AF7D4843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9D7E3951E837E0393257C4825A95D439EC95EF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m819777AB53057294645C10D1F7369D443709DE36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m03792C8C7F289A7640CFF47532926DDA94C69115_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// switch (shootMode)
		int32_t L_0 = __this->get_shootMode_9();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0041;
		}
	}
	{
		// foreach (ShootingController gun in guns)
		List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * L_3 = __this->get_guns_8();
		Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461  L_4;
		L_4 = List_1_GetEnumerator_m03792C8C7F289A7640CFF47532926DDA94C69115(L_3, /*hidden argument*/List_1_GetEnumerator_m03792C8C7F289A7640CFF47532926DDA94C69115_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_001c:
		{
			// foreach (ShootingController gun in guns)
			ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * L_5;
			L_5 = Enumerator_get_Current_m819777AB53057294645C10D1F7369D443709DE36_inline((Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m819777AB53057294645C10D1F7369D443709DE36_RuntimeMethod_var);
			// gun.Fire();
			ShootingController_Fire_m603501B97F8D6F4F760BDBF1E638FDCEF3FA0A3C(L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			// foreach (ShootingController gun in guns)
			bool L_6;
			L_6 = Enumerator_MoveNext_m9D7E3951E837E0393257C4825A95D439EC95EF1E((Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m9D7E3951E837E0393257C4825A95D439EC95EF1E_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_001c;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3AC64F5BF52E6F789064D3B50CCFA014AF7D4843((Enumerator_t956379BE0680FC4490CC1F46ABC76851FBDDE461 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3AC64F5BF52E6F789064D3B50CCFA014AF7D4843_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Enemy::GetFollowPlayerMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_GetFollowPlayerMovement_mA21733EF3075072B7A9B589580D39FD476C873DE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 moveDirection = (followTarget.position - transform.position).normalized;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_followTarget_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		// Vector3 movement = moveDirection * moveSpeed * Time.deltaTime;
		float L_6 = __this->get_moveSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		// return movement;
		return L_9;
	}
}
// UnityEngine.Quaternion Enemy::GetFollowPlayerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Enemy_GetFollowPlayerRotation_m5AFADA703E8E046BBC3F4D12443818C4FDA8F0E0 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float angle = Vector3.SignedAngle(Vector3.down, (followTarget.position - transform.position).normalized, Vector3.forward);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_followTarget_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_8;
		L_8 = Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A(L_0, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// Quaternion rotationToTarget = Quaternion.Euler(0, 0, angle);
		float L_9 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), L_9, /*hidden argument*/NULL);
		// return rotationToTarget;
		return L_10;
	}
}
// UnityEngine.Vector3 Enemy::GetScrollingMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_GetScrollingMovement_mA54E3CE578517BB7E832AFC17799D546236D36F5 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// scrollDirection = GetScrollDirection();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Enemy_GetScrollDirection_mF2539E072FD7B21C108DB73FFB3282D0FD93348E(__this, /*hidden argument*/NULL);
		__this->set_scrollDirection_11(L_0);
		// Vector3 movement = scrollDirection * moveSpeed * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_scrollDirection_11();
		float L_2 = __this->get_moveSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		// return movement;
		return L_5;
	}
}
// UnityEngine.Quaternion Enemy::GetScrollingRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Enemy_GetScrollingRotation_m5E189D9E112CAA1BAE2469E305EE8CF2E6B2B916 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// return Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0;
		L_0 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 Enemy::GetScrollDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Enemy_GetScrollDirection_mF2539E072FD7B21C108DB73FFB3282D0FD93348E (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Camera camera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (camera != null)
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// Vector2 screenPosition = camera.WorldToScreenPoint(transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_3, L_5, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// Rect screenRect = camera.pixelRect;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_8 = V_0;
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_9;
		L_9 = Camera_get_pixelRect_m58284153875DDE6470D4BDCAF2DFC9F5C9DE3D3A(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (!screenRect.Contains(screenPosition))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_1;
		bool L_11;
		L_11 = Rect_Contains_m8438BA185AD95D6C50E7A2CF9DD30FBA044CE0B2((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_2), L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		// return scrollDirection * -1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_scrollDirection_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, (-1.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_0048:
	{
		// return scrollDirection;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = __this->get_scrollDirection_11();
		return L_14;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC7F8F2D41400918F62D1904301AD4D9F8DC06B3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float moveSpeed = 5.0f;
		__this->set_moveSpeed_4((5.0f));
		// public int scoreValue = 5;
		__this->set_scoreValue_5(5);
		// public float followRange = 10.0f;
		__this->set_followRange_7((10.0f));
		// public List<ShootingController> guns = new List<ShootingController>();
		List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 * L_0 = (List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2 *)il2cpp_codegen_object_new(List_1_tE1CA7B68837BDB140CFE4E57D54BBEDDFDAC51E2_il2cpp_TypeInfo_var);
		List_1__ctor_mC7F8F2D41400918F62D1904301AD4D9F8DC06B3B(L_0, /*hidden argument*/List_1__ctor_mC7F8F2D41400918F62D1904301AD4D9F8DC06B3B_RuntimeMethod_var);
		__this->set_guns_8(L_0);
		// public ShootMode shootMode = ShootMode.ShootAll;
		__this->set_shootMode_9(1);
		// public MovementModes movementMode = MovementModes.FollowTarget;
		__this->set_movementMode_10(1);
		// [SerializeField] private Vector3 scrollDirection = Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		__this->set_scrollDirection_11(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemySpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Update_mE9B85A2C67A3E6E48ADC531A0426ECF999A4C2A3 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	{
		// CheckSpawnTimer();
		EnemySpawner_CheckSpawnTimer_mF8B120A50068F5CADA8B8C0ABDD4C09000652117(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySpawner::CheckSpawnTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_CheckSpawnTimer_mF8B120A50068F5CADA8B8C0ABDD4C09000652117 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Time.timeSinceLevelLoad > lastSpawnTime + spawnDelay && (currentlySpawned < maxSpawn || spawnInfinite))
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		float L_1 = __this->get_lastSpawnTime_12();
		float L_2 = __this->get_spawnDelay_11();
		if ((!(((float)L_0) > ((float)((float)il2cpp_codegen_add((float)L_1, (float)L_2))))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_3 = __this->get_currentlySpawned_10();
		int32_t L_4 = __this->get_maxSpawn_8();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002a;
		}
	}
	{
		bool L_5 = __this->get_spawnInfinite_9();
		if (!L_5)
		{
			goto IL_0038;
		}
	}

IL_002a:
	{
		// Vector3 spawnLocation = GetSpawnLocation();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(4 /* UnityEngine.Vector3 EnemySpawner::GetSpawnLocation() */, __this);
		V_0 = L_6;
		// SpawnEnemy(spawnLocation);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		EnemySpawner_SpawnEnemy_mF3C16AFD170E8D300979A061E11FFF71F22C7D6C(__this, L_7, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::SpawnEnemy(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemy_mF3C16AFD170E8D300979A061E11FFF71F22C7D6C (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___spawnLocation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4_mFF74B9CA5050B6F9F1429F1BDB80FDB24A6EEACA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_0 = NULL;
	ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* V_1 = NULL;
	int32_t V_2 = 0;
	ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* G_B3_0 = NULL;
	ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* G_B2_0 = NULL;
	{
		// if (enemyPrefab != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemyPrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0082;
		}
	}
	{
		// GameObject enemyGameObject = Instantiate(enemyPrefab, spawnLocation, enemyPrefab.transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_enemyPrefab_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___spawnLocation0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_enemyPrefab_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_2, L_3, L_6, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// Enemy enemy = enemyGameObject.GetComponent<Enemy>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_9;
		L_9 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_8, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		V_0 = L_9;
		// ShootingController[] shootingControllers = enemyGameObject.GetComponentsInChildren<ShootingController>();
		ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* L_10;
		L_10 = GameObject_GetComponentsInChildren_TisShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4_mFF74B9CA5050B6F9F1429F1BDB80FDB24A6EEACA(L_8, /*hidden argument*/GameObject_GetComponentsInChildren_TisShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4_mFF74B9CA5050B6F9F1429F1BDB80FDB24A6EEACA_RuntimeMethod_var);
		// if (enemy != null)
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_11 = V_0;
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B2_0 = L_10;
		if (!L_12)
		{
			G_B3_0 = L_10;
			goto IL_004c;
		}
	}
	{
		// enemy.followTarget = target;
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_13 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_target_5();
		L_13->set_followTarget_6(L_14);
		G_B3_0 = G_B2_0;
	}

IL_004c:
	{
		// foreach (ShootingController gun in shootingControllers)
		V_1 = G_B3_0;
		V_2 = 0;
		goto IL_0063;
	}

IL_0051:
	{
		// foreach (ShootingController gun in shootingControllers)
		ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* L_15 = V_1;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		// gun.projectileHolder = projectileHolder;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_projectileHolder_13();
		L_18->set_projectileHolder_5(L_19);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0063:
	{
		// foreach (ShootingController gun in shootingControllers)
		int32_t L_21 = V_2;
		ShootingControllerU5BU5D_tCA5FBACE6432695F6B1D97CD938C94684D35851C* L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		// currentlySpawned++;
		int32_t L_23 = __this->get_currentlySpawned_10();
		__this->set_currentlySpawned_10(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		// lastSpawnTime = Time.timeSinceLevelLoad;
		float L_24;
		L_24 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		__this->set_lastSpawnTime_12(L_24);
	}

IL_0082:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 EnemySpawner::GetSpawnLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  EnemySpawner_GetSpawnLocation_mE1FD26E3FA65ADC4219DAE3E766DA56244DC2D2E (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = Random.Range(0 - spawnRangeX, spawnRangeX);
		float L_0 = __this->get_spawnRangeX_6();
		float L_1 = __this->get_spawnRangeX_6();
		float L_2;
		L_2 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_subtract((float)(0.0f), (float)L_0)), L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// float y = Random.Range(0 - spawnRangeY, spawnRangeY);
		float L_3 = __this->get_spawnRangeY_7();
		float L_4 = __this->get_spawnRangeY_7();
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((float)il2cpp_codegen_subtract((float)(0.0f), (float)L_3)), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// return new Vector3(transform.position.x + x, transform.position.y + y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		float L_9 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		float L_13 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), ((float)il2cpp_codegen_add((float)L_8, (float)L_9)), ((float)il2cpp_codegen_add((float)L_12, (float)L_13)), (0.0f), /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_mED6FECD7E1057991ED710CD104501453BEEDA871 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	{
		// public float spawnRangeX = 10.0f;
		__this->set_spawnRangeX_6((10.0f));
		// public float spawnRangeY = 10.0f;
		__this->set_spawnRangeY_7((10.0f));
		// public int maxSpawn = 20;
		__this->set_maxSpawn_8(((int32_t)20));
		// public bool spawnInfinite = true;
		__this->set_spawnInfinite_9((bool)1);
		// public float spawnDelay = 2.5f;
		__this->set_spawnDelay_11((2.5f));
		// private float lastSpawnTime = Mathf.NegativeInfinity;
		__this->set_lastSpawnTime_12((-std::numeric_limits<float>::infinity()));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 GameManager::get_score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance.gameManagerScore;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_1 = L_0->get_gameManagerScore_7();
		return L_1;
	}
}
// System.Void GameManager::set_score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_score_mDDC2391B636303367BE16F2F245D58F1450A63D6 (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.gameManagerScore = value;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_1 = ___value0;
		L_0->set_gameManagerScore_7(L_1);
		// }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}

IL_0014:
	{
		// DestroyImmediate(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// HandleStartUp();
		GameManager_HandleStartUp_mC5703FAD90689590C67D6145CC038FBF8E28296C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::HandleStartUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HandleStartUp_mC5703FAD90689590C67D6145CC038FBF8E28296C (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("highscore"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// highScore = PlayerPrefs.GetInt("highscore");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, /*hidden argument*/NULL);
		__this->set_highScore_8(L_1);
	}

IL_001c:
	{
		// if (PlayerPrefs.HasKey("score"))
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// score = PlayerPrefs.GetInt("score");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_set_score_mDDC2391B636303367BE16F2F245D58F1450A63D6(L_3, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// UpdateUIElements();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_UpdateUIElements_m7A8029CC94936A4F92330824C585842A9E07C64E(/*hidden argument*/NULL);
		// if (printDebugOfWinnableStatus)
		bool L_4 = __this->get_printDebugOfWinnableStatus_12();
		if (!L_4)
		{
			goto IL_004a;
		}
	}
	{
		// FigureOutHowManyEnemiesExist();
		GameManager_FigureOutHowManyEnemiesExist_m7BF38901EAB643B0A3EDD20ED8E8C7B73EF0C093(__this, /*hidden argument*/NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void GameManager::FigureOutHowManyEnemiesExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_FigureOutHowManyEnemiesExist_m7BF38901EAB643B0A3EDD20ED8E8C7B73EF0C093 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m7BD759CCEF5159E971867780E15E1D1A234EA990_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m29E3166BBDE481FD8F9D89CB2E0934FB80F4D385_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB9EDD53837C9E0FB933A434A1174A1692E97C5B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m010B62E1AFD053C6E02CFDB3B04875D0D38E28BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4D266227EC503836E9BEEF76AAE06463649DDD7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE58740915151C731F1EAC76E0A3B78AE3898D855_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m5AF0F578095725B77D644E9D6EADC3B294370A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral636B76D4620286F9357E4B4D21A324B107DDEB96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96D744F31FA544E3D7485A422B5684085BF01677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEA8AA7C0722AB255AB2EA4C3D1885E050F82430);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4888D2EF4A871EAA8D9B97DBF13E314B92206C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A93DAF348D468AD6F581D4010C1663A75B7765);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23  V_3;
	memset((&V_3), 0, sizeof(V_3));
	EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// List<EnemySpawner> enemySpawners = FindObjectsOfType<EnemySpawner>().ToList();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		EnemySpawnerU5BU5D_t1F192550C1C89D6F12FAA0AEB0989A5BB4D6315E* L_0;
		L_0 = Object_FindObjectsOfType_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m5AF0F578095725B77D644E9D6EADC3B294370A2A(/*hidden argument*/Object_FindObjectsOfType_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m5AF0F578095725B77D644E9D6EADC3B294370A2A_RuntimeMethod_var);
		List_1_t5283F8DE0C418F56AE5DEFC17A1D3246E3F36CB1 * L_1;
		L_1 = Enumerable_ToList_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m7BD759CCEF5159E971867780E15E1D1A234EA990((RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/Enumerable_ToList_TisEnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E_m7BD759CCEF5159E971867780E15E1D1A234EA990_RuntimeMethod_var);
		// List<Enemy> staticEnemies = FindObjectsOfType<Enemy>().ToList();
		EnemyU5BU5D_t180C2C49BE2837412479DBB2D25E1D9C57C21CB0* L_2;
		L_2 = Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B(/*hidden argument*/Object_FindObjectsOfType_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mAAE5765443D834ABFAA93E538F961D94D5E8340B_RuntimeMethod_var);
		List_1_tC094F21B05965C2E6F7256CF752F1F5ACEE0518C * L_3;
		L_3 = Enumerable_ToList_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m29E3166BBDE481FD8F9D89CB2E0934FB80F4D385((RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/Enumerable_ToList_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m29E3166BBDE481FD8F9D89CB2E0934FB80F4D385_RuntimeMethod_var);
		// int numberOfInfiniteSpawners = 0;
		V_0 = 0;
		// int enemiesFromSpawners = 0;
		V_1 = 0;
		// int enemiesFromStatic = staticEnemies.Count;
		int32_t L_4;
		L_4 = List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_inline(L_3, /*hidden argument*/List_1_get_Count_m99FAEDD9C024582566F281EF9D4051695FBDB0A5_RuntimeMethod_var);
		V_2 = L_4;
		// foreach(EnemySpawner enemySpawner in enemySpawners)
		Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23  L_5;
		L_5 = List_1_GetEnumerator_mE58740915151C731F1EAC76E0A3B78AE3898D855(L_1, /*hidden argument*/List_1_GetEnumerator_mE58740915151C731F1EAC76E0A3B78AE3898D855_RuntimeMethod_var);
		V_3 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0026:
		{
			// foreach(EnemySpawner enemySpawner in enemySpawners)
			EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_6;
			L_6 = Enumerator_get_Current_m4D266227EC503836E9BEEF76AAE06463649DDD7D_inline((Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 *)(&V_3), /*hidden argument*/Enumerator_get_Current_m4D266227EC503836E9BEEF76AAE06463649DDD7D_RuntimeMethod_var);
			V_4 = L_6;
			// if (enemySpawner.spawnInfinite)
			EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_7 = V_4;
			bool L_8 = L_7->get_spawnInfinite_9();
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0038:
		{
			// numberOfInfiniteSpawners += 1;
			int32_t L_9 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
			// }
			goto IL_0048;
		}

IL_003e:
		{
			// enemiesFromSpawners += enemySpawner.maxSpawn;
			int32_t L_10 = V_1;
			EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * L_11 = V_4;
			int32_t L_12 = L_11->get_maxSpawn_8();
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_12));
		}

IL_0048:
		{
			// foreach(EnemySpawner enemySpawner in enemySpawners)
			bool L_13;
			L_13 = Enumerator_MoveNext_m010B62E1AFD053C6E02CFDB3B04875D0D38E28BC((Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m010B62E1AFD053C6E02CFDB3B04875D0D38E28BC_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0026;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB9EDD53837C9E0FB933A434A1174A1692E97C5B6((Enumerator_t6AA4C776FFABC439DAE7E72E61401B885BA46B23 *)(&V_3), /*hidden argument*/Enumerator_Dispose_mB9EDD53837C9E0FB933A434A1174A1692E97C5B6_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// numberOfEnemiesFoundAtStart = enemiesFromSpawners + enemiesFromStatic;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		__this->set_numberOfEnemiesFoundAtStart_15(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_15)));
		// if (gameIsWinnable)
		bool L_16 = __this->get_gameIsWinnable_9();
		if (!L_16)
		{
			goto IL_012c;
		}
	}
	{
		// if (numberOfInfiniteSpawners > 0)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		// Debug.Log("There are " + numberOfInfiniteSpawners + " infinite spawners " + " so the level will always be winnable, "
		//     + "\nhowever you sshould still playtest for timely completion");
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26, L_18, _stringLiteralC4888D2EF4A871EAA8D9B97DBF13E314B92206C1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0095:
	{
		// else if (enemiesToDefeat > numberOfEnemiesFoundAtStart)
		int32_t L_20 = __this->get_enemiesToDefeat_10();
		int32_t L_21 = __this->get_numberOfEnemiesFoundAtStart_15();
		if ((((int32_t)L_20) <= ((int32_t)L_21)))
		{
			goto IL_00e8;
		}
	}
	{
		// Debug.LogWarning("There are " + enemiesToDefeat + " enemies to defeat but only " + numberOfEnemiesFoundAtStart +
		//     " enemies found at start \nThe level can not be completed!");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		ArrayElementTypeCheck (L_23, _stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = L_23;
		int32_t* L_25 = __this->get_address_of_enemiesToDefeat_10();
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_25, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_26);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_24;
		ArrayElementTypeCheck (L_27, _stringLiteralBEA8AA7C0722AB255AB2EA4C3D1885E050F82430);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBEA8AA7C0722AB255AB2EA4C3D1885E050F82430);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		int32_t* L_29 = __this->get_address_of_numberOfEnemiesFoundAtStart_15();
		String_t* L_30;
		L_30 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_29, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_30);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = L_28;
		ArrayElementTypeCheck (L_31, _stringLiteral636B76D4620286F9357E4B4D21A324B107DDEB96);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral636B76D4620286F9357E4B4D21A324B107DDEB96);
		String_t* L_32;
		L_32 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(L_32, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00e8:
	{
		// Debug.Log("There are " + enemiesToDefeat + " enemies to defeat and " + numberOfEnemiesFoundAtStart +
		//     " enemies found at start \nThe level can completed");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		ArrayElementTypeCheck (L_34, _stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = L_34;
		int32_t* L_36 = __this->get_address_of_enemiesToDefeat_10();
		String_t* L_37;
		L_37 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_36, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_37);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_38 = L_35;
		ArrayElementTypeCheck (L_38, _stringLiteral96D744F31FA544E3D7485A422B5684085BF01677);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral96D744F31FA544E3D7485A422B5684085BF01677);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_38;
		int32_t* L_40 = __this->get_address_of_numberOfEnemiesFoundAtStart_15();
		String_t* L_41;
		L_41 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_40, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_41);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = L_39;
		ArrayElementTypeCheck (L_42, _stringLiteralC7A93DAF348D468AD6F581D4010C1663A75B7765);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A93DAF348D468AD6F581D4010C1663A75B7765);
		String_t* L_43;
		L_43 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_43, /*hidden argument*/NULL);
	}

IL_012c:
	{
		// }
		return;
	}
}
// System.Void GameManager::IncrementEnemiesDefeated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_IncrementEnemiesDefeated_m869BEC0C175830CB2185EFF9F5117264659BF2B5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// enemiesDefeated++;
		int32_t L_0 = __this->get_enemiesDefeated_11();
		__this->set_enemiesDefeated_11(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (enemiesDefeated >= enemiesToDefeat && gameIsWinnable)
		int32_t L_1 = __this->get_enemiesDefeated_11();
		int32_t L_2 = __this->get_enemiesToDefeat_10();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_002a;
		}
	}
	{
		bool L_3 = __this->get_gameIsWinnable_9();
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// LevelCleared();
		GameManager_LevelCleared_mAE0B07BA699143B9130950F26C630EC6E5034810(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnApplicationQuit_m84D45A971E10AF1DE8F25809E66AF69557445E8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SaveHighScore();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_SaveHighScore_mC3A1BAF109666EF264EB8A7894CD551B3A89FE42(/*hidden argument*/NULL);
		// ResetScore();
		GameManager_ResetScore_m1304BBBD789363D43CDFBBFD10039C24EA5D2BB8(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::AddScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mF7D9082C1C297FC0547D0DDE027410E708CEA226 (int32_t ___scoreAmount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += scoreAmount;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC(/*hidden argument*/NULL);
		int32_t L_1 = ___scoreAmount0;
		GameManager_set_score_mDDC2391B636303367BE16F2F245D58F1450A63D6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// if (score > instance.highScore)
		int32_t L_2;
		L_2 = GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC(/*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_4 = L_3->get_highScore_8();
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0022;
		}
	}
	{
		// SaveHighScore();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_SaveHighScore_mC3A1BAF109666EF264EB8A7894CD551B3A89FE42(/*hidden argument*/NULL);
	}

IL_0022:
	{
		// UpdateUIElements();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_UpdateUIElements_m7A8029CC94936A4F92330824C585842A9E07C64E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetScore_m1304BBBD789363D43CDFBBFD10039C24EA5D2BB8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("score", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, /*hidden argument*/NULL);
		// score = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_set_score_mDDC2391B636303367BE16F2F245D58F1450A63D6(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::SaveHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SaveHighScore_mC3A1BAF109666EF264EB8A7894CD551B3A89FE42 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score > instance.highScore)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC(/*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_2 = L_1->get_highScore_8();
		if ((((int32_t)L_0) <= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		// PlayerPrefs.SetInt("highscore", score);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC(/*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, L_3, /*hidden argument*/NULL);
		// instance.highScore = score;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_4 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t L_5;
		L_5 = GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC(/*hidden argument*/NULL);
		L_4->set_highScore_8(L_5);
	}

IL_002f:
	{
		// UpdateUIElements();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_UpdateUIElements_m7A8029CC94936A4F92330824C585842A9E07C64E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ResetHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ResetHighScore_mBA495091B0DD57D5979495D5302AB8210CBB30DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("highscore", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, 0, /*hidden argument*/NULL);
		// if (instance != null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// instance.highScore = 0;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		L_2->set_highScore_8(0);
	}

IL_0023:
	{
		// UpdateUIElements();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_UpdateUIElements_m7A8029CC94936A4F92330824C585842A9E07C64E(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::UpdateUIElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateUIElements_m7A8029CC94936A4F92330824C585842A9E07C64E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null && instance.uiManager != null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_3 = L_2->get_uiManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// instance.uiManager.UpdateUI();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_6 = L_5->get_uiManager_5();
		UIManager_UpdateUI_m9076046EDAF6AD406801B952F8BE9CC84D9CE60F(L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void GameManager::LevelCleared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LevelCleared_mAE0B07BA699143B9130950F26C630EC6E5034810 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("score", score);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC(/*hidden argument*/NULL);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_0, /*hidden argument*/NULL);
		// if (uiManager != null)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_1 = __this->get_uiManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0077;
		}
	}
	{
		// player.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_player_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// uiManager.allowPause = false;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_4 = __this->get_uiManager_5();
		L_4->set_allowPause_8((bool)0);
		// uiManager.GoToPage(gameVictoryPageIndex);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_5 = __this->get_uiManager_5();
		int32_t L_6 = __this->get_gameVictoryPageIndex_13();
		UIManager_GoToPage_m12550768F317DBF8B2A3D2EC97DA96B033BA45A7(L_5, L_6, /*hidden argument*/NULL);
		// if (victoryEffect != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_victoryEffect_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0077;
		}
	}
	{
		// Instantiate(victoryEffect, transform.position, transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_victoryEffect_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_9, L_11, L_13, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameIsOver = true;
		__this->set_gameIsOver_18((bool)1);
		// if (gameOverEffect != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameOverEffect_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// Instantiate(gameOverEffect, transform.position, transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_gameOverEffect_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_2, L_4, L_6, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
	}

IL_0038:
	{
		// if (uiManager != null)
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_8 = __this->get_uiManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0063;
		}
	}
	{
		// uiManager.allowPause = false;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_10 = __this->get_uiManager_5();
		L_10->set_allowPause_8((bool)0);
		// uiManager.GoToPage(gameOverPageIndex);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_11 = __this->get_uiManager_5();
		int32_t L_12 = __this->get_gameOverPageIndex_16();
		UIManager_GoToPage_m12550768F317DBF8B2A3D2EC97DA96B033BA45A7(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public bool gameIsWinnable = true;
		__this->set_gameIsWinnable_9((bool)1);
		// public int enemiesToDefeat = 10;
		__this->set_enemiesToDefeat_10(((int32_t)10));
		// public bool printDebugOfWinnableStatus = true;
		__this->set_printDebugOfWinnableStatus_12((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__cctor_m0872BB5B2E20B9183F004EB81D5129608114D285 (const RuntimeMethod* method)
{
	{
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
// System.Void Health::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Start_m67B788A33501A2CF22C3231FD3FCCD6D1D63A77F (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// SetRespawnPoint(transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Health_SetRespawnPoint_m224FAED437C49D5CD5C765284CBCDAFBF419772B_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Update_mBCA15B9BB7DC24D8DD34C254D94064723BC0B368 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// InvincibilityCheck();
		Health_InvincibilityCheck_mF17C2FF7AED9C870485A807AE2EF08BB197DE499(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::InvincibilityCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_InvincibilityCheck_mF17C2FF7AED9C870485A807AE2EF08BB197DE499 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// if (timeToBecomeDamagableAgain <= Time.time)
		float L_0 = __this->get_timeToBecomeDamagableAgain_13();
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		if ((!(((float)L_0) <= ((float)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		// isInvincableFromDamage = false;
		__this->set_isInvincableFromDamage_14((bool)0);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Health::SetRespawnPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_SetRespawnPoint_m224FAED437C49D5CD5C765284CBCDAFBF419772B (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newRespawnPosition0, const RuntimeMethod* method)
{
	{
		// respawnPosition = newRespawnPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___newRespawnPosition0;
		__this->set_respawnPosition_15(L_0);
		// }
		return;
	}
}
// System.Void Health::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Respawn_mF8484CBA879B2A92C080F46092CD84677415761A (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = respawnPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_respawnPosition_15();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_1, /*hidden argument*/NULL);
		// currentHealth = defaultHealth;
		int32_t L_2 = __this->get_defaultHealth_5();
		__this->set_currentHealth_7(L_2);
		// }
		return;
	}
}
// System.Void Health::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_TakeDamage_m402507DD6ECA75FCA7761EE37906226BA103EAE4 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___damageAmount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isInvincableFromDamage || isAlwaysInvincible)
		bool L_0 = __this->get_isInvincableFromDamage_14();
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get_isAlwaysInvincible_9();
		if (!L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// if (hitEffect != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_hitEffect_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// Instantiate(hitEffect, transform.position, transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_hitEffect_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_4, L_6, L_8, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
	}

IL_0042:
	{
		// timeToBecomeDamagableAgain = Time.time + invincibilityTime;
		float L_10;
		L_10 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_11 = __this->get_invincibilityTime_8();
		__this->set_timeToBecomeDamagableAgain_13(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// isInvincableFromDamage = true;
		__this->set_isInvincableFromDamage_14((bool)1);
		// currentHealth -= damageAmount;
		int32_t L_12 = __this->get_currentHealth_7();
		int32_t L_13 = ___damageAmount0;
		__this->set_currentHealth_7(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_13)));
		// CheckDeath();
		bool L_14;
		L_14 = Health_CheckDeath_m1DFE1880336042745C5FCE646B0CF963525AF537(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::ReceiveHealing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_ReceiveHealing_m53CF4F3F8AAC2735768213F421334274E5CB63AF (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, int32_t ___healingAmount0, const RuntimeMethod* method)
{
	{
		// currentHealth += healingAmount;
		int32_t L_0 = __this->get_currentHealth_7();
		int32_t L_1 = ___healingAmount0;
		__this->set_currentHealth_7(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (currentHealth > maximumHealth)
		int32_t L_2 = __this->get_currentHealth_7();
		int32_t L_3 = __this->get_maximumHealth_6();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_0028;
		}
	}
	{
		// currentHealth = maximumHealth;
		int32_t L_4 = __this->get_maximumHealth_6();
		__this->set_currentHealth_7(L_4);
	}

IL_0028:
	{
		// CheckDeath();
		bool L_5;
		L_5 = Health_CheckDeath_m1DFE1880336042745C5FCE646B0CF963525AF537(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Health::CheckDeath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Health_CheckDeath_m1DFE1880336042745C5FCE646B0CF963525AF537 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// if (currentHealth <= 0)
		int32_t L_0 = __this->get_currentHealth_7();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// Die();
		Health_Die_mD1FF509C5EA28113F0FE5D086F321EA2E716A3CE(__this, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0011:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Health::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Die_mD1FF509C5EA28113F0FE5D086F321EA2E716A3CE (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (deathEffect != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_deathEffect_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		// Instantiate(deathEffect, transform.position, transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_deathEffect_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_2, L_4, L_6, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
	}

IL_0031:
	{
		// if (useLives)
		bool L_8 = __this->get_useLives_10();
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// HandleDeathWithLives();
		Health_HandleDeathWithLives_mDFD8C5E96B246F371480BE4B1A4F44E2ED2854F1(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0040:
	{
		// HandleDeathWithoutLives();
		Health_HandleDeathWithoutLives_m108D37CE7E2CBF84649F1D4D8D79B49690927842(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::HandleDeathWithLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_HandleDeathWithLives_mDFD8C5E96B246F371480BE4B1A4F44E2ED2854F1 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentLives -= 1;
		int32_t L_0 = __this->get_currentLives_11();
		__this->set_currentLives_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (currentLives > 0)
		int32_t L_1 = __this->get_currentLives_11();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// Respawn();
		Health_Respawn_mF8484CBA879B2A92C080F46092CD84677415761A(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001e:
	{
		// if (gameObject.tag == "Player" && GameManager.instance != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// GameManager.instance.GameOver();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (gameObject.GetComponent<Enemy>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_9;
		L_9 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_8, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// gameObject.GetComponent<Enemy>().DoBeforeDestroy();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_12;
		L_12 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_11, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		Enemy_DoBeforeDestroy_mFBEF6F41EDB6DE5E19B55EB79226DCF4D97B61E3(L_12, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::HandleDeathWithoutLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_HandleDeathWithoutLives_m108D37CE7E2CBF84649F1D4D8D79B49690927842 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.tag == "Player" && GameManager.instance != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// GameManager.instance.GameOver();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		GameManager_GameOver_m402A112370B58EBA3B2171FABC09467E1ED28E9A(L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// if (gameObject.GetComponent<Enemy>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_7;
		L_7 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_6, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// gameObject.GetComponent<Enemy>().DoBeforeDestroy();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_10;
		L_10 = GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391(L_9, /*hidden argument*/GameObject_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_m1028B19B2CC018EDF5A269AEAB34B256EFE8D391_RuntimeMethod_var);
		Enemy_DoBeforeDestroy_mFBEF6F41EDB6DE5E19B55EB79226DCF4D97B61E3(L_10, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health__ctor_mD50C73D87211EAE260B38B2936F01722E31B9416 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// public int defaultHealth = 1;
		__this->set_defaultHealth_5(1);
		// public int maximumHealth = 1;
		__this->set_maximumHealth_6(1);
		// public int currentHealth = 1;
		__this->set_currentHealth_7(1);
		// public float invincibilityTime = 3f;
		__this->set_invincibilityTime_8((3.0f));
		// public int currentLives = 3;
		__this->set_currentLives_11(3);
		// public int maximumLives = 5;
		__this->set_maximumLives_12(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HighScoreDisplay::DisplayHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScoreDisplay_DisplayHighScore_m0BAD841832B22E756EEB509800EC850E6B9475B7 (HighScoreDisplay_t5048A49C2F80ABFD44736CBCE44BA71881B455AE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63E1EEBD6ECE8B7D68D22188064C573DFB8CEDD3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (displayText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_displayText_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// displayText.text = "High: " + GameManager.instance.highScore.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_displayText_4();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		int32_t* L_4 = L_3->get_address_of_highScore_8();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral63E1EEBD6ECE8B7D68D22188064C573DFB8CEDD3, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void HighScoreDisplay::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScoreDisplay_UpdateUI_mF9A1B38A0D23C6F24679F36F4E18419C3DE2918F (HighScoreDisplay_t5048A49C2F80ABFD44736CBCE44BA71881B455AE * __this, const RuntimeMethod* method)
{
	{
		// base.UpdateUI();
		UIelement_UpdateUI_m69DBCB77CC3775997BE1608B5646EFCBF4D535CC(__this, /*hidden argument*/NULL);
		// DisplayHighScore();
		HighScoreDisplay_DisplayHighScore_m0BAD841832B22E756EEB509800EC850E6B9475B7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HighScoreDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScoreDisplay__ctor_m7E19187CB91064F65DF0E085207C496853EFB529 (HighScoreDisplay_t5048A49C2F80ABFD44736CBCE44BA71881B455AE * __this, const RuntimeMethod* method)
{
	{
		UIelement__ctor_mADE6221C2EFA2428D7E0D0450CB7D348BFA3D761(__this, /*hidden argument*/NULL);
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
// System.Void HighlightFix::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightFix_OnPointerEnter_m5C773E9F57CE2364D974E2F397B4524D710BC1DC (HighlightFix_t78E5E5D7159CB92B74587BE3B49A3CDC51829B3C * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!EventSystem.current.alreadySelecting)
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		bool L_1;
		L_1 = EventSystem_get_alreadySelecting_mEC3798F034DC597BFD2D0E36E072C37196F1991A_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// EventSystem.current.SetSelectedGameObject(this.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_2;
		L_2 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void HighlightFix::OnDeselect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightFix_OnDeselect_m9F505C087BBA2FEBD6E14BAC66C17CF10BD56C99 (HighlightFix_t78E5E5D7159CB92B74587BE3B49A3CDC51829B3C * __this, BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSelectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_m2714EF15B06CF6AF3ABDA79514691A9D4364B0E9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.GetComponent<Selectable>().OnPointerExit(null);
		Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * L_0;
		L_0 = Component_GetComponent_TisSelectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_m2714EF15B06CF6AF3ABDA79514691A9D4364B0E9(__this, /*hidden argument*/Component_GetComponent_TisSelectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_m2714EF15B06CF6AF3ABDA79514691A9D4364B0E9_RuntimeMethod_var);
		VirtActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(35 /* System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData) */, L_0, (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)NULL);
		// }
		return;
	}
}
// System.Void HighlightFix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighlightFix__ctor_m1D9217BD88000AA824CB1EFD1097266A50082111 (HighlightFix_t78E5E5D7159CB92B74587BE3B49A3CDC51829B3C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_m56AAFE728DF63B4B922FC31449C82EC6CFB0D946 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetValuesToDefault();
		InputManager_ResetValuesToDefault_mE77F4DC1B7E37A703DA86C026CB28B43AF4CDABF(__this, /*hidden argument*/NULL);
		// if (instance == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// instance = this;
		((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}

IL_001a:
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InputManager::ResetValuesToDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_ResetValuesToDefault_mE77F4DC1B7E37A703DA86C026CB28B43AF4CDABF (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		// horizontalMoveAxis = default;
		__this->set_horizontalMoveAxis_5((0.0f));
		// verticalMoveAxis = default;
		__this->set_verticalMoveAxis_6((0.0f));
		// horizontalLookAxis = default;
		__this->set_horizontalLookAxis_7((0.0f));
		// verticalLookAxis = default;
		__this->set_verticalLookAxis_8((0.0f));
		// firePressed = default;
		__this->set_firePressed_9((bool)0);
		// fireHeld = default;
		__this->set_fireHeld_10((bool)0);
		// pausePressed = default;
		__this->set_pausePressed_11((bool)0);
		// }
		return;
	}
}
// System.Void InputManager::ReadMovementInput(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_ReadMovementInput_mF644C064AF44CD93C38B7B6855EAB64B93E49009 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 inputVector = context.ReadValue<Vector2>();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_RuntimeMethod_var);
		V_0 = L_0;
		// horizontalMoveAxis = inputVector.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		float L_2 = L_1.get_x_0();
		__this->set_horizontalMoveAxis_5(L_2);
		// verticalMoveAxis = inputVector.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = V_0;
		float L_4 = L_3.get_y_1();
		__this->set_verticalMoveAxis_6(L_4);
		// }
		return;
	}
}
// System.Void InputManager::ReadMousePositionInput(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_ReadMousePositionInput_mB5F75D0D7E453D1538254968F75A8515F5C697F8 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 inputVector = context.ReadValue<Vector2>();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/CallbackContext_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m8C82319841B3BE1EE406AE1A8FE628CA4E2D250F_RuntimeMethod_var);
		V_0 = L_0;
		// if (Mathf.Abs(inputVector.x) > 1 && Mathf.Abs(inputVector.y) > 1)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		float L_2 = L_1.get_x_0();
		float L_3;
		L_3 = fabsf(L_2);
		if ((!(((float)L_3) > ((float)(1.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_y_1();
		float L_6;
		L_6 = fabsf(L_5);
		if ((!(((float)L_6) > ((float)(1.0f)))))
		{
			goto IL_0044;
		}
	}
	{
		// horizontalLookAxis = inputVector.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		float L_8 = L_7.get_x_0();
		__this->set_horizontalLookAxis_7(L_8);
		// verticalLookAxis = inputVector.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		float L_10 = L_9.get_y_1();
		__this->set_verticalLookAxis_8(L_10);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void InputManager::ReadFireInput(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_ReadFireInput_m451D61DFC3A96C56A23E75A8FB1FE27B38DAC0CD (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB4714CDC37E7C2334E05539DECE7510E200D97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// firePressed = !context.canceled;
		bool L_0;
		L_0 = CallbackContext_get_canceled_m0BB5B9147F7C34A8A7E656A373ACE305A1A65AC6((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		__this->set_firePressed_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// fireHeld = !context.canceled;
		bool L_1;
		L_1 = CallbackContext_get_canceled_m0BB5B9147F7C34A8A7E656A373ACE305A1A65AC6((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		__this->set_fireHeld_10((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		// StartCoroutine("ResetFireStart");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteralAAB4714CDC37E7C2334E05539DECE7510E200D97, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InputManager::ResetFireStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputManager_ResetFireStart_m17A06EA6B940FC0B0026F4DD90FA812C9EA08C98 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * L_0 = (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C *)il2cpp_codegen_object_new(U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C_il2cpp_TypeInfo_var);
		U3CResetFireStartU3Ed__12__ctor_m8A7FFF283B4BE689E7150649442F1590A18F0B14(L_0, 0, /*hidden argument*/NULL);
		U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void InputManager::ReadPauseInput(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_ReadPauseInput_m28D4125D35409E9F817FD3BA575DFA3E9AF7047E (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B  ___context0, const RuntimeMethod* method)
{
	{
		// pausePressed = !context.canceled;
		bool L_0;
		L_0 = CallbackContext_get_canceled_m0BB5B9147F7C34A8A7E656A373ACE305A1A65AC6((CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B *)(&___context0), /*hidden argument*/NULL);
		__this->set_pausePressed_11((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// StartCoroutine(ResetPausePressed());
		RuntimeObject* L_1;
		L_1 = InputManager_ResetPausePressed_m66E13B13FC71AD48632F248324C659F26ABC3CD7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InputManager::ResetPausePressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputManager_ResetPausePressed_m66E13B13FC71AD48632F248324C659F26ABC3CD7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * L_0 = (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC *)il2cpp_codegen_object_new(U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC_il2cpp_TypeInfo_var);
		U3CResetPausePressedU3Ed__15__ctor_m656918222CC9F3E94F062C5A50171737AA8D65FE(L_0, 0, /*hidden argument*/NULL);
		U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_mB533F16325A793C9274F6CA3804EBCE27AD700A7 (InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LevelLoadButton::LoadLevelByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoadButton_LoadLevelByName_mD3956042B4DDB2E69B6E1A8E9127CE0DB7B930A9 (LevelLoadButton_t82AF66BD3147D5694F41F1C2E1E22F0BBA1A194B * __this, String_t* ___levelToLoadName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(levelToLoadName);
		String_t* L_0 = ___levelToLoadName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelLoadButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelLoadButton__ctor_m7338D4C6A0A55C9FB40ABAE5EB07FEE09CC18E4D (LevelLoadButton_t82AF66BD3147D5694F41F1C2E1E22F0BBA1A194B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m382C5B499BD4599FE34A04DA3DA0701077C710B2 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// MoveProjectile();
		Projectile_MoveProjectile_m29D8098E768ECAD550EEC481BC9704BC51E7984C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::MoveProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_MoveProjectile_m29D8098E768ECAD550EEC481BC9704BC51E7984C (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// transform.position = transform.position + transform.up * projectileSpeed * Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_projectileSpeed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_2, L_8, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// public float projectileSpeed = 3.0f;
		__this->set_projectileSpeed_4((3.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void QuitGameButton::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGameButton_QuitGame_mB770DEA9BBE5DB05D99E490FF9C0451AA50883C3 (QuitGameButton_t3E0ABE520A7973062C0E581168B878FE1F6AC215 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuitGameButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGameButton__ctor_mF600B554BFD3B38912C824013F4EF5CA3D9F55CB (QuitGameButton_t3E0ABE520A7973062C0E581168B878FE1F6AC215 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScoreDisplay::DisplayScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_DisplayScore_mBACE3C104B2FA7A4DE9F15D63DB8F6D1CC9BCE3E (ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (displayText != null)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_displayText_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		// displayText.text = "Score: " + GameManager.score.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_displayText_4();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = GameManager_get_score_m834BA0EC5E05239A2DAC96DE56824B6C08ABE5DC(/*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void ScoreDisplay::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_UpdateUI_m34FF493987ED47478B280971E18E80F478F0C6CE (ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A * __this, const RuntimeMethod* method)
{
	{
		// base.UpdateUI();
		UIelement_UpdateUI_m69DBCB77CC3775997BE1608B5646EFCBF4D535CC(__this, /*hidden argument*/NULL);
		// DisplayScore();
		ScoreDisplay_DisplayScore_mBACE3C104B2FA7A4DE9F15D63DB8F6D1CC9BCE3E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay__ctor_m7BAE440B77B8FCE54475EBC1CDB2E82937E17496 (ScoreDisplay_tEAFBD4A2ECA347ED7DAB8799E87DF7A626F5773A * __this, const RuntimeMethod* method)
{
	{
		UIelement__ctor_mADE6221C2EFA2428D7E0D0450CB7D348BFA3D761(__this, /*hidden argument*/NULL);
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
// System.Void ScoreReseter::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreReseter_ResetScore_mA3DC8A59FEB8DC8BBA51836CFDDF7D89436FB4F7 (ScoreReseter_tEDB5071910ACDAF7E9456B270B5DEEAABD9D07E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.ResetScore();
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_ResetScore_m1304BBBD789363D43CDFBBFD10039C24EA5D2BB8(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScoreReseter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreReseter__ctor_m46EA9AD8334B57E153D4CF96993DF0D43D764EF4 (ScoreReseter_tEDB5071910ACDAF7E9456B270B5DEEAABD9D07E4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScreenshotUtility::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotUtility_Awake_m2386AE3AA4CA4392A786019B915B0A802C7B5E98 (ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_mF8D66AA0D51C9764CA2B87F51B41FC7E61656A81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43878D65F1C6074DCCD24113E5432F59B56E0B00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (screenShotUtility != null)
		ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * L_0 = ((ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_StaticFields*)il2cpp_codegen_static_fields_for(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_il2cpp_TypeInfo_var))->get_screenShotUtility_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0019:
	{
		// else if (runOnlyInEditor && !Application.isEditor)
		bool L_3 = __this->get_runOnlyInEditor_5();
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4;
		L_4 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0034:
	{
		// screenShotUtility = this.GetComponent<ScreenshotUtility>();
		ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * L_6;
		L_6 = Component_GetComponent_TisScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_mF8D66AA0D51C9764CA2B87F51B41FC7E61656A81(__this, /*hidden argument*/Component_GetComponent_TisScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_mF8D66AA0D51C9764CA2B87F51B41FC7E61656A81_RuntimeMethod_var);
		((ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_StaticFields*)il2cpp_codegen_static_fields_for(ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D_il2cpp_TypeInfo_var))->set_screenShotUtility_4(L_6);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_7, /*hidden argument*/NULL);
		// m_ImageCount = PlayerPrefs.GetInt(ImageCntKey);
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral43878D65F1C6074DCCD24113E5432F59B56E0B00, /*hidden argument*/NULL);
		__this->set_m_ImageCount_9(L_8);
		// if (!Directory.Exists("Screenshots"))
		bool L_9;
		L_9 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0071;
		}
	}
	{
		// Directory.CreateDirectory("Screenshots");
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_10;
		L_10 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(_stringLiteralA86C0DCC60E932791FC077C3431D7EDAD7535093, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void ScreenshotUtility::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotUtility_Update_mC7EB0ED56457E4B9E307CF41D19D85F1ACB51C8F (ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * __this, const RuntimeMethod* method)
{
	{
		// if (Keyboard.current.FindKeyOnCurrentKeyboardLayout(m_ScreenshotKey).wasPressedThisFrame)
		Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * L_0;
		L_0 = Keyboard_get_current_mA5FF0443C556DC01EE94171F720A551F21A1CD14_inline(/*hidden argument*/NULL);
		String_t* L_1 = __this->get_m_ScreenshotKey_6();
		KeyControl_t916B88BC80A33CCFB1FCACE4F721498831885C91 * L_2;
		L_2 = Keyboard_FindKeyOnCurrentKeyboardLayout_mB0FF3BC6D75B8736A78F7B637BB853D0D0B54244(L_0, L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = ButtonControl_get_wasPressedThisFrame_mBADEAF40CE754948E85834A9E8D631458A990189(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// TakeScreenshot();
		ScreenshotUtility_TakeScreenshot_m25105D13F060ADFDF3E3CA95DBF7A2C5483DDE5A(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ScreenshotUtility::ResetCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotUtility_ResetCounter_mABDB45336DB724A3627EE2F32729217853EEDAF5 (ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43878D65F1C6074DCCD24113E5432F59B56E0B00);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ImageCount = 0;
		__this->set_m_ImageCount_9(0);
		// PlayerPrefs.SetInt(ImageCntKey, m_ImageCount);
		int32_t L_0 = __this->get_m_ImageCount_9();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral43878D65F1C6074DCCD24113E5432F59B56E0B00, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScreenshotUtility::TakeScreenshot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotUtility_TakeScreenshot_m25105D13F060ADFDF3E3CA95DBF7A2C5483DDE5A (ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral250AD2AA88B10E79E7D4445BF3F77BE587F43B12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral370ADCA67A4A44D3DD6F644476A178477F67FE98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43878D65F1C6074DCCD24113E5432F59B56E0B00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// PlayerPrefs.SetInt(ImageCntKey, ++m_ImageCount);
		int32_t L_0 = __this->get_m_ImageCount_9();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_3;
		__this->set_m_ImageCount_9(L_1);
		int32_t L_2 = V_3;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral43878D65F1C6074DCCD24113E5432F59B56E0B00, L_2, /*hidden argument*/NULL);
		// int width = Screen.width * m_ScaleFactor;
		int32_t L_3;
		L_3 = Screen_get_width_m52188F76E8AAF57BE373018CB14083BB74C43C1C(/*hidden argument*/NULL);
		int32_t L_4 = __this->get_m_ScaleFactor_7();
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4));
		// int height = Screen.height * m_ScaleFactor;
		int32_t L_5;
		L_5 = Screen_get_height_m110C90A573EE67895DC4F59E9165235EA22039EE(/*hidden argument*/NULL);
		int32_t L_6 = __this->get_m_ScaleFactor_7();
		V_1 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_5, (int32_t)L_6));
		// string pathname = "Screenshots/Screenshot_";
		V_2 = _stringLiteral370ADCA67A4A44D3DD6F644476A178477F67FE98;
		// if (includeImageSizeInFilename)
		bool L_7 = __this->get_includeImageSizeInFilename_8();
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		// pathname += width + "x" + height + "_";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		String_t* L_10 = V_2;
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_9;
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_12);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_11;
		ArrayElementTypeCheck (L_13, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_14;
		ArrayElementTypeCheck (L_16, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		String_t* L_17;
		L_17 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
	}

IL_0077:
	{
		// pathname += m_ImageCount + ".png";
		String_t* L_18 = V_2;
		int32_t* L_19 = __this->get_address_of_m_ImageCount_9();
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_18, L_20, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, /*hidden argument*/NULL);
		V_2 = L_21;
		// ScreenCapture.CaptureScreenshot(pathname, m_ScaleFactor);
		String_t* L_22 = V_2;
		int32_t L_23 = __this->get_m_ScaleFactor_7();
		ScreenCapture_CaptureScreenshot_mB0DE010388F478603FB22C2DE37E2E01C5F49A28(L_22, L_23, /*hidden argument*/NULL);
		// Debug.Log("Screenshot captured at " + pathname);
		String_t* L_24 = V_2;
		String_t* L_25;
		L_25 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral250AD2AA88B10E79E7D4445BF3F77BE587F43B12, L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScreenshotUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenshotUtility__ctor_mCD697693BC83BD730C12CC63D5DA79F24BCE5327 (ScreenshotUtility_tA08E36962BEB67BEC7A496EDB25E95914F1C0B9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool runOnlyInEditor = true;
		__this->set_runOnlyInEditor_5((bool)1);
		// public string m_ScreenshotKey = "c";
		__this->set_m_ScreenshotKey_6(_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		// public int m_ScaleFactor = 1;
		__this->set_m_ScaleFactor_7(1);
		// public bool includeImageSizeInFilename = true;
		__this->set_includeImageSizeInFilename_8((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShootingController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_Update_m22D01E569CFC1F05F7ED1885BCFD51B917257080 (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method)
{
	{
		// ProcessInput();
		ShootingController_ProcessInput_m7B988D36ABC61638AE083000736C64F2D73B79CE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShootingController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_Start_m440F26879E70B9FBAB35E3D66947B9CE990DD344 (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method)
{
	{
		// SetupInput();
		ShootingController_SetupInput_m71CC581139BA5A7861C3BCDABDC61F02C9C22C75(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShootingController::SetupInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_SetupInput_m71CC581139BA5A7861C3BCDABDC61F02C9C22C75 (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE81AD9B311980AE2868B06A8AE531D6EF12FA6AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isPlayerControlled)
		bool L_0 = __this->get_isPlayerControlled_6();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_inputManager_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// inputManager = InputManager.instance;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_3 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_inputManager_11(L_3);
	}

IL_0021:
	{
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_4 = __this->get_inputManager_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError("Player Shooting Controller can not find an InputManager in the scene, there needs to be one in the " +
		//     "scene for it to run");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralE81AD9B311980AE2868B06A8AE531D6EF12FA6AB, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void ShootingController::ProcessInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_ProcessInput_m7B988D36ABC61638AE083000736C64F2D73B79CE (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method)
{
	{
		// if (isPlayerControlled)
		bool L_0 = __this->get_isPlayerControlled_6();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		// if (inputManager.firePressed || inputManager.fireHeld)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_inputManager_11();
		bool L_2 = L_1->get_firePressed_9();
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_3 = __this->get_inputManager_11();
		bool L_4 = L_3->get_fireHeld_10();
		if (!L_4)
		{
			goto IL_0028;
		}
	}

IL_0022:
	{
		// Fire();
		ShootingController_Fire_m603501B97F8D6F4F760BDBF1E638FDCEF3FA0A3C(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void ShootingController::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_Fire_m603501B97F8D6F4F760BDBF1E638FDCEF3FA0A3C (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((Time.timeSinceLevelLoad - lastFired) > fireRate)
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		float L_1 = __this->get_lastFired_9();
		float L_2 = __this->get_fireRate_7();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) > ((float)L_2))))
		{
			goto IL_0056;
		}
	}
	{
		// SpawnProjectile();
		ShootingController_SpawnProjectile_m58277388A136B818517FF91FC946F55770768174(__this, /*hidden argument*/NULL);
		// if (fireEffect != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_fireEffect_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// Instantiate(fireEffect, transform.position, transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_fireEffect_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_5, L_7, L_9, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
	}

IL_004b:
	{
		// lastFired = Time.timeSinceLevelLoad;
		float L_11;
		L_11 = Time_get_timeSinceLevelLoad_m47A90DE6CB3A3180D64F0049290BC72C186FC7FB(/*hidden argument*/NULL);
		__this->set_lastFired_9(L_11);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void ShootingController::SpawnProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController_SpawnProjectile_m58277388A136B818517FF91FC946F55770768174 (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (projectilePrefab != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_projectilePrefab_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0095;
		}
	}
	{
		// GameObject projectileGameObject = Instantiate(projectilePrefab, transform.position, transform.rotation, null);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_projectilePrefab_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_2, L_4, L_6, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		V_0 = L_7;
		// Vector3 rotationEulerAngles = projectileGameObject.transform.rotation.eulerAngles;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_2), /*hidden argument*/NULL);
		V_1 = L_11;
		// rotationEulerAngles.z += Random.Range(-projectileSpread, projectileSpread);
		float* L_12 = (&V_1)->get_address_of_z_4();
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		float L_15 = __this->get_projectileSpread_8();
		float L_16 = __this->get_projectileSpread_8();
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_15)), L_16, /*hidden argument*/NULL);
		*((float*)L_13) = (float)((float)il2cpp_codegen_add((float)L_14, (float)L_17));
		// projectileGameObject.transform.rotation = Quaternion.Euler(rotationEulerAngles);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_20, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_19, L_21, /*hidden argument*/NULL);
		// if (projectileHolder != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22 = __this->get_projectileHolder_5();
		bool L_23;
		L_23 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0095;
		}
	}
	{
		// projectileGameObject.transform.SetParent(projectileHolder);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get_projectileHolder_5();
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_25, L_26, /*hidden argument*/NULL);
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Void ShootingController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootingController__ctor_m270AF0C31ABAC866712617FE286E5B85EBA7D209 (ShootingController_tE258331CE0BD71C0727F36C338EFDA1E2D5285D4 * __this, const RuntimeMethod* method)
{
	{
		// public float fireRate = 0.05f;
		__this->set_fireRate_7((0.0500000007f));
		// public float projectileSpread = 1.0f;
		__this->set_projectileSpread_8((1.0f));
		// private float lastFired = Mathf.NegativeInfinity;
		__this->set_lastFired_9((-std::numeric_limits<float>::infinity()));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TimedObjectDestroyer::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedObjectDestroyer_OnApplicationQuit_m1E0D54A8E4889AF90A307E52129B413338D1B4E9 (TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// quitting = true;
		IL2CPP_RUNTIME_CLASS_INIT(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_il2cpp_TypeInfo_var);
		((TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_StaticFields*)il2cpp_codegen_static_fields_for(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_il2cpp_TypeInfo_var))->set_quitting_7((bool)1);
		// DestroyImmediate(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TimedObjectDestroyer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedObjectDestroyer_Update_m842BDAC417DD035FC2F37E55A02A48993F78FBC3 (TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeAlive > lifetime)
		float L_0 = __this->get_timeAlive_5();
		float L_1 = __this->get_lifetime_4();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// timeAlive += Time.deltaTime;
		float L_3 = __this->get_timeAlive_5();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeAlive_5(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// }
		return;
	}
}
// System.Void TimedObjectDestroyer::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedObjectDestroyer_OnDestroy_mFF964B28F506C5BCF0665E2EBC42FD4812777FAD (TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// if (destroyChildrenOnDeath && !quitting && Application.isPlaying)
		bool L_0 = __this->get_destroyChildrenOnDeath_6();
		if (!L_0)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_il2cpp_TypeInfo_var);
		bool L_1 = ((TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_StaticFields*)il2cpp_codegen_static_fields_for(TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365_il2cpp_TypeInfo_var))->get_quitting_7();
		if (L_1)
		{
			goto IL_004f;
		}
	}
	{
		bool L_2;
		L_2 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004f;
		}
	}
	{
		// int childCount = transform.childCount;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_4;
		L_4 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_3, /*hidden argument*/NULL);
		// for (int i = childCount - 1; i >= 0; i--)
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_004b;
	}

IL_0026:
	{
		// GameObject childObject = transform.GetChild(i).gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (childObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		// DestroyImmediate(childObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// for (int i = childCount - 1; i >= 0; i--)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
	}

IL_004b:
	{
		// for (int i = childCount - 1; i >= 0; i--)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_004f:
	{
		// transform.DetachChildren();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_DetachChildren_m0800099F604AB1B59A72AC83E175B964B1EDFEF2(L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TimedObjectDestroyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedObjectDestroyer__ctor_m32208C979689A1836E1E7AF1093269437EDF30F4 (TimedObjectDestroyer_t9324016ECEF7482F7FE870D1363F9816A3611365 * __this, const RuntimeMethod* method)
{
	{
		// public float lifetime = 5.0f;
		__this->set_lifetime_4((5.0f));
		// public bool destroyChildrenOnDeath = true;
		__this->set_destroyChildrenOnDeath_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TimedObjectDestroyer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimedObjectDestroyer__cctor_mFCCC0A807A96A5EC1F9E9E5B390CC94BB981FF1A (const RuntimeMethod* method)
{
	{
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
// System.Void UIManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OnEnable_mAFE10D24F19B379487455D635E4A3C65D4B64240 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetupGameManagerUIManager();
		UIManager_SetupGameManagerUIManager_m5C3D9DDF9AEC1346DF64C818EE0CF0B70D186A8B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetupGameManagerUIManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetupGameManagerUIManager_m5C3D9DDF9AEC1346DF64C818EE0CF0B70D186A8B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManager.instance != null && GameManager.instance.uiManager == null)
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_3 = L_2->get_uiManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// GameManager.instance.uiManager = this;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		L_5->set_uiManager_5(__this);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void UIManager::SetUpUIElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetUpUIElements_mD53A419FCF2878B16D679B5D96CA5CF8EF448F37 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mCEC25F25A37DEC7CF5342569F8E64A960C38168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mC3AAF69FE2AE5FF85F3D199377D1095799148C75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UIelements = FindObjectsOfType<UIelement>().ToList();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UIelementU5BU5D_tFC60C22D58DACAF5BDBAF7E61B140C1805107583* L_0;
		L_0 = Object_FindObjectsOfType_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mC3AAF69FE2AE5FF85F3D199377D1095799148C75(/*hidden argument*/Object_FindObjectsOfType_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mC3AAF69FE2AE5FF85F3D199377D1095799148C75_RuntimeMethod_var);
		List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * L_1;
		L_1 = Enumerable_ToList_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mCEC25F25A37DEC7CF5342569F8E64A960C38168E((RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/Enumerable_ToList_TisUIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF_mCEC25F25A37DEC7CF5342569F8E64A960C38168E_RuntimeMethod_var);
		__this->set_UIelements_10(L_1);
		// }
		return;
	}
}
// System.Void UIManager::SetUpEventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetUpEventSystem_mF01886E5DC3E8A3BA7D408864B4231CE5AA2A1D4 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC30623B7A8C1856DFF2AA6A6C1B7D01F7FDFDB9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// eventSystem = FindObjectOfType<EventSystem>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801(/*hidden argument*/Object_FindObjectOfType_TisEventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_m7E9461B4BAE98D88F0E77802CAD823046812B801_RuntimeMethod_var);
		__this->set_eventSystem_11(L_0);
		// if (eventSystem == null)
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_1 = __this->get_eventSystem_11();
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogWarning("There is no event system in the scene but you are trying to use the UIManager. /n" +
		//     "All UI in Unity requires an Event System to run. /n" +
		//     "You can add one by right clicking in hierarchy then selecting UI->EventSystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteralC30623B7A8C1856DFF2AA6A6C1B7D01F7FDFDB9C, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UIManager::SetUpInputManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetUpInputManager_m25652E6EA2E65B79E55B0E91AD16FB68BDEB56B9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9024CD43578CA780788DA74EE5DD0BBA9CB7921B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// inputManager = InputManager.instance;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_2 = ((InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_StaticFields*)il2cpp_codegen_static_fields_for(InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_inputManager_12(L_2);
	}

IL_0019:
	{
		// if (inputManager == null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_3 = __this->get_inputManager_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogWarning("The UIManager can not find an Input Manager in the scene, without an Input Manager the UI can not pause");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7(_stringLiteral9024CD43578CA780788DA74EE5DD0BBA9CB7921B, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UIManager::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_TogglePause_m1FFA893B04FFDFD53FD57ABD82B6900A2D2382AF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// if (allowPause)
		bool L_0 = __this->get_allowPause_8();
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// if (isPaused)
		bool L_1 = __this->get_isPaused_9();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// SetActiveAllPages(false);
		UIManager_SetActiveAllPages_m3E007C5253E63531326CF4E3771DFB28AA27C304(__this, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		__this->set_isPaused_9((bool)0);
		// }
		return;
	}

IL_0029:
	{
		// GoToPage(pausePageIndex);
		int32_t L_2 = __this->get_pausePageIndex_7();
		UIManager_GoToPage_m12550768F317DBF8B2A3D2EC97DA96B033BA45A7(__this, L_2, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// isPaused = true;
		__this->set_isPaused_9((bool)1);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UIManager::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UpdateUI_m9076046EDAF6AD406801B952F8BE9CC84D9CE60F (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6F27EBD77F3F5F55B17254996BB754AA0AA93D27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9F5329F570D6652AD4882A0C84F4E0165FFD0A9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC9DA313E0E9DAD38F581C9B456D78123282A4BEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1F81844CF7218AE44786D3EDF9A4F0E13F49CA10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// SetUpUIElements();
		UIManager_SetUpUIElements_mD53A419FCF2878B16D679B5D96CA5CF8EF448F37(__this, /*hidden argument*/NULL);
		// foreach (UIelement uiElement in UIelements)
		List_1_t03EA177FD37956FDC8B014EA43A09851D4856DF4 * L_0 = __this->get_UIelements_10();
		Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745  L_1;
		L_1 = List_1_GetEnumerator_m1F81844CF7218AE44786D3EDF9A4F0E13F49CA10(L_0, /*hidden argument*/List_1_GetEnumerator_m1F81844CF7218AE44786D3EDF9A4F0E13F49CA10_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_0014:
		{
			// foreach (UIelement uiElement in UIelements)
			UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * L_2;
			L_2 = Enumerator_get_Current_mC9DA313E0E9DAD38F581C9B456D78123282A4BEE_inline((Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC9DA313E0E9DAD38F581C9B456D78123282A4BEE_RuntimeMethod_var);
			// uiElement.UpdateUI();
			VirtActionInvoker0::Invoke(4 /* System.Void UIelement::UpdateUI() */, L_2);
		}

IL_0020:
		{
			// foreach (UIelement uiElement in UIelements)
			bool L_3;
			L_3 = Enumerator_MoveNext_m9F5329F570D6652AD4882A0C84F4E0165FFD0A9A((Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9F5329F570D6652AD4882A0C84F4E0165FFD0A9A_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_0014;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m6F27EBD77F3F5F55B17254996BB754AA0AA93D27((Enumerator_t437966D0D5B8DA39714B554CAC0D80F1E19FF745 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m6F27EBD77F3F5F55B17254996BB754AA0AA93D27_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetUpInputManager();
		UIManager_SetUpInputManager_m25652E6EA2E65B79E55B0E91AD16FB68BDEB56B9(__this, /*hidden argument*/NULL);
		// SetUpEventSystem();
		UIManager_SetUpEventSystem_mF01886E5DC3E8A3BA7D408864B4231CE5AA2A1D4(__this, /*hidden argument*/NULL);
		// SetUpUIElements();
		UIManager_SetUpUIElements_mD53A419FCF2878B16D679B5D96CA5CF8EF448F37(__this, /*hidden argument*/NULL);
		// UpdateUI();
		UIManager_UpdateUI_m9076046EDAF6AD406801B952F8BE9CC84D9CE60F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// CheckPauseInput();
		UIManager_CheckPauseInput_mAF9C5C227C084523658D66F63F2652CCBBCDE788(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::CheckPauseInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CheckPauseInput_mAF9C5C227C084523658D66F63F2652CCBBCDE788 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inputManager != null)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_0 = __this->get_inputManager_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// if (inputManager.pausePressed)
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_2 = __this->get_inputManager_12();
		bool L_3 = L_2->get_pausePressed_11();
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// TogglePause();
		UIManager_TogglePause_m1FFA893B04FFDFD53FD57ABD82B6900A2D2382AF(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UIManager::GoToPage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GoToPage_m12550768F317DBF8B2A3D2EC97DA96B033BA45A7 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, int32_t ___pageIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m86DF089BE1978D3A4E7532CB2CCE2902AD04BC46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pageIndex < pages.Count && pages[pageIndex] != null)
		int32_t L_0 = ___pageIndex0;
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_1 = __this->get_pages_4();
		int32_t L_2;
		L_2 = List_1_get_Count_m86DF089BE1978D3A4E7532CB2CCE2902AD04BC46_inline(L_1, /*hidden argument*/List_1_get_Count_m86DF089BE1978D3A4E7532CB2CCE2902AD04BC46_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0051;
		}
	}
	{
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_3 = __this->get_pages_4();
		int32_t L_4 = ___pageIndex0;
		UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_5;
		L_5 = List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		// SetActiveAllPages(false);
		UIManager_SetActiveAllPages_m3E007C5253E63531326CF4E3771DFB28AA27C304(__this, (bool)0, /*hidden argument*/NULL);
		// pages[pageIndex].gameObject.SetActive(true);
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_7 = __this->get_pages_4();
		int32_t L_8 = ___pageIndex0;
		UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_9;
		L_9 = List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// pages[pageIndex].SetSelectedUIToDefault();
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_11 = __this->get_pages_4();
		int32_t L_12 = ___pageIndex0;
		UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_13;
		L_13 = List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mECF0E7333C014B6D151B76A3ECE66997E464DC3A_RuntimeMethod_var);
		UIPage_SetSelectedUIToDefault_mEE5F46851B7CC533227F3CAE35A4B3B4F5D31EC0(L_13, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void UIManager::GoToPageByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GoToPageByName_m444E0A0AE35C6D235426CAA9F9CE03A2672D0E26 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___pageName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m857846AD63752B9D9BE2C0EEEC0F686669E471D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mF733F57FC32460856FD46663E78EF66762D0926E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m1E4AF509B6444AD08E9D39C11D581A39D0F3360D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3CGoToPageByNameU3Eb__0_m7B1526CFB5BC9BC366CE24C2247E020E63546C1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 * V_0 = NULL;
	UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * V_1 = NULL;
	int32_t V_2 = 0;
	{
		U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 * L_0 = (U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass20_0__ctor_mC79A1F1D34720231A16BF4DC399413A7EA263333(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 * L_1 = V_0;
		String_t* L_2 = ___pageName0;
		L_1->set_pageName_0(L_2);
		// UIPage page = pages.Find(item => item.name == pageName);
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_3 = __this->get_pages_4();
		U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 * L_4 = V_0;
		Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7 * L_5 = (Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7 *)il2cpp_codegen_object_new(Predicate_1_t6B0F4C8B5207CE5F94F8DF1227F34DAC2F89D9D7_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1E4AF509B6444AD08E9D39C11D581A39D0F3360D(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass20_0_U3CGoToPageByNameU3Eb__0_m7B1526CFB5BC9BC366CE24C2247E020E63546C1D_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m1E4AF509B6444AD08E9D39C11D581A39D0F3360D_RuntimeMethod_var);
		UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_6;
		L_6 = List_1_Find_m857846AD63752B9D9BE2C0EEEC0F686669E471D6(L_3, L_5, /*hidden argument*/List_1_Find_m857846AD63752B9D9BE2C0EEEC0F686669E471D6_RuntimeMethod_var);
		V_1 = L_6;
		// int pageIndex = pages.IndexOf(page);
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_7 = __this->get_pages_4();
		UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_8 = V_1;
		int32_t L_9;
		L_9 = List_1_IndexOf_mF733F57FC32460856FD46663E78EF66762D0926E(L_7, L_8, /*hidden argument*/List_1_IndexOf_mF733F57FC32460856FD46663E78EF66762D0926E_RuntimeMethod_var);
		V_2 = L_9;
		// GoToPage(pageIndex);
		int32_t L_10 = V_2;
		UIManager_GoToPage_m12550768F317DBF8B2A3D2EC97DA96B033BA45A7(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetActiveAllPages(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetActiveAllPages_m3E007C5253E63531326CF4E3771DFB28AA27C304 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, bool ___activated0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCAB91EFF5FD71D9A6E7ABEC2ACDD2CC35C33E7DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE43F3AA97D70AEBEFC88A96691EEF84767820D6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBA1E74C79F0B0A85B038580B7298FEF1CEDD8254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m48E5600EC26AD7087E57E60F8FE3590D6530B30F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t662389D5740170895123E2081C3EF405AA533AC5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (pages != null)
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_0 = __this->get_pages_4();
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// foreach (UIPage page in pages)
		List_1_tFCFF53D233888DFF08F2A45F1501E1057DA9B9BD * L_1 = __this->get_pages_4();
		Enumerator_t662389D5740170895123E2081C3EF405AA533AC5  L_2;
		L_2 = List_1_GetEnumerator_m48E5600EC26AD7087E57E60F8FE3590D6530B30F(L_1, /*hidden argument*/List_1_GetEnumerator_m48E5600EC26AD7087E57E60F8FE3590D6530B30F_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_0016:
		{
			// foreach (UIPage page in pages)
			UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_3;
			L_3 = Enumerator_get_Current_mBA1E74C79F0B0A85B038580B7298FEF1CEDD8254_inline((Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mBA1E74C79F0B0A85B038580B7298FEF1CEDD8254_RuntimeMethod_var);
			V_1 = L_3;
			// if (page != null)
			UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_4 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_5;
			L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_0027:
		{
			// page.gameObject.SetActive(activated);
			UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_6 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
			bool L_8 = ___activated0;
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, L_8, /*hidden argument*/NULL);
		}

IL_0033:
		{
			// foreach (UIPage page in pages)
			bool L_9;
			L_9 = Enumerator_MoveNext_mE43F3AA97D70AEBEFC88A96691EEF84767820D6E((Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE43F3AA97D70AEBEFC88A96691EEF84767820D6E_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_0016;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCAB91EFF5FD71D9A6E7ABEC2ACDD2CC35C33E7DB((Enumerator_t662389D5740170895123E2081C3EF405AA533AC5 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mCAB91EFF5FD71D9A6E7ABEC2ACDD2CC35C33E7DB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// public int pausePageIndex = 1;
		__this->set_pausePageIndex_7(1);
		// public bool allowPause = true;
		__this->set_allowPause_8((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIPage::SetSelectedUIToDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPage_SetSelectedUIToDefault_mEE5F46851B7CC533227F3CAE35A4B3B4F5D31EC0 (UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (defaultSelected != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_defaultSelected_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// GameManager.instance.uiManager.eventSystem.SetSelectedGameObject(null);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_3 = L_2->get_uiManager_5();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_4 = L_3->get_eventSystem_11();
		EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55(L_4, (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL, /*hidden argument*/NULL);
		// GameManager.instance.uiManager.eventSystem.SetSelectedGameObject(defaultSelected);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = ((GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_il2cpp_TypeInfo_var))->get_instance_4();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_6 = L_5->get_uiManager_5();
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_7 = L_6->get_eventSystem_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_defaultSelected_4();
		EventSystem_SetSelectedGameObject_m1B663E3ECF102F750BAA354FBD391BA13B8CBE55(L_7, L_8, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void UIPage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPage__ctor_m8E536E496A4EAD320E2E0AAB70D9367929510FD1 (UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIelement::UpdateUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIelement_UpdateUI_m69DBCB77CC3775997BE1608B5646EFCBF4D535CC (UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIelement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIelement__ctor_mADE6221C2EFA2428D7E0D0450CB7D348BFA3D761 (UIelement_tCDCC1215DEE7AFCA254CEFA33C4C7E1A68D36CFF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InputManager/<ResetFireStart>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetFireStartU3Ed__12__ctor_m8A7FFF283B4BE689E7150649442F1590A18F0B14 (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InputManager/<ResetFireStart>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetFireStartU3Ed__12_System_IDisposable_Dispose_m5FA81CC63E8ECC17FAC4D8455F16AD5526087209 (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InputManager/<ResetFireStart>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetFireStartU3Ed__12_MoveNext_m3A11384261CCB3FEC960E92EEC167088CEBCA4C7 (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// firePressed = false;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_5 = V_1;
		L_5->set_firePressed_9((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object InputManager/<ResetFireStart>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetFireStartU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m842E165E296DC4F490D26417F1521A82387A3569 (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InputManager/<ResetFireStart>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetFireStartU3Ed__12_System_Collections_IEnumerator_Reset_m5250C374FFA872C00B352B24081BECE54527523B (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetFireStartU3Ed__12_System_Collections_IEnumerator_Reset_m5250C374FFA872C00B352B24081BECE54527523B_RuntimeMethod_var)));
	}
}
// System.Object InputManager/<ResetFireStart>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetFireStartU3Ed__12_System_Collections_IEnumerator_get_Current_m708AAC8F76C324852E3576DEA5BA585603145C96 (U3CResetFireStartU3Ed__12_t703D0AC9F6668ACA05BD17A52A1634D66CCB089C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void InputManager/<ResetPausePressed>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPausePressedU3Ed__15__ctor_m656918222CC9F3E94F062C5A50171737AA8D65FE (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InputManager/<ResetPausePressed>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPausePressedU3Ed__15_System_IDisposable_Dispose_m848B55DBB02580DCA332796175CC2779D8F4DFEF (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InputManager/<ResetPausePressed>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetPausePressedU3Ed__15_MoveNext_mCA1D030881A407F00048C9A6368F3E9DDE3A84C8 (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// pausePressed = false;
		InputManager_tA87D02E2EAE74F98ECCF2AF13C75554B63A1F89A * L_5 = V_1;
		L_5->set_pausePressed_11((bool)0);
		// }
		return (bool)0;
	}
}
// System.Object InputManager/<ResetPausePressed>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetPausePressedU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4B10F0A8762715BFEDEF77F26122C1C810F226F8 (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InputManager/<ResetPausePressed>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetPausePressedU3Ed__15_System_Collections_IEnumerator_Reset_m880373AA8B7F73CE4DCA1F79629418C804F47915 (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetPausePressedU3Ed__15_System_Collections_IEnumerator_Reset_m880373AA8B7F73CE4DCA1F79629418C804F47915_RuntimeMethod_var)));
	}
}
// System.Object InputManager/<ResetPausePressed>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetPausePressedU3Ed__15_System_Collections_IEnumerator_get_Current_m71E6E038B10C525B9A41E8A698FC736AFE1A07FA (U3CResetPausePressedU3Ed__15_tCBBC7BFF3506403D2BAAB3720DE0BA6E6BE1C6CC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UIManager/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mC79A1F1D34720231A16BF4DC399413A7EA263333 (U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UIManager/<>c__DisplayClass20_0::<GoToPageByName>b__0(UIPage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass20_0_U3CGoToPageByNameU3Eb__0_m7B1526CFB5BC9BC366CE24C2247E020E63546C1D (U3CU3Ec__DisplayClass20_0_t38A9DA3C3E987BD1E9895D07D36406EA3248CF12 * __this, UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * ___item0, const RuntimeMethod* method)
{
	{
		// UIPage page = pages.Find(item => item.name == pageName);
		UIPage_tADF49EF8B9EED1D62A11512AA91755302E988EFF * L_0 = ___item0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_pageName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Health_SetRespawnPoint_m224FAED437C49D5CD5C765284CBCDAFBF419772B_inline (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newRespawnPosition0, const RuntimeMethod* method)
{
	{
		// respawnPosition = newRespawnPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___newRespawnPosition0;
		__this->set_respawnPosition_15(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EventSystem_get_alreadySelecting_mEC3798F034DC597BFD2D0E36E072C37196F1991A_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SelectionGuard; }
		bool L_0 = __this->get_m_SelectionGuard_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * Keyboard_get_current_mA5FF0443C556DC01EE94171F720A551F21A1CD14_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Keyboard current { get; private set; }
		Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA * L_0 = ((Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA_StaticFields*)il2cpp_codegen_static_fields_for(Keyboard_t0464F1FCC073107A2BA8E090CBA1886686849BDA_il2cpp_TypeInfo_var))->get_U3CcurrentU3Ek__BackingField_41();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
