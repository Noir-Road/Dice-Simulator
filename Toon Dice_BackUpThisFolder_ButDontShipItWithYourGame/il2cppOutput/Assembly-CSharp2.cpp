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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
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
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EpicToonFX.ETFXButtonScript
struct ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4;
// EpicToonFX.ETFXEffectController
struct ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD;
// EpicToonFX.ETFXEffectControllerPooled
struct ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5;
// EpicToonFX.ETFXEffectCycler
struct ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792;
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
// EpicToonFX.ETFXProjectileScript
struct ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81;
// EpicToonFX.ETFXRotation
struct ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71;
// EpicToonFX.ETFXSceneManager
struct ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7;
// EpicToonFX.ETFXTarget
struct ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ETFXPEL.PEButtonScript
struct PEButtonScript_t353C011A88A281AA8BE478AC4BB0C0136F3CC4D5;
// ETFXPEL.ParticleEffectsLibrary
struct ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
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
// ETFXPEL.UICanvasManager
struct UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// EpicToonFX.ETFXEffectController/<EffectLoop>d__21
struct U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E;
// EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22
struct U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848;
// EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8
struct U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D;
// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92;
// EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25
struct U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848;
// EpicToonFX.ETFXTarget/<Respawn>d__7
struct U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01228D97468F93F4C08D34049F3BE2138BFA15D8;
IL2CPP_EXTERN_C String_t* _stringLiteral065D944B565954EE2AECC964EDD269408E0A52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903;
IL2CPP_EXTERN_C String_t* _stringLiteral16B50E8F5851EEBF64831B0EAFD15BD9FCC57686;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A;
IL2CPP_EXTERN_C String_t* _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC;
IL2CPP_EXTERN_C String_t* _stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162;
IL2CPP_EXTERN_C String_t* _stringLiteral2940DE8D75B2E8B88DD329CDDC03D118CF148C79;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5F1D79B12F1C52B9B1E470CFFAFFA221390695;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9A7309AEEF5B192FD019E712D2973C5AF4E319;
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
IL2CPP_EXTERN_C String_t* _stringLiteral70FFD3FFBC16F684BBA5E3442B18146FF97ADD7B;
IL2CPP_EXTERN_C String_t* _stringLiteral728A69504D84C37E3F5FD6E907557C08B78A70D9;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF7A265B2E2742BE4BF8DF078EB839FD342B9E9;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8DDB709CD0A40DF83139466BDB36786AAE75EE8F;
IL2CPP_EXTERN_C String_t* _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B;
IL2CPP_EXTERN_C String_t* _stringLiteral99F1947DEE3F9AF76C3972A4B726DBCD450824BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9D108E69F651AE4F1653BCDCAA8D2C79B865B23A;
IL2CPP_EXTERN_C String_t* _stringLiteralA48328E12C38ADB209E5965BAF23D6A254F32EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralB88FDD63C1847895319398686C42C39297B953FE;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAA90AC733B7E7E42D2C8D1D639DDE68DFECD7F;
IL2CPP_EXTERN_C String_t* _stringLiteralBB9365198526AC5F13134217FAB84165A65863E5;
IL2CPP_EXTERN_C String_t* _stringLiteralBF872ADFA6D009455788B01E0039910ABAA9AEE9;
IL2CPP_EXTERN_C String_t* _stringLiteralCE8DBC7FFF52925F8AED0C5F50AEF43ABA6C6C36;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A460B57C708AAE5B3FE032970AB4EB08FDAB9B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B46BB36C025A58C6B5C47AF145C69CC35BB955;
IL2CPP_EXTERN_C String_t* _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640;
IL2CPP_EXTERN_C String_t* _stringLiteralE720B9F5A19BBE91E81F3577B920642AEA974C49;
IL2CPP_EXTERN_C String_t* _stringLiteralE8CB362304E43210FD4A39C472D1EE313299D19D;
IL2CPP_EXTERN_C String_t* _stringLiteralEF0887D90DE9B75255B1C019432AC465E5794CEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF2A170901896DA9E535CB9AFD05D068A6DC3ED07;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81_m37B3F3FE0F4D8832EE6E3A0DA8FA20C8A9BC4E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAutoRotateU3Ed__25_System_Collections_IEnumerator_Reset_mDF6FCAAEB2F677DA04C2804601C195DA695AC4D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__21_System_Collections_IEnumerator_Reset_m5A47B65AA4B6AE12FD45AC056E584484F22D288A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__22_System_Collections_IEnumerator_Reset_mFA8693C05B1EA47260BC8C2762B5AC45BD98097A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__8_System_Collections_IEnumerator_Reset_m97F1D9CE5C7548A40C330276FA1A21BEAEBC41D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// EpicToonFX.ETFXEffectController/<EffectLoop>d__21
struct U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXEffectController/<EffectLoop>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXEffectController/<EffectLoop>d__21::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXEffectController EpicToonFX.ETFXEffectController/<EffectLoop>d__21::<>4__this
	ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* ___U3CU3E4__this_2;
	// UnityEngine.ParticleSystem EpicToonFX.ETFXEffectController/<EffectLoop>d__21::<particleSystem>5__2
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___U3CparticleSystemU3E5__2_3;
};

// EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22
struct U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXEffectControllerPooled EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::<>4__this
	ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* ___U3CU3E4__this_2;
	// UnityEngine.ParticleSystem EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::<particleSystem>5__2
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___U3CparticleSystemU3E5__2_3;
};

// EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8
struct U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXEffectCycler EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::<>4__this
	ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* ___U3CU3E4__this_2;
	// UnityEngine.GameObject EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::<instantiatedEffect>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CinstantiatedEffectU3E5__2_3;
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

// EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25
struct U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXMouseOrbit EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::<>4__this
	ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* ___U3CU3E4__this_2;
	// System.Int32 EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::<lerpSteps>5__2
	int32_t ___U3ClerpStepsU3E5__2_3;
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

// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
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

// UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 
{
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_pinvoke
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9_marshaled_com
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
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
	// EpicToonFX.ETFXProjectileScript EpicToonFX.ETFXButtonScript::projectileScript
	ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* ___projectileScript_8;
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

// EpicToonFX.ETFXEffectController
struct ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EpicToonFX.ETFXEffectController::effects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effects_4;
	// System.Int32 EpicToonFX.ETFXEffectController::effectIndex
	int32_t ___effectIndex_5;
	// System.Boolean EpicToonFX.ETFXEffectController::disableLights
	bool ___disableLights_6;
	// System.Boolean EpicToonFX.ETFXEffectController::disableSound
	bool ___disableSound_7;
	// System.Single EpicToonFX.ETFXEffectController::startDelay
	float ___startDelay_8;
	// System.Single EpicToonFX.ETFXEffectController::respawnDelay
	float ___respawnDelay_9;
	// System.Boolean EpicToonFX.ETFXEffectController::slideshowMode
	bool ___slideshowMode_10;
	// System.Boolean EpicToonFX.ETFXEffectController::autoRotation
	bool ___autoRotation_11;
	// System.Single EpicToonFX.ETFXEffectController::autoRotationSpeed
	float ___autoRotationSpeed_12;
	// UnityEngine.GameObject EpicToonFX.ETFXEffectController::currentEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentEffect_13;
	// UnityEngine.UI.Text EpicToonFX.ETFXEffectController::effectNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___effectNameText_14;
	// UnityEngine.UI.Text EpicToonFX.ETFXEffectController::effectIndexText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___effectIndexText_15;
	// EpicToonFX.ETFXMouseOrbit EpicToonFX.ETFXEffectController::etfxMouseOrbit
	ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* ___etfxMouseOrbit_16;
};

// EpicToonFX.ETFXEffectControllerPooled
struct ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EpicToonFX.ETFXEffectControllerPooled::effects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effects_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EpicToonFX.ETFXEffectControllerPooled::effectsPool
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___effectsPool_5;
	// System.Int32 EpicToonFX.ETFXEffectControllerPooled::effectIndex
	int32_t ___effectIndex_6;
	// System.Boolean EpicToonFX.ETFXEffectControllerPooled::disableLights
	bool ___disableLights_7;
	// System.Boolean EpicToonFX.ETFXEffectControllerPooled::disableSound
	bool ___disableSound_8;
	// System.Single EpicToonFX.ETFXEffectControllerPooled::startDelay
	float ___startDelay_9;
	// System.Single EpicToonFX.ETFXEffectControllerPooled::respawnDelay
	float ___respawnDelay_10;
	// System.Boolean EpicToonFX.ETFXEffectControllerPooled::slideshowMode
	bool ___slideshowMode_11;
	// System.Boolean EpicToonFX.ETFXEffectControllerPooled::autoRotation
	bool ___autoRotation_12;
	// System.Single EpicToonFX.ETFXEffectControllerPooled::autoRotationSpeed
	float ___autoRotationSpeed_13;
	// UnityEngine.GameObject EpicToonFX.ETFXEffectControllerPooled::currentEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentEffect_14;
	// UnityEngine.UI.Text EpicToonFX.ETFXEffectControllerPooled::effectNameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___effectNameText_15;
	// UnityEngine.UI.Text EpicToonFX.ETFXEffectControllerPooled::effectIndexText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___effectIndexText_16;
	// EpicToonFX.ETFXMouseOrbit EpicToonFX.ETFXEffectControllerPooled::etfxMouseOrbit
	ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* ___etfxMouseOrbit_17;
};

// EpicToonFX.ETFXEffectCycler
struct ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EpicToonFX.ETFXEffectCycler::listOfEffects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___listOfEffects_4;
	// System.Int32 EpicToonFX.ETFXEffectCycler::effectIndex
	int32_t ___effectIndex_5;
	// System.Single EpicToonFX.ETFXEffectCycler::loopLength
	float ___loopLength_6;
	// System.Single EpicToonFX.ETFXEffectCycler::startDelay
	float ___startDelay_7;
	// System.Boolean EpicToonFX.ETFXEffectCycler::disableLights
	bool ___disableLights_8;
	// System.Boolean EpicToonFX.ETFXEffectCycler::disableSound
	bool ___disableSound_9;
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
	// System.Boolean EpicToonFX.ETFXLoopScript::disableLights
	bool ___disableLights_6;
	// System.Boolean EpicToonFX.ETFXLoopScript::disableSound
	bool ___disableSound_7;
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
	// System.Single EpicToonFX.ETFXMouseOrbit::maxVelocityX
	float ___maxVelocityX_16;
	// System.Single EpicToonFX.ETFXMouseOrbit::velocityY
	float ___velocityY_17;
	// System.Single EpicToonFX.ETFXMouseOrbit::autoRotationSmoothing
	float ___autoRotationSmoothing_18;
	// System.Boolean EpicToonFX.ETFXMouseOrbit::isAutoRotating
	bool ___isAutoRotating_19;
	// EpicToonFX.ETFXEffectController EpicToonFX.ETFXMouseOrbit::etfxEffectController
	ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* ___etfxEffectController_20;
	// EpicToonFX.ETFXEffectControllerPooled EpicToonFX.ETFXMouseOrbit::etfxEffectControllerPooled
	ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* ___etfxEffectControllerPooled_21;
};

// EpicToonFX.ETFXPitchRandomizer
struct ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EpicToonFX.ETFXPitchRandomizer::randomPercent
	float ___randomPercent_4;
};

// EpicToonFX.ETFXProjectileScript
struct ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXProjectileScript::impactParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactParticle_4;
	// UnityEngine.GameObject EpicToonFX.ETFXProjectileScript::projectileParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectileParticle_5;
	// UnityEngine.GameObject EpicToonFX.ETFXProjectileScript::muzzleParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muzzleParticle_6;
	// System.Single EpicToonFX.ETFXProjectileScript::colliderRadius
	float ___colliderRadius_7;
	// System.Single EpicToonFX.ETFXProjectileScript::collideOffset
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

// EpicToonFX.ETFXSceneManager
struct ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean EpicToonFX.ETFXSceneManager::GUIHide
	bool ___GUIHide_4;
	// System.Boolean EpicToonFX.ETFXSceneManager::GUIHide2
	bool ___GUIHide2_5;
	// System.Boolean EpicToonFX.ETFXSceneManager::GUIHide3
	bool ___GUIHide3_6;
	// System.Boolean EpicToonFX.ETFXSceneManager::GUIHide4
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

// ETFXPEL.PEButtonScript
struct PEButtonScript_t353C011A88A281AA8BE478AC4BB0C0136F3CC4D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button ETFXPEL.PEButtonScript::myButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___myButton_4;
	// ETFXPEL.ButtonTypes ETFXPEL.PEButtonScript::ButtonType
	int32_t ___ButtonType_5;
};

// ETFXPEL.ParticleEffectsLibrary
struct ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ETFXPEL.ParticleEffectsLibrary::TotalEffects
	int32_t ___TotalEffects_5;
	// System.Int32 ETFXPEL.ParticleEffectsLibrary::CurrentParticleEffectIndex
	int32_t ___CurrentParticleEffectIndex_6;
	// System.Int32 ETFXPEL.ParticleEffectsLibrary::CurrentParticleEffectNum
	int32_t ___CurrentParticleEffectNum_7;
	// UnityEngine.Vector3[] ETFXPEL.ParticleEffectsLibrary::ParticleEffectSpawnOffsets
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___ParticleEffectSpawnOffsets_8;
	// System.Single[] ETFXPEL.ParticleEffectsLibrary::ParticleEffectLifetimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ParticleEffectLifetimes_9;
	// UnityEngine.GameObject[] ETFXPEL.ParticleEffectsLibrary::ParticleEffectPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ParticleEffectPrefabs_10;
	// System.String ETFXPEL.ParticleEffectsLibrary::effectNameString
	String_t* ___effectNameString_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ETFXPEL.ParticleEffectsLibrary::currentActivePEList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___currentActivePEList_12;
	// UnityEngine.Vector3 ETFXPEL.ParticleEffectsLibrary::spawnPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPosition_13;
};

struct ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_StaticFields
{
	// ETFXPEL.ParticleEffectsLibrary ETFXPEL.ParticleEffectsLibrary::GlobalAccess
	ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* ___GlobalAccess_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ETFXPEL.UICanvasManager
struct UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ETFXPEL.UICanvasManager::MouseOverButton
	bool ___MouseOverButton_5;
	// UnityEngine.UI.Text ETFXPEL.UICanvasManager::PENameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PENameText_6;
	// UnityEngine.UI.Text ETFXPEL.UICanvasManager::ToolTipText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ToolTipText_7;
	// UnityEngine.RaycastHit ETFXPEL.UICanvasManager::rayHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___rayHit_8;
};

struct UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields
{
	// ETFXPEL.UICanvasManager ETFXPEL.UICanvasManager::GlobalAccess
	UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* ___GlobalAccess_4;
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ETFXPEL.UICanvasManager::UpdateToolTip(ETFXPEL.ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UpdateToolTip_m5FA75C40341C6839C6DE6EE590A9265EB2DE35CB (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, int32_t ___toolTipType0, const RuntimeMethod* method) ;
// System.Void ETFXPEL.UICanvasManager::ClearToolTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_ClearToolTip_m5363DC2F0526500464F02927C37D1A1D8E547A4B (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) ;
// System.Void ETFXPEL.UICanvasManager::UIButtonClick(ETFXPEL.ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UIButtonClick_m60669B5077B901550A3982A28905E11FCE8AEC64 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, int32_t ___buttonTypeClicked0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String ETFXPEL.ParticleEffectsLibrary::GetCurrentPENameString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParticleEffectsLibrary_GetCurrentPENameString_m2C54ED99C43404C093580B7B0965DEED0EA45290 (ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void ETFXPEL.UICanvasManager::SpawnCurrentParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SpawnCurrentParticleEffect_m42C07BD64B4619F4B12DE88DC5C95159A4B7DAC1 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void ETFXPEL.UICanvasManager::SelectPreviousPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectPreviousPE_m8B1EE4319475F6F7C0A132679E29DA99A72F4A10 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) ;
// System.Void ETFXPEL.UICanvasManager::SelectNextPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectNextPE_m0507EA5CC48969D139078DA56B2E0126BCB58BA5 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) ;
// System.Void ETFXPEL.ParticleEffectsLibrary::PreviousParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_PreviousParticleEffect_m52068756BAFDE91517BF87D939D4CCCAC228E33F (ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* __this, const RuntimeMethod* method) ;
// System.Void ETFXPEL.ParticleEffectsLibrary::NextParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_NextParticleEffect_mFD520C0BAC83764576B887B5076C3B6AF2B76419 (ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void ETFXPEL.ParticleEffectsLibrary::SpawnParticleEffect(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_SpawnParticleEffect_m39A48979804146B028054E0FA11D6A84A0B5BAF0 (ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionInWorldToSpawn0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXFireProjectile>()
inline ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXProjectileScript>()
inline ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* GameObject_GetComponent_TisETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81_m37B3F3FE0F4D8832EE6E3A0DA8FA20C8A9BC4E16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<EpicToonFX.ETFXMouseOrbit>()
inline ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectController::NextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_NextEffect_m43779C2ED50BC9B33BB48922FBF15C1CACE6B2FA (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectController::PreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_PreviousEffect_mBF4EBA5D06B9A60B569F314E2EAF4D6827C0CF8D (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXMouseOrbit::SetAutoRotationSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ETFXMouseOrbit_SetAutoRotationSpeed_mC6CC8747EFADE978441F25627473F19BC7ECA97B_inline (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, float ___rotationSpeed0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXMouseOrbit::InitializeAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_InitializeAutoRotation_m1867343A620DCDFDFBE0961227BC1D5BBCA7ACD9 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EpicToonFX.ETFXEffectController::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXEffectController_EffectLoop_m7C0AD8C1DD593BB5575F4400DFFA6B61EAC7F97C (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectController::CleanCurrentEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_CleanCurrentEffect_mC32758D2143E2C36B0E5A76BBE7EA265161CAEA0 (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectController/<EffectLoop>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__21__ctor_m4A8FE5142E0010734F3ADFE233AC068FEA4B353B (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.ParticleSystem/MainModule::get_duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8 (MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::NextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_NextEffect_m284A3A9BEC1671D33853EDFA415537D4C0CEC00D (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectControllerPooled::PreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_PreviousEffect_m25F20C51B2BA95FF86CCFA9B38153962B9929E7C (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EpicToonFX.ETFXEffectControllerPooled::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXEffectControllerPooled_EffectLoop_mC481367DD471ADC6D7690C74CD9EA389CFB05FBD (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectControllerPooled::CleanCurrentEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_CleanCurrentEffect_m619E627064A1962963DFEB7665688A03FD1DBAA1 (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__22__ctor_m1C217E989238A9F53930FE5F120025336B9B9D05 (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__8__ctor_mA737141CA7D2E9642A63CA0A68977CA392196260 (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXEffectCycler::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectCycler_PlayEffect_mB357AB2D682B0CB02E0AA1D4C26EEFC915909D27 (ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXMouseOrbit::StopAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_StopAutoRotation_mF7D5A31D86C129A8D9960A46AF1B59BE6269DF5E (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m4F2A0744FE106002EE26D12B6137FC21C019B932 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EpicToonFX.ETFXMouseOrbit::AutoRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXMouseOrbit_AutoRotate_mE19FCC7B8475670EB1B16AABE350A591AB8E30EC (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoRotateU3Ed__25__ctor_mCE86510ECAD3AD0F6D6F9AA861706865E2C3224C (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7 (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
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
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mD53E280903384004D4304150552D50DD3F8C1F58 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
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
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget::SpawnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
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
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ETFXPEL.PEButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_Start_m9A45BC44A625CA18C0E5C37532410A84FE0FF063 (PEButtonScript_t353C011A88A281AA8BE478AC4BB0C0136F3CC4D5* __this, const RuntimeMethod* method) 
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
// System.Void ETFXPEL.PEButtonScript::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnPointerEnter_m9893C8D45C8C9D2B1AC813AC8272B6F598A79A51 (PEButtonScript_t353C011A88A281AA8BE478AC4BB0C0136F3CC4D5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.MouseOverButton = true;
		UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* L_0 = ((UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		L_0->___MouseOverButton_5 = (bool)1;
		// UICanvasManager.GlobalAccess.UpdateToolTip (ButtonType);
		UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* L_1 = ((UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		int32_t L_2 = __this->___ButtonType_5;
		NullCheck(L_1);
		UICanvasManager_UpdateToolTip_m5FA75C40341C6839C6DE6EE590A9265EB2DE35CB(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ETFXPEL.PEButtonScript::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnPointerExit_m6C82731D648D6B59B89CB7B4E6A667827C4FCF8F (PEButtonScript_t353C011A88A281AA8BE478AC4BB0C0136F3CC4D5* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.MouseOverButton = false;
		UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* L_0 = ((UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		L_0->___MouseOverButton_5 = (bool)0;
		// UICanvasManager.GlobalAccess.ClearToolTip ();
		UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* L_1 = ((UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_1);
		UICanvasManager_ClearToolTip_m5363DC2F0526500464F02927C37D1A1D8E547A4B(L_1, NULL);
		// }
		return;
	}
}
// System.Void ETFXPEL.PEButtonScript::OnButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnButtonClicked_mA368038810F36BA6CC63910BD1085A498EDC2803 (PEButtonScript_t353C011A88A281AA8BE478AC4BB0C0136F3CC4D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.UIButtonClick(ButtonType);
		UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* L_0 = ((UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		int32_t L_1 = __this->___ButtonType_5;
		NullCheck(L_0);
		UICanvasManager_UIButtonClick_m60669B5077B901550A3982A28905E11FCE8AEC64(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ETFXPEL.PEButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript__ctor_mC923CEADC35E7AB26969FFE7BBB68B067F7D1D3F (PEButtonScript_t353C011A88A281AA8BE478AC4BB0C0136F3CC4D5* __this, const RuntimeMethod* method) 
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
// System.Void ETFXPEL.UICanvasManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Awake_mBF2C12A858F346218287E64BBFDD6100E1D7ADC3 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalAccess = this;
		((UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var))->___GlobalAccess_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE_il2cpp_TypeInfo_var))->___GlobalAccess_4), (void*)__this);
		// }
		return;
	}
}
// System.Void ETFXPEL.UICanvasManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Start_m66FF57DA38B6220DE17EC7FAF0BA1765FB0890E5 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var);
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
		ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* L_3 = ((ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ParticleEffectsLibrary_GetCurrentPENameString_m2C54ED99C43404C093580B7B0965DEED0EA45290(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void ETFXPEL.UICanvasManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Update_m9BBD3F69055F0F97713E4D2BC219D44AE724F0A3 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
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
		UICanvasManager_SpawnCurrentParticleEffect_m42C07BD64B4619F4B12DE88DC5C95159A4B7DAC1(__this, NULL);
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
		UICanvasManager_SelectPreviousPE_m8B1EE4319475F6F7C0A132679E29DA99A72F4A10(__this, NULL);
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
		UICanvasManager_SelectNextPE_m0507EA5CC48969D139078DA56B2E0126BCB58BA5(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ETFXPEL.UICanvasManager::UpdateToolTip(ETFXPEL.ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UpdateToolTip_m5FA75C40341C6839C6DE6EE590A9265EB2DE35CB (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, int32_t ___toolTipType0, const RuntimeMethod* method) 
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
// System.Void ETFXPEL.UICanvasManager::ClearToolTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_ClearToolTip_m5363DC2F0526500464F02927C37D1A1D8E547A4B (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
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
// System.Void ETFXPEL.UICanvasManager::SelectPreviousPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectPreviousPE_m8B1EE4319475F6F7C0A132679E29DA99A72F4A10 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.PreviousParticleEffect();
		ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* L_0 = ((ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		ParticleEffectsLibrary_PreviousParticleEffect_m52068756BAFDE91517BF87D939D4CCCAC228E33F(L_0, NULL);
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
		ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* L_4 = ((ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ParticleEffectsLibrary_GetCurrentPENameString_m2C54ED99C43404C093580B7B0965DEED0EA45290(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ETFXPEL.UICanvasManager::SelectNextPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectNextPE_m0507EA5CC48969D139078DA56B2E0126BCB58BA5 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.NextParticleEffect();
		ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* L_0 = ((ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_0);
		ParticleEffectsLibrary_NextParticleEffect_mFD520C0BAC83764576B887B5076C3B6AF2B76419(L_0, NULL);
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
		ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* L_4 = ((ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = ParticleEffectsLibrary_GetCurrentPENameString_m2C54ED99C43404C093580B7B0965DEED0EA45290(L_4, NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void ETFXPEL.UICanvasManager::SpawnCurrentParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SpawnCurrentParticleEffect_m42C07BD64B4619F4B12DE88DC5C95159A4B7DAC1 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var);
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
		ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73* L_5 = ((ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_tFF4A6911F79AAE46E17D9B09E75386E9F679EC73_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___rayHit_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_6, NULL);
		NullCheck(L_5);
		ParticleEffectsLibrary_SpawnParticleEffect_m39A48979804146B028054E0FA11D6A84A0B5BAF0(L_5, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void ETFXPEL.UICanvasManager::UIButtonClick(ETFXPEL.ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UIButtonClick_m60669B5077B901550A3982A28905E11FCE8AEC64 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, int32_t ___buttonTypeClicked0, const RuntimeMethod* method) 
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
		UICanvasManager_SelectPreviousPE_m8B1EE4319475F6F7C0A132679E29DA99A72F4A10(__this, NULL);
		// break;
		return;
	}

IL_0010:
	{
		// SelectNextPE();
		UICanvasManager_SelectNextPE_m0507EA5CC48969D139078DA56B2E0126BCB58BA5(__this, NULL);
		// }
		return;
	}
}
// System.Void ETFXPEL.UICanvasManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager__ctor_m6F54949A88742CCEEB885208F227B2DCFC964157 (UICanvasManager_t72320474E84443E93694ED85B1637183FE3087AE* __this, const RuntimeMethod* method) 
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81_m37B3F3FE0F4D8832EE6E3A0DA8FA20C8A9BC4E16_RuntimeMethod_var);
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
		ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* L_6;
		L_6 = GameObject_GetComponent_TisETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81_m37B3F3FE0F4D8832EE6E3A0DA8FA20C8A9BC4E16(L_5, GameObject_GetComponent_TisETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81_m37B3F3FE0F4D8832EE6E3A0DA8FA20C8A9BC4E16_RuntimeMethod_var);
		__this->___projectileScript_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileScript_8), (void*)L_6);
		// projectileParticleName = projectileScript.projectileParticle.name;    // Assign the name of the currently selected projectile to projectileParticleName
		ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* L_7 = __this->___projectileScript_8;
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
// System.Void EpicToonFX.ETFXEffectController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_Awake_m2B9DB66A06F15D853D513FE34D3CF70CE22BF1CA (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral728A69504D84C37E3F5FD6E907557C08B78A70D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8CB362304E43210FD4A39C472D1EE313299D19D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// effectNameText = GameObject.Find("EffectName").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral728A69504D84C37E3F5FD6E907557C08B78A70D9, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___effectNameText_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameText_14), (void*)L_1);
		// effectIndexText = GameObject.Find("EffectIndex").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE8CB362304E43210FD4A39C472D1EE313299D19D, NULL);
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_2, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___effectIndexText_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectIndexText_15), (void*)L_3);
		// etfxMouseOrbit = Camera.main.GetComponent<ETFXMouseOrbit>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_4);
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_5;
		L_5 = Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B(L_4, Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B_RuntimeMethod_var);
		__this->___etfxMouseOrbit_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___etfxMouseOrbit_16), (void*)L_5);
		// etfxMouseOrbit.etfxEffectController = this;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_6 = __this->___etfxMouseOrbit_16;
		NullCheck(L_6);
		L_6->___etfxEffectController_20 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___etfxEffectController_20), (void*)__this);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_Start_m774296322C89EF3797D3A1546301A3B0A645E339 (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB88FDD63C1847895319398686C42C39297B953FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// etfxMouseOrbit = Camera.main.GetComponent<ETFXMouseOrbit>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_1;
		L_1 = Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B(L_0, Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B_RuntimeMethod_var);
		__this->___etfxMouseOrbit_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___etfxMouseOrbit_16), (void*)L_1);
		// etfxMouseOrbit.etfxEffectController = this;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_2 = __this->___etfxMouseOrbit_16;
		NullCheck(L_2);
		L_2->___etfxEffectController_20 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___etfxEffectController_20), (void*)__this);
		// Invoke("InitializeLoop", startDelay);
		float L_3 = __this->___startDelay_8;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB88FDD63C1847895319398686C42C39297B953FE, L_3, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_Update_m6D22890A299880D4613EA942E22D703F142B760C (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		// NextEffect();
		ETFXEffectController_NextEffect_m43779C2ED50BC9B33BB48922FBF15C1CACE6B2FA(__this, NULL);
	}

IL_001b:
	{
		// if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		// PreviousEffect();
		ETFXEffectController_PreviousEffect_mBF4EBA5D06B9A60B569F314E2EAF4D6827C0CF8D(__this, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_FixedUpdate_m1AB5314E11CB5D673FE25E689CDF62C30CDDC737 (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	{
		// if (autoRotation)
		bool L_0 = __this->___autoRotation_11;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// etfxMouseOrbit.SetAutoRotationSpeed(autoRotationSpeed);
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_1 = __this->___etfxMouseOrbit_16;
		float L_2 = __this->___autoRotationSpeed_12;
		NullCheck(L_1);
		ETFXMouseOrbit_SetAutoRotationSpeed_mC6CC8747EFADE978441F25627473F19BC7ECA97B_inline(L_1, L_2, NULL);
		// if (!etfxMouseOrbit.isAutoRotating)
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_3 = __this->___etfxMouseOrbit_16;
		NullCheck(L_3);
		bool L_4 = L_3->___isAutoRotating_19;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		// etfxMouseOrbit.InitializeAutoRotation();
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_5 = __this->___etfxMouseOrbit_16;
		NullCheck(L_5);
		ETFXMouseOrbit_InitializeAutoRotation_m1867343A620DCDFDFBE0961227BC1D5BBCA7ACD9(L_5, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController::InitializeLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_InitializeLoop_m0357C6D78CE67DF93E5559F28DC3E83B4D764202 (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(EffectLoop());
		RuntimeObject* L_0;
		L_0 = ETFXEffectController_EffectLoop_m7C0AD8C1DD593BB5575F4400DFFA6B61EAC7F97C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController::NextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_NextEffect_m43779C2ED50BC9B33BB48922FBF15C1CACE6B2FA (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	{
		// if (effectIndex < effects.Length - 1)
		int32_t L_0 = __this->___effectIndex_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___effects_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0022;
		}
	}
	{
		// effectIndex++;
		int32_t L_2 = __this->___effectIndex_5;
		__this->___effectIndex_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0029;
	}

IL_0022:
	{
		// effectIndex = 0;
		__this->___effectIndex_5 = 0;
	}

IL_0029:
	{
		// CleanCurrentEffect();
		ETFXEffectController_CleanCurrentEffect_mC32758D2143E2C36B0E5A76BBE7EA265161CAEA0(__this, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController::PreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_PreviousEffect_mBF4EBA5D06B9A60B569F314E2EAF4D6827C0CF8D (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	{
		// if (effectIndex > 0)
		int32_t L_0 = __this->___effectIndex_5;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// effectIndex--;
		int32_t L_1 = __this->___effectIndex_5;
		__this->___effectIndex_5 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0029;
	}

IL_0019:
	{
		// effectIndex = effects.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___effects_4;
		NullCheck(L_2);
		__this->___effectIndex_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0029:
	{
		// CleanCurrentEffect();
		ETFXEffectController_CleanCurrentEffect_mC32758D2143E2C36B0E5A76BBE7EA265161CAEA0(__this, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController::CleanCurrentEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController_CleanCurrentEffect_mC32758D2143E2C36B0E5A76BBE7EA265161CAEA0 (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// if (currentEffect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentEffect_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(currentEffect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___currentEffect_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_001f:
	{
		// StartCoroutine(EffectLoop());
		RuntimeObject* L_3;
		L_3 = ETFXEffectController_EffectLoop_m7C0AD8C1DD593BB5575F4400DFFA6B61EAC7F97C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXEffectController::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXEffectController_EffectLoop_m7C0AD8C1DD593BB5575F4400DFFA6B61EAC7F97C (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* L_0 = (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E*)il2cpp_codegen_object_new(U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEffectLoopU3Ed__21__ctor_m4A8FE5142E0010734F3ADFE233AC068FEA4B353B(L_0, 0, NULL);
		U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXEffectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectController__ctor_mA1011080216B1AEF9EB59F61535BAA788DFC5D45 (ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* __this, const RuntimeMethod* method) 
{
	{
		// public bool disableLights = true;
		__this->___disableLights_6 = (bool)1;
		// public bool disableSound = true;
		__this->___disableSound_7 = (bool)1;
		// public float startDelay = 0.2f;
		__this->___startDelay_8 = (0.200000003f);
		// public float respawnDelay = 0.5f;
		__this->___respawnDelay_9 = (0.5f);
		// public float autoRotationSpeed = 0.1f;
		__this->___autoRotationSpeed_12 = (0.100000001f);
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
// System.Void EpicToonFX.ETFXEffectController/<EffectLoop>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__21__ctor_m4A8FE5142E0010734F3ADFE233AC068FEA4B353B (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectController/<EffectLoop>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__21_System_IDisposable_Dispose_mB0A74A6B26A7B6FBF2593DCE7C9ADB095E28873B (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXEffectController/<EffectLoop>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEffectLoopU3Ed__21_MoveNext_mE00E06C0190AE41A29771D8D1B7CE2D9B65481DC (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	int32_t V_3 = 0;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0122;
			}
			case 2:
			{
				goto IL_0191;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject effect = Instantiate(effects[effectIndex], transform.position, Quaternion.identity);
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_3 = V_1;
		NullCheck(L_3);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = L_3->___effects_4;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___effectIndex_5;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_13;
		// currentEffect = effect;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_14 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
		NullCheck(L_14);
		L_14->___currentEffect_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___currentEffect_13), (void*)L_15);
		// if (disableLights && effect.GetComponent<Light>())
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_16 = V_1;
		NullCheck(L_16);
		bool L_17 = L_16->___disableLights_6;
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_2;
		NullCheck(L_18);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19;
		L_19 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_18, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_19, NULL);
		if (!L_20)
		{
			goto IL_0074;
		}
	}
	{
		// effect.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		NullCheck(L_21);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_22;
		L_22 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_21, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_22);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_22, (bool)0, NULL);
	}

IL_0074:
	{
		// if (disableSound && effect.GetComponent<AudioSource>())
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_23 = V_1;
		NullCheck(L_23);
		bool L_24 = L_23->___disableSound_7;
		if (!L_24)
		{
			goto IL_0095;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_2;
		NullCheck(L_25);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26;
		L_26 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_25, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_26, NULL);
		if (!L_27)
		{
			goto IL_0095;
		}
	}
	{
		// effect.GetComponent<AudioSource>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		NullCheck(L_28);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_29;
		L_29 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_28, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_29);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_29, (bool)0, NULL);
	}

IL_0095:
	{
		// effectNameText.text = effects[effectIndex].name;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_30 = V_1;
		NullCheck(L_30);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = L_30->___effectNameText_14;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_32 = V_1;
		NullCheck(L_32);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_33 = L_32->___effects_4;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = L_34->___effectIndex_5;
		NullCheck(L_33);
		int32_t L_36 = L_35;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38;
		L_38 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_37, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_38);
		// effectIndexText.text = (effectIndex + 1) + " of " + effects.Length;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_39 = V_1;
		NullCheck(L_39);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = L_39->___effectIndexText_15;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->___effectIndex_5;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		String_t* L_43;
		L_43 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_44 = V_1;
		NullCheck(L_44);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_45 = L_44->___effects_4;
		NullCheck(L_45);
		V_3 = ((int32_t)(((RuntimeArray*)L_45)->max_length));
		String_t* L_46;
		L_46 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_47;
		L_47 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_43, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640, L_46, NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_47);
		// ParticleSystem particleSystem = effect.GetComponent<ParticleSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_2;
		NullCheck(L_48);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_49;
		L_49 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_48, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		__this->___U3CparticleSystemU3E5__2_3 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparticleSystemU3E5__2_3), (void*)L_49);
	}

IL_00f3:
	{
		// yield return new WaitForSeconds(particleSystem.main.duration + respawnDelay);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_50 = __this->___U3CparticleSystemU3E5__2_3;
		NullCheck(L_50);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_51;
		L_51 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_50, NULL);
		V_4 = L_51;
		float L_52;
		L_52 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_4), NULL);
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_53 = V_1;
		NullCheck(L_53);
		float L_54 = L_53->___respawnDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_55 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_55, ((float)il2cpp_codegen_add(L_52, L_54)), NULL);
		__this->___U3CU3E2__current_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_55);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0122:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!slideshowMode)
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_56 = V_1;
		NullCheck(L_56);
		bool L_57 = L_56->___slideshowMode_10;
		if (L_57)
		{
			goto IL_0161;
		}
	}
	{
		// if (!particleSystem.main.loop)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_58 = __this->___U3CparticleSystemU3E5__2_3;
		NullCheck(L_58);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_59;
		L_59 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_58, NULL);
		V_4 = L_59;
		bool L_60;
		L_60 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_4), NULL);
		if (L_60)
		{
			goto IL_00f3;
		}
	}
	{
		// currentEffect.SetActive(false);
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_61 = V_1;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___currentEffect_13;
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// currentEffect.SetActive(true);
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_63 = V_1;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = L_63->___currentEffect_13;
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)1, NULL);
		goto IL_00f3;
	}

IL_0161:
	{
		// if (particleSystem.main.loop)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_65 = __this->___U3CparticleSystemU3E5__2_3;
		NullCheck(L_65);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_66;
		L_66 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_65, NULL);
		V_4 = L_66;
		bool L_67;
		L_67 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_4), NULL);
		if (!L_67)
		{
			goto IL_0198;
		}
	}
	{
		// yield return new WaitForSeconds(respawnDelay);
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_68 = V_1;
		NullCheck(L_68);
		float L_69 = L_68->___respawnDelay_9;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_70 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_70, L_69, NULL);
		__this->___U3CU3E2__current_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_70);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0191:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0198:
	{
		// NextEffect();
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_71 = V_1;
		NullCheck(L_71);
		ETFXEffectController_NextEffect_m43779C2ED50BC9B33BB48922FBF15C1CACE6B2FA(L_71, NULL);
		// while (true)
		goto IL_00f3;
	}
}
// System.Object EpicToonFX.ETFXEffectController/<EffectLoop>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m73A6F5820F11B0F4AB75A838E9FD62703BF07FEF (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXEffectController/<EffectLoop>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__21_System_Collections_IEnumerator_Reset_m5A47B65AA4B6AE12FD45AC056E584484F22D288A (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEffectLoopU3Ed__21_System_Collections_IEnumerator_Reset_m5A47B65AA4B6AE12FD45AC056E584484F22D288A_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXEffectController/<EffectLoop>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__21_System_Collections_IEnumerator_get_Current_m91946168DDAFB9202D4F16B6AD171FDCA4921C75 (U3CEffectLoopU3Ed__21_t3961A1D927ADAD8F7437A4ED59531F990B33C84E* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXEffectControllerPooled::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_Awake_mF85A88E5A739C9846356C70553BEE23E14AF8C97 (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral728A69504D84C37E3F5FD6E907557C08B78A70D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8CB362304E43210FD4A39C472D1EE313299D19D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// effectNameText = GameObject.Find("EffectName").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral728A69504D84C37E3F5FD6E907557C08B78A70D9, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___effectNameText_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameText_15), (void*)L_1);
		// effectIndexText = GameObject.Find("EffectIndex").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE8CB362304E43210FD4A39C472D1EE313299D19D, NULL);
		NullCheck(L_2);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3;
		L_3 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_2, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___effectIndexText_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectIndexText_16), (void*)L_3);
		// etfxMouseOrbit = Camera.main.GetComponent<ETFXMouseOrbit>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_4);
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_5;
		L_5 = Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B(L_4, Component_GetComponent_TisETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0_mEA19EF9D291552639220228C7248A676C1FAA54B_RuntimeMethod_var);
		__this->___etfxMouseOrbit_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___etfxMouseOrbit_17), (void*)L_5);
		// etfxMouseOrbit.etfxEffectControllerPooled = this;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_6 = __this->___etfxMouseOrbit_17;
		NullCheck(L_6);
		L_6->___etfxEffectControllerPooled_21 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___etfxEffectControllerPooled_21), (void*)__this);
		// effectsPool = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_7, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___effectsPool_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectsPool_5), (void*)L_7);
		// for (int i = 0; i < effects.Length; i++)
		V_0 = 0;
		goto IL_009b;
	}

IL_0055:
	{
		// GameObject effect = Instantiate(effects[i], transform.position, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___effects_4;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_11, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_15;
		// effect.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_17, L_18, NULL);
		// effectsPool.Add(effect);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___effectsPool_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_19);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_19, L_20, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// effect.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// for (int i = 0; i < effects.Length; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_009b:
	{
		// for (int i = 0; i < effects.Length; i++)
		int32_t L_23 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_24 = __this->___effects_4;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0055;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_Start_mD3EDFDDF7B60C82F7CA9183542F6E5114F5D53BB (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB88FDD63C1847895319398686C42C39297B953FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("InitializeLoop", startDelay);
		float L_0 = __this->___startDelay_9;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB88FDD63C1847895319398686C42C39297B953FE, L_0, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_Update_m49A236CA8C0D43647543EED0518859592BB89CAC (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0015:
	{
		// NextEffect();
		ETFXEffectControllerPooled_NextEffect_m284A3A9BEC1671D33853EDFA415537D4C0CEC00D(__this, NULL);
	}

IL_001b:
	{
		// if (Input.GetKeyDown(KeyCode.A) || Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		// PreviousEffect();
		ETFXEffectControllerPooled_PreviousEffect_m25F20C51B2BA95FF86CCFA9B38153962B9929E7C(__this, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_FixedUpdate_mBF11DD7A273EF79DFFDC653B653FC787A57DA147 (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	{
		// if (autoRotation)
		bool L_0 = __this->___autoRotation_12;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		// etfxMouseOrbit.SetAutoRotationSpeed(autoRotationSpeed);
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_1 = __this->___etfxMouseOrbit_17;
		float L_2 = __this->___autoRotationSpeed_13;
		NullCheck(L_1);
		ETFXMouseOrbit_SetAutoRotationSpeed_mC6CC8747EFADE978441F25627473F19BC7ECA97B_inline(L_1, L_2, NULL);
		// if (!etfxMouseOrbit.isAutoRotating)
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_3 = __this->___etfxMouseOrbit_17;
		NullCheck(L_3);
		bool L_4 = L_3->___isAutoRotating_19;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		// etfxMouseOrbit.InitializeAutoRotation();
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_5 = __this->___etfxMouseOrbit_17;
		NullCheck(L_5);
		ETFXMouseOrbit_InitializeAutoRotation_m1867343A620DCDFDFBE0961227BC1D5BBCA7ACD9(L_5, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::InitializeLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_InitializeLoop_mFF25CF0DFD2850B25A28564903E5825129504A1C (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(EffectLoop());
		RuntimeObject* L_0;
		L_0 = ETFXEffectControllerPooled_EffectLoop_mC481367DD471ADC6D7690C74CD9EA389CFB05FBD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::NextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_NextEffect_m284A3A9BEC1671D33853EDFA415537D4C0CEC00D (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	{
		// if (effectIndex < effects.Length - 1)
		int32_t L_0 = __this->___effectIndex_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___effects_4;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0022;
		}
	}
	{
		// effectIndex++;
		int32_t L_2 = __this->___effectIndex_6;
		__this->___effectIndex_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0029;
	}

IL_0022:
	{
		// effectIndex = 0;
		__this->___effectIndex_6 = 0;
	}

IL_0029:
	{
		// CleanCurrentEffect();
		ETFXEffectControllerPooled_CleanCurrentEffect_m619E627064A1962963DFEB7665688A03FD1DBAA1(__this, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::PreviousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_PreviousEffect_m25F20C51B2BA95FF86CCFA9B38153962B9929E7C (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	{
		// if (effectIndex > 0)
		int32_t L_0 = __this->___effectIndex_6;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// effectIndex--;
		int32_t L_1 = __this->___effectIndex_6;
		__this->___effectIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0029;
	}

IL_0019:
	{
		// effectIndex = effects.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___effects_4;
		NullCheck(L_2);
		__this->___effectIndex_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0029:
	{
		// CleanCurrentEffect();
		ETFXEffectControllerPooled_CleanCurrentEffect_m619E627064A1962963DFEB7665688A03FD1DBAA1(__this, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::CleanCurrentEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled_CleanCurrentEffect_m619E627064A1962963DFEB7665688A03FD1DBAA1 (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// if (currentEffect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___currentEffect_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// currentEffect.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___currentEffect_14;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0020:
	{
		// StartCoroutine(EffectLoop());
		RuntimeObject* L_3;
		L_3 = ETFXEffectControllerPooled_EffectLoop_mC481367DD471ADC6D7690C74CD9EA389CFB05FBD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXEffectControllerPooled::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXEffectControllerPooled_EffectLoop_mC481367DD471ADC6D7690C74CD9EA389CFB05FBD (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* L_0 = (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848*)il2cpp_codegen_object_new(U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEffectLoopU3Ed__22__ctor_m1C217E989238A9F53930FE5F120025336B9B9D05(L_0, 0, NULL);
		U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectControllerPooled__ctor_m0FD83B68E12033F57F4D9AF8970E1EDE08A8AC7E (ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* __this, const RuntimeMethod* method) 
{
	{
		// public bool disableLights = true;
		__this->___disableLights_7 = (bool)1;
		// public bool disableSound = true;
		__this->___disableSound_8 = (bool)1;
		// public float startDelay = 0.2f;
		__this->___startDelay_9 = (0.200000003f);
		// public float respawnDelay = 0.5f;
		__this->___respawnDelay_10 = (0.5f);
		// public float autoRotationSpeed = 0.1f;
		__this->___autoRotationSpeed_13 = (0.100000001f);
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
// System.Void EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__22__ctor_m1C217E989238A9F53930FE5F120025336B9B9D05 (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__22_System_IDisposable_Dispose_mA141FE7B8647E372B0A20A915BE746CAAC310439 (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEffectLoopU3Ed__22_MoveNext_m4A7E1EA2D5638CEA8686597094283746DC60E6B0 (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* V_1 = NULL;
	int32_t V_2 = 0;
	MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0133;
			}
			case 2:
			{
				goto IL_01a0;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentEffect = effectsPool[effectIndex];
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_3 = V_1;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_4 = V_1;
		NullCheck(L_4);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = L_4->___effectsPool_5;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___effectIndex_6;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___currentEffect_14 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___currentEffect_14), (void*)L_8);
		// currentEffect.SetActive(true);
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___currentEffect_14;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		// if (disableLights && currentEffect.GetComponent<Light>())
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->___disableLights_7;
		if (!L_12)
		{
			goto IL_0077;
		}
	}
	{
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___currentEffect_14;
		NullCheck(L_14);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15;
		L_15 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_14, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_15, NULL);
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		// currentEffect.GetComponent<Light>().enabled = false;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___currentEffect_14;
		NullCheck(L_18);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19;
		L_19 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_18, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)0, NULL);
	}

IL_0077:
	{
		// if (disableSound && currentEffect.GetComponent<AudioSource>())
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = L_20->___disableSound_8;
		if (!L_21)
		{
			goto IL_00a2;
		}
	}
	{
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_22 = V_1;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___currentEffect_14;
		NullCheck(L_23);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_24;
		L_24 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_23, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_24, NULL);
		if (!L_25)
		{
			goto IL_00a2;
		}
	}
	{
		// currentEffect.GetComponent<AudioSource>().enabled = false;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_26 = V_1;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___currentEffect_14;
		NullCheck(L_27);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28;
		L_28 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_27, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_28);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)0, NULL);
	}

IL_00a2:
	{
		// effectNameText.text = effects[effectIndex].name;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_29 = V_1;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___effectNameText_15;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_31 = V_1;
		NullCheck(L_31);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_32 = L_31->___effects_4;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = L_33->___effectIndex_6;
		NullCheck(L_32);
		int32_t L_35 = L_34;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_36);
		String_t* L_37;
		L_37 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_36, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_37);
		// effectIndexText.text = (effectIndex + 1) + " of " + effects.Length;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_38 = V_1;
		NullCheck(L_38);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = L_38->___effectIndexText_16;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41 = L_40->___effectIndex_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		String_t* L_42;
		L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_43 = V_1;
		NullCheck(L_43);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_44 = L_43->___effects_4;
		NullCheck(L_44);
		V_2 = ((int32_t)(((RuntimeArray*)L_44)->max_length));
		String_t* L_45;
		L_45 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_46;
		L_46 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_42, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640, L_45, NULL);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_46);
		// ParticleSystem particleSystem = currentEffect.GetComponent<ParticleSystem>();
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_47 = V_1;
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___currentEffect_14;
		NullCheck(L_48);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_49;
		L_49 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_48, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		__this->___U3CparticleSystemU3E5__2_3 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparticleSystemU3E5__2_3), (void*)L_49);
	}

IL_0105:
	{
		// yield return new WaitForSeconds(particleSystem.main.duration + respawnDelay);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_50 = __this->___U3CparticleSystemU3E5__2_3;
		NullCheck(L_50);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_51;
		L_51 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_50, NULL);
		V_3 = L_51;
		float L_52;
		L_52 = MainModule_get_duration_mDCB80E6BD3B6B2DFB92E41FBCCA154D7E7150EB1((&V_3), NULL);
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_53 = V_1;
		NullCheck(L_53);
		float L_54 = L_53->___respawnDelay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_55 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_55, ((float)il2cpp_codegen_add(L_52, L_54)), NULL);
		__this->___U3CU3E2__current_1 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_55);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0133:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!slideshowMode)
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_56 = V_1;
		NullCheck(L_56);
		bool L_57 = L_56->___slideshowMode_11;
		if (L_57)
		{
			goto IL_0171;
		}
	}
	{
		// if (!particleSystem.main.loop)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_58 = __this->___U3CparticleSystemU3E5__2_3;
		NullCheck(L_58);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_59;
		L_59 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_58, NULL);
		V_3 = L_59;
		bool L_60;
		L_60 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_3), NULL);
		if (L_60)
		{
			goto IL_0105;
		}
	}
	{
		// currentEffect.SetActive(false);
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_61 = V_1;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___currentEffect_14;
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// currentEffect.SetActive(true);
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_63 = V_1;
		NullCheck(L_63);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = L_63->___currentEffect_14;
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)1, NULL);
		goto IL_0105;
	}

IL_0171:
	{
		// if (particleSystem.main.loop)
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_65 = __this->___U3CparticleSystemU3E5__2_3;
		NullCheck(L_65);
		MainModule_tC7ECD8330C14B0808478A748048988A6085CE2A9 L_66;
		L_66 = ParticleSystem_get_main_mD86DFCD96150E2CE760CD2F37052BB3BCA33C189(L_65, NULL);
		V_3 = L_66;
		bool L_67;
		L_67 = MainModule_get_loop_m4F75CD377C0555635995F7C1F8D580517473EDF8((&V_3), NULL);
		if (!L_67)
		{
			goto IL_01a7;
		}
	}
	{
		// yield return new WaitForSeconds(respawnDelay);
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_68 = V_1;
		NullCheck(L_68);
		float L_69 = L_68->___respawnDelay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_70 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_70, L_69, NULL);
		__this->___U3CU3E2__current_1 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_70);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01a0:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01a7:
	{
		// NextEffect();
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_71 = V_1;
		NullCheck(L_71);
		ETFXEffectControllerPooled_NextEffect_m284A3A9BEC1671D33853EDFA415537D4C0CEC00D(L_71, NULL);
		// while (true)
		goto IL_0105;
	}
}
// System.Object EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BCE5EE2B3F3A79BF55A3327A1BBF20AE6A4FEAA (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__22_System_Collections_IEnumerator_Reset_mFA8693C05B1EA47260BC8C2762B5AC45BD98097A (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEffectLoopU3Ed__22_System_Collections_IEnumerator_Reset_mFA8693C05B1EA47260BC8C2762B5AC45BD98097A_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXEffectControllerPooled/<EffectLoop>d__22::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__22_System_Collections_IEnumerator_get_Current_m5D5C7368921F3BF3B0767FD428FF95119B73657E (U3CEffectLoopU3Ed__22_t9B6FF6C0A56B31B05AF215CEC8BFE2DE4832D848* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXEffectCycler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectCycler_Start_mD351EDDEC327212BC9F767C65DC003478E550D62 (ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70FFD3FFBC16F684BBA5E3442B18146FF97ADD7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("PlayEffect", startDelay);
		float L_0 = __this->___startDelay_7;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral70FFD3FFBC16F684BBA5E3442B18146FF97ADD7B, L_0, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectCycler::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectCycler_PlayEffect_mB357AB2D682B0CB02E0AA1D4C26EEFC915909D27 (ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("EffectLoop");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B, NULL);
		// if (effectIndex < listOfEffects.Count - 1)
		int32_t L_1 = __this->___effectIndex_5;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___listOfEffects_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_2, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_0030;
		}
	}
	{
		// effectIndex++;
		int32_t L_4 = __this->___effectIndex_5;
		__this->___effectIndex_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		return;
	}

IL_0030:
	{
		// effectIndex = 0;
		__this->___effectIndex_5 = 0;
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXEffectCycler::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXEffectCycler_EffectLoop_m1B7889A14469435F1D018AE15AE0A5D45841A61B (ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* L_0 = (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D*)il2cpp_codegen_object_new(U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEffectLoopU3Ed__8__ctor_mA737141CA7D2E9642A63CA0A68977CA392196260(L_0, 0, NULL);
		U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXEffectCycler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXEffectCycler__ctor_m887EB7565E48F3AF53438ECB4812EF90BB80A43F (ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* __this, const RuntimeMethod* method) 
{
	{
		// public float loopLength = 1.0f;
		__this->___loopLength_6 = (1.0f);
		// public float startDelay = 1.0f;
		__this->___startDelay_7 = (1.0f);
		// public bool disableLights = true;
		__this->___disableLights_8 = (bool)1;
		// public bool disableSound = true;
		__this->___disableSound_9 = (bool)1;
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
// System.Void EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__8__ctor_mA737141CA7D2E9642A63CA0A68977CA392196260 (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__8_System_IDisposable_Dispose_m8DF47747C5F99880213672FADFAA63D7B7256580 (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEffectLoopU3Ed__8_MoveNext_m9A53B6B2E3FE19EC5FD03F88638A6A7BF70542AA (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_00dc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject instantiatedEffect = (GameObject) Instantiate(listOfEffects[effectIndex], transform.position, transform.rotation * Quaternion.Euler (0, 0, 0));
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_4 = V_1;
		NullCheck(L_4);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = L_4->___listOfEffects_4;
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___effectIndex_5;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_9 = V_1;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_12 = V_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_14, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_8, L_11, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___U3CinstantiatedEffectU3E5__2_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstantiatedEffectU3E5__2_3), (void*)L_17);
		// if (disableLights && instantiatedEffect.GetComponent<Light>())
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->___disableLights_8;
		if (!L_19)
		{
			goto IL_0097;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___U3CinstantiatedEffectU3E5__2_3;
		NullCheck(L_20);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_21;
		L_21 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_20, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_21, NULL);
		if (!L_22)
		{
			goto IL_0097;
		}
	}
	{
		// instantiatedEffect.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___U3CinstantiatedEffectU3E5__2_3;
		NullCheck(L_23);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_24;
		L_24 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_23, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_24);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)0, NULL);
	}

IL_0097:
	{
		// if (disableSound && instantiatedEffect.GetComponent<AudioSource>())
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_25 = V_1;
		NullCheck(L_25);
		bool L_26 = L_25->___disableSound_9;
		if (!L_26)
		{
			goto IL_00c2;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___U3CinstantiatedEffectU3E5__2_3;
		NullCheck(L_27);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28;
		L_28 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_27, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_28, NULL);
		if (!L_29)
		{
			goto IL_00c2;
		}
	}
	{
		// instantiatedEffect.GetComponent<AudioSource>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___U3CinstantiatedEffectU3E5__2_3;
		NullCheck(L_30);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_31;
		L_31 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_30, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_31);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_31, (bool)0, NULL);
	}

IL_00c2:
	{
		// yield return new WaitForSeconds(loopLength);
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_32 = V_1;
		NullCheck(L_32);
		float L_33 = L_32->___loopLength_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_34 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_34, L_33, NULL);
		__this->___U3CU3E2__current_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_34);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00dc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy(instantiatedEffect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___U3CinstantiatedEffectU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_35, NULL);
		// PlayEffect();
		ETFXEffectCycler_tDFBB5592E3CD9484A269ECD13EEB400EF7CE1792* L_36 = V_1;
		NullCheck(L_36);
		ETFXEffectCycler_PlayEffect_mB357AB2D682B0CB02E0AA1D4C26EEFC915909D27(L_36, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m38FCF4BE9FD87AB394819F5B0DF1B8481C9717BE (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__8_System_Collections_IEnumerator_Reset_m97F1D9CE5C7548A40C330276FA1A21BEAEBC41D1 (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEffectLoopU3Ed__8_System_Collections_IEnumerator_Reset_m97F1D9CE5C7548A40C330276FA1A21BEAEBC41D1_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXEffectCycler/<EffectLoop>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__8_System_Collections_IEnumerator_get_Current_mB98922295CFC9147B67443AC37D6F61E23BE6B32 (U3CEffectLoopU3Ed__8_tB324114C1510892DF136CEE031A569AC364C092D* __this, const RuntimeMethod* method) 
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
		// public bool disableLights = true;
		__this->___disableLights_6 = (bool)1;
		// public bool disableSound = true;
		__this->___disableSound_7 = (bool)1;
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
			goto IL_00b8;
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
		// if (disableLights && effectPlayer.GetComponent<Light>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_13 = V_1;
		NullCheck(L_13);
		bool L_14 = L_13->___disableLights_6;
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_15);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_16;
		L_16 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_15, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_16, NULL);
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		// effectPlayer.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_18);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_19;
		L_19 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_18, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		NullCheck(L_19);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_19, (bool)0, NULL);
	}

IL_0073:
	{
		// if (disableSound && effectPlayer.GetComponent<AudioSource>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_20 = V_1;
		NullCheck(L_20);
		bool L_21 = L_20->___disableSound_7;
		if (!L_21)
		{
			goto IL_009e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_22);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23;
		L_23 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_22, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_23, NULL);
		if (!L_24)
		{
			goto IL_009e;
		}
	}
	{
		// effectPlayer.GetComponent<AudioSource>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___U3CeffectPlayerU3E5__2_3;
		NullCheck(L_25);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26;
		L_26 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_25, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		NullCheck(L_26);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_26, (bool)0, NULL);
	}

IL_009e:
	{
		// yield return new WaitForSeconds(loopTimeLimit);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->___loopTimeLimit_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_29 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_29, L_28, NULL);
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy (effectPlayer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___U3CeffectPlayerU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_30, NULL);
		// PlayEffect();
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_31 = V_1;
		NullCheck(L_31);
		ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB(L_31, NULL);
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
// System.Void EpicToonFX.ETFXMouseOrbit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_Update_mDDC40404CF1DB59D24344393A19F2C97E9EE28CF (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
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
	{
		// if(target)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// if (Input.GetMouseButton(1))
		bool L_2;
		L_2 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_2)
		{
			goto IL_0075;
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
		float L_7 = __this->___velocityY_17;
		float L_8 = __this->___ySpeed_7;
		float L_9;
		L_9 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___velocityY_17 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), (0.0199999996f)))));
		// if (isAutoRotating)
		bool L_10 = __this->___isAutoRotating_19;
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// StopAutoRotation();
		ETFXMouseOrbit_StopAutoRotation_mF7D5A31D86C129A8D9960A46AF1B59BE6269DF5E(__this, NULL);
	}

IL_0075:
	{
		// distance = Mathf.Clamp(distance - Input.GetAxis("Mouse ScrollWheel") * 15, distanceMin, distanceMax);
		float L_11 = __this->___distance_5;
		float L_12;
		L_12 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_13 = __this->___distanceMin_10;
		float L_14 = __this->___distanceMax_11;
		float L_15;
		L_15 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_11, ((float)il2cpp_codegen_multiply(L_12, (15.0f))))), L_13, L_14, NULL);
		__this->___distance_5 = L_15;
	}

IL_00a3:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_FixedUpdate_m1C91023CB80E3342209BE137C102040948C99FF3 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
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
			goto IL_013e;
		}
	}
	{
		// rotationYAxis += velocityX;
		float L_2 = __this->___rotationYAxis_13;
		float L_3 = __this->___velocityX_15;
		__this->___rotationYAxis_13 = ((float)il2cpp_codegen_add(L_2, L_3));
		// rotationXAxis -= velocityY;
		float L_4 = __this->___rotationXAxis_14;
		float L_5 = __this->___velocityY_17;
		__this->___rotationXAxis_14 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// rotationXAxis = ClampAngle(rotationXAxis, yMinLimit, yMaxLimit);
		float L_6 = __this->___rotationXAxis_14;
		float L_7 = __this->___yMinLimit_8;
		float L_8 = __this->___yMaxLimit_9;
		float L_9;
		L_9 = ETFXMouseOrbit_ClampAngle_m72AFA6D105B5AF64EFC0DFF57F67AA6FB7E9C26F(L_6, L_7, L_8, NULL);
		__this->___rotationXAxis_14 = L_9;
		// Quaternion toRotation = Quaternion.Euler(rotationXAxis, rotationYAxis, 0);
		float L_10 = __this->___rotationXAxis_14;
		float L_11 = __this->___rotationYAxis_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_10, L_11, (0.0f), NULL);
		// Quaternion rotation = toRotation;
		V_0 = L_12;
		// if (Physics.Linecast(target.position, transform.position, out RaycastHit hit))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___target_4;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		bool L_17;
		L_17 = Physics_Linecast_m4F2A0744FE106002EE26D12B6137FC21C019B932(L_14, L_16, (&V_1), NULL);
		if (!L_17)
		{
			goto IL_009d;
		}
	}
	{
		// distance -= hit.distance;
		float L_18 = __this->___distance_5;
		float L_19;
		L_19 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		__this->___distance_5 = ((float)il2cpp_codegen_subtract(L_18, L_19));
	}

IL_009d:
	{
		// Vector3 negDistance = new Vector3(0.0f, 0.0f, -distance);
		float L_20 = __this->___distance_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), ((-L_20)), NULL);
		// Vector3 position = Vector3.Lerp(transform.position, rotation * negDistance + target.position, 0.6f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_23, L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___target_4;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_22, L_28, (0.600000024f), NULL);
		V_3 = L_29;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_0;
		NullCheck(L_30);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_30, L_31, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		NullCheck(L_32);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_33, NULL);
		// velocityX = Mathf.Lerp(velocityX, 0, Time.deltaTime * smoothTime);
		float L_34 = __this->___velocityX_15;
		float L_35;
		L_35 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_36 = __this->___smoothTime_12;
		float L_37;
		L_37 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_34, (0.0f), ((float)il2cpp_codegen_multiply(L_35, L_36)), NULL);
		__this->___velocityX_15 = L_37;
		// velocityY = Mathf.Lerp(velocityY, 0, Time.deltaTime * smoothTime);
		float L_38 = __this->___velocityY_17;
		float L_39;
		L_39 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_40 = __this->___smoothTime_12;
		float L_41;
		L_41 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_38, (0.0f), ((float)il2cpp_codegen_multiply(L_39, L_40)), NULL);
		__this->___velocityY_17 = L_41;
	}

IL_013e:
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
// System.Void EpicToonFX.ETFXMouseOrbit::InitializeAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_InitializeAutoRotation_m1867343A620DCDFDFBE0961227BC1D5BBCA7ACD9 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	{
		// isAutoRotating = true;
		__this->___isAutoRotating_19 = (bool)1;
		// StartCoroutine(AutoRotate());
		RuntimeObject* L_0;
		L_0 = ETFXMouseOrbit_AutoRotate_mE19FCC7B8475670EB1B16AABE350A591AB8E30EC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::SetAutoRotationSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_SetAutoRotationSpeed_mC6CC8747EFADE978441F25627473F19BC7ECA97B (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, float ___rotationSpeed0, const RuntimeMethod* method) 
{
	{
		// maxVelocityX = rotationSpeed;
		float L_0 = ___rotationSpeed0;
		__this->___maxVelocityX_16 = L_0;
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::StopAutoRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_StopAutoRotation_mF7D5A31D86C129A8D9960A46AF1B59BE6269DF5E (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (etfxEffectController != null)
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_0 = __this->___etfxEffectController_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// etfxEffectController.autoRotation = false;
		ETFXEffectController_tFF50B50127A968CCF456A77962BE08AF178589BD* L_2 = __this->___etfxEffectController_20;
		NullCheck(L_2);
		L_2->___autoRotation_11 = (bool)0;
	}

IL_001a:
	{
		// if (etfxEffectControllerPooled != null)
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_3 = __this->___etfxEffectControllerPooled_21;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// etfxEffectControllerPooled.autoRotation = false;
		ETFXEffectControllerPooled_tEC3F100F563A209BE9185104E94ED0FF4EBAC4F5* L_5 = __this->___etfxEffectControllerPooled_21;
		NullCheck(L_5);
		L_5->___autoRotation_12 = (bool)0;
	}

IL_0034:
	{
		// isAutoRotating = false;
		__this->___isAutoRotating_19 = (bool)0;
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXMouseOrbit::AutoRotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXMouseOrbit_AutoRotate_mE19FCC7B8475670EB1B16AABE350A591AB8E30EC (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* L_0 = (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848*)il2cpp_codegen_object_new(U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAutoRotateU3Ed__25__ctor_mCE86510ECAD3AD0F6D6F9AA861706865E2C3224C(L_0, 0, NULL);
		U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit__ctor_mCCECFB7E06C2B4F0D1F93D142B8CA91738C63370 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	{
		// public float distance = 12.0f;
		__this->___distance_5 = (12.0f);
		// public float xSpeed = 120.0f;
		__this->___xSpeed_6 = (120.0f);
		// public float ySpeed = 120.0f;
		__this->___ySpeed_7 = (120.0f);
		// public float yMinLimit = -20f;
		__this->___yMinLimit_8 = (-20.0f);
		// public float yMaxLimit = 80f;
		__this->___yMaxLimit_9 = (80.0f);
		// public float distanceMin = 8f;
		__this->___distanceMin_10 = (8.0f);
		// public float distanceMax = 15f;
		__this->___distanceMax_11 = (15.0f);
		// public float smoothTime = 2f;
		__this->___smoothTime_12 = (2.0f);
		// private float maxVelocityX = 0.1f;
		__this->___maxVelocityX_16 = (0.100000001f);
		// private readonly float autoRotationSmoothing = 0.02f;
		__this->___autoRotationSmoothing_18 = (0.0199999996f);
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
// System.Void EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoRotateU3Ed__25__ctor_mCE86510ECAD3AD0F6D6F9AA861706865E2C3224C (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoRotateU3Ed__25_System_IDisposable_Dispose_mF97386561F6D7438586F566C93CD4186660809F6 (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAutoRotateU3Ed__25_MoveNext_mB0DE6572DA45DECE930D32B0F4803778F84602C4 (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0096;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int lerpSteps = 0;
		__this->___U3ClerpStepsU3E5__2_3 = 0;
		goto IL_006a;
	}

IL_0032:
	{
		// velocityX = Mathf.Lerp(velocityX, maxVelocityX, autoRotationSmoothing);
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_3 = V_1;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___velocityX_15;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___maxVelocityX_16;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_8 = V_1;
		NullCheck(L_8);
		float L_9 = L_8->___autoRotationSmoothing_18;
		float L_10;
		L_10 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_7, L_9, NULL);
		NullCheck(L_3);
		L_3->___velocityX_15 = L_10;
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_11 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_11, NULL);
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0063:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_006a:
	{
		// while (lerpSteps < 30)
		int32_t L_12 = __this->___U3ClerpStepsU3E5__2_3;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)30))))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_009d;
	}

IL_0076:
	{
		// velocityX = maxVelocityX;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_13 = V_1;
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_14 = V_1;
		NullCheck(L_14);
		float L_15 = L_14->___maxVelocityX_16;
		NullCheck(L_13);
		L_13->___velocityX_15 = L_15;
		// yield return new WaitForFixedUpdate();
		WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7* L_16 = (WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7*)il2cpp_codegen_object_new(WaitForFixedUpdate_t86F5BC0B6A668AEF2903DE9ADB52062E457BD1B7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForFixedUpdate__ctor_m28D22FD61960FCD538753493FAC080DA5EC7A9E7(L_16, NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0096:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_009d:
	{
		// while (isAutoRotating)
		ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->___isAutoRotating_19;
		if (L_18)
		{
			goto IL_0076;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAutoRotateU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m883B17AE78832F945E3372D9D57EA75C3A5CEB8D (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAutoRotateU3Ed__25_System_Collections_IEnumerator_Reset_mDF6FCAAEB2F677DA04C2804601C195DA695AC4D5 (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAutoRotateU3Ed__25_System_Collections_IEnumerator_Reset_mDF6FCAAEB2F677DA04C2804601C195DA695AC4D5_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXMouseOrbit/<AutoRotate>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAutoRotateU3Ed__25_System_Collections_IEnumerator_get_Current_m87A8D9025C88C9567856F5310E4692EB451B5BA5 (U3CAutoRotateU3Ed__25_t4A36782A496997E39B9A9B254BE0CEF9DA57B848* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXProjectileScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript_Start_mAE36CE2A589C15A80618BFA8288BEBC2A550FEA4 (ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXProjectileScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript_FixedUpdate_mE71297975A7A72A1264E19D4896D3F286AA06817 (ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXProjectileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript__ctor_m083AB7D25743C5E4820B139323FAAB5D20D36564 (ETFXProjectileScript_t94F024ED1BC9E05825A2F759636C8A44F0C58A81* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadScene2DDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScene2DDemo_mBEA42632DF48C93F939A66043D9259666F3FD817 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneCards_m2F142F9126C95AE0710F432E8C7B2DD5C00DD0FE (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneCombat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneCombat_mD570A7DB2868A32402CF3DA0BFFCB75BDB69A439 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneDecals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneDecals_m4A563FA167F3F9E7202DEA0182DF628516404A65 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneDecals2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneDecals2_mB29804E15DCED459842AEB831DCE37221A1D539C (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneEmojis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneEmojis_mE808C1FBEA15A84F97EC90616CDCD8E4009D0274 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneEmojis2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneEmojis2_mA2414E84A8EF7C79A23DB5D0BAD4927EA5D8EAE2 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneExplosions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneExplosions_mC06227194B7AE48D0C92CF5044DE6D2AD3C2433C (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneExplosions2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneExplosions2_m1B8952DC7413F9F74DB0A5DC9528E61806A47515 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFire_mC12518AC733E7B52F8023D27108CF816E47C314E (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneOnomatopoeia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneOnomatopoeia_mD05C0CDEBAB5FFD644AF7752EBD4C9648237FBF1 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB9365198526AC5F13134217FAB84165A65863E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_onomatopoeia");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralBB9365198526AC5F13134217FAB84165A65863E5, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneFireworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFireworks_m8582DEDF1DE48AD23B8FE325E6272244E75DF562 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneFlares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFlares_mEC9B73EC2FC85397F15CF5CAB159780EEA6BD324 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneMagic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic_mCCCE535B9866DC204D966AD9AC444598601D5C6E (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneMagic2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic2_m48DC81386BC6CF1A9B94F1078906547C111E6DB9 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneMagic3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic3_m81072501CCBDD04504F9B3327A75B3F4CE8D733C (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneMainDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMainDemo_mBF92EE94EB54D9E408E5B7E4C6763DE5D9A870C6 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneMissiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMissiles_m9E3FCC4DB68A0A224C2A414A724177D3D500BBD5 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadScenePortals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePortals_m9475F2DE2658656208CB627EC5C70C58325FD972 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadScenePortals2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePortals2_m7EF7CF59043429D3EE0C45C2402EF416742038B9 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadScenePowerups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePowerups_m22454740122D12E026EB22DB9ED5902694408352 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadScenePowerups2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePowerups2_mE9F5EDC4B1D574701FAC902E6C635440533136F6 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadScenePowerups3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePowerups3_m27279F50024754285220EACBF41A8D6BED61D008 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral065D944B565954EE2AECC964EDD269408E0A52DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_powerups3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral065D944B565954EE2AECC964EDD269408E0A52DF, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneSparkles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSparkles_m1DE3836476763B674AB4B458BC5F210B5D33F7DD (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneSwordCombat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSwordCombat_m7C88887DB075A9E48E442EB4FFBD0981E256AF12 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneSwordCombat2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSwordCombat2_m39AED9E450E0F73D0D08C0AD943D1C4DA1BFFB75 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMoney_m8A41261810B4BD093D633D7EC1CAD1B2BA8597F0 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneHealing_m70973D39655861B95D62303E81A904484322B101 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneWind_m0525AF79D37C887C9B33223CF28632C4F8C70474 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::LoadSceneWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneWater_m75F001B767B004607438483891F5AF921B31A88B (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99F1947DEE3F9AF76C3972A4B726DBCD450824BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_water");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral99F1947DEE3F9AF76C3972A4B726DBCD450824BF, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_Update_m7E72690BC917ED56B74D058DF4E83B8111A6925E (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
// System.Void EpicToonFX.ETFXSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager__ctor_mE37121638413CEF0457B3627EA19EEA0997BF5B6 (ETFXSceneManager_tFF0894B41F0C30BD869A7AD7E24CF1B289E441E7* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ETFXMouseOrbit_SetAutoRotationSpeed_mC6CC8747EFADE978441F25627473F19BC7ECA97B_inline (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, float ___rotationSpeed0, const RuntimeMethod* method) 
{
	{
		// maxVelocityX = rotationSpeed;
		float L_0 = ___rotationSpeed0;
		__this->___maxVelocityX_16 = L_0;
		// }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
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
