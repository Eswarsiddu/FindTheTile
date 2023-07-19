#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject>
struct Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<UISCREENS>
struct IEqualityComparer_1_t88249B944A2097C78B1DB586B3859FC6E59A1892;
// System.Collections.Generic.IList`1<System.Collections.Generic.List`1<System.Int32>>
struct IList_1_t9D85B7ACDA369DF4D9C226515259F53DD467F9E0;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// System.Collections.Generic.Dictionary`2/KeyCollection<UISCREENS,UnityEngine.GameObject>
struct KeyCollection_t699A96666A695F9C5F6AB74D851928730B1389C4;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>
struct List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Tile>
struct List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<UISCREENS,UnityEngine.GameObject>
struct ValueCollection_tE53EAB676B8A95C1235F8C2D0796D74989A60213;
// System.Collections.Generic.Dictionary`2/Entry<UISCREENS,UnityEngine.GameObject>[]
struct EntryU5BU5D_t778575A50C4F7660194CC0A437E0B84122156422;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
// System.Collections.Generic.List`1<Tile>[]
struct List_1U5BU5D_t43BE391AAA0433993FDE64C74373FB96A12117F7;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// Tile[]
struct TileU5BU5D_tF9596405933A24DA27939A6D59B87CB4731E1F64;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// CanvasManager
struct CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Constants
struct Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// GameEnd
struct GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameScreen
struct GameScreen_t9030C374678C6774A56829068211621547FB6B26;
// GridManager
struct GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0;
// HomeScreen
struct HomeScreen_t5467D3C1F8D886E76E4B284E1A790C61587B25C7;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PauseScreen
struct PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Screen
struct Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral56F60D61B11030DD7102A973E38C35863AF61F1D;
IL2CPP_EXTERN_C String_t* _stringLiteral6577704CE5DF71EE5888AEB6D06D2465A1DBE2D8;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m788F977610FDB7E34252DFB5B25F737F923AD7CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScreen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC_m6AC7E0D1F588268481EF96F5619181642FC1FC08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5E24D6624592C9E236DE10AD53BFE3B83F268DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1AC2FBBB213220F824E89E68A5270F71A23D0DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBA96BC3B34AEA1213CB009583D0D944384ED776A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6B6456542E3A645F2971C58DAB63F3045C9E2EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAD68C0E4168524055013132A1DDB48E936AB964A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extentions_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CBA48A0F6FAB4B2BE659135ED37C43D738A1573_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extentions_Shuffle_TisList_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_mC041B8714DDCCBA63A622794E23E41493C5F62AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extentions_Slice_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m47A116874FABC4B605555E5867891C096333F128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m49247173285BB934A4291B1926CE5D2AC3194DE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50B0E828258E1987EAF537EA89DD9F815259DF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4784A64850A006D441D3BFDC57480DE1EE22CF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1ADBF58E9E494C0E62035E13E5E4C0AED2869934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5D5C477C8C7D4FC835F4491E13B58E2C10C2A984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject>
struct Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t778575A50C4F7660194CC0A437E0B84122156422* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t699A96666A695F9C5F6AB74D851928730B1389C4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE53EAB676B8A95C1235F8C2D0796D74989A60213* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>
struct List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_t43BE391AAA0433993FDE64C74373FB96A12117F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<Tile>
struct List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TileU5BU5D_tF9596405933A24DA27939A6D59B87CB4731E1F64* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// Constants
struct Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80  : public RuntimeObject
{
};

// Extentions
struct Extentions_t76F71BAAFF972DAA935939C0214879A55930A984  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Int32>>
struct Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____current_3;
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
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

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Transform> BoardManager::tilesTransform
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___tilesTransform_4;
	// TMPro.TextMeshProUGUI BoardManager::timerTextUI
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___timerTextUI_5;
	// System.Int32 BoardManager::score
	int32_t ___score_6;
	// Tile BoardManager::selectedTile
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___selectedTile_7;
	// System.String BoardManager::selectedString
	String_t* ___selectedString_8;
	// GridManager BoardManager::GridManager
	GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* ___GridManager_9;
	// UnityEngine.GameObject BoardManager::tilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tilePrefab_10;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>> BoardManager::tilesGrid
	List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* ___tilesGrid_11;
	// TMPro.TextMeshProUGUI BoardManager::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_12;
	// System.Int32 BoardManager::gridSize
	int32_t ___gridSize_13;
	// System.Single BoardManager::gap
	float ___gap_14;
	// CanvasManager BoardManager::canvasManager
	CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* ___canvasManager_15;
	// System.Boolean BoardManager::gamEnd
	bool ___gamEnd_16;
	// System.Single BoardManager::timer
	float ___timer_17;
	// System.Single BoardManager::timeInSeconds
	float ___timeInSeconds_18;
	// System.Boolean BoardManager::gameStart
	bool ___gameStart_19;
};

// CanvasManager
struct CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UISCREENS CanvasManager::HOME
	int32_t ___HOME_4;
	// UISCREENS CanvasManager::GAME
	int32_t ___GAME_5;
	// UISCREENS CanvasManager::GAMEEND
	int32_t ___GAMEEND_6;
	// UISCREENS CanvasManager::PAUSE
	int32_t ___PAUSE_7;
	// System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject> CanvasManager::screens
	Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* ___screens_9;
};

// GridManager
struct GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GridManager::letters
	String_t* ___letters_4;
	// System.Collections.Generic.List`1<System.Char> GridManager::alphabets
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* ___alphabets_5;
	// System.Collections.Generic.List`1<System.Int32> GridManager::arrangedLetters
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___arrangedLetters_6;
};

// Screen
struct Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UISCREENS Screen::screen
	int32_t ___screen_4;
};

// Tile
struct Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshPro Tile::textUI
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___textUI_4;
	// UnityEngine.GameObject Tile::textUIObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___textUIObject_5;
	// UnityEngine.GameObject Tile::ring
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ring_6;
	// System.String Tile::first
	String_t* ___first_7;
	// System.String Tile::second
	String_t* ___second_8;
	// System.Boolean Tile::selected
	bool ___selected_9;
	// BoardManager Tile::boardManager
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___boardManager_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameEnd
struct GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0  : public Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC
{
};

// GameScreen
struct GameScreen_t9030C374678C6774A56829068211621547FB6B26  : public Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// HomeScreen
struct HomeScreen_t5467D3C1F8D886E76E4B284E1A790C61587B25C7  : public Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC
{
};

// PauseScreen
struct PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD  : public Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC
{
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_266;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_267;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_268;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_269;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_270;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_271;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_272;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_273;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_274;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_275;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_276;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_277;
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_298;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_299;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_300;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_301;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_302;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_266;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_267;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_268;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_269;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_270;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_271;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_272;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_273;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_274;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_275;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_276;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_277;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_279;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_300;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_301;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_302;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_303;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_304;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_305;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject>

// System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>
struct List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	List_1U5BU5D_t43BE391AAA0433993FDE64C74373FB96A12117F7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Char>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Tile>
struct List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TileU5BU5D_tF9596405933A24DA27939A6D59B87CB4731E1F64* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Tile>

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>

// Constants
struct Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_StaticFields
{
	// System.Random Constants::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_0;
};

// Constants

// Extentions

// Extentions

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Int32>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<System.Single>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// TMPro.MaterialReference

// TMPro.MaterialReference

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// TMPro.TMP_FontStyleStack

// TMPro.TMP_FontStyleStack

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// TMPro.TMP_Offset

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/SpecialCharacter

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_Text/TextBackingContainer

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.Extents

// TMPro.HighlightState

// TMPro.HighlightState

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// TMPro.VertexGradient

// TMPro.VertexGradient

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// TMPro.TMP_LineInfo

// TMPro.TMP_LineInfo

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

// TMPro.WordWrapState

// TMPro.WordWrapState

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// BoardManager

// BoardManager

// CanvasManager
struct CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_StaticFields
{
	// CanvasManager CanvasManager::instance
	CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* ___instance_8;
};

// CanvasManager

// GridManager

// GridManager

// Screen

// Screen

// Tile

// Tile

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// GameEnd

// GameEnd

// GameScreen

// GameScreen

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// HomeScreen

// HomeScreen

// PauseScreen

// PauseScreen

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_278;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_279;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_297;
};

// TMPro.TextMeshPro

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_280;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_281;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_282;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_299;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// System.Void Extentions::Shuffle<System.Int32>(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extentions_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CBA48A0F6FAB4B2BE659135ED37C43D738A1573_gshared (RuntimeObject* ___0_list, const RuntimeMethod* method) ;
// System.Void Extentions::Slice<System.Int32>(System.Collections.Generic.IList`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extentions_Slice_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m47A116874FABC4B605555E5867891C096333F128_gshared (RuntimeObject* ___0_list, int32_t ___1_noOfElements, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void Extentions::Shuffle<System.Object>(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extentions_Shuffle_TisRuntimeObject_m10E9B7094F9B53B00B4B78643C9FB6E06FB471D2_gshared (RuntimeObject* ___0_list, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<GridManager>()
inline GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* Component_GetComponentInChildren_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m788F977610FDB7E34252DFB5B25F737F923AD7CD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>::.ctor()
inline void List_1__ctor_m5D5C477C8C7D4FC835F4491E13B58E2C10C2A984 (List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Tile>::.ctor()
inline void List_1__ctor_m1ADBF58E9E494C0E62035E13E5E4C0AED2869934 (List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Tile>()
inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Tile>::Add(T)
inline void List_1_Add_m50B0E828258E1987EAF537EA89DD9F815259DF4D_inline (List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* __this, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3*, Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>::Add(T)
inline void List_1_Add_m49247173285BB934A4291B1926CE5D2AC3194DE6_inline (List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* __this, List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D*, List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void CanvasManager::openGameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_openGameEnd_m047EA8C9A3C3E3E3181B0C8DB680E8BBB2BC1E57 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void GridManager::startGame(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_startGame_m11A5AB83C9C8BD99CDD3FFF32BDC96EFC9825C25 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, int32_t ___0_gridSize, List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* ___1_tilesGrid, const RuntimeMethod* method) ;
// System.Void CanvasManager::openGameScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_openGameScreen_mEB4D7A63E7A2890910A6CDD6D1C5EBF8AD896931 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) ;
// System.Void CanvasManager::pauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_pauseGame_m58EA32DBC6343E119710732299306C41AF38EEF0 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) ;
// System.Void CanvasManager::resumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_resumeGame_m97EFBCC2535FC51DFC61640B90BF34DF2D5ED742 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.String Constants::timeToText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Constants_timeToText_mDDC5C3BBD8016F1CEA2B2519C867AD858E29B442 (int32_t ___0_time, const RuntimeMethod* method) ;
// System.Void CanvasManager::openHomeScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_openHomeScreen_m7A95585347889FFBA56E6DF107E706D2DA616A26 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Screen>()
inline Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* Component_GetComponent_TisScreen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC_m6AC7E0D1F588268481EF96F5619181642FC1FC08 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5E24D6624592C9E236DE10AD53BFE3B83F268DAA (Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* __this, int32_t ___0_key, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___0_key, ___1_value, method);
}
// TValue System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject>::get_Item(TKey)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A (Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// System.Void CanvasManager::enableScreen(UISCREENS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_enableScreen_m84F850EA350F07FC03F29956E36E1298A1BB2AD1 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, int32_t ___0_screen, const RuntimeMethod* method) ;
// System.Void CanvasManager::disableScreen(UISCREENS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, int32_t ___0_screen, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UISCREENS,UnityEngine.GameObject>::.ctor()
inline void Dictionary_2__ctor_m1AC2FBBB213220F824E89E68A5270F71A23D0DA9 (Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
inline void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
inline int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline)(__this, method);
}
// System.Void Extentions::Shuffle<System.Int32>(System.Collections.Generic.IList`1<T>)
inline void Extentions_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CBA48A0F6FAB4B2BE659135ED37C43D738A1573 (RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Extentions_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CBA48A0F6FAB4B2BE659135ED37C43D738A1573_gshared)(___0_list, method);
}
// System.Void Extentions::Slice<System.Int32>(System.Collections.Generic.IList`1<T>,System.Int32)
inline void Extentions_Slice_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m47A116874FABC4B605555E5867891C096333F128 (RuntimeObject* ___0_list, int32_t ___1_noOfElements, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Extentions_Slice_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m47A116874FABC4B605555E5867891C096333F128_gshared)(___0_list, ___1_noOfElements, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2 (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::Add(T)
inline void List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_inline (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Extentions::Shuffle<System.Collections.Generic.List`1<System.Int32>>(System.Collections.Generic.IList`1<T>)
inline void Extentions_Shuffle_TisList_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_mC041B8714DDCCBA63A622794E23E41493C5F62AB (RuntimeObject* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Extentions_Shuffle_TisRuntimeObject_m10E9B7094F9B53B00B4B78643C9FB6E06FB471D2_gshared)(___0_list, method);
}
// System.Void GridManager::createGrid(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>,System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_createGrid_m7C092F94254C897D5CA21F14832DDC05148284DF (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* ___0_grid, int32_t ___1_noOfElements, List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___2_pairs, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::GetEnumerator()
inline Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622 List_1_GetEnumerator_m4784A64850A006D441D3BFDC57480DE1EE22CF40 (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622 (*) (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Int32>>::Dispose()
inline void Enumerator_Dispose_mBA96BC3B34AEA1213CB009583D0D944384ED776A (Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Int32>>::get_Current()
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerator_get_Current_mAD68C0E4168524055013132A1DDB48E936AB964A_inline (Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622* __this, const RuntimeMethod* method)
{
	return ((  List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* (*) (Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>::get_Item(System.Int32)
inline List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8 (List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* (*) (List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<Tile>::get_Item(System.Int32)
inline Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020 (List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* (*) (List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
inline Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, const RuntimeMethod*))List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared)(__this, ___0_index, method);
}
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.List`1<System.Int32>>::MoveNext()
inline bool Enumerator_MoveNext_m6B6456542E3A645F2971C58DAB63F3045C9E2EB6 (Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
inline void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared)(__this, method);
}
// System.Void Screen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen__ctor_m4709800A5D3AA6C51A0AB5C6327ED672F684DC72 (Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void BoardManager::increaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_increaseScore_mCC56B038CBE1C364A96807123037AAC6F32894C4 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String Constants::twoDigits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Constants_twoDigits_m988F886675F2D972FC8D328865A827440BA06EA3 (int32_t ___0_number, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
// System.Void BoardManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_Start_mA12FE9F57923857C2251FE94162437CB8CB17EA9 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m788F977610FDB7E34252DFB5B25F737F923AD7CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49247173285BB934A4291B1926CE5D2AC3194DE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m50B0E828258E1987EAF537EA89DD9F815259DF4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1ADBF58E9E494C0E62035E13E5E4C0AED2869934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5D5C477C8C7D4FC835F4491E13B58E2C10C2A984_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	int32_t V_6 = 0;
	List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* V_7 = NULL;
	int32_t V_8 = 0;
	Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* V_9 = NULL;
	{
		// canvasManager = CanvasManager.instance;
		CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* L_0 = ((CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_StaticFields*)il2cpp_codegen_static_fields_for(CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_il2cpp_TypeInfo_var))->___instance_8;
		__this->___canvasManager_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvasManager_15), (void*)L_0);
		// score = 0;
		__this->___score_6 = 0;
		// GridManager = transform.GetComponentInChildren<GridManager>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_2;
		L_2 = Component_GetComponentInChildren_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m788F977610FDB7E34252DFB5B25F737F923AD7CD(L_1, Component_GetComponentInChildren_TisGridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0_m788F977610FDB7E34252DFB5B25F737F923AD7CD_RuntimeMethod_var);
		__this->___GridManager_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GridManager_9), (void*)L_2);
		// GameObject gridObject = GridManager.gameObject;
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_3 = __this->___GridManager_9;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < gridSize * gridSize; i++)
		V_4 = 0;
		goto IL_006d;
	}

IL_0034:
	{
		// GameObject temp = Instantiate(tilePrefab, gridObject.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___tilePrefab_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_5 = L_8;
		// tilesTransform.Add(temp.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_9 = __this->___tilesTransform_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_9);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_9, L_11, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// temp.name = i.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_5;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		NullCheck(L_12);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_12, L_13, NULL);
		// for (int i = 0; i < gridSize * gridSize; i++)
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_006d:
	{
		// for (int i = 0; i < gridSize * gridSize; i++)
		int32_t L_15 = V_4;
		int32_t L_16 = __this->___gridSize_13;
		int32_t L_17 = __this->___gridSize_13;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_16, L_17)))))
		{
			goto IL_0034;
		}
	}
	{
		// float startingNumber = ((float)gridSize / 2) - 0.5f;
		int32_t L_18 = __this->___gridSize_13;
		V_1 = ((float)il2cpp_codegen_subtract(((float)(((float)L_18)/(2.0f))), (0.5f)));
		// Vector3 gridPosition = new Vector3(-startingNumber, startingNumber, 0);
		float L_19 = V_1;
		float L_20 = V_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), ((-L_19)), L_20, (0.0f), NULL);
		// int transformIndex = 0;
		V_3 = 0;
		// tilesGrid = new List<List<Tile>>();
		List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_21 = (List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D*)il2cpp_codegen_object_new(List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		List_1__ctor_m5D5C477C8C7D4FC835F4491E13B58E2C10C2A984(L_21, List_1__ctor_m5D5C477C8C7D4FC835F4491E13B58E2C10C2A984_RuntimeMethod_var);
		__this->___tilesGrid_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tilesGrid_11), (void*)L_21);
		// for (int i = 0; i < gridSize; i++)
		V_6 = 0;
		goto IL_0165;
	}

IL_00b6:
	{
		// List<Tile> temp = new List<Tile>();
		List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_22 = (List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3*)il2cpp_codegen_object_new(List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		List_1__ctor_m1ADBF58E9E494C0E62035E13E5E4C0AED2869934(L_22, List_1__ctor_m1ADBF58E9E494C0E62035E13E5E4C0AED2869934_RuntimeMethod_var);
		V_7 = L_22;
		// for (int j = 0; j < gridSize; j++)
		V_8 = 0;
		goto IL_012e;
	}

IL_00c2:
	{
		// tilesTransform[transformIndex++].position = gridPosition;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_23 = __this->___tilesTransform_4;
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_23, L_25, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_26);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_26, L_27, NULL);
		// gridPosition.x += gap;
		float* L_28 = (&(&V_2)->___x_2);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = __this->___gap_14;
		*((float*)L_29) = (float)((float)il2cpp_codegen_add(L_30, L_31));
		// tilesTransform[transformIndex - 1].gameObject.SetActive(false);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_32 = __this->___tilesTransform_4;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_32, ((int32_t)il2cpp_codegen_subtract(L_33, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_34, NULL);
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// Tile _tile = tilesTransform[transformIndex - 1].GetComponent<Tile>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_36 = __this->___tilesTransform_4;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_36, ((int32_t)il2cpp_codegen_subtract(L_37, 1)), List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_38);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_39;
		L_39 = Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998(L_38, Component_GetComponent_TisTile_t192D2F5511792792FB74C37341AFAA9F6B77AE64_m3C9E6A980DA050E176CF32E9F6A5414E05E66998_RuntimeMethod_var);
		V_9 = L_39;
		// _tile.boardManager = this;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_40 = V_9;
		NullCheck(L_40);
		L_40->___boardManager_10 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___boardManager_10), (void*)__this);
		// temp.Add(_tile);
		List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_41 = V_7;
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_42 = V_9;
		NullCheck(L_41);
		List_1_Add_m50B0E828258E1987EAF537EA89DD9F815259DF4D_inline(L_41, L_42, List_1_Add_m50B0E828258E1987EAF537EA89DD9F815259DF4D_RuntimeMethod_var);
		// for (int j = 0; j < gridSize; j++)
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_012e:
	{
		// for (int j = 0; j < gridSize; j++)
		int32_t L_44 = V_8;
		int32_t L_45 = __this->___gridSize_13;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00c2;
		}
	}
	{
		// tilesGrid.Add(temp);
		List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_46 = __this->___tilesGrid_11;
		List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_47 = V_7;
		NullCheck(L_46);
		List_1_Add_m49247173285BB934A4291B1926CE5D2AC3194DE6_inline(L_46, L_47, List_1_Add_m49247173285BB934A4291B1926CE5D2AC3194DE6_RuntimeMethod_var);
		// gridPosition.y -= gap;
		float* L_48 = (&(&V_2)->___y_3);
		float* L_49 = L_48;
		float L_50 = *((float*)L_49);
		float L_51 = __this->___gap_14;
		*((float*)L_49) = (float)((float)il2cpp_codegen_subtract(L_50, L_51));
		// gridPosition.x = -startingNumber;
		float L_52 = V_1;
		(&V_2)->___x_2 = ((-L_52));
		// for (int i = 0; i < gridSize; i++)
		int32_t L_53 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_0165:
	{
		// for (int i = 0; i < gridSize; i++)
		int32_t L_54 = V_6;
		int32_t L_55 = __this->___gridSize_13;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00b6;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::setSelected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_setSelected_m4CF4D80154231FFEF26EA46765CD2A74272D97C9 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, String_t* ___0__selectedString, const RuntimeMethod* method) 
{
	{
		// selectedString = _selectedString;
		String_t* L_0 = ___0__selectedString;
		__this->___selectedString_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedString_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void BoardManager::increaseScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_increaseScore_mCC56B038CBE1C364A96807123037AAC6F32894C4 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// score++;
		int32_t L_0 = __this->___score_6;
		__this->___score_6 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (score + 1 == (gridSize * gridSize))
		int32_t L_1 = __this->___score_6;
		int32_t L_2 = __this->___gridSize_13;
		int32_t L_3 = __this->___gridSize_13;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_1, 1))) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_2, L_3))))))
		{
			goto IL_003e;
		}
	}
	{
		// gamEnd = true;
		__this->___gamEnd_16 = (bool)1;
		// gameStart = false;
		__this->___gameStart_19 = (bool)0;
		// canvasManager.openGameEnd();
		CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* L_4 = __this->___canvasManager_15;
		NullCheck(L_4);
		CanvasManager_openGameEnd_m047EA8C9A3C3E3E3181B0C8DB680E8BBB2BC1E57(L_4, NULL);
	}

IL_003e:
	{
		// scoreText.text = score.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___scoreText_12;
		int32_t* L_6 = (&__this->___score_6);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void BoardManager::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_StartGame_m4ED0F6E4538D95DC771F0A6921B0D6D10929E7D6 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// gameStart = true;
		__this->___gameStart_19 = (bool)1;
		// timer = timeInSeconds;
		float L_0 = __this->___timeInSeconds_18;
		__this->___timer_17 = L_0;
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// score = 0;
		__this->___score_6 = 0;
		// scoreText.text = score.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___scoreText_12;
		int32_t* L_2 = (&__this->___score_6);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_3);
		// gamEnd = false;
		__this->___gamEnd_16 = (bool)0;
		// GridManager.startGame(gridSize, tilesGrid);
		GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* L_4 = __this->___GridManager_9;
		int32_t L_5 = __this->___gridSize_13;
		List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_6 = __this->___tilesGrid_11;
		NullCheck(L_4);
		GridManager_startGame_m11A5AB83C9C8BD99CDD3FFF32BDC96EFC9825C25(L_4, L_5, L_6, NULL);
		// canvasManager.openGameScreen();
		CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* L_7 = __this->___canvasManager_15;
		NullCheck(L_7);
		CanvasManager_openGameScreen_mEB4D7A63E7A2890910A6CDD6D1C5EBF8AD896931(L_7, NULL);
		// }
		return;
	}
}
// System.Void BoardManager::generateGrid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_generateGrid_m85BDF07DD17253A7328C09917AEA6A1DA2501FA6 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BoardManager::pauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_pauseGame_mCA7DBD70020233084768A36F3355E44FAE6E6218 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// canvasManager.pauseGame();
		CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* L_0 = __this->___canvasManager_15;
		NullCheck(L_0);
		CanvasManager_pauseGame_m58EA32DBC6343E119710732299306C41AF38EEF0(L_0, NULL);
		// }
		return;
	}
}
// System.Void BoardManager::resumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_resumeGame_m81B5A4C54182D01DEAA3A36231E86E378096E55D (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// canvasManager.resumeGame();
		CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* L_0 = __this->___canvasManager_15;
		NullCheck(L_0);
		CanvasManager_resumeGame_m97EFBCC2535FC51DFC61640B90BF34DF2D5ED742(L_0, NULL);
		// }
		return;
	}
}
// System.Void BoardManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_Update_mB57798AD4D8BE2A1B16A317C223272D3D0D81697 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameStart)
		bool L_0 = __this->___gameStart_19;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// if (timer >= 0)
		float L_1 = __this->___timer_17;
		if ((!(((float)L_1) >= ((float)(0.0f)))))
		{
			goto IL_003f;
		}
	}
	{
		// timer -= Time.deltaTime;
		float L_2 = __this->___timer_17;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_17 = ((float)il2cpp_codegen_subtract(L_2, L_3));
		// timerTextUI.text = Constants.timeToText((int)timer);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___timerTextUI_5;
		float L_5 = __this->___timer_17;
		il2cpp_codegen_runtime_class_init_inline(Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Constants_timeToText_mDDC5C3BBD8016F1CEA2B2519C867AD858E29B442(il2cpp_codegen_cast_double_to_int<int32_t>(L_5), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		return;
	}

IL_003f:
	{
		// gamEnd = true;
		__this->___gamEnd_16 = (bool)1;
		// gameStart = false;
		__this->___gameStart_19 = (bool)0;
		// canvasManager.openGameEnd();
		CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* L_7 = __this->___canvasManager_15;
		NullCheck(L_7);
		CanvasManager_openGameEnd_m047EA8C9A3C3E3E3181B0C8DB680E8BBB2BC1E57(L_7, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void BoardManager::endGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_endGame_mB0C14BDE9CA950064FD01EC14BF7BA03F6326AF9 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// gamEnd = true;
		__this->___gamEnd_16 = (bool)1;
		// gameStart = false;
		__this->___gameStart_19 = (bool)0;
		// }
		return;
	}
}
// System.Void BoardManager::goHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_goHome_mA17A545B58F3F06471B11EE02A46B7AC270CA9BF (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	{
		// canvasManager.openHomeScreen();
		CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* L_0 = __this->___canvasManager_15;
		NullCheck(L_0);
		CanvasManager_openHomeScreen_m7A95585347889FFBA56E6DF107E706D2DA616A26(L_0, NULL);
		// }
		return;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_m611C494A213953B5600647FBC3585123518899E0 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Transform> tilesTransform = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___tilesTransform_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tilesTransform_4), (void*)L_0);
		// public int gridSize = 5;
		__this->___gridSize_13 = 5;
		// public float gap = 1.2f;
		__this->___gap_14 = (1.20000005f);
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
// System.Void CanvasManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_Awake_m2A29860466F79A9BAEDCAC00C94288214684E735 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_StaticFields*)il2cpp_codegen_static_fields_for(CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_il2cpp_TypeInfo_var))->___instance_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_StaticFields*)il2cpp_codegen_static_fields_for(CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C_il2cpp_TypeInfo_var))->___instance_8), (void*)__this);
		// }
		return;
	}
}
// System.Void CanvasManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_Start_m4461F6B90F6BB2930D09B0CF482AC3C617E5A360 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScreen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC_m6AC7E0D1F588268481EF96F5619181642FC1FC08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5E24D6624592C9E236DE10AD53BFE3B83F268DAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// foreach (Transform screen in transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_2;
					if (!L_3)
					{
						goto IL_0050;
					}
				}
				{
					RuntimeObject* L_4 = V_2;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0050:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_000e_1:
			{
				// foreach (Transform screen in transform)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				// Screen _screen = screen.GetComponent<Screen>();
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* L_7;
				L_7 = Component_GetComponent_TisScreen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC_m6AC7E0D1F588268481EF96F5619181642FC1FC08(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisScreen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC_m6AC7E0D1F588268481EF96F5619181642FC1FC08_RuntimeMethod_var);
				V_1 = L_7;
				// screens.Add(_screen.screen, _screen.gameObject);
				Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* L_8 = __this->___screens_9;
				Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* L_9 = V_1;
				NullCheck(L_9);
				int32_t L_10 = L_9->___screen_4;
				Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* L_11 = V_1;
				NullCheck(L_11);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
				L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
				NullCheck(L_8);
				Dictionary_2_Add_m5E24D6624592C9E236DE10AD53BFE3B83F268DAA(L_8, L_10, L_12, Dictionary_2_Add_m5E24D6624592C9E236DE10AD53BFE3B83F268DAA_RuntimeMethod_var);
			}

IL_0036_1:
			{
				// foreach (Transform screen in transform)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		// openHomeScreen();
		CanvasManager_openHomeScreen_m7A95585347889FFBA56E6DF107E706D2DA616A26(__this, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::enableScreen(UISCREENS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_enableScreen_m84F850EA350F07FC03F29956E36E1298A1BB2AD1 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, int32_t ___0_screen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// screens[screen].SetActive(true);
		Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* L_0 = __this->___screens_9;
		int32_t L_1 = ___0_screen;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A(L_0, L_1, Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::disableScreen(UISCREENS)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, int32_t ___0_screen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// screens[screen].SetActive(false);
		Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* L_0 = __this->___screens_9;
		int32_t L_1 = ___0_screen;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A(L_0, L_1, Dictionary_2_get_Item_m2B059AF20F31F5EAD7258E74BEACEFCA20610F4A_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::openHomeScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_openHomeScreen_m7A95585347889FFBA56E6DF107E706D2DA616A26 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	{
		// enableScreen(HOME);
		int32_t L_0 = __this->___HOME_4;
		CanvasManager_enableScreen_m84F850EA350F07FC03F29956E36E1298A1BB2AD1(__this, L_0, NULL);
		// disableScreen(GAME);
		int32_t L_1 = __this->___GAME_5;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_1, NULL);
		// disableScreen(GAMEEND);
		int32_t L_2 = __this->___GAMEEND_6;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_2, NULL);
		// disableScreen(PAUSE);
		int32_t L_3 = __this->___PAUSE_7;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::openGameScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_openGameScreen_mEB4D7A63E7A2890910A6CDD6D1C5EBF8AD896931 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	{
		// enableScreen(GAME);
		int32_t L_0 = __this->___GAME_5;
		CanvasManager_enableScreen_m84F850EA350F07FC03F29956E36E1298A1BB2AD1(__this, L_0, NULL);
		// disableScreen(HOME);
		int32_t L_1 = __this->___HOME_4;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_1, NULL);
		// disableScreen(GAMEEND);
		int32_t L_2 = __this->___GAMEEND_6;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_2, NULL);
		// disableScreen(PAUSE);
		int32_t L_3 = __this->___PAUSE_7;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::pauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_pauseGame_m58EA32DBC6343E119710732299306C41AF38EEF0 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	{
		// enableScreen(PAUSE);
		int32_t L_0 = __this->___PAUSE_7;
		CanvasManager_enableScreen_m84F850EA350F07FC03F29956E36E1298A1BB2AD1(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::resumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_resumeGame_m97EFBCC2535FC51DFC61640B90BF34DF2D5ED742 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	{
		// disableScreen(PAUSE);
		int32_t L_0 = __this->___PAUSE_7;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::openGameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager_openGameEnd_m047EA8C9A3C3E3E3181B0C8DB680E8BBB2BC1E57 (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	{
		// disableScreen(GAME);
		int32_t L_0 = __this->___GAME_5;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_0, NULL);
		// disableScreen(HOME);
		int32_t L_1 = __this->___HOME_4;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_1, NULL);
		// enableScreen(GAMEEND);
		int32_t L_2 = __this->___GAMEEND_6;
		CanvasManager_enableScreen_m84F850EA350F07FC03F29956E36E1298A1BB2AD1(__this, L_2, NULL);
		// disableScreen(PAUSE);
		int32_t L_3 = __this->___PAUSE_7;
		CanvasManager_disableScreen_mBE164AFD569B46DC976C14362D80A1A69ED6ED9F(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void CanvasManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasManager__ctor_m8D01C316B4C83FEB1E2FF919AB552C47AC9FB33F (CanvasManager_t2F97CDE0D08B095FCDD0788D60B3141E1612EC1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1AC2FBBB213220F824E89E68A5270F71A23D0DA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private UISCREENS GAME = UISCREENS.GAME;
		__this->___GAME_5 = 1;
		// private UISCREENS GAMEEND = UISCREENS.GAMEEND;
		__this->___GAMEEND_6 = 3;
		// private UISCREENS PAUSE = UISCREENS.PAUSE;
		__this->___PAUSE_7 = 2;
		// Dictionary<UISCREENS, GameObject> screens = new Dictionary<UISCREENS, GameObject>();
		Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC* L_0 = (Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC*)il2cpp_codegen_object_new(Dictionary_2_t3741836AD7C0F632119EC94186088754E9C1FAAC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m1AC2FBBB213220F824E89E68A5270F71A23D0DA9(L_0, Dictionary_2__ctor_m1AC2FBBB213220F824E89E68A5270F71A23D0DA9_RuntimeMethod_var);
		__this->___screens_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___screens_9), (void*)L_0);
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
// System.Void GridManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_Awake_m663A059BFA9CB0F09507D270962932D937C78AE7 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// foreach (Char c in letters)
		String_t* L_0 = __this->___letters_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0023;
	}

IL_000b:
	{
		// foreach (Char c in letters)
		String_t* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		V_2 = L_3;
		// alphabets.Add(c);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_4 = __this->___alphabets_5;
		Il2CppChar L_5 = V_2;
		NullCheck(L_4);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_4, L_5, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// foreach (Char c in letters)
		int32_t L_7 = V_1;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GridManager::startGame(System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_startGame_m11A5AB83C9C8BD99CDD3FFF32BDC96EFC9825C25 (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, int32_t ___0_gridSize, List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* ___1_tilesGrid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extentions_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CBA48A0F6FAB4B2BE659135ED37C43D738A1573_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extentions_Shuffle_TisList_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_mC041B8714DDCCBA63A622794E23E41493C5F62AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extentions_Slice_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m47A116874FABC4B605555E5867891C096333F128_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_5 = NULL;
	{
		// int noOfElements = (gridSize * gridSize) - 1;
		int32_t L_0 = ___0_gridSize;
		int32_t L_1 = ___0_gridSize;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_0, L_1)), 1));
		// arrangedLetters.Clear();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = __this->___arrangedLetters_6;
		NullCheck(L_2);
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_2, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		// for (int i = 0; i < alphabets.Count; i++)
		V_2 = 0;
		goto IL_0025;
	}

IL_0015:
	{
		// arrangedLetters.Add(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___arrangedLetters_6;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_3, L_4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// for (int i = 0; i < alphabets.Count; i++)
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		// for (int i = 0; i < alphabets.Count; i++)
		int32_t L_6 = V_2;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_7 = __this->___alphabets_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_7, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0015;
		}
	}
	{
		// arrangedLetters.Shuffle();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___arrangedLetters_6;
		Extentions_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CBA48A0F6FAB4B2BE659135ED37C43D738A1573(L_9, Extentions_Shuffle_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4CBA48A0F6FAB4B2BE659135ED37C43D738A1573_RuntimeMethod_var);
		// arrangedLetters.Slice(noOfElements);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = __this->___arrangedLetters_6;
		int32_t L_11 = V_0;
		Extentions_Slice_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m47A116874FABC4B605555E5867891C096333F128(L_10, L_11, Extentions_Slice_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m47A116874FABC4B605555E5867891C096333F128_RuntimeMethod_var);
		// List<List<int>> pairs = new List<List<int>>();
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_12 = (List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35*)il2cpp_codegen_object_new(List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2(L_12, List_1__ctor_m6DDA2773042DF432035748F54845D594D6C2F3E2_RuntimeMethod_var);
		V_1 = L_12;
		// for (int i = 0; i < gridSize; i++)
		V_3 = 0;
		goto IL_0088;
	}

IL_0054:
	{
		// for (int j = 0; j < gridSize; j++)
		V_4 = 0;
		goto IL_007f;
	}

IL_0059:
	{
		// List<int> _temp = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_13, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_5 = L_13;
		// _temp.Add(i);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = V_5;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_14, L_15, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// _temp.Add(j);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = V_5;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_16, L_17, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// pairs.Add(_temp);
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_18 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = V_5;
		NullCheck(L_18);
		List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_inline(L_18, L_19, List_1_Add_m4CA93DB974F53860446FD2491A04C41A69E23CA0_RuntimeMethod_var);
		// for (int j = 0; j < gridSize; j++)
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_007f:
	{
		// for (int j = 0; j < gridSize; j++)
		int32_t L_21 = V_4;
		int32_t L_22 = ___0_gridSize;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0059;
		}
	}
	{
		// for (int i = 0; i < gridSize; i++)
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0088:
	{
		// for (int i = 0; i < gridSize; i++)
		int32_t L_24 = V_3;
		int32_t L_25 = ___0_gridSize;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0054;
		}
	}
	{
		// pairs.Shuffle();
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_26 = V_1;
		Extentions_Shuffle_TisList_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_mC041B8714DDCCBA63A622794E23E41493C5F62AB(L_26, Extentions_Shuffle_TisList_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_mC041B8714DDCCBA63A622794E23E41493C5F62AB_RuntimeMethod_var);
		// createGrid(tilesGrid, noOfElements, pairs);
		List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_27 = ___1_tilesGrid;
		int32_t L_28 = V_0;
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_29 = V_1;
		GridManager_createGrid_m7C092F94254C897D5CA21F14832DDC05148284DF(__this, L_27, L_28, L_29, NULL);
		// }
		return;
	}
}
// System.Void GridManager::createGrid(System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>,System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager_createGrid_m7C092F94254C897D5CA21F14832DDC05148284DF (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* ___0_grid, int32_t ___1_noOfElements, List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* ___2_pairs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBA96BC3B34AEA1213CB009583D0D944384ED776A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6B6456542E3A645F2971C58DAB63F3045C9E2EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mAD68C0E4168524055013132A1DDB48E936AB964A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4784A64850A006D441D3BFDC57480DE1EE22CF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		// int ind = 0;
		V_0 = 0;
		// foreach (List<int> pair in pairs)
		List_1_tB5A0E21D0A7C39DF93D616FD5B94C4737A083E35* L_0 = ___2_pairs;
		NullCheck(L_0);
		Enumerator_t81FDCD7FA7A4E2B91A9C40BB725D07BB7EB33622 L_1;
		L_1 = List_1_GetEnumerator_m4784A64850A006D441D3BFDC57480DE1EE22CF40(L_0, List_1_GetEnumerator_m4784A64850A006D441D3BFDC57480DE1EE22CF40_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0102:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mBA96BC3B34AEA1213CB009583D0D944384ED776A((&V_1), Enumerator_Dispose_mBA96BC3B34AEA1213CB009583D0D944384ED776A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00f4_1;
			}

IL_000e_1:
			{
				// foreach (List<int> pair in pairs)
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2;
				L_2 = Enumerator_get_Current_mAD68C0E4168524055013132A1DDB48E936AB964A_inline((&V_1), Enumerator_get_Current_mAD68C0E4168524055013132A1DDB48E936AB964A_RuntimeMethod_var);
				// int _i = pair[0];
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = L_2;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_3, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				V_2 = L_4;
				// int _j = pair[1];
				NullCheck(L_3);
				int32_t L_5;
				L_5 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_3, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				V_3 = L_5;
				// grid[_i][_j].textUIObject.SetActive(true);
				List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_6 = ___0_grid;
				int32_t L_7 = V_2;
				NullCheck(L_6);
				List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_8;
				L_8 = List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8(L_6, L_7, List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var);
				int32_t L_9 = V_3;
				NullCheck(L_8);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_10;
				L_10 = List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020(L_8, L_9, List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var);
				NullCheck(L_10);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___textUIObject_5;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
				// grid[_i][_j].gameObject.SetActive(true);
				List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_12 = ___0_grid;
				int32_t L_13 = V_2;
				NullCheck(L_12);
				List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_14;
				L_14 = List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8(L_12, L_13, List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var);
				int32_t L_15 = V_3;
				NullCheck(L_14);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_16;
				L_16 = List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020(L_14, L_15, List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var);
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_17);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
				// grid[_i][_j].first = "";
				List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_18 = ___0_grid;
				int32_t L_19 = V_2;
				NullCheck(L_18);
				List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_20;
				L_20 = List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8(L_18, L_19, List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var);
				int32_t L_21 = V_3;
				NullCheck(L_20);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_22;
				L_22 = List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020(L_20, L_21, List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var);
				NullCheck(L_22);
				L_22->___first_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&L_22->___first_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				// grid[_i][_j].second = "";
				List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_23 = ___0_grid;
				int32_t L_24 = V_2;
				NullCheck(L_23);
				List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_25;
				L_25 = List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8(L_23, L_24, List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var);
				int32_t L_26 = V_3;
				NullCheck(L_25);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_27;
				L_27 = List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020(L_25, L_26, List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var);
				NullCheck(L_27);
				L_27->___second_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
				Il2CppCodeGenWriteBarrier((void**)(&L_27->___second_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
				// if (ind < noOfElements)
				int32_t L_28 = V_0;
				int32_t L_29 = ___1_noOfElements;
				if ((((int32_t)L_28) >= ((int32_t)L_29)))
				{
					goto IL_00b8_1;
				}
			}
			{
				// grid[_i][_j].first = alphabets[arrangedLetters[ind]].ToString();
				List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_30 = ___0_grid;
				int32_t L_31 = V_2;
				NullCheck(L_30);
				List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_32;
				L_32 = List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8(L_30, L_31, List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var);
				int32_t L_33 = V_3;
				NullCheck(L_32);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_34;
				L_34 = List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020(L_32, L_33, List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var);
				List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_35 = __this->___alphabets_5;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_36 = __this->___arrangedLetters_6;
				int32_t L_37 = V_0;
				NullCheck(L_36);
				int32_t L_38;
				L_38 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_36, L_37, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				NullCheck(L_35);
				Il2CppChar L_39;
				L_39 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(L_35, L_38, List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
				V_4 = L_39;
				String_t* L_40;
				L_40 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
				NullCheck(L_34);
				L_34->___first_7 = L_40;
				Il2CppCodeGenWriteBarrier((void**)(&L_34->___first_7), (void*)L_40);
			}

IL_00b8_1:
			{
				// if (ind > 0)
				int32_t L_41 = V_0;
				if ((((int32_t)L_41) <= ((int32_t)0)))
				{
					goto IL_00f0_1;
				}
			}
			{
				// grid[_i][_j].second = alphabets[arrangedLetters[ind - 1]].ToString();
				List_1_tC4CE79FB130BEB254BB8C7B4C374333B52DADC3D* L_42 = ___0_grid;
				int32_t L_43 = V_2;
				NullCheck(L_42);
				List_1_tCBB1F8BBB7BC1D7430F9D6708B9E7B65A57CFEB3* L_44;
				L_44 = List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8(L_42, L_43, List_1_get_Item_m39E0888D156CE5AE6DA2B3BC36698D8ECFD0D0F8_RuntimeMethod_var);
				int32_t L_45 = V_3;
				NullCheck(L_44);
				Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_46;
				L_46 = List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020(L_44, L_45, List_1_get_Item_mE5F020CDA032FB2645B7521A0BB29AC2CE0FD020_RuntimeMethod_var);
				List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_47 = __this->___alphabets_5;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = __this->___arrangedLetters_6;
				int32_t L_49 = V_0;
				NullCheck(L_48);
				int32_t L_50;
				L_50 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_48, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
				NullCheck(L_47);
				Il2CppChar L_51;
				L_51 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(L_47, L_50, List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
				V_4 = L_51;
				String_t* L_52;
				L_52 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_4), NULL);
				NullCheck(L_46);
				L_46->___second_8 = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&L_46->___second_8), (void*)L_52);
			}

IL_00f0_1:
			{
				// ind++;
				int32_t L_53 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_53, 1));
			}

IL_00f4_1:
			{
				// foreach (List<int> pair in pairs)
				bool L_54;
				L_54 = Enumerator_MoveNext_m6B6456542E3A645F2971C58DAB63F3045C9E2EB6((&V_1), Enumerator_MoveNext_m6B6456542E3A645F2971C58DAB63F3045C9E2EB6_RuntimeMethod_var);
				if (L_54)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0110;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0110:
	{
		// }
		return;
	}
}
// System.Void GridManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridManager__ctor_m95147960FF399FEFE47E590512C6C825C3AD782E (GridManager_t45021D7E88EBBB4ECCF37D3B34CE0BB4372219A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56F60D61B11030DD7102A973E38C35863AF61F1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
		__this->___letters_4 = _stringLiteral56F60D61B11030DD7102A973E38C35863AF61F1D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letters_4), (void*)_stringLiteral56F60D61B11030DD7102A973E38C35863AF61F1D);
		// List<Char> alphabets = new List<Char>();
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_0 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)il2cpp_codegen_object_new(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82(L_0, List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		__this->___alphabets_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___alphabets_5), (void*)L_0);
		// List<int> arrangedLetters = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_1, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___arrangedLetters_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrangedLetters_6), (void*)L_1);
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
// System.Void GameScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameScreen_Awake_m7D73F1636D911FC68AC5CE162751FDC5E81677A5 (GameScreen_t9030C374678C6774A56829068211621547FB6B26* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameScreen_Update_m5D73762E0F2B0857FA733D36C7CAA2BD75242D6B (GameScreen_t9030C374678C6774A56829068211621547FB6B26* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameScreen__ctor_m99A4C997AAE32B3D2306D16DAE3846F4F316C31F (GameScreen_t9030C374678C6774A56829068211621547FB6B26* __this, const RuntimeMethod* method) 
{
	{
		Screen__ctor_m4709800A5D3AA6C51A0AB5C6327ED672F684DC72(__this, NULL);
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
// System.Void HomeScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeScreen_Awake_m3AB4C8FF8E69DBFFFE9A1BEFB2712D5826028F4C (HomeScreen_t5467D3C1F8D886E76E4B284E1A790C61587B25C7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HomeScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeScreen_Update_m5C317BC5D72D86AE154F857143F1755DFBC268A7 (HomeScreen_t5467D3C1F8D886E76E4B284E1A790C61587B25C7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HomeScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HomeScreen__ctor_m3A8A71D0A44801842DC33AFAEC58F5A2BEE3CBE9 (HomeScreen_t5467D3C1F8D886E76E4B284E1A790C61587B25C7* __this, const RuntimeMethod* method) 
{
	{
		Screen__ctor_m4709800A5D3AA6C51A0AB5C6327ED672F684DC72(__this, NULL);
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
// System.Void PauseScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen_Awake_mB9ADF566B3674DCC423FBCE24A92E105FB5556D4 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PauseScreen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen_Update_m364E6C24D0ACDD17EB39556F2D18A60A1D409BC7 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PauseScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseScreen__ctor_mBE2F57D5C2D6DBFB827B17E757210DDEBFDA0A93 (PauseScreen_t05D7137890B4E8D71556757E4F718FCC576F95FD* __this, const RuntimeMethod* method) 
{
	{
		Screen__ctor_m4709800A5D3AA6C51A0AB5C6327ED672F684DC72(__this, NULL);
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
// System.Void Screen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen__ctor_m4709800A5D3AA6C51A0AB5C6327ED672F684DC72 (Screen_t3DB33DC357F3DCF9570A18DF7B4C17B26D9FFFBC* __this, const RuntimeMethod* method) 
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
// System.Void GameEnd::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnd_Awake_m6FBA52DC8AF024E6963C61CB9BEE8D19A2844027 (GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameEnd::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnd_Update_m21A4C4B8615E5D7B282D8A936FAE3C018A87C36E (GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameEnd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnd__ctor_m613F3208BFEBDAD86589CF3B83C0F32BDB991A75 (GameEnd_t67EEBF3DE72BB3200A737F3642EFF786F4B003B0* __this, const RuntimeMethod* method) 
{
	{
		Screen__ctor_m4709800A5D3AA6C51A0AB5C6327ED672F684DC72(__this, NULL);
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
// System.Void Tile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Awake_m8CE361BE2F7DD3BFD42DDCF775CF4F89FCEDCABF (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textUI = textUIObject.GetComponent<TextMeshPro>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___textUIObject_5;
		NullCheck(L_0);
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_1;
		L_1 = GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F(L_0, GameObject_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m788ADD6C98FD3A1039F72A865AB7D335AEA6116F_RuntimeMethod_var);
		__this->___textUI_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textUI_4), (void*)L_1);
		// ring.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___ring_6;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Tile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_Update_mF599AB226C63AD3E0F6683818C9E3333A3AA12AB (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (textUIObject.activeSelf == false) { return; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___textUIObject_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (textUIObject.activeSelf == false) { return; }
		return;
	}

IL_000e:
	{
		// if (first != "")
		String_t* L_2 = __this->___first_7;
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_3)
		{
			goto IL_0033;
		}
	}
	{
		// textUI.text = first;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_4 = __this->___textUI_4;
		String_t* L_5 = __this->___first_7;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		goto IL_0064;
	}

IL_0033:
	{
		// else if (second != "")
		String_t* L_6 = __this->___second_8;
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// textUI.text = second;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_8 = __this->___textUI_4;
		String_t* L_9 = __this->___second_8;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_9);
		goto IL_0064;
	}

IL_0058:
	{
		// textUIObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___textUIObject_5;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
	}

IL_0064:
	{
		// if (second != "" && first == "")
		String_t* L_11 = __this->___second_8;
		bool L_12;
		L_12 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_12)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_13 = __this->___first_7;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_14)
		{
			goto IL_00b9;
		}
	}
	{
		// selected = true;
		__this->___selected_9 = (bool)1;
		// boardManager.selectedString = second;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_15 = __this->___boardManager_10;
		String_t* L_16 = __this->___second_8;
		NullCheck(L_15);
		L_15->___selectedString_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___selectedString_8), (void*)L_16);
		// boardManager.selectedTile = this;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_17 = __this->___boardManager_10;
		NullCheck(L_17);
		L_17->___selectedTile_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___selectedTile_7), (void*)__this);
		// ring.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___ring_6;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		return;
	}

IL_00b9:
	{
		// selected = false;
		__this->___selected_9 = (bool)0;
		// ring.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___ring_6;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Tile::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_OnMouseDown_m15CC374FC44376602BDD7405A7125F9AB2542ED0 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6577704CE5DF71EE5888AEB6D06D2465A1DBE2D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.timeScale == 0) return;
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000d;
		}
	}
	{
		// if (Time.timeScale == 0) return;
		return;
	}

IL_000d:
	{
		// if (selected)
		bool L_1 = __this->___selected_9;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Debug.Log("clicked on selected");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6577704CE5DF71EE5888AEB6D06D2465A1DBE2D8, NULL);
		// return;
		return;
	}

IL_0020:
	{
		// if (first == boardManager.selectedString)
		String_t* L_2 = __this->___first_7;
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_3 = __this->___boardManager_10;
		NullCheck(L_3);
		String_t* L_4 = L_3->___selectedString_8;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// boardManager.increaseScore();
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_6 = __this->___boardManager_10;
		NullCheck(L_6);
		BoardManager_increaseScore_mCC56B038CBE1C364A96807123037AAC6F32894C4(L_6, NULL);
		// boardManager.selectedTile.second = "";
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_7 = __this->___boardManager_10;
		NullCheck(L_7);
		Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* L_8 = L_7->___selectedTile_7;
		NullCheck(L_8);
		L_8->___second_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___second_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// first = "";
		__this->___first_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_mB2C904B47040471552C938AE751AC0BF80B369E7 (Tile_t192D2F5511792792FB74C37341AFAA9F6B77AE64* __this, const RuntimeMethod* method) 
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
// System.String Constants::twoDigits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Constants_twoDigits_m988F886675F2D972FC8D328865A827440BA06EA3 (int32_t ___0_number, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (number >= 10)
		int32_t L_0 = ___0_number;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10))))
		{
			goto IL_000d;
		}
	}
	{
		// return number.ToString();
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_number), NULL);
		return L_1;
	}

IL_000d:
	{
		// return "0" + number.ToString();
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___0_number), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_2, NULL);
		return L_3;
	}
}
// System.String Constants::timeToText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Constants_timeToText_mDDC5C3BBD8016F1CEA2B2519C867AD858E29B442 (int32_t ___0_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// string text = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int hours = time / 3600;
		int32_t L_0 = ___0_time;
		V_1 = ((int32_t)(L_0/((int32_t)3600)));
		// if (hours != 0)
		int32_t L_1 = V_1;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// text += twoDigits(hours) + ":";
		String_t* L_2 = V_0;
		int32_t L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Constants_twoDigits_m988F886675F2D972FC8D328865A827440BA06EA3(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, L_4, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		V_0 = L_5;
	}

IL_0023:
	{
		// int remaining = time % 3600;
		int32_t L_6 = ___0_time;
		V_2 = ((int32_t)(L_6%((int32_t)3600)));
		// int minutes = remaining / 60;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)(L_7/((int32_t)60)));
		// text += twoDigits(minutes) + ":";
		String_t* L_8 = V_0;
		int32_t L_9 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Constants_twoDigits_m988F886675F2D972FC8D328865A827440BA06EA3(L_9, NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_8, L_10, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		V_0 = L_11;
		// remaining = remaining % 60;
		int32_t L_12 = V_2;
		V_2 = ((int32_t)(L_12%((int32_t)60)));
		// text += twoDigits(remaining);
		String_t* L_13 = V_0;
		int32_t L_14 = V_2;
		String_t* L_15;
		L_15 = Constants_twoDigits_m988F886675F2D972FC8D328865A827440BA06EA3(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, L_15, NULL);
		V_0 = L_16;
		// return text;
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.Void Constants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__ctor_mDD7AFB0C76C1BB8CC2F06F6DDAA68749EB5A04C9 (Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Constants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Constants__cctor_m6184F64BA235815BF212683A822AB3BA183F7F7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static System.Random random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var))->___random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_StaticFields*)il2cpp_codegen_static_fields_for(Constants_t8D6DDE75059F83729DB837146AC979C90F0B7E80_il2cpp_TypeInfo_var))->___random_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___0_item, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = V_1;
		Il2CppChar L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppChar)L_8);
		return;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___0_item;
		((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
