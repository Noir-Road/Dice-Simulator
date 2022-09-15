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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// AllIn1SpriteShader.DemoCircleExpositor[]
struct DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AllIn1SpriteShader.All1CreateUnifiedOutline
struct All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E;
// AllIn1SpriteShader.All1ShaderDemoController
struct All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14;
// AllIn1SpriteShader.All1TextureOffsetOverTime
struct All1TextureOffsetOverTime_t664FC71722E0607B8C03910303316F196C5A4B87;
// AllIn1SpriteShader.AllIn1ScrollProperty
struct AllIn1ScrollProperty_t3F39F37FB4DDBD2EF52912BD90C3E06362723CDB;
// AllIn1SpriteShader.AllIn1Shader
struct AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// AllIn1SpriteShader.Demo2AutoScroll
struct Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5;
// AllIn1SpriteShader.DemoCamera
struct DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D;
// AllIn1SpriteShader.DemoCircleExpositor
struct DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809;
// AllIn1SpriteShader.DemoItem
struct DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978;
// AllIn1SpriteShader.DemoRandomColorSwap
struct DemoRandomColorSwap_tB456756AD84F4AB1A06BDB1C74E3A346DE39D37E;
// AllIn1SpriteShader.DemoRepositionExpositor
struct DemoRepositionExpositor_tD723A415DCECAFC2C19D349E6CAE955A2E71E78A;
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
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// AllIn1SpriteShader.RandomSeed
struct RandomSeed_t950B0BF456F6D57B4DCB01821828E084D9860074;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// AllIn1SpriteShader.SetAtlasUvs
struct SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143;
// AllIn1SpriteShader.SetGlobalTimeNew
struct SetGlobalTimeNew_tA60D1711CA7FE06C7FEAAD3E08F2CD7C3947E35B;
// AllIn1SpriteShader.SetGlobalTimeUnity2018
struct SetGlobalTimeUnity2018_t762330FA40264EED0C410BA8A677D8CD8EB87265;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
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
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4
struct U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052;
// AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8
struct U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0299CC5F40C577F300BB29854CBAAD8B68ABF5A0;
IL2CPP_EXTERN_C String_t* _stringLiteral03D998A67418B2207797D2A80D9F2AF98F94F195;
IL2CPP_EXTERN_C String_t* _stringLiteral0670686C7271ED687162A8ECDDE9AE0929E59B45;
IL2CPP_EXTERN_C String_t* _stringLiteral07F915656939A90DAE6C1AB707E79BF7868CA521;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2029D6593D19CF6AC584238C35E618BAD74718;
IL2CPP_EXTERN_C String_t* _stringLiteral0EDD1346AB9BBFF26C2ADA8CCE3981FE25229774;
IL2CPP_EXTERN_C String_t* _stringLiteral10C202E3CAC5AB49BE861CFF829BC59BBB0FF6B4;
IL2CPP_EXTERN_C String_t* _stringLiteral11651BC54D61D0E8D245A036BF447C492098BE73;
IL2CPP_EXTERN_C String_t* _stringLiteral11BBC07DB720D8AC1FA700D648938720AD568A4C;
IL2CPP_EXTERN_C String_t* _stringLiteral13526C924AA381E6DAF2C89BAC639C26785229A7;
IL2CPP_EXTERN_C String_t* _stringLiteral136D47E96726D7EA43FC4F2CA881E88C9A061F79;
IL2CPP_EXTERN_C String_t* _stringLiteral13C0074568ED51167FB219A2329236AA23602E01;
IL2CPP_EXTERN_C String_t* _stringLiteral158697E57921300501C71DFA8626FCAE1F8FD030;
IL2CPP_EXTERN_C String_t* _stringLiteral1E70DB3EED474F0B3BC0F85291266523C145CAC4;
IL2CPP_EXTERN_C String_t* _stringLiteral1E74A2EC3C4B69C55D0D1B56F81D53F03FC58D57;
IL2CPP_EXTERN_C String_t* _stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859;
IL2CPP_EXTERN_C String_t* _stringLiteral33BBFB9BE2C77104761CDDF74B7E1852E6881C0D;
IL2CPP_EXTERN_C String_t* _stringLiteral33DA33B75C46B0F229B34D2C0891CF71E7F79910;
IL2CPP_EXTERN_C String_t* _stringLiteral34877C8FC3EE47FD941AE792253A7937E3D03301;
IL2CPP_EXTERN_C String_t* _stringLiteral34AD56288A03AA8D7B7BE17E549C5FB602F9E885;
IL2CPP_EXTERN_C String_t* _stringLiteral3728D7FFA3384EEA2829B4C8467CABA85CC94C69;
IL2CPP_EXTERN_C String_t* _stringLiteral37B43FC7BBF894AE4836DA274013351D48835406;
IL2CPP_EXTERN_C String_t* _stringLiteral3F868CB06E969FC20ED35E84ACC75C8E94BE5789;
IL2CPP_EXTERN_C String_t* _stringLiteral3FF1B94E47532ED77AF58B8CB0A0458B6D9E1996;
IL2CPP_EXTERN_C String_t* _stringLiteral447F933BE8D1CA27B33DDC715D32E2F35E9FAC8C;
IL2CPP_EXTERN_C String_t* _stringLiteral4507C8929E44E422C27AFF7402E410055B12B019;
IL2CPP_EXTERN_C String_t* _stringLiteral4696BEB1B4DD525F1293813D16EC3A02B2B12251;
IL2CPP_EXTERN_C String_t* _stringLiteral4A68E99ECA06FD65FDFD5FCD7FECC5839F4C0DBC;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral4C250825F169D5648C7CD452131B4DF7B4DC7C52;
IL2CPP_EXTERN_C String_t* _stringLiteral4DC5DE09C42F7A0AAD0106E5E30E6879D7BD19E5;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5398DC3D4FFCD34741F382F596A262B6FA2922AC;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3B1BE3FD3E1947CE910239BD8EBB0FC2393452;
IL2CPP_EXTERN_C String_t* _stringLiteral62E72875E72067F274B0D2DC61D0DC737D9A571D;
IL2CPP_EXTERN_C String_t* _stringLiteral638A6BF6390D12422CAC4910C95F16CFBCE6D50B;
IL2CPP_EXTERN_C String_t* _stringLiteral63F1A53BEF19370173222DB715DA9DCB5F499A18;
IL2CPP_EXTERN_C String_t* _stringLiteral6677C73BF64E77B045EA94D2AA385D7540F0A39D;
IL2CPP_EXTERN_C String_t* _stringLiteral6BD563D265E492444F9716B330F66A8F0A9EF3F9;
IL2CPP_EXTERN_C String_t* _stringLiteral6D9FF7A53B7038459370EB5C0F21C9D019668421;
IL2CPP_EXTERN_C String_t* _stringLiteral70CB2A88390E9E1FFDAA4939306C681707CF5604;
IL2CPP_EXTERN_C String_t* _stringLiteral7281FF2F619273B6F998E3D3DCA0CFAF23CCFAD2;
IL2CPP_EXTERN_C String_t* _stringLiteral72AD3D77A8EEF70C256801C9BA901207C3CD9918;
IL2CPP_EXTERN_C String_t* _stringLiteral7476243E3C65732A663724FC420E6E1142271250;
IL2CPP_EXTERN_C String_t* _stringLiteral77222A55E21565B4F73AE2B2CB7476F68AB0F78D;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA61378231EC959A15680986F921585BD0F8CDC;
IL2CPP_EXTERN_C String_t* _stringLiteral83A7D7134699CC119AD32B86F73B3360AC11C2F9;
IL2CPP_EXTERN_C String_t* _stringLiteral83C04DB8961FE223A4D4C904CE22EB4B37E8844E;
IL2CPP_EXTERN_C String_t* _stringLiteral84B53DCE4436A2C5C9F1731C6214E68BCC824C12;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral8A24A92BBBDBE76F988FEBAB0D8D2D7E6137576F;
IL2CPP_EXTERN_C String_t* _stringLiteral91091474F29416A7473D8C4907A4C9072DF22614;
IL2CPP_EXTERN_C String_t* _stringLiteral92EA8BDFBEE13648A1E94EEF63E0B7CF7FA61390;
IL2CPP_EXTERN_C String_t* _stringLiteral9487C4A5BEA527DD133B56664D0A4FEBE2ED8E8D;
IL2CPP_EXTERN_C String_t* _stringLiteral954CBAF7304A4F535054ED74F9ADC7D966A8B2D8;
IL2CPP_EXTERN_C String_t* _stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1;
IL2CPP_EXTERN_C String_t* _stringLiteral99117A43311619936587FBCABCC9B16B687AB302;
IL2CPP_EXTERN_C String_t* _stringLiteral9ABAD8FF849D104EA8DB7481A66BB4B9FD7143A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA0F4CF9D3B8B4AD6A49A888401B14AE51DD52E16;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA398C584963DA9580EF46ED5CFF9424F53B44AB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA46AB120269E77F4ABEC01F7C4BA0FAE4465FAA1;
IL2CPP_EXTERN_C String_t* _stringLiteralA5CC3B4E870360B37F4D71DFDCBCA18CA78C9BF3;
IL2CPP_EXTERN_C String_t* _stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81;
IL2CPP_EXTERN_C String_t* _stringLiteralA85C7EF6524508DBECB8E0C8A91AC20E323F2BB7;
IL2CPP_EXTERN_C String_t* _stringLiteralA87819C2031146742C1F5350BC509988DACBE9F9;
IL2CPP_EXTERN_C String_t* _stringLiteralAA14DC444C9CB687D6C3004779D620E50C9590C5;
IL2CPP_EXTERN_C String_t* _stringLiteralACBB086EF9E086A51936C2770AD0626D0741BFBD;
IL2CPP_EXTERN_C String_t* _stringLiteralAEA9B41BED2921E2BDDCE7E16056AB0AE866AD40;
IL2CPP_EXTERN_C String_t* _stringLiteralAF4C1963FC25CEBA356B471D3766D6A06B902D8A;
IL2CPP_EXTERN_C String_t* _stringLiteralB00A1496C52A0281EFEA7B32B5FF80AE3889CF87;
IL2CPP_EXTERN_C String_t* _stringLiteralBCBD8C7003675066255066C8241D1DCB43737145;
IL2CPP_EXTERN_C String_t* _stringLiteralC39E8C6764A54DE708C62FDD57019CD127D68BF3;
IL2CPP_EXTERN_C String_t* _stringLiteralC3DB4C8B1E39FC82973F5D53BA60AC2EA5C07599;
IL2CPP_EXTERN_C String_t* _stringLiteralC8DE5A01354A14D63623212DAD24AF32886D3324;
IL2CPP_EXTERN_C String_t* _stringLiteralC9486C3E8DCF321F2BDCA1BDD0584650965E27AD;
IL2CPP_EXTERN_C String_t* _stringLiteralCBF85A768D3943BCCC3F92E224E88B14E21373BC;
IL2CPP_EXTERN_C String_t* _stringLiteralCE8028CB603B14045B89B5DC45645750E96D0E1D;
IL2CPP_EXTERN_C String_t* _stringLiteralD153D3723DF9D1F4CDD31A1F55A54CD82108ED26;
IL2CPP_EXTERN_C String_t* _stringLiteralD1A9DDB3A06F7F4A372807897084E30EEDC02825;
IL2CPP_EXTERN_C String_t* _stringLiteralD678A75C242A16DA78744D87F52BD6BA550F95C4;
IL2CPP_EXTERN_C String_t* _stringLiteralDDA3D9ABC6B6F4E63E913BAA2F16EC90AA1A58DC;
IL2CPP_EXTERN_C String_t* _stringLiteralE553ACFB771455A8D49A952FB680C3B50DC63289;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B1F4E65A0B35AB6619D979A27DD1766DEB7039;
IL2CPP_EXTERN_C String_t* _stringLiteralEC1448C3684BCF31933FFFC9FE903C9316AF00E3;
IL2CPP_EXTERN_C String_t* _stringLiteralF1BC32F600700BDF7C145D2EA99B09EE57118EA7;
IL2CPP_EXTERN_C String_t* _stringLiteralF1C56EF1B89A06340C517FD662E7AC0CA5DDDE9F;
IL2CPP_EXTERN_C String_t* _stringLiteralF391AB5AAB158433391BA7CA02848970C3D0E1F9;
IL2CPP_EXTERN_C String_t* _stringLiteralF6585045963E3BBD6D97B74D10A6A67BE2316C01;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D0682B0A57C76A842EDA4655C6EE53BA2241DC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_m9BE45999D46DA401A31C65629F3C2F6142482B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_mE9ACC9E80A8C01E195194C1068B778FA67605B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m80F11D9CC2DF54B8A1F27C9D6757B3EBBE3874AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScrollElementsU3Ed__4_System_Collections_IEnumerator_Reset_m7B8367872DED430F6B29EB5FC21F3923BE5C02E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSetCamAfterStartU3Ed__8_System_Collections_IEnumerator_Reset_mEA7774D0E3729A84AF868A7A6E2C2A000FDE54D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9948787ACF3768CF349717FF490C29D40A562312 
{
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
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4
struct U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052  : public RuntimeObject
{
	// System.Int32 AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AllIn1SpriteShader.Demo2AutoScroll AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::<>4__this
	Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* ___U3CU3E4__this_2;
	// System.Int32 AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8
struct U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B  : public RuntimeObject
{
	// System.Int32 AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// AllIn1SpriteShader.DemoCamera AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::<>4__this
	DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AllIn1SpriteShader.All1CreateUnifiedOutline
struct All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material AllIn1SpriteShader.All1CreateUnifiedOutline::outlineMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___outlineMaterial_4;
	// UnityEngine.Transform AllIn1SpriteShader.All1CreateUnifiedOutline::outlineParentTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___outlineParentTransform_5;
	// System.Int32 AllIn1SpriteShader.All1CreateUnifiedOutline::duplicateOrderInLayer
	int32_t ___duplicateOrderInLayer_6;
	// System.String AllIn1SpriteShader.All1CreateUnifiedOutline::duplicateSortingLayer
	String_t* ___duplicateSortingLayer_7;
	// System.Boolean AllIn1SpriteShader.All1CreateUnifiedOutline::createUnifiedOutline
	bool ___createUnifiedOutline_8;
};

// AllIn1SpriteShader.All1ShaderDemoController
struct All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AllIn1SpriteShader.DemoCircleExpositor[] AllIn1SpriteShader.All1ShaderDemoController::expositors
	DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* ___expositors_4;
	// UnityEngine.UI.Text AllIn1SpriteShader.All1ShaderDemoController::expositorsTitle
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___expositorsTitle_5;
	// UnityEngine.UI.Text AllIn1SpriteShader.All1ShaderDemoController::expositorsTitleOutline
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___expositorsTitleOutline_6;
	// System.Single AllIn1SpriteShader.All1ShaderDemoController::expositorDistance
	float ___expositorDistance_7;
	// System.Int32 AllIn1SpriteShader.All1ShaderDemoController::currExpositor
	int32_t ___currExpositor_8;
	// UnityEngine.GameObject AllIn1SpriteShader.All1ShaderDemoController::background
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___background_9;
	// UnityEngine.Material AllIn1SpriteShader.All1ShaderDemoController::backgroundMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___backgroundMat_10;
	// System.Single AllIn1SpriteShader.All1ShaderDemoController::colorLerpSpeed
	float ___colorLerpSpeed_11;
	// UnityEngine.Color[] AllIn1SpriteShader.All1ShaderDemoController::targetColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___targetColors_12;
	// UnityEngine.Color[] AllIn1SpriteShader.All1ShaderDemoController::currentColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___currentColors_13;
};

// AllIn1SpriteShader.All1TextureOffsetOverTime
struct All1TextureOffsetOverTime_t664FC71722E0607B8C03910303316F196C5A4B87  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AllIn1SpriteShader.All1TextureOffsetOverTime::texturePropertyName
	String_t* ___texturePropertyName_4;
	// UnityEngine.Vector2 AllIn1SpriteShader.All1TextureOffsetOverTime::offsetSpeed
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offsetSpeed_5;
	// UnityEngine.Material AllIn1SpriteShader.All1TextureOffsetOverTime::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_6;
	// System.Int32 AllIn1SpriteShader.All1TextureOffsetOverTime::textureShaderId
	int32_t ___textureShaderId_7;
	// UnityEngine.Vector2 AllIn1SpriteShader.All1TextureOffsetOverTime::currOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___currOffset_8;
};

// AllIn1SpriteShader.AllIn1ScrollProperty
struct AllIn1ScrollProperty_t3F39F37FB4DDBD2EF52912BD90C3E06362723CDB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String AllIn1SpriteShader.AllIn1ScrollProperty::numericPropertyName
	String_t* ___numericPropertyName_4;
	// System.Single AllIn1SpriteShader.AllIn1ScrollProperty::scrollSpeed
	float ___scrollSpeed_5;
	// System.Boolean AllIn1SpriteShader.AllIn1ScrollProperty::applyModulo
	bool ___applyModulo_6;
	// System.Single AllIn1SpriteShader.AllIn1ScrollProperty::modulo
	float ___modulo_7;
	// UnityEngine.Material AllIn1SpriteShader.AllIn1ScrollProperty::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_8;
	// System.Int32 AllIn1SpriteShader.AllIn1ScrollProperty::propertyShaderID
	int32_t ___propertyShaderID_9;
	// System.Single AllIn1SpriteShader.AllIn1ScrollProperty::currValue
	float ___currValue_10;
};

// AllIn1SpriteShader.AllIn1Shader
struct AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// AllIn1SpriteShader.AllIn1Shader/ShaderTypes AllIn1SpriteShader.AllIn1Shader::shaderTypes
	int32_t ___shaderTypes_4;
	// UnityEngine.Material AllIn1SpriteShader.AllIn1Shader::currMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currMaterial_5;
	// UnityEngine.Material AllIn1SpriteShader.AllIn1Shader::prevMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___prevMaterial_6;
	// System.Boolean AllIn1SpriteShader.AllIn1Shader::matAssigned
	bool ___matAssigned_7;
	// System.Boolean AllIn1SpriteShader.AllIn1Shader::destroyed
	bool ___destroyed_8;
	// System.Single AllIn1SpriteShader.AllIn1Shader::normalStrength
	float ___normalStrength_9;
	// System.Int32 AllIn1SpriteShader.AllIn1Shader::normalSmoothing
	int32_t ___normalSmoothing_10;
	// System.Boolean AllIn1SpriteShader.AllIn1Shader::computingNormal
	bool ___computingNormal_11;
	// System.Boolean AllIn1SpriteShader.AllIn1Shader::needToWait
	bool ___needToWait_12;
	// System.Int32 AllIn1SpriteShader.AllIn1Shader::waitingCycles
	int32_t ___waitingCycles_13;
	// System.Int32 AllIn1SpriteShader.AllIn1Shader::timesWeWaited
	int32_t ___timesWeWaited_14;
	// UnityEngine.SpriteRenderer AllIn1SpriteShader.AllIn1Shader::normalMapSr
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___normalMapSr_15;
	// UnityEngine.Renderer AllIn1SpriteShader.AllIn1Shader::normalMapRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___normalMapRenderer_16;
	// System.Boolean AllIn1SpriteShader.AllIn1Shader::isSpriteRenderer
	bool ___isSpriteRenderer_17;
	// System.String AllIn1SpriteShader.AllIn1Shader::path
	String_t* ___path_18;
	// System.String AllIn1SpriteShader.AllIn1Shader::subPath
	String_t* ___subPath_19;
};

// AllIn1SpriteShader.Demo2AutoScroll
struct Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] AllIn1SpriteShader.Demo2AutoScroll::children
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___children_4;
	// System.Single AllIn1SpriteShader.Demo2AutoScroll::totalTime
	float ___totalTime_5;
	// UnityEngine.GameObject AllIn1SpriteShader.Demo2AutoScroll::sceneDescription
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sceneDescription_6;
};

// AllIn1SpriteShader.DemoCamera
struct DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform AllIn1SpriteShader.DemoCamera::targetedItem
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetedItem_4;
	// AllIn1SpriteShader.All1ShaderDemoController AllIn1SpriteShader.DemoCamera::demoController
	All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* ___demoController_5;
	// System.Single AllIn1SpriteShader.DemoCamera::speed
	float ___speed_6;
	// UnityEngine.Vector3 AllIn1SpriteShader.DemoCamera::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_7;
	// UnityEngine.Vector3 AllIn1SpriteShader.DemoCamera::target
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target_8;
	// System.Boolean AllIn1SpriteShader.DemoCamera::canUpdate
	bool ___canUpdate_9;
};

// AllIn1SpriteShader.DemoCircleExpositor
struct DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1SpriteShader.DemoCircleExpositor::radius
	float ___radius_4;
	// System.Single AllIn1SpriteShader.DemoCircleExpositor::rotateSpeed
	float ___rotateSpeed_5;
	// System.Single AllIn1SpriteShader.DemoCircleExpositor::zOffset
	float ___zOffset_6;
	// UnityEngine.Transform[] AllIn1SpriteShader.DemoCircleExpositor::items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___items_7;
	// System.Int32 AllIn1SpriteShader.DemoCircleExpositor::count
	int32_t ___count_8;
	// System.Int32 AllIn1SpriteShader.DemoCircleExpositor::currentTarget
	int32_t ___currentTarget_9;
	// System.Single AllIn1SpriteShader.DemoCircleExpositor::offsetRotation
	float ___offsetRotation_10;
	// System.Single AllIn1SpriteShader.DemoCircleExpositor::iniY
	float ___iniY_11;
	// UnityEngine.Quaternion AllIn1SpriteShader.DemoCircleExpositor::dummyRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___dummyRotation_12;
};

// AllIn1SpriteShader.DemoItem
struct DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_StaticFields
{
	// UnityEngine.Vector3 AllIn1SpriteShader.DemoItem::lookAtZ
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtZ_4;
};

// AllIn1SpriteShader.DemoRandomColorSwap
struct DemoRandomColorSwap_tB456756AD84F4AB1A06BDB1C74E3A346DE39D37E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material AllIn1SpriteShader.DemoRandomColorSwap::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_4;
	// System.Int32 AllIn1SpriteShader.DemoRandomColorSwap::colorSwapRed
	int32_t ___colorSwapRed_5;
	// System.Int32 AllIn1SpriteShader.DemoRandomColorSwap::colorSwapGreen
	int32_t ___colorSwapGreen_6;
	// System.Int32 AllIn1SpriteShader.DemoRandomColorSwap::colorSwapBlue
	int32_t ___colorSwapBlue_7;
};

// AllIn1SpriteShader.DemoRepositionExpositor
struct DemoRepositionExpositor_tD723A415DCECAFC2C19D349E6CAE955A2E71E78A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single AllIn1SpriteShader.DemoRepositionExpositor::paddingX
	float ___paddingX_4;
};

// AllIn1SpriteShader.RandomSeed
struct RandomSeed_t950B0BF456F6D57B4DCB01821828E084D9860074  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AllIn1SpriteShader.RandomSeed::randomSeedProperty
	int32_t ___randomSeedProperty_4;
	// UnityEngine.MaterialPropertyBlock AllIn1SpriteShader.RandomSeed::propertyBlock
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___propertyBlock_5;
};

// AllIn1SpriteShader.SetAtlasUvs
struct SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean AllIn1SpriteShader.SetAtlasUvs::updateEveryFrame
	bool ___updateEveryFrame_4;
	// System.Boolean AllIn1SpriteShader.SetAtlasUvs::useMaterialInstanceIfPossible
	bool ___useMaterialInstanceIfPossible_5;
	// UnityEngine.Renderer AllIn1SpriteShader.SetAtlasUvs::render
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___render_6;
	// UnityEngine.SpriteRenderer AllIn1SpriteShader.SetAtlasUvs::spriteRender
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRender_7;
	// UnityEngine.UI.Image AllIn1SpriteShader.SetAtlasUvs::uiImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___uiImage_8;
	// System.Boolean AllIn1SpriteShader.SetAtlasUvs::isUI
	bool ___isUI_9;
	// System.Int32 AllIn1SpriteShader.SetAtlasUvs::minXuv
	int32_t ___minXuv_10;
	// System.Int32 AllIn1SpriteShader.SetAtlasUvs::maxXuv
	int32_t ___maxXuv_11;
	// System.Int32 AllIn1SpriteShader.SetAtlasUvs::minYuv
	int32_t ___minYuv_12;
	// System.Int32 AllIn1SpriteShader.SetAtlasUvs::maxYuv
	int32_t ___maxYuv_13;
};

// AllIn1SpriteShader.SetGlobalTimeNew
struct SetGlobalTimeNew_tA60D1711CA7FE06C7FEAAD3E08F2CD7C3947E35B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AllIn1SpriteShader.SetGlobalTimeNew::globalTime
	int32_t ___globalTime_4;
};

// AllIn1SpriteShader.SetGlobalTimeUnity2018
struct SetGlobalTimeUnity2018_t762330FA40264EED0C410BA8A677D8CD8EB87265  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 AllIn1SpriteShader.SetGlobalTimeUnity2018::globalTime
	int32_t ___globalTime_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
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
// AllIn1SpriteShader.DemoCircleExpositor[]
struct DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0  : public RuntimeArray
{
	ALIGN_FIELD (8) DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* m_Items[1];

	inline DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
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
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void AllIn1SpriteShader.All1ShaderDemoController::SetExpositorText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_SetExpositorText_mF207D368491AABF72DCA5F253D1624372F4AF5CC (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.All1ShaderDemoController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_GetInput_m788EA2922D56F9A5BFF21C3AC860EA74D6B88BF2 (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.DemoCircleExpositor::ChangeTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCircleExpositor_ChangeTarget_m8C42D720A0AE3AA5FD8976F739F3AF3E21D59381 (DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.All1ShaderDemoController::ChangeExpositor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_ChangeExpositor_m74831915E53D0E7E17F3E8B109C0DEB809F97FE1 (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, int32_t ___offset0, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.All1TextureOffsetOverTime::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1TextureOffsetOverTime_DestroyComponentAndLogError_mB8175552280A949887E7EA0F3ECDAB4908DBD61C (All1TextureOffsetOverTime_t664FC71722E0607B8C03910303316F196C5A4B87* __this, String_t* ___logError0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1ScrollProperty::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ScrollProperty_DestroyComponentAndLogError_m08DF53AA0D64B281973FCC7870BAD6738CC8798A (AllIn1ScrollProperty_t3F39F37FB4DDBD2EF52912BD90C3E06362723CDB* __this, String_t* ___logError0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AllIn1SpriteShader.Demo2AutoScroll::ScrollElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Demo2AutoScroll_ScrollElements_mD8734ED8666C1134D0DF08BFCC18C4AEFA36219D (Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScrollElementsU3Ed__4__ctor_mEE8279239A5D1314557C7096F0F08C650043CA11 (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator AllIn1SpriteShader.DemoCamera::SetCamAfterStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoCamera_SetCamAfterStart_m4DCF4B4BBDCEAAB36212D7DF64E0DECD0C590F8E (DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* __this, const RuntimeMethod* method) ;
// System.Int32 AllIn1SpriteShader.All1ShaderDemoController::GetCurrExpositor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t All1ShaderDemoController_GetCurrExpositor_mDFB94C042A2717616ECAF4121CB12FA509DE4CC8_inline (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCamAfterStartU3Ed__8__ctor_m290FA5EB64BBE067BF31D02C6BACE94BB2E6CB8E (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// UnityEngine.Color AllIn1SpriteShader.DemoRandomColorSwap::GenerateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DemoRandomColorSwap_GenerateColor_m1883260D9A78107E0584BF7ED9D8831271F7EC1A (DemoRandomColorSwap_tB456756AD84F4AB1A06BDB1C74E3A346DE39D37E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::MissingMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline_MissingMaterial_mE0920885C30D5272768E4888B27CD932310E8A53 (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::GetAllChildren(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Transform>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline_GetAllChildren_mD121787BABC3AEFEB15C1D384C82915BC12C98D7 (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** ___transforms1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::CreateOutlineSpriteDuplicate(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline_CreateOutlineSpriteDuplicate_m465A4CAC7620153168468FD97AF94493ABE6E3A5 (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SpriteRenderer::get_flipY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipY_m2277917491792E562B37BFBF77513E12FFF6F75F (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetMaterial(AllIn1SpriteShader.AllIn1Shader/AfterSetAction,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetMaterial_mFB4610A2350B9E76A2FD3EC0EF25AA87591C2A2E (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, int32_t ___action0, bool ___getShaderTypeFromPrefs1, String_t* ___shaderName2, const RuntimeMethod* method) ;
// System.String AllIn1SpriteShader.AllIn1Shader::GetStringFromShaderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AllIn1Shader_GetStringFromShaderType_m2E9392FE3054652262B421F6CBB973CD0B181E6D (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33 (String_t* ___path0, Type_t* ___systemTypeInstance1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___source0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::DoAfterSetAction(AllIn1SpriteShader.AllIn1Shader/AfterSetAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_DoAfterSetAction_mE9D526214E1A09EFF8866879EEB600BD922F4A35 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, int32_t ___action0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void AllIn1SpriteShader.AllIn1Shader::MissingRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_MissingRenderer_m7E6C5C3058DE3EA8E8F8743081F740D120B1FC3C (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::SetSceneDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetSceneDirty_m81771084CA202FD7B38A79EB83ABC8C2DB87893B (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::ClearAllKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_ClearAllKeywords_mCF9A2DBA0C1B21B33FC4B2AA61095B8E8299AD79 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::CopyPropertiesFromMaterial(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::ResetAllProperties(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_ResetAllProperties_mB6AF55493FB94DFFC2FFDB5C4ECEEC87CE5DA498 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, bool ___getShaderTypeFromPrefs0, String_t* ___shaderName1, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::CleanMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_CleanMaterial_m33B4E8D8F99E06BE24C5D10FAAEB9061FDCD0F75 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::MakeNewMaterial(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_MakeNewMaterial_mDFFA8CEF9D219C41544035C62F044D42519F7D88 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, bool ___getShaderTypeFromPrefs0, String_t* ___shaderName1, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::SetKeyword(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___keyword0, bool ___state1, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::FindCurrMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_FindCurrMaterial_m24F2836902231F97E09F46B7410FC57E6F596C0D (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::SaveMaterialWithOtherName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SaveMaterialWithOtherName_m5568A821C67EFF400BB280AE5BD33107EE1FCBD8 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___path0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::DoSaving(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_DoSaving_m6E771CAF9428768387E41A348AA107BB72B02E50 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___fileName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AllIn1SpriteShader.SetAtlasUvs>()
inline SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* Component_GetComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_m9BE45999D46DA401A31C65629F3C2F6142482B98 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<AllIn1SpriteShader.SetAtlasUvs>()
inline SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* GameObject_AddComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_mE9ACC9E80A8C01E195194C1068B778FA67605B63 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::GetAndSetUVs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_GetAndSetUVs_m6A4E8397DCBDF01EDD57A9B6589C0243AF2449C8 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.SetAtlasUvs::ResetAtlasUvs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_ResetAtlasUvs_mC8A49A1EA3DB69DAD8D19CFCC92166113A0FF368 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::GetAllChildren(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Transform>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_GetAllChildren_mB2FABA1695FE5E120C0DCC3A0CC44677FA723D68 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** ___transforms1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* GameObject_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m80F11D9CC2DF54B8A1F27C9D6757B3EBBE3874AE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String AllIn1SpriteShader.AllIn1Shader::GetNewValidPath(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AllIn1Shader_GetNewValidPath_m88632E3DE97D010A64282DEA30A0DA8B78270E11 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___path0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::SetNewNormalTexture2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetNewNormalTexture2_m9B2393792E7CFF97DC16C9805059A9D467422928 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::SetNewNormalTexture3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetNewNormalTexture3_mBA46C24DE7B8681120B6E716AB65A4509EB969BE (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.AllIn1Shader::SetNewNormalTexture4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetNewNormalTexture4_m6E7C4191286551CC6B6A1712A59CC2CB2DFB4450 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Texture2D::GetPixel(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Division(UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Division_m641F85C0191C56932E452CAAC8E4974C43675FEB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MaterialPropertyBlock::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___properties0, const RuntimeMethod* method) ;
// System.Void AllIn1SpriteShader.SetAtlasUvs::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_Setup_m9BF3E8695E0C5211136D4648EAAB4FCC4999E95D (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) ;
// System.Boolean AllIn1SpriteShader.SetAtlasUvs::GetRendererReferencesIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetAtlasUvs_GetRendererReferencesIfNeeded_mA933FAA24CDB490AA1E6714C55D532457EB19525 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Shader::SetGlobalFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shader_SetGlobalFloat_mE7D0DA2B0A62925E093B318785AF82A173794AFC (int32_t ___nameID0, float ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AllIn1SpriteShader.All1ShaderDemoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_Start_m08840A266F0FA88114D9A238231A47AE9ACDEDDF (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2029D6593D19CF6AC584238C35E618BAD74718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70CB2A88390E9E1FFDAA4939306C681707CF5604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1BC32F600700BDF7C145D2EA99B09EE57118EA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8D0682B0A57C76A842EDA4655C6EE53BA2241DC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// currExpositor = 0;
		__this->___currExpositor_8 = 0;
		// SetExpositorText();
		All1ShaderDemoController_SetExpositorText_mF207D368491AABF72DCA5F253D1624372F4AF5CC(__this, NULL);
		// for (int i = 0; i < expositors.Length; i++) expositors[i].transform.position = new Vector3(0, expositorDistance * i, 0);
		V_0 = 0;
		goto IL_003f;
	}

IL_0011:
	{
		// for (int i = 0; i < expositors.Length; i++) expositors[i].transform.position = new Vector3(0, expositorDistance * i, 0);
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_0 = __this->___expositors_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		float L_5 = __this->___expositorDistance_7;
		int32_t L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), ((float)il2cpp_codegen_multiply(L_5, ((float)L_6))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_7, NULL);
		// for (int i = 0; i < expositors.Length; i++) expositors[i].transform.position = new Vector3(0, expositorDistance * i, 0);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < expositors.Length; i++) expositors[i].transform.position = new Vector3(0, expositorDistance * i, 0);
		int32_t L_9 = V_0;
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_10 = __this->___expositors_4;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// backgroundMat = background.GetComponent<Image>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___background_9;
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12;
		L_12 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_11, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_12);
		__this->___backgroundMat_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___backgroundMat_10), (void*)L_13);
		// targetColors = new Color[4];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_14 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___targetColors_12 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetColors_12), (void*)L_14);
		// targetColors[0] = backgroundMat.GetColor("_GradTopLeftCol");
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_15 = __this->___targetColors_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___backgroundMat_10;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_16, _stringLiteral70CB2A88390E9E1FFDAA4939306C681707CF5604, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_17);
		// targetColors[1] = backgroundMat.GetColor("_GradTopRightCol");
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_18 = __this->___targetColors_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = __this->___backgroundMat_10;
		NullCheck(L_19);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_19, _stringLiteral0A2029D6593D19CF6AC584238C35E618BAD74718, NULL);
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_20);
		// targetColors[2] = backgroundMat.GetColor("_GradBotLeftCol");
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_21 = __this->___targetColors_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___backgroundMat_10;
		NullCheck(L_22);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_22, _stringLiteralF8D0682B0A57C76A842EDA4655C6EE53BA2241DC, NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_23);
		// targetColors[3] = backgroundMat.GetColor("_GradBotRightCol");
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_24 = __this->___targetColors_12;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = __this->___backgroundMat_10;
		NullCheck(L_25);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Material_GetColor_mAC702C70081A597DD2AA2F4627B1A1C65DDF6609(L_25, _stringLiteralF1BC32F600700BDF7C145D2EA99B09EE57118EA7, NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_26);
		// currentColors = targetColors.Clone() as Color[];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_27 = __this->___targetColors_12;
		NullCheck((RuntimeArray*)L_27);
		RuntimeObject* L_28;
		L_28 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_27, NULL);
		__this->___currentColors_13 = ((ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)IsInst((RuntimeObject*)L_28, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentColors_13), (void*)((ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)IsInst((RuntimeObject*)L_28, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1ShaderDemoController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_Update_mECBD93887A8606A4D1626EC41645734628A320AF (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2029D6593D19CF6AC584238C35E618BAD74718);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70CB2A88390E9E1FFDAA4939306C681707CF5604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1BC32F600700BDF7C145D2EA99B09EE57118EA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8D0682B0A57C76A842EDA4655C6EE53BA2241DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetInput();
		All1ShaderDemoController_GetInput_m788EA2922D56F9A5BFF21C3AC860EA74D6B88BF2(__this, NULL);
		// currentColors[0] = Color.Lerp(currentColors[0], targetColors[(0 + currExpositor) % targetColors.Length], colorLerpSpeed * Time.deltaTime);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = __this->___currentColors_13;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = __this->___currentColors_13;
		NullCheck(L_1);
		int32_t L_2 = 0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = __this->___targetColors_12;
		int32_t L_5 = __this->___currExpositor_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = __this->___targetColors_12;
		NullCheck(L_6);
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = __this->___colorLerpSpeed_11;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_3, L_8, ((float)il2cpp_codegen_multiply(L_9, L_10)), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_11);
		// currentColors[1] = Color.Lerp(currentColors[1], targetColors[(1 + currExpositor) % targetColors.Length], colorLerpSpeed * Time.deltaTime);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_12 = __this->___currentColors_13;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = __this->___currentColors_13;
		NullCheck(L_13);
		int32_t L_14 = 1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_16 = __this->___targetColors_12;
		int32_t L_17 = __this->___currExpositor_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_18 = __this->___targetColors_12;
		NullCheck(L_18);
		NullCheck(L_16);
		int32_t L_19 = ((int32_t)(((int32_t)il2cpp_codegen_add(1, L_17))%((int32_t)(((RuntimeArray*)L_18)->max_length))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		float L_21 = __this->___colorLerpSpeed_11;
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_15, L_20, ((float)il2cpp_codegen_multiply(L_21, L_22)), NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_23);
		// currentColors[2] = Color.Lerp(currentColors[2], targetColors[(2 + currExpositor) % targetColors.Length], colorLerpSpeed * Time.deltaTime);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_24 = __this->___currentColors_13;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_25 = __this->___currentColors_13;
		NullCheck(L_25);
		int32_t L_26 = 2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_28 = __this->___targetColors_12;
		int32_t L_29 = __this->___currExpositor_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_30 = __this->___targetColors_12;
		NullCheck(L_30);
		NullCheck(L_28);
		int32_t L_31 = ((int32_t)(((int32_t)il2cpp_codegen_add(2, L_29))%((int32_t)(((RuntimeArray*)L_30)->max_length))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		float L_33 = __this->___colorLerpSpeed_11;
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_27, L_32, ((float)il2cpp_codegen_multiply(L_33, L_34)), NULL);
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_35);
		// currentColors[3] = Color.Lerp(currentColors[3], targetColors[(3 + currExpositor) % targetColors.Length], colorLerpSpeed * Time.deltaTime);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_36 = __this->___currentColors_13;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_37 = __this->___currentColors_13;
		NullCheck(L_37);
		int32_t L_38 = 3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_40 = __this->___targetColors_12;
		int32_t L_41 = __this->___currExpositor_8;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_42 = __this->___targetColors_12;
		NullCheck(L_42);
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)(((int32_t)il2cpp_codegen_add(3, L_41))%((int32_t)(((RuntimeArray*)L_42)->max_length))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		float L_45 = __this->___colorLerpSpeed_11;
		float L_46;
		L_46 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		L_47 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_39, L_44, ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_47);
		// backgroundMat.SetColor("_GradTopLeftCol", currentColors[0]);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48 = __this->___backgroundMat_10;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_49 = __this->___currentColors_13;
		NullCheck(L_49);
		int32_t L_50 = 0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_48);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_48, _stringLiteral70CB2A88390E9E1FFDAA4939306C681707CF5604, L_51, NULL);
		// backgroundMat.SetColor("_GradTopRightCol", currentColors[1]);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___backgroundMat_10;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_53 = __this->___currentColors_13;
		NullCheck(L_53);
		int32_t L_54 = 1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_52);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_52, _stringLiteral0A2029D6593D19CF6AC584238C35E618BAD74718, L_55, NULL);
		// backgroundMat.SetColor("_GradBotLeftCol", currentColors[2]);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56 = __this->___backgroundMat_10;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_57 = __this->___currentColors_13;
		NullCheck(L_57);
		int32_t L_58 = 2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_56);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_56, _stringLiteralF8D0682B0A57C76A842EDA4655C6EE53BA2241DC, L_59, NULL);
		// backgroundMat.SetColor("_GradBotRightCol", currentColors[3]);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_60 = __this->___backgroundMat_10;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_61 = __this->___currentColors_13;
		NullCheck(L_61);
		int32_t L_62 = 3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_60);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_60, _stringLiteralF1BC32F600700BDF7C145D2EA99B09EE57118EA7, L_63, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1ShaderDemoController::GetInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_GetInput_m788EA2922D56F9A5BFF21C3AC860EA74D6B88BF2 (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)276), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)97), NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}

IL_0015:
	{
		// expositors[currExpositor].ChangeTarget(-1);
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_2 = __this->___expositors_4;
		int32_t L_3 = __this->___currExpositor_8;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		DemoCircleExpositor_ChangeTarget_m8C42D720A0AE3AA5FD8976F739F3AF3E21D59381(L_5, (-1), NULL);
		return;
	}

IL_0029:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D))
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)275), NULL);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)100), NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}

IL_003e:
	{
		// expositors[currExpositor].ChangeTarget(1);
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_8 = __this->___expositors_4;
		int32_t L_9 = __this->___currExpositor_8;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		DemoCircleExpositor_ChangeTarget_m8C42D720A0AE3AA5FD8976F739F3AF3E21D59381(L_11, 1, NULL);
		return;
	}

IL_0052:
	{
		// else if (Input.GetKeyDown(KeyCode.UpArrow) || Input.GetKeyDown(KeyCode.W))
		bool L_12;
		L_12 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)273), NULL);
		if (L_12)
		{
			goto IL_0067;
		}
	}
	{
		bool L_13;
		L_13 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)119), NULL);
		if (!L_13)
		{
			goto IL_006f;
		}
	}

IL_0067:
	{
		// ChangeExpositor(-1);
		All1ShaderDemoController_ChangeExpositor_m74831915E53D0E7E17F3E8B109C0DEB809F97FE1(__this, (-1), NULL);
		return;
	}

IL_006f:
	{
		// else if (Input.GetKeyDown(KeyCode.DownArrow) || Input.GetKeyDown(KeyCode.S))
		bool L_14;
		L_14 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)274), NULL);
		if (L_14)
		{
			goto IL_0084;
		}
	}
	{
		bool L_15;
		L_15 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)115), NULL);
		if (!L_15)
		{
			goto IL_008b;
		}
	}

IL_0084:
	{
		// ChangeExpositor(1);
		All1ShaderDemoController_ChangeExpositor_m74831915E53D0E7E17F3E8B109C0DEB809F97FE1(__this, 1, NULL);
	}

IL_008b:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1ShaderDemoController::ChangeExpositor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_ChangeExpositor_m74831915E53D0E7E17F3E8B109C0DEB809F97FE1 (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		// currExpositor += offset;
		int32_t L_0 = __this->___currExpositor_8;
		int32_t L_1 = ___offset0;
		__this->___currExpositor_8 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if (currExpositor > expositors.Length - 1) currExpositor = 0;
		int32_t L_2 = __this->___currExpositor_8;
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_3 = __this->___expositors_4;
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (currExpositor > expositors.Length - 1) currExpositor = 0;
		__this->___currExpositor_8 = 0;
		goto IL_0042;
	}

IL_0029:
	{
		// else if (currExpositor < 0) currExpositor = expositors.Length - 1;
		int32_t L_4 = __this->___currExpositor_8;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// else if (currExpositor < 0) currExpositor = expositors.Length - 1;
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_5 = __this->___expositors_4;
		NullCheck(L_5);
		__this->___currExpositor_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
	}

IL_0042:
	{
		// SetExpositorText();
		All1ShaderDemoController_SetExpositorText_mF207D368491AABF72DCA5F253D1624372F4AF5CC(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1ShaderDemoController::SetExpositorText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController_SetExpositorText_mF207D368491AABF72DCA5F253D1624372F4AF5CC (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) 
{
	{
		// expositorsTitle.text = expositors[currExpositor].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___expositorsTitle_5;
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_1 = __this->___expositors_4;
		int32_t L_2 = __this->___currExpositor_8;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// expositorsTitleOutline.text = expositors[currExpositor].name;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___expositorsTitleOutline_6;
		DemoCircleExpositorU5BU5D_t140695A9328AEB87A9F12AA2418E8064F2AC32A0* L_7 = __this->___expositors_4;
		int32_t L_8 = __this->___currExpositor_8;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_11);
		// }
		return;
	}
}
// System.Int32 AllIn1SpriteShader.All1ShaderDemoController::GetCurrExpositor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t All1ShaderDemoController_GetCurrExpositor_mDFB94C042A2717616ECAF4121CB12FA509DE4CC8 (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) 
{
	{
		// public int GetCurrExpositor() { return currExpositor; }
		int32_t L_0 = __this->___currExpositor_8;
		return L_0;
	}
}
// System.Void AllIn1SpriteShader.All1ShaderDemoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1ShaderDemoController__ctor_m977367737346D9E73265DE4DBA491B217C5EE591 (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1SpriteShader.All1TextureOffsetOverTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1TextureOffsetOverTime_Start_mEF7CF01A60B09FFB7BCC0DC79E05096CF94081C0 (All1TextureOffsetOverTime_t664FC71722E0607B8C03910303316F196C5A4B87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11BBC07DB720D8AC1FA700D648938720AD568A4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_1 = NULL;
	{
		// if (mat == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// SpriteRenderer sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		V_0 = L_2;
		// if (sr != null) mat = sr.material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// if (sr != null) mat = sr.material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		__this->___mat_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_6), (void*)L_6);
		goto IL_0048;
	}

IL_002c:
	{
		// Image i = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_1 = L_7;
		// if (i != null) mat = i.material;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// if (i != null) mat = i.material;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_1;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_10);
		__this->___mat_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_6), (void*)L_11);
	}

IL_0048:
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting All1TextureOffsetOverTIme component");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___mat_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting All1TextureOffsetOverTIme component");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteral11BBC07DB720D8AC1FA700D648938720AD568A4C, NULL);
		All1TextureOffsetOverTime_DestroyComponentAndLogError_mB8175552280A949887E7EA0F3ECDAB4908DBD61C(__this, L_16, NULL);
		return;
	}

IL_0072:
	{
		// if (mat.HasProperty(texturePropertyName)) textureShaderId = Shader.PropertyToID(texturePropertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___mat_6;
		String_t* L_18 = __this->___texturePropertyName_4;
		NullCheck(L_17);
		bool L_19;
		L_19 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0097;
		}
	}
	{
		// if (mat.HasProperty(texturePropertyName)) textureShaderId = Shader.PropertyToID(texturePropertyName);
		String_t* L_20 = __this->___texturePropertyName_4;
		int32_t L_21;
		L_21 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_20, NULL);
		__this->___textureShaderId_7 = L_21;
		return;
	}

IL_0097:
	{
		// else DestroyComponentAndLogError(gameObject.name + "'s Material doesn't have a " + texturePropertyName + " property");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		String_t* L_24 = __this->___texturePropertyName_4;
		String_t* L_25;
		L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_23, _stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81, L_24, _stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859, NULL);
		All1TextureOffsetOverTime_DestroyComponentAndLogError_mB8175552280A949887E7EA0F3ECDAB4908DBD61C(__this, L_25, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1TextureOffsetOverTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1TextureOffsetOverTime_Update_mE23C4FFE4EBEC02186D58ECD3E92668119032966 (All1TextureOffsetOverTime_t664FC71722E0607B8C03910303316F196C5A4B87* __this, const RuntimeMethod* method) 
{
	{
		// currOffset.x += offsetSpeed.x * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___currOffset_8);
		float* L_1 = (&L_0->___x_0);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (&__this->___offsetSpeed_5);
		float L_5 = L_4->___x_0;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_5, L_6))));
		// currOffset.y += offsetSpeed.y * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___currOffset_8);
		float* L_8 = (&L_7->___y_1);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___offsetSpeed_5);
		float L_12 = L_11->___y_1;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_9) = (float)((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(L_12, L_13))));
		// mat.SetTextureOffset(textureShaderId, currOffset);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = __this->___mat_6;
		int32_t L_15 = __this->___textureShaderId_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___currOffset_8;
		NullCheck(L_14);
		Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747(L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1TextureOffsetOverTime::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1TextureOffsetOverTime_DestroyComponentAndLogError_mB8175552280A949887E7EA0F3ECDAB4908DBD61C (All1TextureOffsetOverTime_t664FC71722E0607B8C03910303316F196C5A4B87* __this, String_t* ___logError0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(logError);
		String_t* L_0 = ___logError0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1TextureOffsetOverTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1TextureOffsetOverTime__ctor_m9C5ABFB135935DC2FFFBA1B77720E47D7B70CDE7 (All1TextureOffsetOverTime_t664FC71722E0607B8C03910303316F196C5A4B87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string texturePropertyName = "_MainTex";
		__this->___texturePropertyName_4 = _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texturePropertyName_4), (void*)_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		// [SerializeField] private Vector2 offsetSpeed = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___offsetSpeed_5 = L_0;
		// private Vector2 currOffset = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___currOffset_8 = L_1;
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
// System.Void AllIn1SpriteShader.AllIn1ScrollProperty::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ScrollProperty_Start_mE6BC834D939B36CCB58187AC54D7F23529110288 (AllIn1ScrollProperty_t3F39F37FB4DDBD2EF52912BD90C3E06362723CDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11BBC07DB720D8AC1FA700D648938720AD568A4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_1 = NULL;
	{
		// if (mat == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		// SpriteRenderer sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		V_0 = L_2;
		// if (sr != null) mat = sr.material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// if (sr != null) mat = sr.material;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		__this->___mat_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_8), (void*)L_6);
		goto IL_0048;
	}

IL_002c:
	{
		// Image i = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_1 = L_7;
		// if (i != null) mat = i.material;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0048;
		}
	}
	{
		// if (i != null) mat = i.material;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_1;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_10);
		__this->___mat_8 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_8), (void*)L_11);
	}

IL_0048:
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting All1TextureOffsetOverTIme component");
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___mat_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		// if (mat == null) DestroyComponentAndLogError(gameObject.name + " has no valid Material, deleting All1TextureOffsetOverTIme component");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteral11BBC07DB720D8AC1FA700D648938720AD568A4C, NULL);
		AllIn1ScrollProperty_DestroyComponentAndLogError_m08DF53AA0D64B281973FCC7870BAD6738CC8798A(__this, L_16, NULL);
		return;
	}

IL_0072:
	{
		// if (mat.HasProperty(numericPropertyName)) propertyShaderID = Shader.PropertyToID(numericPropertyName);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17 = __this->___mat_8;
		String_t* L_18 = __this->___numericPropertyName_4;
		NullCheck(L_17);
		bool L_19;
		L_19 = Material_HasProperty_mC09A83B44E368A217F606DD4954FA080CC03EC6C(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		// if (mat.HasProperty(numericPropertyName)) propertyShaderID = Shader.PropertyToID(numericPropertyName);
		String_t* L_20 = __this->___numericPropertyName_4;
		int32_t L_21;
		L_21 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(L_20, NULL);
		__this->___propertyShaderID_9 = L_21;
		goto IL_00be;
	}

IL_0098:
	{
		// else DestroyComponentAndLogError(gameObject.name + "'s Material doesn't have a " + numericPropertyName + " property");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		String_t* L_24 = __this->___numericPropertyName_4;
		String_t* L_25;
		L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_23, _stringLiteralA7A626DEA2521BA48EA03C7C5828601203370D81, L_24, _stringLiteral2043A81282FBC38D068F48CE6B02508288E7F859, NULL);
		AllIn1ScrollProperty_DestroyComponentAndLogError_m08DF53AA0D64B281973FCC7870BAD6738CC8798A(__this, L_25, NULL);
	}

IL_00be:
	{
		// currValue = mat.GetFloat(propertyShaderID);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26 = __this->___mat_8;
		int32_t L_27 = __this->___propertyShaderID_9;
		NullCheck(L_26);
		float L_28;
		L_28 = Material_GetFloat_m52462F4AEDE20758BFB592B11DE83A79D2774932(L_26, L_27, NULL);
		__this->___currValue_10 = L_28;
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1ScrollProperty::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ScrollProperty_Update_m786BA4668DE232940CE3F340C2E4A413BA89F441 (AllIn1ScrollProperty_t3F39F37FB4DDBD2EF52912BD90C3E06362723CDB* __this, const RuntimeMethod* method) 
{
	{
		// currValue += scrollSpeed * Time.deltaTime;
		float L_0 = __this->___currValue_10;
		float L_1 = __this->___scrollSpeed_5;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___currValue_10 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// if (applyModulo) currValue %= modulo;
		bool L_3 = __this->___applyModulo_6;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// if (applyModulo) currValue %= modulo;
		float L_4 = __this->___currValue_10;
		float L_5 = __this->___modulo_7;
		__this->___currValue_10 = (fmodf(L_4, L_5));
	}

IL_0034:
	{
		// mat.SetFloat(propertyShaderID, currValue);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___mat_8;
		int32_t L_7 = __this->___propertyShaderID_9;
		float L_8 = __this->___currValue_10;
		NullCheck(L_6);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1ScrollProperty::DestroyComponentAndLogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ScrollProperty_DestroyComponentAndLogError_m08DF53AA0D64B281973FCC7870BAD6738CC8798A (AllIn1ScrollProperty_t3F39F37FB4DDBD2EF52912BD90C3E06362723CDB* __this, String_t* ___logError0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(logError);
		String_t* L_0 = ___logError0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1ScrollProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1ScrollProperty__ctor_m75898645564EBBE6BD8461C4DCA270C37837E6DA (AllIn1ScrollProperty_t3F39F37FB4DDBD2EF52912BD90C3E06362723CDB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0670686C7271ED687162A8ECDDE9AE0929E59B45);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string numericPropertyName = "_RotateUvAmount";
		__this->___numericPropertyName_4 = _stringLiteral0670686C7271ED687162A8ECDDE9AE0929E59B45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___numericPropertyName_4), (void*)_stringLiteral0670686C7271ED687162A8ECDDE9AE0929E59B45);
		// [SerializeField] private float modulo = 1f;
		__this->___modulo_7 = (1.0f);
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
// System.Void AllIn1SpriteShader.Demo2AutoScroll::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo2AutoScroll_Start_mABB9B22649400259B0094CBD8D9442FDEF03DD60 (Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// sceneDescription.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___sceneDescription_6;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Camera.main.fieldOfView = 60f;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_1);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_1, (60.0f), NULL);
		// children = GetComponentsInChildren<Transform>();
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2;
		L_2 = Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28(__this, Component_GetComponentsInChildren_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m75FFF26FD3F8B797CFE939FBA50E014C15E6BE28_RuntimeMethod_var);
		__this->___children_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_4), (void*)L_2);
		// for (int i = 0; i < children.Length; i++)
		V_0 = 0;
		goto IL_006e;
	}

IL_002b:
	{
		// if (children[i].gameObject != gameObject)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___children_4;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		// children[i].gameObject.SetActive(false);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___children_4;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// children[i].localPosition = Vector3.zero;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___children_4;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_18);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_18, L_19, NULL);
	}

IL_006a:
	{
		// for (int i = 0; i < children.Length; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006e:
	{
		// for (int i = 0; i < children.Length; i++)
		int32_t L_21 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_22 = __this->___children_4;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_002b;
		}
	}
	{
		// totalTime = totalTime / (float)children.Length;
		float L_23 = __this->___totalTime_5;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___children_4;
		NullCheck(L_24);
		__this->___totalTime_5 = ((float)(L_23/((float)((int32_t)(((RuntimeArray*)L_24)->max_length)))));
		// StartCoroutine(ScrollElements());
		RuntimeObject* L_25;
		L_25 = Demo2AutoScroll_ScrollElements_mD8734ED8666C1134D0DF08BFCC18C4AEFA36219D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_25, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AllIn1SpriteShader.Demo2AutoScroll::ScrollElements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Demo2AutoScroll_ScrollElements_mD8734ED8666C1134D0DF08BFCC18C4AEFA36219D (Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* L_0 = (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052*)il2cpp_codegen_object_new(U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CScrollElementsU3Ed__4__ctor_mEE8279239A5D1314557C7096F0F08C650043CA11(L_0, 0, NULL);
		U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AllIn1SpriteShader.Demo2AutoScroll::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demo2AutoScroll__ctor_m26086D4D4F02827658E59E3214FE52B1A46C04E9 (Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScrollElementsU3Ed__4__ctor_mEE8279239A5D1314557C7096F0F08C650043CA11 (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScrollElementsU3Ed__4_System_IDisposable_Dispose_m0A0919B0B3641AF98452D9BB1A024BA6E18ABB67 (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScrollElementsU3Ed__4_MoveNext_mB7AE0ECC9F8A1F1D3F87C3D3D65F1B7970B78B54 (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// int i = 0;
		__this->___U3CiU3E5__2_3 = 0;
	}

IL_0025:
	{
		// if (children[i].gameObject == gameObject)
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_4 = V_1;
		NullCheck(L_4);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = L_4->___children_4;
		int32_t L_6 = __this->___U3CiU3E5__2_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		// i = (i + 1) % children.Length;
		int32_t L_13 = __this->___U3CiU3E5__2_3;
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_14 = V_1;
		NullCheck(L_14);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = L_14->___children_4;
		NullCheck(L_15);
		__this->___U3CiU3E5__2_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_13, 1))%((int32_t)(((RuntimeArray*)L_15)->max_length))));
		// continue;
		goto IL_0025;
	}

IL_005d:
	{
		// children[i].gameObject.SetActive(true);
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_16 = V_1;
		NullCheck(L_16);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = L_16->___children_4;
		int32_t L_18 = __this->___U3CiU3E5__2_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
		// yield return new WaitForSeconds(totalTime);
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_22 = V_1;
		NullCheck(L_22);
		float L_23 = L_22->___totalTime_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_24 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_24, L_23, NULL);
		__this->___U3CU3E2__current_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_24);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// children[i].gameObject.SetActive(false);
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_25 = V_1;
		NullCheck(L_25);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_26 = L_25->___children_4;
		int32_t L_27 = __this->___U3CiU3E5__2_3;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// i = (i + 1) % children.Length;
		int32_t L_31 = __this->___U3CiU3E5__2_3;
		Demo2AutoScroll_t12006E3D396C7F456440B15BCD10DA4BFB73D0D5* L_32 = V_1;
		NullCheck(L_32);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_33 = L_32->___children_4;
		NullCheck(L_33);
		__this->___U3CiU3E5__2_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_31, 1))%((int32_t)(((RuntimeArray*)L_33)->max_length))));
		// while (true)
		goto IL_0025;
	}
}
// System.Object AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScrollElementsU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CA32E4A830CD386F67AA70ADE2EA60CA3EDFCB2 (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScrollElementsU3Ed__4_System_Collections_IEnumerator_Reset_m7B8367872DED430F6B29EB5FC21F3923BE5C02E7 (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScrollElementsU3Ed__4_System_Collections_IEnumerator_Reset_m7B8367872DED430F6B29EB5FC21F3923BE5C02E7_RuntimeMethod_var)));
	}
}
// System.Object AllIn1SpriteShader.Demo2AutoScroll/<ScrollElements>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScrollElementsU3Ed__4_System_Collections_IEnumerator_get_Current_mFF2E0DD7C80FAE6DFD13B57A94CF7D283FC9C3A5 (U3CScrollElementsU3Ed__4_t6F0E24FEEECFEC8F08CF5B2A8352F97A8B4E2052* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1SpriteShader.DemoCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCamera_Awake_m27979EA3EBE17860BDFEC0D7F1B832C541E39DEB (DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* __this, const RuntimeMethod* method) 
{
	{
		// offset = transform.position - targetedItem.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___targetedItem_4;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_3, NULL);
		__this->___offset_7 = L_4;
		// StartCoroutine(SetCamAfterStart());
		RuntimeObject* L_5;
		L_5 = DemoCamera_SetCamAfterStart_m4DCF4B4BBDCEAAB36212D7DF64E0DECD0C590F8E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCamera_Update_m793A0FB542E9DFBA660EE2E13BED3EAB7F900CD3 (DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* __this, const RuntimeMethod* method) 
{
	{
		// if (!canUpdate) return;
		bool L_0 = __this->___canUpdate_9;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!canUpdate) return;
		return;
	}

IL_0009:
	{
		// target.y = demoController.GetCurrExpositor() * demoController.expositorDistance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (&__this->___target_8);
		All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* L_2 = __this->___demoController_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = All1ShaderDemoController_GetCurrExpositor_mDFB94C042A2717616ECAF4121CB12FA509DE4CC8_inline(L_2, NULL);
		All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* L_4 = __this->___demoController_5;
		NullCheck(L_4);
		float L_5 = L_4->___expositorDistance_7;
		L_1->___y_3 = ((float)il2cpp_codegen_multiply(((float)L_3), L_5));
		// transform.position = Vector3.Lerp(transform.position, target, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___target_8;
		float L_10 = __this->___speed_6;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_12, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AllIn1SpriteShader.DemoCamera::SetCamAfterStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoCamera_SetCamAfterStart_m4DCF4B4BBDCEAAB36212D7DF64E0DECD0C590F8E (DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* L_0 = (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B*)il2cpp_codegen_object_new(U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSetCamAfterStartU3Ed__8__ctor_m290FA5EB64BBE067BF31D02C6BACE94BB2E6CB8E(L_0, 0, NULL);
		U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void AllIn1SpriteShader.DemoCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCamera__ctor_m601FC724B95E55F926C09F095F6217A35729808D (DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCamAfterStartU3Ed__8__ctor_m290FA5EB64BBE067BF31D02C6BACE94BB2E6CB8E (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCamAfterStartU3Ed__8_System_IDisposable_Dispose_m5FBBEA26180468DB988F87C364B18F8454647EFD (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSetCamAfterStartU3Ed__8_MoveNext_m17E5498A288C3B389314303DD5C8575511BEA68C (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// transform.position = targetedItem.position + offset;
		DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* L_4 = V_1;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = L_6->___targetedItem_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* L_9 = V_1;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___offset_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_10, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_11, NULL);
		// target = transform.position;
		DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* L_12 = V_1;
		DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		NullCheck(L_12);
		L_12->___target_8 = L_15;
		// canUpdate = true;
		DemoCamera_t5AEA20EE40985E5356C6AE891C261A691DFB662D* L_16 = V_1;
		NullCheck(L_16);
		L_16->___canUpdate_9 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetCamAfterStartU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8C673005B63E43F151771301B3A90B6512FA6BFC (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetCamAfterStartU3Ed__8_System_Collections_IEnumerator_Reset_mEA7774D0E3729A84AF868A7A6E2C2A000FDE54D0 (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSetCamAfterStartU3Ed__8_System_Collections_IEnumerator_Reset_mEA7774D0E3729A84AF868A7A6E2C2A000FDE54D0_RuntimeMethod_var)));
	}
}
// System.Object AllIn1SpriteShader.DemoCamera/<SetCamAfterStart>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSetCamAfterStartU3Ed__8_System_Collections_IEnumerator_get_Current_mE0D7CF88BD1E153B0ED8670A18A7C12DED50CF3B (U3CSetCamAfterStartU3Ed__8_t94553A73D950739D53477AB1B4A787EE22E2B53B* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1SpriteShader.DemoCircleExpositor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCircleExpositor_Start_m0EE125625B94E7098E107498FE11B467CDD18EDB (DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// dummyRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		__this->___dummyRotation_12 = L_1;
		// iniY = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___y_3;
		__this->___iniY_11 = L_4;
		// items = new Transform[transform.childCount];
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_5, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_7 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___items_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___items_7), (void*)L_7);
		// foreach (Transform child in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_008d;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_008d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_004b_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// items[count] = child;
				TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___items_7;
				int32_t L_16 = __this->___count_8;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_1;
				NullCheck(L_15);
				ArrayElementTypeCheck (L_15, L_17);
				(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_17);
				// count++;
				int32_t L_18 = __this->___count_8;
				__this->___count_8 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			}

IL_0073_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_19 = V_0;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_004b_1;
				}
			}
			{
				goto IL_008e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008e:
	{
		// offsetRotation = 360.0f / count;
		int32_t L_21 = __this->___count_8;
		__this->___offsetRotation_10 = ((float)((360.0f)/((float)L_21)));
		// for (int i = 0; i < count; i++)
		V_3 = 0;
		goto IL_00fa;
	}

IL_00a5:
	{
		// float angle = i * Mathf.PI * 2f / count;
		int32_t L_22 = V_3;
		int32_t L_23 = __this->___count_8;
		V_4 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_22), (3.14159274f))), (2.0f)))/((float)L_23)));
		// Vector3 newPos = new Vector3(Mathf.Sin(angle) * radius, iniY, -Mathf.Cos(angle) * radius);
		float L_24 = V_4;
		float L_25;
		L_25 = sinf(L_24);
		float L_26 = __this->___radius_4;
		float L_27 = __this->___iniY_11;
		float L_28 = V_4;
		float L_29;
		L_29 = cosf(L_28);
		float L_30 = __this->___radius_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), ((float)il2cpp_codegen_multiply(L_25, L_26)), L_27, ((float)il2cpp_codegen_multiply(((-L_29)), L_30)), NULL);
		// items[i].position = newPos;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_31 = __this->___items_7;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_5;
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_35, NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00fa:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_37 = V_3;
		int32_t L_38 = __this->___count_8;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_00a5;
		}
	}
	{
		// zOffset = radius - 40f;
		float L_39 = __this->___radius_4;
		__this->___zOffset_6 = ((float)il2cpp_codegen_subtract(L_39, (40.0f)));
		// transform.position = new Vector3(transform.position.x, transform.position.y, zOffset);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		float L_46 = L_45.___y_3;
		float L_47 = __this->___zOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_48), L_43, L_46, L_47, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_48, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoCircleExpositor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCircleExpositor_Update_m096F731201CB0BB7D434D925CEEF4E27252F7605 (DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* __this, const RuntimeMethod* method) 
{
	{
		// transform.rotation = Quaternion.Slerp(transform.rotation, dummyRotation, rotateSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_1, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = __this->___dummyRotation_12;
		float L_4 = __this->___rotateSpeed_5;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_Slerp_m0A9969F500E7716EA4F6BC4E7D5464372D8E9E15(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		NullCheck(L_0);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoCircleExpositor::ChangeTarget(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCircleExpositor_ChangeTarget_m8C42D720A0AE3AA5FD8976F739F3AF3E21D59381 (DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* __this, int32_t ___offset0, const RuntimeMethod* method) 
{
	{
		// currentTarget += offset;
		int32_t L_0 = __this->___currentTarget_9;
		int32_t L_1 = ___offset0;
		__this->___currentTarget_9 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// if (currentTarget > items.Length - 1) currentTarget = 0;
		int32_t L_2 = __this->___currentTarget_9;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___items_7;
		NullCheck(L_3);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), 1)))))
		{
			goto IL_0029;
		}
	}
	{
		// if (currentTarget > items.Length - 1) currentTarget = 0;
		__this->___currentTarget_9 = 0;
		goto IL_0042;
	}

IL_0029:
	{
		// else if (currentTarget < 0) currentTarget = items.Length - 1;
		int32_t L_4 = __this->___currentTarget_9;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// else if (currentTarget < 0) currentTarget = items.Length - 1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___items_7;
		NullCheck(L_5);
		__this->___currentTarget_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
	}

IL_0042:
	{
		// dummyRotation *= Quaternion.Euler(Vector3.up * (offset * offsetRotation));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = __this->___dummyRotation_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		int32_t L_8 = ___offset0;
		float L_9 = __this->___offsetRotation_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, ((float)il2cpp_codegen_multiply(((float)L_8), L_9)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_6, L_11, NULL);
		__this->___dummyRotation_12 = L_12;
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoCircleExpositor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoCircleExpositor__ctor_mA16CBCB225BFAEFA35331B2C519BDC1CED564B93 (DemoCircleExpositor_t48DBA5CA1C038D6FA15493F3468642F564402809* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float radius = 40f;
		__this->___radius_4 = (40.0f);
		// [SerializeField] private float rotateSpeed = 10f;
		__this->___rotateSpeed_5 = (10.0f);
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
// System.Void AllIn1SpriteShader.DemoItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoItem_Update_mAA7056C6BC3C3F1102F32BDC4C52B60847B56E08 (DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.LookAt(transform.position + lookAtZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ((DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_StaticFields*)il2cpp_codegen_static_fields_for(DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_il2cpp_TypeInfo_var))->___lookAtZ_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		NullCheck(L_0);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoItem__ctor_mDFA30B5CCF3AB2B92F1561BE90B731EE2DC6D9F6 (DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoItem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoItem__cctor_m39AB58917EFF462896583C130B66AB8DFBEEB26E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Vector3 lookAtZ = new Vector3(0, 0, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_StaticFields*)il2cpp_codegen_static_fields_for(DemoItem_t4EFBB00F5089E631E8ABB5DFD7D979CC9ED01978_il2cpp_TypeInfo_var))->___lookAtZ_4 = L_0;
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
// System.Void AllIn1SpriteShader.DemoRandomColorSwap::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoRandomColorSwap_Start_m5675B4DFFD3C9DD1BCB72FA2849B912C479782D5 (DemoRandomColorSwap_tB456756AD84F4AB1A06BDB1C74E3A346DE39D37E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13526C924AA381E6DAF2C89BAC639C26785229A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5CC3B4E870360B37F4D71DFDCBCA18CA78C9BF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpriteRenderer sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		// if (sr != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		// mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_2, NULL);
		__this->___mat_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_4), (void*)L_3);
		// if (mat != null) InvokeRepeating(nameof(NewColor), 0.0f, 0.6f);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___mat_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// if (mat != null) InvokeRepeating(nameof(NewColor), 0.0f, 0.6f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteralA5CC3B4E870360B37F4D71DFDCBCA18CA78C9BF3, (0.0f), (0.600000024f), NULL);
		return;
	}

IL_0043:
	{
		// Debug.LogError("No material found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral13526C924AA381E6DAF2C89BAC639C26785229A7, NULL);
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoRandomColorSwap::NewColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoRandomColorSwap_NewColor_m211A60CC3323769F8AFADE04F97B916DD993EEF9 (DemoRandomColorSwap_tB456756AD84F4AB1A06BDB1C74E3A346DE39D37E* __this, const RuntimeMethod* method) 
{
	{
		// mat.SetColor(colorSwapRed, GenerateColor());
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___mat_4;
		int32_t L_1 = __this->___colorSwapRed_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = DemoRandomColorSwap_GenerateColor_m1883260D9A78107E0584BF7ED9D8831271F7EC1A(__this, NULL);
		NullCheck(L_0);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_0, L_1, L_2, NULL);
		// mat.SetColor(colorSwapGreen, GenerateColor());
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___mat_4;
		int32_t L_4 = __this->___colorSwapGreen_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = DemoRandomColorSwap_GenerateColor_m1883260D9A78107E0584BF7ED9D8831271F7EC1A(__this, NULL);
		NullCheck(L_3);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_3, L_4, L_5, NULL);
		// mat.SetColor(colorSwapBlue, GenerateColor());
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___mat_4;
		int32_t L_7 = __this->___colorSwapBlue_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = DemoRandomColorSwap_GenerateColor_m1883260D9A78107E0584BF7ED9D8831271F7EC1A(__this, NULL);
		NullCheck(L_6);
		Material_SetColor_m573C88F2FB1B5A978C53A197B414F9E9C6AC5B9A(L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// UnityEngine.Color AllIn1SpriteShader.DemoRandomColorSwap::GenerateColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F DemoRandomColorSwap_GenerateColor_m1883260D9A78107E0584BF7ED9D8831271F7EC1A (DemoRandomColorSwap_tB456756AD84F4AB1A06BDB1C74E3A346DE39D37E* __this, const RuntimeMethod* method) 
{
	{
		// return new Color(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f), 1f);
		float L_0;
		L_0 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		float L_1;
		L_1 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), L_0, L_1, L_2, (1.0f), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void AllIn1SpriteShader.DemoRandomColorSwap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoRandomColorSwap__ctor_m781E70B033F3E2DFD5082B7E246BF9D5BEC02E6D (DemoRandomColorSwap_tB456756AD84F4AB1A06BDB1C74E3A346DE39D37E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A24A92BBBDBE76F988FEBAB0D8D2D7E6137576F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA14DC444C9CB687D6C3004779D620E50C9590C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD153D3723DF9D1F4CDD31A1F55A54CD82108ED26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int colorSwapRed = Shader.PropertyToID("_ColorSwapRed");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralAA14DC444C9CB687D6C3004779D620E50C9590C5, NULL);
		__this->___colorSwapRed_5 = L_0;
		// private readonly int colorSwapGreen = Shader.PropertyToID("_ColorSwapGreen");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralD153D3723DF9D1F4CDD31A1F55A54CD82108ED26, NULL);
		__this->___colorSwapGreen_6 = L_1;
		// private readonly int colorSwapBlue = Shader.PropertyToID("_ColorSwapBlue");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral8A24A92BBBDBE76F988FEBAB0D8D2D7E6137576F, NULL);
		__this->___colorSwapBlue_7 = L_2;
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
// System.Void AllIn1SpriteShader.DemoRepositionExpositor::RepositionExpositor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoRepositionExpositor_RepositionExpositor_m18829F5C32777B9A3D7318A73A8764BB125628E4 (DemoRepositionExpositor_tD723A415DCECAFC2C19D349E6CAE955A2E71E78A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// int i = 0;
		V_0 = 0;
		// Vector3 tempLocalPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_0;
		// foreach (Transform child in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_1, NULL);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_2;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_3;
					if (!L_4)
					{
						goto IL_0055;
					}
				}
				{
					RuntimeObject* L_5 = V_3;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0055:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0016_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				// tempLocalPos.x = i * paddingX;
				int32_t L_8 = V_0;
				float L_9 = __this->___paddingX_4;
				(&V_1)->___x_2 = ((float)il2cpp_codegen_multiply(((float)L_8), L_9));
				// child.localPosition = tempLocalPos;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_7, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_10, NULL);
				// i++;
				int32_t L_11 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_003b_1:
			{
				// foreach (Transform child in transform)
				RuntimeObject* L_12 = V_2;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.DemoRepositionExpositor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoRepositionExpositor__ctor_m5347D01328E3241E1E977E5ABD24FC45880AE6C1 (DemoRepositionExpositor_tD723A415DCECAFC2C19D349E6CAE955A2E71E78A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float paddingX = 10f;
		__this->___paddingX_4 = (10.0f);
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
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline_Update_mE0C2CBFF12423B66B8A9F92CE3F12D3DA31EDE44 (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_0 = NULL;
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// if (createUnifiedOutline)
		bool L_0 = __this->___createUnifiedOutline_8;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		// if (outlineMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___outlineMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// createUnifiedOutline = false;
		__this->___createUnifiedOutline_8 = (bool)0;
		// MissingMaterial();
		All1CreateUnifiedOutline_MissingMaterial_mE0920885C30D5272768E4888B27CD932310E8A53(__this, NULL);
		// return;
		return;
	}

IL_0024:
	{
		// List<Transform> children = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_3, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		V_0 = L_3;
		// GetAllChildren(transform, ref children);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		All1CreateUnifiedOutline_GetAllChildren_mD121787BABC3AEFEB15C1D384C82915BC12C98D7(__this, L_4, (&V_0), NULL);
		// foreach (Transform t in children) CreateOutlineSpriteDuplicate(t.gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_5 = V_0;
		NullCheck(L_5);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_6;
		L_6 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_5, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_1), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0055_1;
			}

IL_0041_1:
			{
				// foreach (Transform t in children) CreateOutlineSpriteDuplicate(t.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
				L_7 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_1), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				V_2 = L_7;
				// foreach (Transform t in children) CreateOutlineSpriteDuplicate(t.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_2;
				NullCheck(L_8);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
				L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
				All1CreateUnifiedOutline_CreateOutlineSpriteDuplicate_m465A4CAC7620153168468FD97AF94493ABE6E3A5(__this, L_9, NULL);
			}

IL_0055_1:
			{
				// foreach (Transform t in children) CreateOutlineSpriteDuplicate(t.gameObject);
				bool L_10;
				L_10 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_1), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0041_1;
				}
			}
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		// CreateOutlineSpriteDuplicate(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		All1CreateUnifiedOutline_CreateOutlineSpriteDuplicate_m465A4CAC7620153168468FD97AF94493ABE6E3A5(__this, L_11, NULL);
		// DestroyImmediate(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(__this, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::CreateOutlineSpriteDuplicate(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline_CreateOutlineSpriteDuplicate_m465A4CAC7620153168468FD97AF94493ABE6E3A5 (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* V_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// bool objectIsUi = false;
		V_0 = (bool)0;
		// SpriteRenderer ownSr = target.GetComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___target0;
		NullCheck(L_0);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9(L_0, GameObject_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m8EE7EDCCEECA15A55F6D81B522B17AFB14AB25F9_RuntimeMethod_var);
		V_1 = L_1;
		// Image ownImage = target.GetComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___target0;
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		V_2 = L_3;
		// if (ownSr != null) objectIsUi = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		// if (ownSr != null) objectIsUi = false;
		V_0 = (bool)0;
		goto IL_0050;
	}

IL_001d:
	{
		// else if (ownImage != null) objectIsUi = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// else if (ownImage != null) objectIsUi = true;
		V_0 = (bool)1;
		goto IL_0050;
	}

IL_002a:
	{
		// else if (ownSr == null && ownImage == null && !transform.Equals(outlineParentTransform)) return;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0050;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___outlineParentTransform_5;
		NullCheck(L_12);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_12, L_13);
		if (L_14)
		{
			goto IL_0050;
		}
	}
	{
		// else if (ownSr == null && ownImage == null && !transform.Equals(outlineParentTransform)) return;
		return;
	}

IL_0050:
	{
		// GameObject objDuplicate = new GameObject();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_15, NULL);
		V_3 = L_15;
		// objDuplicate.name = target.name + "Outline";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = ___target0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		NullCheck(L_16);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_16, L_19, NULL);
		// objDuplicate.transform.position = target.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_3;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = ___target0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_22, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		NullCheck(L_21);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_24, NULL);
		// objDuplicate.transform.rotation = target.transform.rotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_3;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = ___target0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_28, NULL);
		NullCheck(L_26);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_26, L_29, NULL);
		// objDuplicate.transform.localScale = target.transform.lossyScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_3;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = ___target0;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_33, NULL);
		NullCheck(L_31);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_31, L_34, NULL);
		// if (outlineParentTransform == null) objDuplicate.transform.parent = target.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___outlineParentTransform_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_35, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}
	{
		// if (outlineParentTransform == null) objDuplicate.transform.parent = target.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
		NullCheck(L_37);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = ___target0;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		NullCheck(L_38);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_38, L_40, NULL);
		goto IL_00e0;
	}

IL_00cf:
	{
		// else objDuplicate.transform.parent = outlineParentTransform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_3;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43 = __this->___outlineParentTransform_5;
		NullCheck(L_42);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_42, L_43, NULL);
	}

IL_00e0:
	{
		// if (!objectIsUi)
		bool L_44 = V_0;
		if (L_44)
		{
			goto IL_0131;
		}
	}
	{
		// SpriteRenderer sr = objDuplicate.AddComponent<SpriteRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_3;
		NullCheck(L_45);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46;
		L_46 = GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4(L_45, GameObject_AddComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_mC0705A0CDAD279A507AA0FD4425FB60968CCE8C4_RuntimeMethod_var);
		// sr.sprite = ownSr.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_47 = L_46;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_48 = V_1;
		NullCheck(L_48);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_49;
		L_49 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_48, NULL);
		NullCheck(L_47);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_47, L_49, NULL);
		// sr.sortingOrder = duplicateOrderInLayer;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_50 = L_47;
		int32_t L_51 = __this->___duplicateOrderInLayer_6;
		NullCheck(L_50);
		Renderer_set_sortingOrder_m4C67F002AD68CA0D55D20D6B78CDED3DB24467DA(L_50, L_51, NULL);
		// sr.sortingLayerName = duplicateSortingLayer;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_52 = L_50;
		String_t* L_53 = __this->___duplicateSortingLayer_7;
		NullCheck(L_52);
		Renderer_set_sortingLayerName_mF335BAE30015B49C27FF3C063B033E44C237AC8A(L_52, L_53, NULL);
		// sr.material = outlineMaterial;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_54 = L_52;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = __this->___outlineMaterial_4;
		NullCheck(L_54);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_54, L_55, NULL);
		// sr.flipX = ownSr.flipX;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_56 = L_54;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_57 = V_1;
		NullCheck(L_57);
		bool L_58;
		L_58 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_57, NULL);
		NullCheck(L_56);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_56, L_58, NULL);
		// sr.flipY = ownSr.flipY;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_59 = V_1;
		NullCheck(L_59);
		bool L_60;
		L_60 = SpriteRenderer_get_flipY_m2277917491792E562B37BFBF77513E12FFF6F75F(L_59, NULL);
		NullCheck(L_56);
		SpriteRenderer_set_flipY_mB3B2BF1BF87C6BC2DE1795CA4698726091E1FEFA(L_56, L_60, NULL);
		return;
	}

IL_0131:
	{
		// Image image = objDuplicate.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_3;
		NullCheck(L_61);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_62;
		L_62 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_61, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// image.sprite = ownImage.sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_63 = L_62;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64 = V_2;
		NullCheck(L_64);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_65;
		L_65 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_64, NULL);
		NullCheck(L_63);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_63, L_65, NULL);
		// image.material = outlineMaterial;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_66 = __this->___outlineMaterial_4;
		NullCheck(L_63);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_63, L_66);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::MissingMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline_MissingMaterial_mE0920885C30D5272768E4888B27CD932310E8A53 (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::GetAllChildren(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Transform>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline_GetAllChildren_mD121787BABC3AEFEB15C1D384C82915BC12C98D7 (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** ___transforms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (Transform child in parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0009_1:
			{
				// foreach (Transform child in parent)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// transforms.Add(child);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** L_7 = ___transforms1;
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_8 = *((List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D**)L_7);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
				NullCheck(L_8);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_8, L_9, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
				// GetAllChildren(child, ref transforms);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** L_11 = ___transforms1;
				All1CreateUnifiedOutline_GetAllChildren_mD121787BABC3AEFEB15C1D384C82915BC12C98D7(__this, L_10, L_11, NULL);
			}

IL_0025_1:
			{
				// foreach (Transform child in parent)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.All1CreateUnifiedOutline::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void All1CreateUnifiedOutline__ctor_m2EBE587DE018F14207CEDD2E5F58071CAC6974FD (All1CreateUnifiedOutline_tAD27B30BC35D2FEAD10348F2778B0770C764502E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private int duplicateOrderInLayer = -100;
		__this->___duplicateOrderInLayer_6 = ((int32_t)-100);
		// [SerializeField] private string duplicateSortingLayer = "Default";
		__this->___duplicateSortingLayer_7 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___duplicateSortingLayer_7), (void*)_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
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
// System.Void AllIn1SpriteShader.AllIn1Shader::MakeNewMaterial(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_MakeNewMaterial_mDFFA8CEF9D219C41544035C62F044D42519F7D88 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, bool ___getShaderTypeFromPrefs0, String_t* ___shaderName1, const RuntimeMethod* method) 
{
	{
		// SetMaterial(AfterSetAction.Clear, getShaderTypeFromPrefs, shaderName);
		bool L_0 = ___getShaderTypeFromPrefs0;
		String_t* L_1 = ___shaderName1;
		AllIn1Shader_SetMaterial_mFB4610A2350B9E76A2FD3EC0EF25AA87591C2A2E(__this, 0, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::MakeCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_MakeCopy_mA23F2843310EA20ECA6A1388A449A265E48D8363 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(AfterSetAction.CopyMaterial, false, GetStringFromShaderType());
		String_t* L_0;
		L_0 = AllIn1Shader_GetStringFromShaderType_m2E9392FE3054652262B421F6CBB973CD0B181E6D(__this, NULL);
		AllIn1Shader_SetMaterial_mFB4610A2350B9E76A2FD3EC0EF25AA87591C2A2E(__this, 1, (bool)0, L_0, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::ResetAllProperties(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_ResetAllProperties_mB6AF55493FB94DFFC2FFDB5C4ECEEC87CE5DA498 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, bool ___getShaderTypeFromPrefs0, String_t* ___shaderName1, const RuntimeMethod* method) 
{
	{
		// SetMaterial(AfterSetAction.Reset, getShaderTypeFromPrefs, shaderName);
		bool L_0 = ___getShaderTypeFromPrefs0;
		String_t* L_1 = ___shaderName1;
		AllIn1Shader_SetMaterial_mFB4610A2350B9E76A2FD3EC0EF25AA87591C2A2E(__this, 2, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String AllIn1SpriteShader.AllIn1Shader::GetStringFromShaderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AllIn1Shader_GetStringFromShaderType_m2E9392FE3054652262B421F6CBB973CD0B181E6D (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E70DB3EED474F0B3BC0F85291266523C145CAC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91091474F29416A7473D8C4907A4C9072DF22614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral954CBAF7304A4F535054ED74F9ADC7D966A8B2D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8DE5A01354A14D63623212DAD24AF32886D3324);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (shaderTypes == ShaderTypes.Default) return "AllIn1SpriteShader";
		int32_t L_0 = __this->___shaderTypes_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (shaderTypes == ShaderTypes.Default) return "AllIn1SpriteShader";
		return _stringLiteral954CBAF7304A4F535054ED74F9ADC7D966A8B2D8;
	}

IL_000e:
	{
		// else if (shaderTypes == ShaderTypes.ScaledTime) return "AllIn1SpriteShaderScaledTime";
		int32_t L_1 = __this->___shaderTypes_4;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		// else if (shaderTypes == ShaderTypes.ScaledTime) return "AllIn1SpriteShaderScaledTime";
		return _stringLiteralC8DE5A01354A14D63623212DAD24AF32886D3324;
	}

IL_001d:
	{
		// else if (shaderTypes == ShaderTypes.MaskedUI) return "AllIn1SpriteShaderUiMask";
		int32_t L_2 = __this->___shaderTypes_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_002c;
		}
	}
	{
		// else if (shaderTypes == ShaderTypes.MaskedUI) return "AllIn1SpriteShaderUiMask";
		return _stringLiteral91091474F29416A7473D8C4907A4C9072DF22614;
	}

IL_002c:
	{
		// else if (shaderTypes == ShaderTypes.Urp2dRenderer) return "AllIn1Urp2dRenderer";
		int32_t L_3 = __this->___shaderTypes_4;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_003b;
		}
	}
	{
		// else if (shaderTypes == ShaderTypes.Urp2dRenderer) return "AllIn1Urp2dRenderer";
		return _stringLiteral1E70DB3EED474F0B3BC0F85291266523C145CAC4;
	}

IL_003b:
	{
		// else return "AllIn1SpriteShader";
		return _stringLiteral954CBAF7304A4F535054ED74F9ADC7D966A8B2D8;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetMaterial(AllIn1SpriteShader.AllIn1Shader/AfterSetAction,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetMaterial_mFB4610A2350B9E76A2FD3EC0EF25AA87591C2A2E (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, int32_t ___action0, bool ___getShaderTypeFromPrefs1, String_t* ___shaderName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E70DB3EED474F0B3BC0F85291266523C145CAC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A7D7134699CC119AD32B86F73B3360AC11C2F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B53DCE4436A2C5C9F1731C6214E68BCC824C12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91091474F29416A7473D8C4907A4C9072DF22614);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8DE5A01354A14D63623212DAD24AF32886D3324);
		s_Il2CppMethodInitialized = true;
	}
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// Shader allIn1Shader = Resources.Load(shaderName, typeof(Shader)) as Shader;
		String_t* L_0 = ___shaderName2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(L_0, L_2, NULL);
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)IsInstSealed((RuntimeObject*)L_3, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		// if (getShaderTypeFromPrefs)
		bool L_4 = ___getShaderTypeFromPrefs1;
		if (!L_4)
		{
			goto IL_0082;
		}
	}
	{
		// int shaderVariant = PlayerPrefs.GetInt("allIn1DefaultShader");
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral83A7D7134699CC119AD32B86F73B3360AC11C2F9, NULL);
		V_1 = L_5;
		// if (shaderVariant == 1) allIn1Shader = Resources.Load("AllIn1SpriteShaderScaledTime", typeof(Shader)) as Shader;
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// if (shaderVariant == 1) allIn1Shader = Resources.Load("AllIn1SpriteShaderScaledTime", typeof(Shader)) as Shader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_9;
		L_9 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(_stringLiteralC8DE5A01354A14D63623212DAD24AF32886D3324, L_8, NULL);
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)IsInstSealed((RuntimeObject*)L_9, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		goto IL_0082;
	}

IL_0044:
	{
		// else if (shaderVariant == 2) allIn1Shader = Resources.Load("AllIn1SpriteShaderUiMask", typeof(Shader)) as Shader;
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0064;
		}
	}
	{
		// else if (shaderVariant == 2) allIn1Shader = Resources.Load("AllIn1SpriteShaderUiMask", typeof(Shader)) as Shader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_13;
		L_13 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(_stringLiteral91091474F29416A7473D8C4907A4C9072DF22614, L_12, NULL);
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)IsInstSealed((RuntimeObject*)L_13, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
		goto IL_0082;
	}

IL_0064:
	{
		// else if (shaderVariant == 3) allIn1Shader = Resources.Load("AllIn1Urp2dRenderer", typeof(Shader)) as Shader;
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_0082;
		}
	}
	{
		// else if (shaderVariant == 3) allIn1Shader = Resources.Load("AllIn1Urp2dRenderer", typeof(Shader)) as Shader;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_17;
		L_17 = Resources_Load_m6CD8FBBCCFFF22179FA0E7B1806B888103008D33(_stringLiteral1E70DB3EED474F0B3BC0F85291266523C145CAC4, L_16, NULL);
		V_0 = ((Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692*)IsInstSealed((RuntimeObject*)L_17, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692_il2cpp_TypeInfo_var));
	}

IL_0082:
	{
		// if (!Application.isPlaying && Application.isEditor && allIn1Shader != null)
		bool L_18;
		L_18 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (L_18)
		{
			goto IL_01c6;
		}
	}
	{
		bool L_19;
		L_19 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_19)
		{
			goto IL_01c6;
		}
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_01c6;
		}
	}
	{
		// bool rendererExists = false;
		V_2 = (bool)0;
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22;
		L_22 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		// if (sr != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0135;
		}
	}
	{
		// rendererExists = true;
		V_2 = (bool)1;
		// int renderingQueue = 3000;
		V_3 = ((int32_t)3000);
		// if(action == AfterSetAction.CopyMaterial) renderingQueue = GetComponent<Renderer>().sharedMaterial.renderQueue;
		int32_t L_24 = ___action0;
		if ((!(((uint32_t)L_24) == ((uint32_t)1))))
		{
			goto IL_00d2;
		}
	}
	{
		// if(action == AfterSetAction.CopyMaterial) renderingQueue = GetComponent<Renderer>().sharedMaterial.renderQueue;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25;
		L_25 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_25, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_26, NULL);
		V_3 = L_27;
	}

IL_00d2:
	{
		// prevMaterial = new Material(GetComponent<Renderer>().sharedMaterial);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28;
		L_28 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_28);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29;
		L_29 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_28, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_30, L_29, NULL);
		__this->___prevMaterial_6 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prevMaterial_6), (void*)L_30);
		// currMaterial = new Material(allIn1Shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_31 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_32, L_31, NULL);
		__this->___currMaterial_5 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_5), (void*)L_32);
		// currMaterial.renderQueue = renderingQueue;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___currMaterial_5;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_33, L_34, NULL);
		// GetComponent<Renderer>().sharedMaterial = currMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_35;
		L_35 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36 = __this->___currMaterial_5;
		NullCheck(L_35);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_35, L_36, NULL);
		// GetComponent<Renderer>().sharedMaterial.hideFlags = HideFlags.None;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_37;
		L_37 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_37, NULL);
		NullCheck(L_38);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_38, 0, NULL);
		// matAssigned = true;
		__this->___matAssigned_7 = (bool)1;
		// DoAfterSetAction(action);
		int32_t L_39 = ___action0;
		AllIn1Shader_DoAfterSetAction_mE9D526214E1A09EFF8866879EEB600BD922F4A35(__this, L_39, NULL);
		goto IL_01b5;
	}

IL_0135:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_40;
		L_40 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_4 = L_40;
		// if (img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_41 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_41, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_42)
		{
			goto IL_01b5;
		}
	}
	{
		// rendererExists = true;
		V_2 = (bool)1;
		// int renderingQueue = 3000;
		V_5 = ((int32_t)3000);
		// if(action == AfterSetAction.CopyMaterial) renderingQueue = img.material.renderQueue;
		int32_t L_43 = ___action0;
		if ((!(((uint32_t)L_43) == ((uint32_t)1))))
		{
			goto IL_0162;
		}
	}
	{
		// if(action == AfterSetAction.CopyMaterial) renderingQueue = img.material.renderQueue;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_44 = V_4;
		NullCheck(L_44);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45;
		L_45 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_44);
		NullCheck(L_45);
		int32_t L_46;
		L_46 = Material_get_renderQueue_mC427C54D2667620CBB845559DA4DA31BE166C757(L_45, NULL);
		V_5 = L_46;
	}

IL_0162:
	{
		// prevMaterial = new Material(img.material);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_47 = V_4;
		NullCheck(L_47);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_48;
		L_48 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_47);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_49, L_48, NULL);
		__this->___prevMaterial_6 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prevMaterial_6), (void*)L_49);
		// currMaterial = new Material(allIn1Shader);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_50 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_51, L_50, NULL);
		__this->___currMaterial_5 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_5), (void*)L_51);
		// currMaterial.renderQueue = renderingQueue;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52 = __this->___currMaterial_5;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		Material_set_renderQueue_mFBB72A781DCCF0D4B85670B597788EC2D02D1C14(L_52, L_53, NULL);
		// img.material = currMaterial;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_54 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_55 = __this->___currMaterial_5;
		NullCheck(L_54);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_54, L_55);
		// img.material.hideFlags = HideFlags.None;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_56 = V_4;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_56);
		NullCheck(L_57);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_57, 0, NULL);
		// matAssigned = true;
		__this->___matAssigned_7 = (bool)1;
		// DoAfterSetAction(action);
		int32_t L_58 = ___action0;
		AllIn1Shader_DoAfterSetAction_mE9D526214E1A09EFF8866879EEB600BD922F4A35(__this, L_58, NULL);
	}

IL_01b5:
	{
		// if (!rendererExists)
		bool L_59 = V_2;
		if (L_59)
		{
			goto IL_01bf;
		}
	}
	{
		// MissingRenderer();
		AllIn1Shader_MissingRenderer_m7E6C5C3058DE3EA8E8F8743081F740D120B1FC3C(__this, NULL);
		// return;
		return;
	}

IL_01bf:
	{
		// SetSceneDirty();
		AllIn1Shader_SetSceneDirty_m81771084CA202FD7B38A79EB83ABC8C2DB87893B(__this, NULL);
		return;
	}

IL_01c6:
	{
		// else if (allIn1Shader == null)
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_60 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_60, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_61)
		{
			goto IL_01d9;
		}
	}
	{
		// Debug.LogError("Make sure the AllIn1SpriteShader shader variants are inside the Resource folder!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral84B53DCE4436A2C5C9F1731C6214E68BCC824C12, NULL);
	}

IL_01d9:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::DoAfterSetAction(AllIn1SpriteShader.AllIn1Shader/AfterSetAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_DoAfterSetAction_mE9D526214E1A09EFF8866879EEB600BD922F4A35 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, int32_t ___action0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___action0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___action0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// ClearAllKeywords();
		AllIn1Shader_ClearAllKeywords_mCF9A2DBA0C1B21B33FC4B2AA61095B8E8299AD79(__this, NULL);
		// break;
		return;
	}

IL_000f:
	{
		// currMaterial.CopyPropertiesFromMaterial(prevMaterial);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___currMaterial_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___prevMaterial_6;
		NullCheck(L_2);
		Material_CopyPropertiesFromMaterial_m4148227E6A0B8E66315D8115F656B7F8BEAE915B(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::TryCreateNew()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_TryCreateNew_m5F2D23F9F028EFC9600F998F9191F964CB8B97BB (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72AD3D77A8EEF70C256801C9BA901207C3CD9918);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	{
		// bool rendererExists = false;
		V_0 = (bool)0;
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_1 = L_0;
		// if (sr != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		// rendererExists = true;
		V_0 = (bool)1;
		// if (sr != null && sr.sharedMaterial != null && sr.sharedMaterial.name.Contains("AllIn1"))
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0057;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = V_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_1;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_10, _stringLiteral72AD3D77A8EEF70C256801C9BA901207C3CD9918, NULL);
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// ResetAllProperties(false, GetStringFromShaderType());
		String_t* L_12;
		L_12 = AllIn1Shader_GetStringFromShaderType_m2E9392FE3054652262B421F6CBB973CD0B181E6D(__this, NULL);
		AllIn1Shader_ResetAllProperties_mB6AF55493FB94DFFC2FFDB5C4ECEEC87CE5DA498(__this, (bool)0, L_12, NULL);
		// ClearAllKeywords();
		AllIn1Shader_ClearAllKeywords_mCF9A2DBA0C1B21B33FC4B2AA61095B8E8299AD79(__this, NULL);
		goto IL_00b7;
	}

IL_0057:
	{
		// CleanMaterial();
		AllIn1Shader_CleanMaterial_m33B4E8D8F99E06BE24C5D10FAAEB9061FDCD0F75(__this, NULL);
		// MakeNewMaterial(false, GetStringFromShaderType());
		String_t* L_13;
		L_13 = AllIn1Shader_GetStringFromShaderType_m2E9392FE3054652262B421F6CBB973CD0B181E6D(__this, NULL);
		AllIn1Shader_MakeNewMaterial_mDFFA8CEF9D219C41544035C62F044D42519F7D88(__this, (bool)0, L_13, NULL);
		goto IL_00b7;
	}

IL_006c:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_14;
		L_14 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_2 = L_14;
		// if (img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_15 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00b7;
		}
	}
	{
		// rendererExists = true;
		V_0 = (bool)1;
		// if (img.material.name.Contains("AllIn1"))
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_17 = V_2;
		NullCheck(L_17);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18;
		L_18 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_17);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_18, NULL);
		NullCheck(L_19);
		bool L_20;
		L_20 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_19, _stringLiteral72AD3D77A8EEF70C256801C9BA901207C3CD9918, NULL);
		if (!L_20)
		{
			goto IL_00aa;
		}
	}
	{
		// ResetAllProperties(false, GetStringFromShaderType());
		String_t* L_21;
		L_21 = AllIn1Shader_GetStringFromShaderType_m2E9392FE3054652262B421F6CBB973CD0B181E6D(__this, NULL);
		AllIn1Shader_ResetAllProperties_mB6AF55493FB94DFFC2FFDB5C4ECEEC87CE5DA498(__this, (bool)0, L_21, NULL);
		// ClearAllKeywords();
		AllIn1Shader_ClearAllKeywords_mCF9A2DBA0C1B21B33FC4B2AA61095B8E8299AD79(__this, NULL);
		goto IL_00b7;
	}

IL_00aa:
	{
		// else MakeNewMaterial(false, GetStringFromShaderType());
		String_t* L_22;
		L_22 = AllIn1Shader_GetStringFromShaderType_m2E9392FE3054652262B421F6CBB973CD0B181E6D(__this, NULL);
		AllIn1Shader_MakeNewMaterial_mDFFA8CEF9D219C41544035C62F044D42519F7D88(__this, (bool)0, L_22, NULL);
	}

IL_00b7:
	{
		// if (!rendererExists)
		bool L_23 = V_0;
		if (L_23)
		{
			goto IL_00c0;
		}
	}
	{
		// MissingRenderer();
		AllIn1Shader_MissingRenderer_m7E6C5C3058DE3EA8E8F8743081F740D120B1FC3C(__this, NULL);
	}

IL_00c0:
	{
		// SetSceneDirty();
		AllIn1Shader_SetSceneDirty_m81771084CA202FD7B38A79EB83ABC8C2DB87893B(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::ClearAllKeywords()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_ClearAllKeywords_mCF9A2DBA0C1B21B33FC4B2AA61095B8E8299AD79 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0299CC5F40C577F300BB29854CBAAD8B68ABF5A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03D998A67418B2207797D2A80D9F2AF98F94F195);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07F915656939A90DAE6C1AB707E79BF7868CA521);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EDD1346AB9BBFF26C2ADA8CCE3981FE25229774);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10C202E3CAC5AB49BE861CFF829BC59BBB0FF6B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11651BC54D61D0E8D245A036BF447C492098BE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral136D47E96726D7EA43FC4F2CA881E88C9A061F79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13C0074568ED51167FB219A2329236AA23602E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158697E57921300501C71DFA8626FCAE1F8FD030);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E74A2EC3C4B69C55D0D1B56F81D53F03FC58D57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33BBFB9BE2C77104761CDDF74B7E1852E6881C0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33DA33B75C46B0F229B34D2C0891CF71E7F79910);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34877C8FC3EE47FD941AE792253A7937E3D03301);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34AD56288A03AA8D7B7BE17E549C5FB602F9E885);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37B43FC7BBF894AE4836DA274013351D48835406);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F868CB06E969FC20ED35E84ACC75C8E94BE5789);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FF1B94E47532ED77AF58B8CB0A0458B6D9E1996);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral447F933BE8D1CA27B33DDC715D32E2F35E9FAC8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4507C8929E44E422C27AFF7402E410055B12B019);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4696BEB1B4DD525F1293813D16EC3A02B2B12251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A68E99ECA06FD65FDFD5FCD7FECC5839F4C0DBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DC5DE09C42F7A0AAD0106E5E30E6879D7BD19E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5398DC3D4FFCD34741F382F596A262B6FA2922AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62E72875E72067F274B0D2DC61D0DC737D9A571D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral638A6BF6390D12422CAC4910C95F16CFBCE6D50B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63F1A53BEF19370173222DB715DA9DCB5F499A18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6677C73BF64E77B045EA94D2AA385D7540F0A39D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D9FF7A53B7038459370EB5C0F21C9D019668421);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281FF2F619273B6F998E3D3DCA0CFAF23CCFAD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7476243E3C65732A663724FC420E6E1142271250);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77222A55E21565B4F73AE2B2CB7476F68AB0F78D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA61378231EC959A15680986F921585BD0F8CDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92EA8BDFBEE13648A1E94EEF63E0B7CF7FA61390);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9487C4A5BEA527DD133B56664D0A4FEBE2ED8E8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99117A43311619936587FBCABCC9B16B687AB302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ABAD8FF849D104EA8DB7481A66BB4B9FD7143A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA398C584963DA9580EF46ED5CFF9424F53B44AB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA46AB120269E77F4ABEC01F7C4BA0FAE4465FAA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA85C7EF6524508DBECB8E0C8A91AC20E323F2BB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA87819C2031146742C1F5350BC509988DACBE9F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACBB086EF9E086A51936C2770AD0626D0741BFBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEA9B41BED2921E2BDDCE7E16056AB0AE866AD40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB00A1496C52A0281EFEA7B32B5FF80AE3889CF87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD8C7003675066255066C8241D1DCB43737145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC39E8C6764A54DE708C62FDD57019CD127D68BF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DB4C8B1E39FC82973F5D53BA60AC2EA5C07599);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBF85A768D3943BCCC3F92E224E88B14E21373BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE8028CB603B14045B89B5DC45645750E96D0E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD678A75C242A16DA78744D87F52BD6BA550F95C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDA3D9ABC6B6F4E63E913BAA2F16EC90AA1A58DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE553ACFB771455A8D49A952FB680C3B50DC63289);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B1F4E65A0B35AB6619D979A27DD1766DEB7039);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1C56EF1B89A06340C517FD662E7AC0CA5DDDE9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF391AB5AAB158433391BA7CA02848970C3D0E1F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6585045963E3BBD6D97B74D10A6A67BE2316C01);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetKeyword("RECTSIZE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralC3DB4C8B1E39FC82973F5D53BA60AC2EA5C07599, (bool)0, NULL);
		// SetKeyword("OFFSETUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral07F915656939A90DAE6C1AB707E79BF7868CA521, (bool)0, NULL);
		// SetKeyword("CLIPPING_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral11651BC54D61D0E8D245A036BF447C492098BE73, (bool)0, NULL);
		// SetKeyword("POLARUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral3F868CB06E969FC20ED35E84ACC75C8E94BE5789, (bool)0, NULL);
		// SetKeyword("TWISTUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral0299CC5F40C577F300BB29854CBAAD8B68ABF5A0, (bool)0, NULL);
		// SetKeyword("ROTATEUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralC39E8C6764A54DE708C62FDD57019CD127D68BF3, (bool)0, NULL);
		// SetKeyword("FISHEYE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral6D9FF7A53B7038459370EB5C0F21C9D019668421, (bool)0, NULL);
		// SetKeyword("PINCH_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralF391AB5AAB158433391BA7CA02848970C3D0E1F9, (bool)0, NULL);
		// SetKeyword("SHAKEUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralBCBD8C7003675066255066C8241D1DCB43737145, (bool)0, NULL);
		// SetKeyword("WAVEUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral7281FF2F619273B6F998E3D3DCA0CFAF23CCFAD2, (bool)0, NULL);
		// SetKeyword("ROUNDWAVEUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral6677C73BF64E77B045EA94D2AA385D7540F0A39D, (bool)0, NULL);
		// SetKeyword("DOODLE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral4A68E99ECA06FD65FDFD5FCD7FECC5839F4C0DBC, (bool)0, NULL);
		// SetKeyword("ZOOMUV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralACBB086EF9E086A51936C2770AD0626D0741BFBD, (bool)0, NULL);
		// SetKeyword("FADE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral1E74A2EC3C4B69C55D0D1B56F81D53F03FC58D57, (bool)0, NULL);
		// SetKeyword("TEXTURESCROLL_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral638A6BF6390D12422CAC4910C95F16CFBCE6D50B, (bool)0, NULL);
		// SetKeyword("GLOW_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralA87819C2031146742C1F5350BC509988DACBE9F9, (bool)0, NULL);
		// SetKeyword("OUTBASE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralE553ACFB771455A8D49A952FB680C3B50DC63289, (bool)0, NULL);
		// SetKeyword("ONLYOUTLINE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralA398C584963DA9580EF46ED5CFF9424F53B44AB6, (bool)0, NULL);
		// SetKeyword("OUTTEX_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralF6585045963E3BBD6D97B74D10A6A67BE2316C01, (bool)0, NULL);
		// SetKeyword("OUTDIST_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralDDA3D9ABC6B6F4E63E913BAA2F16EC90AA1A58DC, (bool)0, NULL);
		// SetKeyword("DISTORT_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralE8B1F4E65A0B35AB6619D979A27DD1766DEB7039, (bool)0, NULL);
		// SetKeyword("WIND_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral4DC5DE09C42F7A0AAD0106E5E30E6879D7BD19E5, (bool)0, NULL);
		// SetKeyword("GRADIENT_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral7EA61378231EC959A15680986F921585BD0F8CDC, (bool)0, NULL);
		// SetKeyword("GRADIENT2COL_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral03D998A67418B2207797D2A80D9F2AF98F94F195, (bool)0, NULL);
		// SetKeyword("RADIALGRADIENT_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral136D47E96726D7EA43FC4F2CA881E88C9A061F79, (bool)0, NULL);
		// SetKeyword("COLORSWAP_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral37B43FC7BBF894AE4836DA274013351D48835406, (bool)0, NULL);
		// SetKeyword("HSV_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral158697E57921300501C71DFA8626FCAE1F8FD030, (bool)0, NULL);
		// SetKeyword("HITEFFECT_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral34877C8FC3EE47FD941AE792253A7937E3D03301, (bool)0, NULL);
		// SetKeyword("PIXELATE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral5398DC3D4FFCD34741F382F596A262B6FA2922AC, (bool)0, NULL);
		// SetKeyword("NEGATIVE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralF1C56EF1B89A06340C517FD662E7AC0CA5DDDE9F, (bool)0, NULL);
		// SetKeyword("GRADIENTCOLORRAMP_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral4507C8929E44E422C27AFF7402E410055B12B019, (bool)0, NULL);
		// SetKeyword("COLORRAMP_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral9ABAD8FF849D104EA8DB7481A66BB4B9FD7143A2, (bool)0, NULL);
		// SetKeyword("GREYSCALE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral63F1A53BEF19370173222DB715DA9DCB5F499A18, (bool)0, NULL);
		// SetKeyword("POSTERIZE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral99117A43311619936587FBCABCC9B16B687AB302, (bool)0, NULL);
		// SetKeyword("BLUR_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral4696BEB1B4DD525F1293813D16EC3A02B2B12251, (bool)0, NULL);
		// SetKeyword("MOTIONBLUR_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral7476243E3C65732A663724FC420E6E1142271250, (bool)0, NULL);
		// SetKeyword("GHOST_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral33BBFB9BE2C77104761CDDF74B7E1852E6881C0D, (bool)0, NULL);
		// SetKeyword("ALPHAOUTLINE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral9487C4A5BEA527DD133B56664D0A4FEBE2ED8E8D, (bool)0, NULL);
		// SetKeyword("INNEROUTLINE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralAEA9B41BED2921E2BDDCE7E16056AB0AE866AD40, (bool)0, NULL);
		// SetKeyword("ONLYINNEROUTLINE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralB00A1496C52A0281EFEA7B32B5FF80AE3889CF87, (bool)0, NULL);
		// SetKeyword("HOLOGRAM_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralA46AB120269E77F4ABEC01F7C4BA0FAE4465FAA1, (bool)0, NULL);
		// SetKeyword("CHROMABERR_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralCBF85A768D3943BCCC3F92E224E88B14E21373BC, (bool)0, NULL);
		// SetKeyword("GLITCH_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral447F933BE8D1CA27B33DDC715D32E2F35E9FAC8C, (bool)0, NULL);
		// SetKeyword("FLICKER_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralCE8028CB603B14045B89B5DC45645750E96D0E1D, (bool)0, NULL);
		// SetKeyword("SHADOW_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral13C0074568ED51167FB219A2329236AA23602E01, (bool)0, NULL);
		// SetKeyword("SHINE_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral92EA8BDFBEE13648A1E94EEF63E0B7CF7FA61390, (bool)0, NULL);
		// SetKeyword("CONTRAST_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral62E72875E72067F274B0D2DC61D0DC737D9A571D, (bool)0, NULL);
		// SetKeyword("OVERLAY_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral33DA33B75C46B0F229B34D2C0891CF71E7F79910, (bool)0, NULL);
		// SetKeyword("OVERLAYMULT_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral77222A55E21565B4F73AE2B2CB7476F68AB0F78D, (bool)0, NULL);
		// SetKeyword("ALPHACUTOFF_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralD678A75C242A16DA78744D87F52BD6BA550F95C4, (bool)0, NULL);
		// SetKeyword("ALPHAROUND_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral3FF1B94E47532ED77AF58B8CB0A0458B6D9E1996, (bool)0, NULL);
		// SetKeyword("CHANGECOLOR_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteralA85C7EF6524508DBECB8E0C8A91AC20E323F2BB7, (bool)0, NULL);
		// SetKeyword("CHANGECOLOR2_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral10C202E3CAC5AB49BE861CFF829BC59BBB0FF6B4, (bool)0, NULL);
		// SetKeyword("CHANGECOLOR3_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral0EDD1346AB9BBFF26C2ADA8CCE3981FE25229774, (bool)0, NULL);
		// SetKeyword("FOG_ON");
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral34AD56288A03AA8D7B7BE17E549C5FB602F9E885, (bool)0, NULL);
		// SetSceneDirty();
		AllIn1Shader_SetSceneDirty_m81771084CA202FD7B38A79EB83ABC8C2DB87893B(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetKeyword(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___keyword0, bool ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (destroyed) return;
		bool L_0 = __this->___destroyed_8;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (destroyed) return;
		return;
	}

IL_0009:
	{
		// if (currMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___currMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// FindCurrMaterial();
		AllIn1Shader_FindCurrMaterial_m24F2836902231F97E09F46B7410FC57E6F596C0D(__this, NULL);
		// if (currMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___currMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// MissingRenderer();
		AllIn1Shader_MissingRenderer_m7E6C5C3058DE3EA8E8F8743081F740D120B1FC3C(__this, NULL);
		// return;
		return;
	}

IL_0032:
	{
		// if (!state) currMaterial.DisableKeyword(keyword);
		bool L_5 = ___state1;
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		// if (!state) currMaterial.DisableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___currMaterial_5;
		String_t* L_7 = ___keyword0;
		NullCheck(L_6);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_6, L_7, NULL);
		return;
	}

IL_0042:
	{
		// else currMaterial.EnableKeyword(keyword);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = __this->___currMaterial_5;
		String_t* L_9 = ___keyword0;
		NullCheck(L_8);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::FindCurrMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_FindCurrMaterial_m24F2836902231F97E09F46B7410FC57E6F596C0D (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_0 = NULL;
	{
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		// if (sr != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// currMaterial = GetComponent<Renderer>().sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_2, NULL);
		__this->___currMaterial_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_5), (void*)L_3);
		// matAssigned = true;
		__this->___matAssigned_7 = (bool)1;
		return;
	}

IL_0027:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4;
		L_4 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_0 = L_4;
		// if (img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// currMaterial = img.material;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_7 = V_0;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_7);
		__this->___currMaterial_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currMaterial_5), (void*)L_8);
		// matAssigned = true;
		__this->___matAssigned_7 = (bool)1;
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::CleanMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_CleanMaterial_m33B4E8D8F99E06BE24C5D10FAAEB9061FDCD0F75 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_1 = NULL;
	{
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_0;
		// if (sr != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// sr.sharedMaterial = new Material(Shader.Find("Sprites/Default"));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4;
		L_4 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_5, L_4, NULL);
		NullCheck(L_3);
		Renderer_set_sharedMaterial_m5E842F9A06CFB7B77656EB319881CB4B3E8E4288(L_3, L_5, NULL);
		// matAssigned = false;
		__this->___matAssigned_7 = (bool)0;
		goto IL_005a;
	}

IL_002e:
	{
		// Graphic img = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_6;
		L_6 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_1 = L_6;
		// if (img != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// img.material = new Material(Shader.Find("Sprites/Default"));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_9 = V_1;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_10;
		L_10 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral975A5F46FC6E6D8BC7943A3A38CEA489C122E4F1, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_11, L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_9, L_11);
		// matAssigned = false;
		__this->___matAssigned_7 = (bool)0;
	}

IL_005a:
	{
		// SetSceneDirty();
		AllIn1Shader_SetSceneDirty_m81771084CA202FD7B38A79EB83ABC8C2DB87893B(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SaveMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SaveMaterial_m08807E9E595390CF43BF45A9E8F95BBD25E86DEB (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SaveMaterialWithOtherName(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SaveMaterialWithOtherName_m5568A821C67EFF400BB280AE5BD33107EE1FCBD8 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___path0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0F4CF9D3B8B4AD6A49A888401B14AE51DD52E16);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int number = i;
		int32_t L_0 = ___i1;
		V_0 = L_0;
		// string newPath = path + "_" + number.ToString();
		String_t* L_1 = ___path0;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_2, NULL);
		// string fullPath = newPath + ".mat";
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralA0F4CF9D3B8B4AD6A49A888401B14AE51DD52E16, NULL);
		V_1 = L_4;
		// if (System.IO.File.Exists(fullPath))
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// number++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// SaveMaterialWithOtherName(path, number);
		String_t* L_8 = ___path0;
		int32_t L_9 = V_0;
		AllIn1Shader_SaveMaterialWithOtherName_m5568A821C67EFF400BB280AE5BD33107EE1FCBD8(__this, L_8, L_9, NULL);
		return;
	}

IL_0034:
	{
		// DoSaving(fullPath);
		String_t* L_10 = V_1;
		AllIn1Shader_DoSaving_m6E771CAF9428768387E41A348AA107BB72B02E50(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::DoSaving(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_DoSaving_m6E771CAF9428768387E41A348AA107BB72B02E50 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___fileName0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetSceneDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetSceneDirty_m81771084CA202FD7B38A79EB83ABC8C2DB87893B (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::MissingRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_MissingRenderer_m7E6C5C3058DE3EA8E8F8743081F740D120B1FC3C (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::ToggleSetAtlasUvs(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_ToggleSetAtlasUvs_m05C12A88C2B3EBDB772E56D34251DA8867C7BCDD (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, bool ___activate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_m9BE45999D46DA401A31C65629F3C2F6142482B98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_mE9ACC9E80A8C01E195194C1068B778FA67605B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C250825F169D5648C7CD452131B4DF7B4DC7C52);
		s_Il2CppMethodInitialized = true;
	}
	SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* V_0 = NULL;
	{
		// SetAtlasUvs atlasUvs = GetComponent<SetAtlasUvs>();
		SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* L_0;
		L_0 = Component_GetComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_m9BE45999D46DA401A31C65629F3C2F6142482B98(__this, Component_GetComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_m9BE45999D46DA401A31C65629F3C2F6142482B98_RuntimeMethod_var);
		V_0 = L_0;
		// if (activate)
		bool L_1 = ___activate0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// if (atlasUvs == null) atlasUvs = gameObject.AddComponent<SetAtlasUvs>();
		SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// if (atlasUvs == null) atlasUvs = gameObject.AddComponent<SetAtlasUvs>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* L_5;
		L_5 = GameObject_AddComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_mE9ACC9E80A8C01E195194C1068B778FA67605B63(L_4, GameObject_AddComponent_TisSetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143_mE9ACC9E80A8C01E195194C1068B778FA67605B63_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_001f:
	{
		// atlasUvs.GetAndSetUVs();
		SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* L_6 = V_0;
		NullCheck(L_6);
		SetAtlasUvs_GetAndSetUVs_m6A4E8397DCBDF01EDD57A9B6589C0243AF2449C8(L_6, NULL);
		// SetKeyword("ATLAS_ON", true);
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral4C250825F169D5648C7CD452131B4DF7B4DC7C52, (bool)1, NULL);
		goto IL_0054;
	}

IL_0033:
	{
		// if (atlasUvs != null)
		SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// atlasUvs.ResetAtlasUvs();
		SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* L_9 = V_0;
		NullCheck(L_9);
		SetAtlasUvs_ResetAtlasUvs_mC8A49A1EA3DB69DAD8D19CFCC92166113A0FF368(L_9, NULL);
		// DestroyImmediate(atlasUvs);
		SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_10, NULL);
	}

IL_0048:
	{
		// SetKeyword("ATLAS_ON", false);
		AllIn1Shader_SetKeyword_m6C06F0DE82E753DA1857BB454808880B276A95B1(__this, _stringLiteral4C250825F169D5648C7CD452131B4DF7B4DC7C52, (bool)0, NULL);
	}

IL_0054:
	{
		// SetSceneDirty();
		AllIn1Shader_SetSceneDirty_m81771084CA202FD7B38A79EB83ABC8C2DB87893B(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::ApplyMaterialToHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_ApplyMaterialToHierarchy_m78933AB86CAE15549840D4415FEF2937FAA19DA4 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m80F11D9CC2DF54B8A1F27C9D6757B3EBBE3874AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_1 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_2 = NULL;
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* V_3 = NULL;
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	{
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_0;
		// Graphic image = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_1 = L_1;
		// Material matToApply = null;
		V_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)NULL;
		// if (sr != null) matToApply = sr.sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (sr != null) matToApply = sr.sharedMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = V_0;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_4, NULL);
		V_2 = L_5;
		goto IL_003b;
	}

IL_0022:
	{
		// else if (image != null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// matToApply = image.material;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_8 = V_1;
		NullCheck(L_8);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_9;
		L_9 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_8);
		V_2 = L_9;
		goto IL_003b;
	}

IL_0034:
	{
		// MissingRenderer();
		AllIn1Shader_MissingRenderer_m7E6C5C3058DE3EA8E8F8743081F740D120B1FC3C(__this, NULL);
		// return;
		return;
	}

IL_003b:
	{
		// List<Transform> children = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_10, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		V_3 = L_10;
		// GetAllChildren(transform, ref children);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		AllIn1Shader_GetAllChildren_mB2FABA1695FE5E120C0DCC3A0CC44677FA723D68(__this, L_11, (&V_3), NULL);
		// foreach (Transform t in children)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_12 = V_3;
		NullCheck(L_12);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_13;
		L_13 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_12, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_4 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_4), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009e_1;
			}

IL_0059_1:
			{
				// foreach (Transform t in children)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
				L_14 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_4), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				V_5 = L_14;
				// sr = t.gameObject.GetComponent<Renderer>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_5;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
				NullCheck(L_16);
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17;
				L_17 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_16, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
				V_0 = L_17;
				// if (sr != null) sr.material = matToApply;
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_18 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_19;
				L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_19)
				{
					goto IL_0081_1;
				}
			}
			{
				// if (sr != null) sr.material = matToApply;
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_20 = V_0;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = V_2;
				NullCheck(L_20);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_20, L_21, NULL);
				goto IL_009e_1;
			}

IL_0081_1:
			{
				// image = t.gameObject.GetComponent<Graphic>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_5;
				NullCheck(L_22);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
				L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
				NullCheck(L_23);
				Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_24;
				L_24 = GameObject_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m80F11D9CC2DF54B8A1F27C9D6757B3EBBE3874AE(L_23, GameObject_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m80F11D9CC2DF54B8A1F27C9D6757B3EBBE3874AE_RuntimeMethod_var);
				V_1 = L_24;
				// if (image != null) image.material = matToApply;
				Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_25 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_26;
				L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_26)
				{
					goto IL_009e_1;
				}
			}
			{
				// if (image != null) image.material = matToApply;
				Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_27 = V_1;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = V_2;
				NullCheck(L_27);
				VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
			}

IL_009e_1:
			{
				// foreach (Transform t in children)
				bool L_29;
				L_29 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_4), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_29)
				{
					goto IL_0059_1;
				}
			}
			{
				goto IL_00b7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::CheckIfValidTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_CheckIfValidTarget_m2A4FB22EE8427CCBF9515BC9207274958F048CE6 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_0 = NULL;
	{
		// Renderer sr = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		// Graphic image = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1;
		L_1 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		V_0 = L_1;
		// if (sr == null && image == null) MissingRenderer();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// if (sr == null && image == null) MissingRenderer();
		AllIn1Shader_MissingRenderer_m7E6C5C3058DE3EA8E8F8743081F740D120B1FC3C(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::GetAllChildren(UnityEngine.Transform,System.Collections.Generic.List`1<UnityEngine.Transform>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_GetAllChildren_mB2FABA1695FE5E120C0DCC3A0CC44677FA723D68 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** ___transforms1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (Transform child in parent)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___parent0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_003f;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0009_1:
			{
				// foreach (Transform child in parent)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// transforms.Add(child);
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** L_7 = ___transforms1;
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_8 = *((List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D**)L_7);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_1;
				NullCheck(L_8);
				List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_8, L_9, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
				// GetAllChildren(child, ref transforms);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
				List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D** L_11 = ___transforms1;
				AllIn1Shader_GetAllChildren_mB2FABA1695FE5E120C0DCC3A0CC44677FA723D68(__this, L_10, L_11, NULL);
			}

IL_0025_1:
			{
				// foreach (Transform child in parent)
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::RenderToImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_RenderToImage_m8925721536424EC55892A8E6DD2A64BA324D76D4 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::RenderAndSaveTexture(UnityEngine.Material,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_RenderAndSaveTexture_m35D669E3A9F78FB08E3B293329F0AACE06BCA4F4 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___targetMaterial0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___targetTexture1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String AllIn1SpriteShader.AllIn1Shader::GetNewValidPath(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AllIn1Shader_GetNewValidPath_m88632E3DE97D010A64282DEA30A0DA8B78270E11 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, String_t* ___path0, int32_t ___i1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int number = i;
		int32_t L_0 = ___i1;
		V_0 = L_0;
		// string newPath = path + "_" + number.ToString();
		String_t* L_1 = ___path0;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, L_2, NULL);
		// string fullPath = newPath + ".png";
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26, NULL);
		V_1 = L_4;
		// if (System.IO.File.Exists(fullPath))
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_5, NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// number++;
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		// fullPath = GetNewValidPath(path, number);
		String_t* L_8 = ___path0;
		int32_t L_9 = V_0;
		String_t* L_10;
		L_10 = AllIn1Shader_GetNewValidPath_m88632E3DE97D010A64282DEA30A0DA8B78270E11(__this, L_8, L_9, NULL);
		V_1 = L_10;
	}

IL_0034:
	{
		// return fullPath;
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_OnEnable_m11A1007BD7C229B23071A34CEDEACE746D927F6D (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_OnDisable_m7FDD11C181EF51C14ABB81F959E05B392F0B2578 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::OnEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_OnEditorUpdate_m31333D3B9409833B93CA776A48100A8C75CD9EFF (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// if (computingNormal)
		bool L_0 = __this->___computingNormal_11;
		if (!L_0)
		{
			goto IL_0071;
		}
	}
	{
		// if (needToWait)
		bool L_1 = __this->___needToWait_12;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// waitingCycles++;
		int32_t L_2 = __this->___waitingCycles_13;
		__this->___waitingCycles_13 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// if (waitingCycles > 5)
		int32_t L_3 = __this->___waitingCycles_13;
		if ((((int32_t)L_3) <= ((int32_t)5)))
		{
			goto IL_0071;
		}
	}
	{
		// needToWait = false;
		__this->___needToWait_12 = (bool)0;
		// timesWeWaited++;
		int32_t L_4 = __this->___timesWeWaited_14;
		__this->___timesWeWaited_14 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		return;
	}

IL_003d:
	{
		// if (timesWeWaited == 1) SetNewNormalTexture2();
		int32_t L_5 = __this->___timesWeWaited_14;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// if (timesWeWaited == 1) SetNewNormalTexture2();
		AllIn1Shader_SetNewNormalTexture2_m9B2393792E7CFF97DC16C9805059A9D467422928(__this, NULL);
	}

IL_004c:
	{
		// if (timesWeWaited == 2) SetNewNormalTexture3();
		int32_t L_6 = __this->___timesWeWaited_14;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		// if (timesWeWaited == 2) SetNewNormalTexture3();
		AllIn1Shader_SetNewNormalTexture3_mBA46C24DE7B8681120B6E716AB65A4509EB969BE(__this, NULL);
	}

IL_005b:
	{
		// if (timesWeWaited == 3) SetNewNormalTexture4();
		int32_t L_7 = __this->___timesWeWaited_14;
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_006a;
		}
	}
	{
		// if (timesWeWaited == 3) SetNewNormalTexture4();
		AllIn1Shader_SetNewNormalTexture4_m6E7C4191286551CC6B6A1712A59CC2CB2DFB4450(__this, NULL);
	}

IL_006a:
	{
		// needToWait = true;
		__this->___needToWait_12 = (bool)1;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::CreateAndAssignNormalMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_CreateAndAssignNormalMap_mC30C0D8DBD3597EAD584D52E8ED71B8F5741D088 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetNewNormalTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetNewNormalTexture_m3DD83C0E9C0EC83AA1956B0BBE37E11466BB9246 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// computingNormal = false;
		__this->___computingNormal_11 = (bool)0;
		// return;
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetNewNormalTexture2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetNewNormalTexture2_m9B2393792E7CFF97DC16C9805059A9D467422928 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetNewNormalTexture3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetNewNormalTexture3_mBA46C24DE7B8681120B6E716AB65A4509EB969BE (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::SetNewNormalTexture4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader_SetNewNormalTexture4_m6E7C4191286551CC6B6A1712A59CC2CB2DFB4450 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// UnityEngine.Texture2D AllIn1SpriteShader.AllIn1Shader::CreateNormalMap(UnityEngine.Texture2D,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* AllIn1Shader_CreateNormalMap_m5B5F6E58F69969E23C05A98E859E2FC9B2605016 (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___t0, float ___normalMult1, int32_t ___normalSmooth2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	float V_19 = 0.0f;
	float V_20 = 0.0f;
	float V_21 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_22;
	memset((&V_22), 0, sizeof(V_22));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_23;
	memset((&V_23), 0, sizeof(V_23));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_24;
	memset((&V_24), 0, sizeof(V_24));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_25;
	memset((&V_25), 0, sizeof(V_25));
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	float V_28 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_29;
	memset((&V_29), 0, sizeof(V_29));
	{
		// Color[] pixels = new Color[t.width * t.height];
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___t0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___t0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_3)));
		V_0 = L_4;
		// Texture2D texNormal = new Texture2D(t.width, t.height, TextureFormat.RGB24, false, false);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = ___t0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_5);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___t0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_7);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_9, L_6, L_8, 3, (bool)0, (bool)0, NULL);
		V_1 = L_9;
		// Vector3 vScale = new Vector3(0.3333f, 0.3333f, 0.3333f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.333299994f), (0.333299994f), (0.333299994f), NULL);
		// for (int y = 0; y < t.height; y++)
		V_3 = 0;
		goto IL_02d1;
	}

IL_0045:
	{
		// for (int x = 0; x < t.width; x++)
		V_4 = 0;
		goto IL_02c0;
	}

IL_004d:
	{
		// Color tc = t.GetPixel(x - 1, y - 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_10 = ___t0;
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_10, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		V_5 = L_13;
		// Vector3 cSampleNegXNegY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = V_5;
		float L_15 = L_14.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = V_5;
		float L_17 = L_16.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = V_5;
		float L_19 = L_18.___g_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), L_15, L_17, L_19, /*hidden argument*/NULL);
		// tc = t.GetPixel(x, y - 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_21 = ___t0;
		int32_t L_22 = V_4;
		int32_t L_23 = V_3;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_21, L_22, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), NULL);
		V_5 = L_24;
		// Vector3 cSampleZerXNegY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = V_5;
		float L_26 = L_25.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = V_5;
		float L_28 = L_27.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_5;
		float L_30 = L_29.___g_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_6), L_26, L_28, L_30, NULL);
		// tc = t.GetPixel(x + 1, y - 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_31 = ___t0;
		int32_t L_32 = V_4;
		int32_t L_33 = V_3;
		NullCheck(L_31);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		L_34 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_31, ((int32_t)il2cpp_codegen_add(L_32, 1)), ((int32_t)il2cpp_codegen_subtract(L_33, 1)), NULL);
		V_5 = L_34;
		// Vector3 cSamplePosXNegY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35 = V_5;
		float L_36 = L_35.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = V_5;
		float L_38 = L_37.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = V_5;
		float L_40 = L_39.___g_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), L_36, L_38, L_40, NULL);
		// tc = t.GetPixel(x - 1, y);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_41 = ___t0;
		int32_t L_42 = V_4;
		int32_t L_43 = V_3;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_41, ((int32_t)il2cpp_codegen_subtract(L_42, 1)), L_43, NULL);
		V_5 = L_44;
		// Vector3 cSampleNegXZerY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = V_5;
		float L_46 = L_45.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = V_5;
		float L_48 = L_47.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = V_5;
		float L_50 = L_49.___g_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), L_46, L_48, L_50, NULL);
		// tc = t.GetPixel(x + 1, y);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_51 = ___t0;
		int32_t L_52 = V_4;
		int32_t L_53 = V_3;
		NullCheck(L_51);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		L_54 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_51, ((int32_t)il2cpp_codegen_add(L_52, 1)), L_53, NULL);
		V_5 = L_54;
		// Vector3 cSamplePosXZerY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55 = V_5;
		float L_56 = L_55.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57 = V_5;
		float L_58 = L_57.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = V_5;
		float L_60 = L_59.___g_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), L_56, L_58, L_60, NULL);
		// tc = t.GetPixel(x - 1, y + 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_61 = ___t0;
		int32_t L_62 = V_4;
		int32_t L_63 = V_3;
		NullCheck(L_61);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64;
		L_64 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_61, ((int32_t)il2cpp_codegen_subtract(L_62, 1)), ((int32_t)il2cpp_codegen_add(L_63, 1)), NULL);
		V_5 = L_64;
		// Vector3 cSampleNegXPosY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65 = V_5;
		float L_66 = L_65.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67 = V_5;
		float L_68 = L_67.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = V_5;
		float L_70 = L_69.___g_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_10), L_66, L_68, L_70, NULL);
		// tc = t.GetPixel(x, y + 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_71 = ___t0;
		int32_t L_72 = V_4;
		int32_t L_73 = V_3;
		NullCheck(L_71);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74;
		L_74 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_71, L_72, ((int32_t)il2cpp_codegen_add(L_73, 1)), NULL);
		V_5 = L_74;
		// Vector3 cSampleZerXPosY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75 = V_5;
		float L_76 = L_75.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77 = V_5;
		float L_78 = L_77.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = V_5;
		float L_80 = L_79.___g_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_11), L_76, L_78, L_80, NULL);
		// tc = t.GetPixel(x + 1, y + 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_81 = ___t0;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		NullCheck(L_81);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84;
		L_84 = Texture2D_GetPixel_m69A17FE5CC220F438C7421DCB50A9E22AAB4A415(L_81, ((int32_t)il2cpp_codegen_add(L_82, 1)), ((int32_t)il2cpp_codegen_add(L_83, 1)), NULL);
		V_5 = L_84;
		// Vector3 cSamplePosXPosY = new Vector3(tc.r, tc.g, tc.g);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = V_5;
		float L_86 = L_85.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87 = V_5;
		float L_88 = L_87.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89 = V_5;
		float L_90 = L_89.___g_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_12), L_86, L_88, L_90, NULL);
		// float fSampleNegXNegY = Vector3.Dot(cSampleNegXNegY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_2;
		float L_92;
		L_92 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_20, L_91, NULL);
		// float fSampleZerXNegY = Vector3.Dot(cSampleZerXNegY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_2;
		float L_95;
		L_95 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_93, L_94, NULL);
		V_13 = L_95;
		// float fSamplePosXNegY = Vector3.Dot(cSamplePosXNegY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_2;
		float L_98;
		L_98 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_96, L_97, NULL);
		V_14 = L_98;
		// float fSampleNegXZerY = Vector3.Dot(cSampleNegXZerY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_2;
		float L_101;
		L_101 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_99, L_100, NULL);
		V_15 = L_101;
		// float fSamplePosXZerY = Vector3.Dot(cSamplePosXZerY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_2;
		float L_104;
		L_104 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_102, L_103, NULL);
		V_16 = L_104;
		// float fSampleNegXPosY = Vector3.Dot(cSampleNegXPosY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_2;
		float L_107;
		L_107 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_105, L_106, NULL);
		V_17 = L_107;
		// float fSampleZerXPosY = Vector3.Dot(cSampleZerXPosY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_2;
		float L_110;
		L_110 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_108, L_109, NULL);
		V_18 = L_110;
		// float fSamplePosXPosY = Vector3.Dot(cSamplePosXPosY, vScale);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_2;
		float L_113;
		L_113 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_111, L_112, NULL);
		V_19 = L_113;
		// float edgeX = (fSampleNegXNegY - fSamplePosXNegY) * 0.25f + (fSampleNegXZerY - fSamplePosXZerY) * 0.5f + (fSampleNegXPosY - fSamplePosXPosY) * 0.25f;
		float L_114 = L_92;
		float L_115 = V_14;
		float L_116 = V_15;
		float L_117 = V_16;
		float L_118 = V_17;
		float L_119 = V_19;
		V_20 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_114, L_115)), (0.25f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_116, L_117)), (0.5f))))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_118, L_119)), (0.25f)))));
		// float edgeY = (fSampleNegXNegY - fSampleNegXPosY) * 0.25f + (fSampleZerXNegY - fSampleZerXPosY) * 0.5f + (fSamplePosXNegY - fSamplePosXPosY) * 0.25f;
		float L_120 = V_17;
		float L_121 = V_13;
		float L_122 = V_18;
		float L_123 = V_14;
		float L_124 = V_19;
		V_21 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_114, L_120)), (0.25f))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_121, L_122)), (0.5f))))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_123, L_124)), (0.25f)))));
		// Vector2 vEdge = new Vector2(edgeX, edgeY) * normalMult;
		float L_125 = V_20;
		float L_126 = V_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127;
		memset((&L_127), 0, sizeof(L_127));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_127), L_125, L_126, /*hidden argument*/NULL);
		float L_128 = ___normalMult1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129;
		L_129 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_127, L_128, NULL);
		V_22 = L_129;
		// Vector3 norm = new Vector3(vEdge.x, vEdge.y, 1.0f).normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = V_22;
		float L_131 = L_130.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_132 = V_22;
		float L_133 = L_132.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		memset((&L_134), 0, sizeof(L_134));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_134), L_131, L_133, (1.0f), /*hidden argument*/NULL);
		V_25 = L_134;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135;
		L_135 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_25), NULL);
		V_23 = L_135;
		// Color c = new Color(norm.x * 0.5f + 0.5f, norm.y * 0.5f + 0.5f, norm.z * 0.5f + 0.5f, 1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = V_23;
		float L_137 = L_136.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_23;
		float L_139 = L_138.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = V_23;
		float L_141 = L_140.___z_4;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_24), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_137, (0.5f))), (0.5f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_139, (0.5f))), (0.5f))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_141, (0.5f))), (0.5f))), (1.0f), NULL);
		// pixels[x + y * t.width] = c;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_142 = V_0;
		int32_t L_143 = V_4;
		int32_t L_144 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_145 = ___t0;
		NullCheck(L_145);
		int32_t L_146;
		L_146 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_145);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_147 = V_24;
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_143, ((int32_t)il2cpp_codegen_multiply(L_144, L_146))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_147);
		// for (int x = 0; x < t.width; x++)
		int32_t L_148 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_02c0:
	{
		// for (int x = 0; x < t.width; x++)
		int32_t L_149 = V_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_150 = ___t0;
		NullCheck(L_150);
		int32_t L_151;
		L_151 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_150);
		if ((((int32_t)L_149) < ((int32_t)L_151)))
		{
			goto IL_004d;
		}
	}
	{
		// for (int y = 0; y < t.height; y++)
		int32_t L_152 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_02d1:
	{
		// for (int y = 0; y < t.height; y++)
		int32_t L_153 = V_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_154 = ___t0;
		NullCheck(L_154);
		int32_t L_155;
		L_155 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_154);
		if ((((int32_t)L_153) < ((int32_t)L_155)))
		{
			goto IL_0045;
		}
	}
	{
		// if (normalSmooth > 0f)
		int32_t L_156 = ___normalSmooth2;
		if ((!(((float)((float)L_156)) > ((float)(0.0f)))))
		{
			goto IL_04f1;
		}
	}
	{
		// for (int y = 0; y < t.height; y++)
		V_26 = 0;
		goto IL_04e4;
	}

IL_02f1:
	{
		// for (int x = 0; x < t.width; x++)
		V_27 = 0;
		goto IL_04d1;
	}

IL_02f9:
	{
		// float pixelsToAverage = 0.0f;
		V_28 = (0.0f);
		// Color c = pixels[(x + 0) + ((y + 0) * t.width)];
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_157 = V_0;
		int32_t L_158 = V_27;
		int32_t L_159 = V_26;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_160 = ___t0;
		NullCheck(L_160);
		int32_t L_161;
		L_161 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_160);
		NullCheck(L_157);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(L_158, ((int32_t)il2cpp_codegen_multiply(L_159, L_161))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_163 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_29 = L_163;
		// pixelsToAverage++;
		float L_164 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_164, (1.0f)));
		// if (x - normalSmooth > 0)
		int32_t L_165 = V_27;
		int32_t L_166 = ___normalSmooth2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_165, L_166))) <= ((int32_t)0)))
		{
			goto IL_03b4;
		}
	}
	{
		// if (y - normalSmooth > 0)
		int32_t L_167 = V_26;
		int32_t L_168 = ___normalSmooth2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_167, L_168))) <= ((int32_t)0)))
		{
			goto IL_0358;
		}
	}
	{
		// c += pixels[(x - normalSmooth) + ((y - normalSmooth) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_169 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_170 = V_0;
		int32_t L_171 = V_27;
		int32_t L_172 = ___normalSmooth2;
		int32_t L_173 = V_26;
		int32_t L_174 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_175 = ___t0;
		NullCheck(L_175);
		int32_t L_176;
		L_176 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_175);
		NullCheck(L_170);
		int32_t L_177 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_171, L_172)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_173, L_174)), L_176))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_178 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_179;
		L_179 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_169, L_178, NULL);
		V_29 = L_179;
		// pixelsToAverage++;
		float L_180 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_180, (1.0f)));
	}

IL_0358:
	{
		// c += pixels[(x - normalSmooth) + ((y + 0) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_181 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_182 = V_0;
		int32_t L_183 = V_27;
		int32_t L_184 = ___normalSmooth2;
		int32_t L_185 = V_26;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_186 = ___t0;
		NullCheck(L_186);
		int32_t L_187;
		L_187 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_186);
		NullCheck(L_182);
		int32_t L_188 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_183, L_184)), ((int32_t)il2cpp_codegen_multiply(L_185, L_187))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_189 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_190;
		L_190 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_181, L_189, NULL);
		V_29 = L_190;
		// pixelsToAverage++;
		float L_191 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_191, (1.0f)));
		// if (y + normalSmooth < t.height)
		int32_t L_192 = V_26;
		int32_t L_193 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_194 = ___t0;
		NullCheck(L_194);
		int32_t L_195;
		L_195 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_194);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_192, L_193))) >= ((int32_t)L_195)))
		{
			goto IL_03b4;
		}
	}
	{
		// c += pixels[(x - normalSmooth) + ((y + normalSmooth) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_196 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_197 = V_0;
		int32_t L_198 = V_27;
		int32_t L_199 = ___normalSmooth2;
		int32_t L_200 = V_26;
		int32_t L_201 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_202 = ___t0;
		NullCheck(L_202);
		int32_t L_203;
		L_203 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_202);
		NullCheck(L_197);
		int32_t L_204 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_198, L_199)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_200, L_201)), L_203))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_205 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_206;
		L_206 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_196, L_205, NULL);
		V_29 = L_206;
		// pixelsToAverage++;
		float L_207 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_207, (1.0f)));
	}

IL_03b4:
	{
		// if (y - normalSmooth > 0)
		int32_t L_208 = V_26;
		int32_t L_209 = ___normalSmooth2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_208, L_209))) <= ((int32_t)0)))
		{
			goto IL_03e2;
		}
	}
	{
		// c += pixels[(x + 0) + ((y - normalSmooth) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_210 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_211 = V_0;
		int32_t L_212 = V_27;
		int32_t L_213 = V_26;
		int32_t L_214 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_215 = ___t0;
		NullCheck(L_215);
		int32_t L_216;
		L_216 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_215);
		NullCheck(L_211);
		int32_t L_217 = ((int32_t)il2cpp_codegen_add(L_212, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_213, L_214)), L_216))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_218 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_219;
		L_219 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_210, L_218, NULL);
		V_29 = L_219;
		// pixelsToAverage++;
		float L_220 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_220, (1.0f)));
	}

IL_03e2:
	{
		// if (y + normalSmooth < t.height)
		int32_t L_221 = V_26;
		int32_t L_222 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_223 = ___t0;
		NullCheck(L_223);
		int32_t L_224;
		L_224 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_223);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_221, L_222))) >= ((int32_t)L_224)))
		{
			goto IL_0415;
		}
	}
	{
		// c += pixels[(x + 0) + ((y + normalSmooth) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_225 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_226 = V_0;
		int32_t L_227 = V_27;
		int32_t L_228 = V_26;
		int32_t L_229 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_230 = ___t0;
		NullCheck(L_230);
		int32_t L_231;
		L_231 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_230);
		NullCheck(L_226);
		int32_t L_232 = ((int32_t)il2cpp_codegen_add(L_227, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_228, L_229)), L_231))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_233 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_234;
		L_234 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_225, L_233, NULL);
		V_29 = L_234;
		// pixelsToAverage++;
		float L_235 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_235, (1.0f)));
	}

IL_0415:
	{
		// if (x + normalSmooth < t.width)
		int32_t L_236 = V_27;
		int32_t L_237 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_238 = ___t0;
		NullCheck(L_238);
		int32_t L_239;
		L_239 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_238);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_236, L_237))) >= ((int32_t)L_239)))
		{
			goto IL_04b0;
		}
	}
	{
		// if (y - normalSmooth > 0)
		int32_t L_240 = V_26;
		int32_t L_241 = ___normalSmooth2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_240, L_241))) <= ((int32_t)0)))
		{
			goto IL_0454;
		}
	}
	{
		// c += pixels[(x + normalSmooth) + ((y - normalSmooth) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_242 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_243 = V_0;
		int32_t L_244 = V_27;
		int32_t L_245 = ___normalSmooth2;
		int32_t L_246 = V_26;
		int32_t L_247 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_248 = ___t0;
		NullCheck(L_248);
		int32_t L_249;
		L_249 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_248);
		NullCheck(L_243);
		int32_t L_250 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_244, L_245)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_246, L_247)), L_249))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_251 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_252;
		L_252 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_242, L_251, NULL);
		V_29 = L_252;
		// pixelsToAverage++;
		float L_253 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_253, (1.0f)));
	}

IL_0454:
	{
		// c += pixels[(x + normalSmooth) + ((y + 0) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_254 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_255 = V_0;
		int32_t L_256 = V_27;
		int32_t L_257 = ___normalSmooth2;
		int32_t L_258 = V_26;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_259 = ___t0;
		NullCheck(L_259);
		int32_t L_260;
		L_260 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_259);
		NullCheck(L_255);
		int32_t L_261 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_256, L_257)), ((int32_t)il2cpp_codegen_multiply(L_258, L_260))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_262 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_263;
		L_263 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_254, L_262, NULL);
		V_29 = L_263;
		// pixelsToAverage++;
		float L_264 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_264, (1.0f)));
		// if (y + normalSmooth < t.height)
		int32_t L_265 = V_26;
		int32_t L_266 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_267 = ___t0;
		NullCheck(L_267);
		int32_t L_268;
		L_268 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_267);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_265, L_266))) >= ((int32_t)L_268)))
		{
			goto IL_04b0;
		}
	}
	{
		// c += pixels[(x + normalSmooth) + ((y + normalSmooth) * t.width)];
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_269 = V_29;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_270 = V_0;
		int32_t L_271 = V_27;
		int32_t L_272 = ___normalSmooth2;
		int32_t L_273 = V_26;
		int32_t L_274 = ___normalSmooth2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_275 = ___t0;
		NullCheck(L_275);
		int32_t L_276;
		L_276 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_275);
		NullCheck(L_270);
		int32_t L_277 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_271, L_272)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_273, L_274)), L_276))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_278 = (L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_279;
		L_279 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_269, L_278, NULL);
		V_29 = L_279;
		// pixelsToAverage++;
		float L_280 = V_28;
		V_28 = ((float)il2cpp_codegen_add(L_280, (1.0f)));
	}

IL_04b0:
	{
		// pixels[x + y * t.width] = c / pixelsToAverage;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_281 = V_0;
		int32_t L_282 = V_27;
		int32_t L_283 = V_26;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_284 = ___t0;
		NullCheck(L_284);
		int32_t L_285;
		L_285 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_284);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_286 = V_29;
		float L_287 = V_28;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_288;
		L_288 = Color_op_Division_m641F85C0191C56932E452CAAC8E4974C43675FEB_inline(L_286, L_287, NULL);
		NullCheck(L_281);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_282, ((int32_t)il2cpp_codegen_multiply(L_283, L_285))))), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_288);
		// for (int x = 0; x < t.width; x++)
		int32_t L_289 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_289, 1));
	}

IL_04d1:
	{
		// for (int x = 0; x < t.width; x++)
		int32_t L_290 = V_27;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_291 = ___t0;
		NullCheck(L_291);
		int32_t L_292;
		L_292 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_291);
		if ((((int32_t)L_290) < ((int32_t)L_292)))
		{
			goto IL_02f9;
		}
	}
	{
		// for (int y = 0; y < t.height; y++)
		int32_t L_293 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_293, 1));
	}

IL_04e4:
	{
		// for (int y = 0; y < t.height; y++)
		int32_t L_294 = V_26;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_295 = ___t0;
		NullCheck(L_295);
		int32_t L_296;
		L_296 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_295);
		if ((((int32_t)L_294) < ((int32_t)L_296)))
		{
			goto IL_02f1;
		}
	}

IL_04f1:
	{
		// texNormal.SetPixels(pixels);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_297 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_298 = V_0;
		NullCheck(L_297);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_297, L_298, NULL);
		// texNormal.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_299 = V_1;
		NullCheck(L_299);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_299, NULL);
		// return texNormal;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_300 = V_1;
		return L_300;
	}
}
// System.Void AllIn1SpriteShader.AllIn1Shader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllIn1Shader__ctor_mD7733399489BF80F01D6E2A1F8BC8A082E1B856A (AllIn1Shader_t14B58455C6D71CBE6DD81780F56A0EBEAFB51F7D* __this, const RuntimeMethod* method) 
{
	{
		// public ShaderTypes shaderTypes = ShaderTypes.Invalid;
		__this->___shaderTypes_4 = 4;
		// [Range(1f, 20f)] public float normalStrength = 5f;
		__this->___normalStrength_9 = (5.0f);
		// [Range(0f, 3f)] public int normalSmoothing = 1;
		__this->___normalSmoothing_10 = 1;
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
// System.Void AllIn1SpriteShader.RandomSeed::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSeed_Start_m74F0B4932CB59370FC1FEC37E947F207141B8C4C (RandomSeed_t950B0BF456F6D57B4DCB01821828E084D9860074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF4C1963FC25CEBA356B471D3766D6A06B902D8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC1448C3684BCF31933FFFC9FE903C9316AF00E3);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_1 = NULL;
	{
		// Renderer renderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_0;
		// if(renderer != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// propertyBlock = new MaterialPropertyBlock();
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_3 = (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D*)il2cpp_codegen_object_new(MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MaterialPropertyBlock__ctor_m14C3432585F7BB65028BCD64A0FD6607A1B490FB(L_3, NULL);
		__this->___propertyBlock_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___propertyBlock_5), (void*)L_3);
		// propertyBlock.SetFloat(randomSeedProperty, Random.Range(0f, 100f));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_4 = __this->___propertyBlock_5;
		int32_t L_5 = __this->___randomSeedProperty_4;
		float L_6;
		L_6 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (100.0f), NULL);
		NullCheck(L_4);
		MaterialPropertyBlock_SetFloat_m6BA8DA03FAD1ABA0BD339E0E5157C4DF3C987267(L_4, L_5, L_6, NULL);
		// renderer.SetPropertyBlock(propertyBlock);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = V_0;
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_8 = __this->___propertyBlock_5;
		NullCheck(L_7);
		Renderer_SetPropertyBlock_mF565698782FE54580B17CC0BFF9B0C4F0D68DF50(L_7, L_8, NULL);
		return;
	}

IL_0048:
	{
		// Image image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9;
		L_9 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_1 = L_9;
		// if (image != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00a2;
		}
	}
	{
		// if (image.material != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = V_1;
		NullCheck(L_12);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13;
		L_13 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_12);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		// image.material.SetFloat(randomSeedProperty, Random.Range(0, 1000f));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = V_1;
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16;
		L_16 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_15);
		int32_t L_17 = __this->___randomSeedProperty_4;
		float L_18;
		L_18 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (1000.0f), NULL);
		NullCheck(L_16);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_16, L_17, L_18, NULL);
		return;
	}

IL_0087:
	{
		// else Debug.LogError("Missing Material on UI Image: " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAF4C1963FC25CEBA356B471D3766D6A06B902D8A, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
		return;
	}

IL_00a2:
	{
		// else Debug.LogError("Missing Renderer or UI Image on: " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEC1448C3684BCF31933FFFC9FE903C9316AF00E3, L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_24, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.RandomSeed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSeed__ctor_m8E2B4FF304FAA7C63E6E0576B6F09847A1CF6D62 (RandomSeed_t950B0BF456F6D57B4DCB01821828E084D9860074* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9486C3E8DCF321F2BDCA1BDD0584650965E27AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int randomSeedProperty = Shader.PropertyToID("_RandomSeed");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralC9486C3E8DCF321F2BDCA1BDD0584650965E27AD, NULL);
		__this->___randomSeedProperty_4 = L_0;
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
// System.Void AllIn1SpriteShader.SetAtlasUvs::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_Start_m8571450BC1AFE6E03399D8BC26D2BFF14936BB36 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	{
		// Setup();
		SetAtlasUvs_Setup_m9BF3E8695E0C5211136D4648EAAB4FCC4999E95D(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_Reset_mECE45824BDAED22973376D438E49235B50620BFA (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	{
		// Setup();
		SetAtlasUvs_Setup_m9BF3E8695E0C5211136D4648EAAB4FCC4999E95D(__this, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_Setup_m9BF3E8695E0C5211136D4648EAAB4FCC4999E95D (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetRendererReferencesIfNeeded()) GetAndSetUVs();
		bool L_0;
		L_0 = SetAtlasUvs_GetRendererReferencesIfNeeded_mA933FAA24CDB490AA1E6714C55D532457EB19525(__this, NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (GetRendererReferencesIfNeeded()) GetAndSetUVs();
		SetAtlasUvs_GetAndSetUVs_m6A4E8397DCBDF01EDD57A9B6589C0243AF2449C8(__this, NULL);
	}

IL_000e:
	{
		// if (!updateEveryFrame && Application.isPlaying && this != null) this.enabled = false;
		bool L_1 = __this->___updateEveryFrame_4;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// if (!updateEveryFrame && Application.isPlaying && this != null) this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::OnWillRenderObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_OnWillRenderObject_m932C7175D9DEAB12E856B622E909060130629341 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	{
		// if (updateEveryFrame)
		bool L_0 = __this->___updateEveryFrame_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// GetAndSetUVs();
		SetAtlasUvs_GetAndSetUVs_m6A4E8397DCBDF01EDD57A9B6589C0243AF2449C8(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::GetAndSetUVs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_GetAndSetUVs_m6A4E8397DCBDF01EDD57A9B6589C0243AF2449C8 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!GetRendererReferencesIfNeeded()) return;
		bool L_0;
		L_0 = SetAtlasUvs_GetRendererReferencesIfNeeded_mA933FAA24CDB490AA1E6714C55D532457EB19525(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!GetRendererReferencesIfNeeded()) return;
		return;
	}

IL_0009:
	{
		// if (!isUI)
		bool L_1 = __this->___isUI_9;
		if (L_1)
		{
			goto IL_0188;
		}
	}
	{
		// Sprite sprite = spriteRender.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___spriteRender_7;
		NullCheck(L_2);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3;
		L_3 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_2, NULL);
		V_0 = L_3;
		// Rect r = sprite.textureRect;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = V_0;
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_4, NULL);
		V_1 = L_5;
		// r.x /= sprite.texture.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&V_1);
		float L_7;
		L_7 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_6, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = V_0;
		NullCheck(L_8);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9;
		L_9 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_8, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_9);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_6, ((float)(L_7/((float)L_10))), NULL);
		// r.width /= sprite.texture.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_11 = (&V_1);
		float L_12;
		L_12 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_11, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_13 = V_0;
		NullCheck(L_13);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14;
		L_14 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_11, ((float)(L_12/((float)L_15))), NULL);
		// r.y /= sprite.texture.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_16 = (&V_1);
		float L_17;
		L_17 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_16, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = V_0;
		NullCheck(L_18);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_19;
		L_19 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_18, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_16, ((float)(L_17/((float)L_20))), NULL);
		// r.height /= sprite.texture.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_21 = (&V_1);
		float L_22;
		L_22 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_21, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23 = V_0;
		NullCheck(L_23);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_24;
		L_24 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_23, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_24);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_21, ((float)(L_22/((float)L_25))), NULL);
		// if(useMaterialInstanceIfPossible && Application.isPlaying)
		bool L_26 = __this->___useMaterialInstanceIfPossible_5;
		if (!L_26)
		{
			goto IL_0113;
		}
	}
	{
		bool L_27;
		L_27 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_27)
		{
			goto IL_0113;
		}
	}
	{
		// render.material.SetFloat(minXuv, r.xMin);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28 = __this->___render_6;
		NullCheck(L_28);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29;
		L_29 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_28, NULL);
		int32_t L_30 = __this->___minXuv_10;
		float L_31;
		L_31 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_1), NULL);
		NullCheck(L_29);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_29, L_30, L_31, NULL);
		// render.material.SetFloat(maxXuv, r.xMax);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_32 = __this->___render_6;
		NullCheck(L_32);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33;
		L_33 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_32, NULL);
		int32_t L_34 = __this->___maxXuv_11;
		float L_35;
		L_35 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_1), NULL);
		NullCheck(L_33);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_33, L_34, L_35, NULL);
		// render.material.SetFloat(minYuv, r.yMin);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_36 = __this->___render_6;
		NullCheck(L_36);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_37;
		L_37 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_36, NULL);
		int32_t L_38 = __this->___minYuv_12;
		float L_39;
		L_39 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_1), NULL);
		NullCheck(L_37);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_37, L_38, L_39, NULL);
		// render.material.SetFloat(maxYuv, r.yMax);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_40 = __this->___render_6;
		NullCheck(L_40);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41;
		L_41 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_40, NULL);
		int32_t L_42 = __this->___maxYuv_13;
		float L_43;
		L_43 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_1), NULL);
		NullCheck(L_41);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_41, L_42, L_43, NULL);
		return;
	}

IL_0113:
	{
		// render.sharedMaterial.SetFloat(minXuv, r.xMin);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_44 = __this->___render_6;
		NullCheck(L_44);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_45;
		L_45 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_44, NULL);
		int32_t L_46 = __this->___minXuv_10;
		float L_47;
		L_47 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_1), NULL);
		NullCheck(L_45);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_45, L_46, L_47, NULL);
		// render.sharedMaterial.SetFloat(maxXuv, r.xMax);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_48 = __this->___render_6;
		NullCheck(L_48);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49;
		L_49 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_48, NULL);
		int32_t L_50 = __this->___maxXuv_11;
		float L_51;
		L_51 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_1), NULL);
		NullCheck(L_49);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_49, L_50, L_51, NULL);
		// render.sharedMaterial.SetFloat(minYuv, r.yMin);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_52 = __this->___render_6;
		NullCheck(L_52);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_53;
		L_53 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_52, NULL);
		int32_t L_54 = __this->___minYuv_12;
		float L_55;
		L_55 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_1), NULL);
		NullCheck(L_53);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_53, L_54, L_55, NULL);
		// render.sharedMaterial.SetFloat(maxYuv, r.yMax);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_56 = __this->___render_6;
		NullCheck(L_56);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_57;
		L_57 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_56, NULL);
		int32_t L_58 = __this->___maxYuv_13;
		float L_59;
		L_59 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_1), NULL);
		NullCheck(L_57);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_57, L_58, L_59, NULL);
		return;
	}

IL_0188:
	{
		// Rect r = uiImage.sprite.textureRect;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_60 = __this->___uiImage_8;
		NullCheck(L_60);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_61;
		L_61 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_60, NULL);
		NullCheck(L_61);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_62;
		L_62 = Sprite_get_textureRect_m83CAD4AD2F41C02FBE447EBAB92C2AC76EB46D25(L_61, NULL);
		V_2 = L_62;
		// r.x /= uiImage.sprite.texture.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_63 = (&V_2);
		float L_64;
		L_64 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_63, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_65 = __this->___uiImage_8;
		NullCheck(L_65);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_66;
		L_66 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_65, NULL);
		NullCheck(L_66);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_67;
		L_67 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_66, NULL);
		NullCheck(L_67);
		int32_t L_68;
		L_68 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_67);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_63, ((float)(L_64/((float)L_68))), NULL);
		// r.width /= uiImage.sprite.texture.width;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_69 = (&V_2);
		float L_70;
		L_70 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_69, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_71 = __this->___uiImage_8;
		NullCheck(L_71);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_72;
		L_72 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_71, NULL);
		NullCheck(L_72);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_73;
		L_73 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_72, NULL);
		NullCheck(L_73);
		int32_t L_74;
		L_74 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_73);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_69, ((float)(L_70/((float)L_74))), NULL);
		// r.y /= uiImage.sprite.texture.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_75 = (&V_2);
		float L_76;
		L_76 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_75, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_77 = __this->___uiImage_8;
		NullCheck(L_77);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_78;
		L_78 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_77, NULL);
		NullCheck(L_78);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_79;
		L_79 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_78, NULL);
		NullCheck(L_79);
		int32_t L_80;
		L_80 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_79);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_75, ((float)(L_76/((float)L_80))), NULL);
		// r.height /= uiImage.sprite.texture.height;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_81 = (&V_2);
		float L_82;
		L_82 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8(L_81, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_83 = __this->___uiImage_8;
		NullCheck(L_83);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_84;
		L_84 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_83, NULL);
		NullCheck(L_84);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_85;
		L_85 = Sprite_get_texture_mEEA6640C1B5D38F84CB64C775B201D7D9F48E045(L_84, NULL);
		NullCheck(L_85);
		int32_t L_86;
		L_86 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_85);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03(L_81, ((float)(L_82/((float)L_86))), NULL);
		// uiImage.material.SetFloat(minXuv, r.xMin);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_87 = __this->___uiImage_8;
		NullCheck(L_87);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_88;
		L_88 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_87);
		int32_t L_89 = __this->___minXuv_10;
		float L_90;
		L_90 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&V_2), NULL);
		NullCheck(L_88);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_88, L_89, L_90, NULL);
		// uiImage.material.SetFloat(maxXuv, r.xMax);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91 = __this->___uiImage_8;
		NullCheck(L_91);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_92;
		L_92 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_91);
		int32_t L_93 = __this->___maxXuv_11;
		float L_94;
		L_94 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&V_2), NULL);
		NullCheck(L_92);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_92, L_93, L_94, NULL);
		// uiImage.material.SetFloat(minYuv, r.yMin);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_95 = __this->___uiImage_8;
		NullCheck(L_95);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_96;
		L_96 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_95);
		int32_t L_97 = __this->___minYuv_12;
		float L_98;
		L_98 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&V_2), NULL);
		NullCheck(L_96);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_96, L_97, L_98, NULL);
		// uiImage.material.SetFloat(maxYuv, r.yMax);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_99 = __this->___uiImage_8;
		NullCheck(L_99);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_100;
		L_100 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_99);
		int32_t L_101 = __this->___maxYuv_13;
		float L_102;
		L_102 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&V_2), NULL);
		NullCheck(L_100);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_100, L_101, L_102, NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::ResetAtlasUvs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_ResetAtlasUvs_mC8A49A1EA3DB69DAD8D19CFCC92166113A0FF368 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	{
		// if (!GetRendererReferencesIfNeeded()) return;
		bool L_0;
		L_0 = SetAtlasUvs_GetRendererReferencesIfNeeded_mA933FAA24CDB490AA1E6714C55D532457EB19525(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!GetRendererReferencesIfNeeded()) return;
		return;
	}

IL_0009:
	{
		// if (!isUI)
		bool L_1 = __this->___isUI_9;
		if (L_1)
		{
			goto IL_00fd;
		}
	}
	{
		// if(useMaterialInstanceIfPossible && Application.isPlaying)
		bool L_2 = __this->___useMaterialInstanceIfPossible_5;
		if (!L_2)
		{
			goto IL_0090;
		}
	}
	{
		bool L_3;
		L_3 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_3)
		{
			goto IL_0090;
		}
	}
	{
		// render.material.SetFloat(minXuv, 0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___render_6;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		int32_t L_6 = __this->___minXuv_10;
		NullCheck(L_5);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_5, L_6, (0.0f), NULL);
		// render.material.SetFloat(maxXuv, 1f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->___render_6;
		NullCheck(L_7);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		int32_t L_9 = __this->___maxXuv_11;
		NullCheck(L_8);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_8, L_9, (1.0f), NULL);
		// render.material.SetFloat(minYuv, 0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = __this->___render_6;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		int32_t L_12 = __this->___minYuv_12;
		NullCheck(L_11);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_11, L_12, (0.0f), NULL);
		// render.material.SetFloat(maxYuv, 1f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = __this->___render_6;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14;
		L_14 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_13, NULL);
		int32_t L_15 = __this->___maxYuv_13;
		NullCheck(L_14);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_14, L_15, (1.0f), NULL);
		return;
	}

IL_0090:
	{
		// render.sharedMaterial.SetFloat(minXuv, 0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_16 = __this->___render_6;
		NullCheck(L_16);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_17;
		L_17 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_16, NULL);
		int32_t L_18 = __this->___minXuv_10;
		NullCheck(L_17);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_17, L_18, (0.0f), NULL);
		// render.sharedMaterial.SetFloat(maxXuv, 1f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19 = __this->___render_6;
		NullCheck(L_19);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_19, NULL);
		int32_t L_21 = __this->___maxXuv_11;
		NullCheck(L_20);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_20, L_21, (1.0f), NULL);
		// render.sharedMaterial.SetFloat(minYuv, 0f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22 = __this->___render_6;
		NullCheck(L_22);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23;
		L_23 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_22, NULL);
		int32_t L_24 = __this->___minYuv_12;
		NullCheck(L_23);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_23, L_24, (0.0f), NULL);
		// render.sharedMaterial.SetFloat(maxYuv, 1f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_25 = __this->___render_6;
		NullCheck(L_25);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_26;
		L_26 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_25, NULL);
		int32_t L_27 = __this->___maxYuv_13;
		NullCheck(L_26);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_26, L_27, (1.0f), NULL);
		return;
	}

IL_00fd:
	{
		// uiImage.material.SetFloat(minXuv, 0f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___uiImage_8;
		NullCheck(L_28);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29;
		L_29 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_28);
		int32_t L_30 = __this->___minXuv_10;
		NullCheck(L_29);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_29, L_30, (0.0f), NULL);
		// uiImage.material.SetFloat(maxXuv, 1f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___uiImage_8;
		NullCheck(L_31);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_32;
		L_32 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_31);
		int32_t L_33 = __this->___maxXuv_11;
		NullCheck(L_32);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_32, L_33, (1.0f), NULL);
		// uiImage.material.SetFloat(minYuv, 0f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34 = __this->___uiImage_8;
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_34);
		int32_t L_36 = __this->___minYuv_12;
		NullCheck(L_35);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_35, L_36, (0.0f), NULL);
		// uiImage.material.SetFloat(maxYuv, 1f);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___uiImage_8;
		NullCheck(L_37);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38;
		L_38 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_37);
		int32_t L_39 = __this->___maxYuv_13;
		NullCheck(L_38);
		Material_SetFloat_m3ECFD92072347A8620254F014865984FA68211A8(L_38, L_39, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::UpdateEveryFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs_UpdateEveryFrame_m68362F9EE1B3826A51E80A1BFCC43A9B2FC7F60B (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, bool ___everyFrame0, const RuntimeMethod* method) 
{
	{
		// updateEveryFrame = everyFrame;
		bool L_0 = ___everyFrame0;
		__this->___updateEveryFrame_4 = L_0;
		// }
		return;
	}
}
// System.Boolean AllIn1SpriteShader.SetAtlasUvs::GetRendererReferencesIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetAtlasUvs_GetRendererReferencesIfNeeded_mA933FAA24CDB490AA1E6714C55D532457EB19525 (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spriteRender == null) spriteRender = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRender_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (spriteRender == null) spriteRender = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRender_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRender_7), (void*)L_2);
	}

IL_001a:
	{
		// if (spriteRender != null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRender_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0066;
		}
	}
	{
		// if (spriteRender.sprite == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___spriteRender_7;
		NullCheck(L_5);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6;
		L_6 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// DestroyImmediate(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0043:
	{
		// if (render == null) render = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = __this->___render_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// if (render == null) render = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10;
		L_10 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___render_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___render_6), (void*)L_10);
	}

IL_005d:
	{
		// isUI = false;
		__this->___isUI_9 = (bool)0;
		goto IL_00b7;
	}

IL_0066:
	{
		// if (uiImage == null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___uiImage_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0096;
		}
	}
	{
		// uiImage = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___uiImage_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___uiImage_8), (void*)L_13);
		// if (uiImage != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___uiImage_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_15)
		{
			goto IL_0096;
		}
	}
	{
		// DestroyImmediate(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_0096:
	{
		// if (render == null) render = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_16 = __this->___render_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// if (render == null) render = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_18;
		L_18 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___render_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___render_6), (void*)L_18);
	}

IL_00b0:
	{
		// isUI = true;
		__this->___isUI_9 = (bool)1;
	}

IL_00b7:
	{
		// if (spriteRender == null && uiImage == null)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_19 = __this->___spriteRender_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00db;
		}
	}
	{
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___uiImage_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00db;
		}
	}
	{
		// DestroyImmediate(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(__this, NULL);
		// return false;
		return (bool)0;
	}

IL_00db:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AllIn1SpriteShader.SetAtlasUvs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetAtlasUvs__ctor_m62441EA7F14E52EBBE72EF1138CB4274528D7C3C (SetAtlasUvs_t88726EF09C545E5E44F946C409709B7DB0F42143* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3728D7FFA3384EEA2829B4C8467CABA85CC94C69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E3B1BE3FD3E1947CE910239BD8EBB0FC2393452);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BD563D265E492444F9716B330F66A8F0A9EF3F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83C04DB8961FE223A4D4C904CE22EB4B37E8844E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int minXuv = Shader.PropertyToID("_MinXUV");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral6BD563D265E492444F9716B330F66A8F0A9EF3F9, NULL);
		__this->___minXuv_10 = L_0;
		// private readonly int maxXuv = Shader.PropertyToID("_MaxXUV");
		int32_t L_1;
		L_1 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral5E3B1BE3FD3E1947CE910239BD8EBB0FC2393452, NULL);
		__this->___maxXuv_11 = L_1;
		// private readonly int minYuv = Shader.PropertyToID("_MinYUV");
		int32_t L_2;
		L_2 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral3728D7FFA3384EEA2829B4C8467CABA85CC94C69, NULL);
		__this->___minYuv_12 = L_2;
		// private readonly int maxYuv = Shader.PropertyToID("_MaxYUV");
		int32_t L_3;
		L_3 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteral83C04DB8961FE223A4D4C904CE22EB4B37E8844E, NULL);
		__this->___maxYuv_13 = L_3;
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
// System.Void AllIn1SpriteShader.SetGlobalTimeNew::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalTimeNew_Start_mBF59C96385A36DAC658C24614101B689FE93D7F7 (SetGlobalTimeNew_tA60D1711CA7FE06C7FEAAD3E08F2CD7C3947E35B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1A9DDB3A06F7F4A372807897084E30EEDC02825);
		s_Il2CppMethodInitialized = true;
	}
	{
		// globalTime = Shader.PropertyToID("globalUnscaledTime");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralD1A9DDB3A06F7F4A372807897084E30EEDC02825, NULL);
		__this->___globalTime_4 = L_0;
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetGlobalTimeNew::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalTimeNew_Update_m4224E1F52C7758C18B09DBC89C569A5AEFF4DCBE (SetGlobalTimeNew_tA60D1711CA7FE06C7FEAAD3E08F2CD7C3947E35B* __this, const RuntimeMethod* method) 
{
	{
		// Shader.SetGlobalFloat(globalTime, Time.unscaledTime / 20f);
		int32_t L_0 = __this->___globalTime_4;
		float L_1;
		L_1 = Time_get_unscaledTime_mAF4040B858903E1325D1C65B8BF1AC61460B2503(NULL);
		Shader_SetGlobalFloat_mE7D0DA2B0A62925E093B318785AF82A173794AFC(L_0, ((float)(L_1/(20.0f))), NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetGlobalTimeNew::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalTimeNew__ctor_mAF9ABA191F24BCC30072B74158EE39B92D271E6B (SetGlobalTimeNew_tA60D1711CA7FE06C7FEAAD3E08F2CD7C3947E35B* __this, const RuntimeMethod* method) 
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
// System.Void AllIn1SpriteShader.SetGlobalTimeUnity2018::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalTimeUnity2018_Start_m2980E6AA9B2B0D81F29635FEDDD7C9DBEB707BF4 (SetGlobalTimeUnity2018_t762330FA40264EED0C410BA8A677D8CD8EB87265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1A9DDB3A06F7F4A372807897084E30EEDC02825);
		s_Il2CppMethodInitialized = true;
	}
	{
		// globalTime = Shader.PropertyToID("globalUnscaledTime");
		int32_t L_0;
		L_0 = Shader_PropertyToID_mE98523D50F5656CAE89B30695C458253EB8956CA(_stringLiteralD1A9DDB3A06F7F4A372807897084E30EEDC02825, NULL);
		__this->___globalTime_4 = L_0;
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetGlobalTimeUnity2018::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalTimeUnity2018_Update_mE8BAFA0F0BC8B86E1F7EBC4166FF87770AC807E9 (SetGlobalTimeUnity2018_t762330FA40264EED0C410BA8A677D8CD8EB87265* __this, const RuntimeMethod* method) 
{
	{
		// Shader.SetGlobalFloat(globalTime, Time.time / 20f);
		int32_t L_0 = __this->___globalTime_4;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		Shader_SetGlobalFloat_mE7D0DA2B0A62925E093B318785AF82A173794AFC(L_0, ((float)(L_1/(20.0f))), NULL);
		// }
		return;
	}
}
// System.Void AllIn1SpriteShader.SetGlobalTimeUnity2018::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalTimeUnity2018__ctor_m3AC1F94DE3EA116BEF74A428CF747B0C4DCCB0B2 (SetGlobalTimeUnity2018_t762330FA40264EED0C410BA8A677D8CD8EB87265* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t All1ShaderDemoController_GetCurrExpositor_mDFB94C042A2717616ECAF4121CB12FA509DE4CC8_inline (All1ShaderDemoController_t0F3D0F0BD90240E9D2B0FEE9FE4D4E2581192A14* __this, const RuntimeMethod* method) 
{
	{
		// public int GetCurrExpositor() { return currExpositor; }
		int32_t L_0 = __this->___currExpositor_8;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Division_m641F85C0191C56932E452CAAC8E4974C43675FEB_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, float ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		float L_2 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a0;
		float L_4 = L_3.___g_1;
		float L_5 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___b_2;
		float L_8 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___a_3;
		float L_11 = ___b1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
