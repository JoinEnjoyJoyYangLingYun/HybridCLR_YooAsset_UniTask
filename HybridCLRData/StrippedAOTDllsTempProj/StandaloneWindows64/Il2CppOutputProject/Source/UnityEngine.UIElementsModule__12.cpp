#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct KeyCollection_t8C4C62816D8B9320A11D494799798CB3821AA178;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>
struct List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StyleValue>
struct List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E;
// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56;
// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>
struct Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747;
// System.Collections.Generic.Stack`1<System.Int32Enum>
struct Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>
struct Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct ValueCollection_t7D8C8D1BAC4D80571BB49D22F57CB3A6CD121782;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>[]
struct EntryU5BU5D_t28F33D23C9789E302336E5DB7BF903F5A1D78AAD;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression[]
struct ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170;
// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator[]
struct ExpressionCombinatorU5BU5D_t7E06684C52D8708FB16D61AF4E7FD83C95A57AAC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857;
// UnityEngine.UIElements.StyleSheets.StylePropertyValue[]
struct StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3;
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken[]
struct StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8;
// UnityEngine.UIElements.StyleSheets.StyleValue[]
struct StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext[]
struct MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5;
// UnityEngine.UIElements.StyleSheet/ImportStruct[]
struct ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
struct BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression
struct Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
struct StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser
struct StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263;
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer
struct StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511;
// UnityEngine.UIElements.StyleValueCollection
struct StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataType_tB1CE55CBDC1B9C7ED5D732F01851648E9150C680_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StylePropertyCache_t026956492B146632E15AD91F6AC0793E64D8CF00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleSheetColor_t0CB1036BE5DDA7FC0A9B649FC0F8453A2064CFBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0DA851C079D678A8AF7954B74CA75B7D46AF7E0C;
IL2CPP_EXTERN_C String_t* _stringLiteral28B2013972C54D6D7DCEEC35FB871231D68DCE6A;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral452A8594B8380C2634942A877BF2B8AF90152EB8;
IL2CPP_EXTERN_C String_t* _stringLiteral490A3D56C27E7F74B58B6DF98D237EA7EDA749B1;
IL2CPP_EXTERN_C String_t* _stringLiteral4ED1FD11E20D7F2898B30390A59215252DE2F5C3;
IL2CPP_EXTERN_C String_t* _stringLiteral503B2D93E4267E42BD57F13F7D8E05E382D0BC76;
IL2CPP_EXTERN_C String_t* _stringLiteral5B5DCCE19078A828FC588BE11C84ACE1D3A4E38A;
IL2CPP_EXTERN_C String_t* _stringLiteral5D86B8152652ECE0930C57A47DABFF28132F8764;
IL2CPP_EXTERN_C String_t* _stringLiteral64BA8B112FEF2A4C9D75A8F05D2768A9C8EEB649;
IL2CPP_EXTERN_C String_t* _stringLiteral767EA09B5EB3270D152C90E593B45D31C8B05123;
IL2CPP_EXTERN_C String_t* _stringLiteral7994D6420AD609C547B7549B932A0A47044123AC;
IL2CPP_EXTERN_C String_t* _stringLiteral7E78C7F6A2F083881F50D1028AD48D11A8D18811;
IL2CPP_EXTERN_C String_t* _stringLiteral8A474EEF5045AA1C2CD84C518196B8AAB792EB34;
IL2CPP_EXTERN_C String_t* _stringLiteral8D14024BA10FBEB6D27321B30B77259DDDAC9F15;
IL2CPP_EXTERN_C String_t* _stringLiteral939A3D55429B36E387164A649897AD8699836CA7;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
IL2CPP_EXTERN_C String_t* _stringLiteralADABA3E090BA65749B1D8B10E97EB5969A9E44F3;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC298FD3553810E1883D33A90EC43B7A32505AFCC;
IL2CPP_EXTERN_C String_t* _stringLiteralCD257F752DD9F10B9231939923CC54ECADEF521B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD69A8E7FA6FC9EC8EFF315EB44B7CA71B2E4A08;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB2B01472BAAD45CAE2ED0A6B0724E64387522B;
IL2CPP_EXTERN_C String_t* _stringLiteralE558C6207FC66752C729916FB9D30F84D557F68F;
IL2CPP_EXTERN_C String_t* _stringLiteralE615364FBB4A5F96EA9D653C3E243F81B1FFAF8B;
IL2CPP_EXTERN_C String_t* _stringLiteralF17195BC6D288FE4D006860FE826AF5E1776CA87;
IL2CPP_EXTERN_C String_t* _stringLiteralF1F565B458F319347315840224F74685AF7D613D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8AEEC607F0C93E0365869D9CDEEE8913E871BD1;
IL2CPP_EXTERN_C const RuntimeMethod* BaseStyleMatcher_MatchManyByOrder_m017E50F62CD401B37DF18D6DEA50759E96F77FDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseStyleMatcher_MatchMany_m276F90907391368BB07808A5784042DAA3E41578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8E56DB8CC1047B8EFE92FE3D016425366CCA46CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mEFF6A626354DE5EF48B4E85B3A733AE49C5D3320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1F4E04F6F817CA0C550E88CACDBF06CECEEBA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m382A4115E9B245542508429960929A5A5A2DBC52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lerp_Interpolate_mB8C742AFAB0D735F42E1D3271520B0F4870C13F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m69021BEF3CC5CAFC1FF7D31264B256AC784F2096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7089A10D7E181D3DF090D9C76FFE2970569F4CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m79C661B4F2593F250F3AAEBE725ABBB3B97314E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m84D3394590A3FBB6D4B29CD1FE0D3D0620F6D6FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m88AE0442950CD11E5E39C3DDBA2206A82128BEB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m02584664567EAE9393736792866820AE28FAA987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAB028B38CC37E5E2E7B45271184DAFB1BE5F2220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m8CB5DF141C5731D63F53B036001F6C113B7BCB32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m9FCD29964E97EDCC6C86CA096DDAB08019CFF9FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseCombinatorType_mB3936896DBFAB7D1DA8A30A8172C4128F56C569F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseExpression_mCB33313DAFE7810E2C29EB8D76CC1B73F9D63626_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseGroup_mB7AF9453FCD579A5765502410091CCE2AAFC384C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseMultiplier_mA8313FE9B18A7E119507252CE9A94A355FE9BD6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseRanges_m743C3DEB60B2B14F2EE458B8E76BF2CB90B9ECDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleSyntaxParser_ParseTerm_mB12D7F0814E95FA103C08D9F2403A4C07FD7ABD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DataType_tB1CE55CBDC1B9C7ED5D732F01851648E9150C680_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t28F33D23C9789E302336E5DB7BF903F5A1D78AAD* ____entries_1;
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
	KeyCollection_t8C4C62816D8B9320A11D494799798CB3821AA178* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t7D8C8D1BAC4D80571BB49D22F57CB3A6CD121782* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* ____items_1;
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

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>
struct List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StyleValue>
struct List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>
struct Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ExpressionCombinatorU5BU5D_t7E06684C52D8708FB16D61AF4E7FD83C95A57AAC* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Int32Enum>
struct Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>
struct Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	MatchContextU5BU5D_t49C4E5DA5C1F9B06B211BE6F94AC6BD4D0ABCAE5* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t03ED7C6DFD030F64BE095A77446098CAA515B661  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.UIElements.Experimental.Easing
struct Easing_tA0AFB5509023B9886ABDB97706E12FAFEEC84E4D  : public RuntimeObject
{
};

// UnityEngine.UIElements.Experimental.Lerp
struct Lerp_tF0268DF694BEE7164868F069396C705445FCB77D  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.UIElements.StyleSheets.StyleSheetExtensions
struct StyleSheetExtensions_t491EEB7BB4FC2B802AB019B1D43DDBE9173C6B9F  : public RuntimeObject
{
};

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser
struct StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression> UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::m_ProcessExpressionList
	List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* ___m_ProcessExpressionList_0;
	// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression> UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::m_ExpressionStack
	Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* ___m_ExpressionStack_1;
	// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator> UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::m_CombinatorStack
	Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* ___m_CombinatorStack_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression> UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::m_ParsedExpressionCache
	Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* ___m_ParsedExpressionCache_3;
};

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer
struct StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken> UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::m_Tokens
	List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* ___m_Tokens_0;
	// System.Int32 UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::m_CurrentTokenIndex
	int32_t ___m_CurrentTokenIndex_1;
};

// UnityEngine.UIElements.StyleValueCollection
struct StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StyleValue> UnityEngine.UIElements.StyleValueCollection::m_Values
	List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E* ___m_Values_0;
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

// UnityEngine.UIElements.StyleSheets.Dimension
struct Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 
{
	// UnityEngine.UIElements.StyleSheets.Dimension/Unit UnityEngine.UIElements.StyleSheets.Dimension::unit
	int32_t ___unit_0;
	// System.Single UnityEngine.UIElements.StyleSheets.Dimension::value
	float ___value_1;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier
struct ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB 
{
	// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::m_Type
	int32_t ___m_Type_1;
	// System.Int32 UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::min
	int32_t ___min_2;
	// System.Int32 UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::max
	int32_t ___max_3;
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
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

// UnityEngine.UIElements.Length
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	// System.Single UnityEngine.UIElements.Length::m_Value
	float ___m_Value_1;
	// UnityEngine.UIElements.Length/Unit UnityEngine.UIElements.Length::m_Unit
	int32_t ___m_Unit_2;
};

// UnityEngine.UIElements.StyleSheets.MatchResult
struct MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A 
{
	// UnityEngine.UIElements.StyleSheets.MatchResultErrorCode UnityEngine.UIElements.StyleSheets.MatchResult::errorCode
	int32_t ___errorCode_0;
	// System.String UnityEngine.UIElements.StyleSheets.MatchResult::errorValue
	String_t* ___errorValue_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.MatchResult
struct MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_pinvoke
{
	int32_t ___errorCode_0;
	char* ___errorValue_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.MatchResult
struct MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_com
{
	int32_t ___errorCode_0;
	Il2CppChar* ___errorValue_1;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.UIElements.StyleSheets.ScalableImage
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F 
{
	// UnityEngine.Texture2D UnityEngine.UIElements.StyleSheets.ScalableImage::normalImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	// UnityEngine.Texture2D UnityEngine.UIElements.StyleSheets.ScalableImage::highResolutionImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.ScalableImage
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.ScalableImage
struct ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___normalImage_0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___highResolutionImage_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleFloat
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	// System.Single UnityEngine.UIElements.StyleFloat::m_Value
	float ___m_Value_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleFloat::m_Keyword
	int32_t ___m_Keyword_1;
};

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C 
{
	// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::type
	int32_t ___type_0;
	// System.String UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::text
	String_t* ___text_1;
	// System.Int32 UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::number
	int32_t ___number_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___text_1;
	int32_t ___number_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
struct StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com
{
	int32_t ___type_0;
	Il2CppChar* ___text_1;
	int32_t ___number_2;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;
};

// UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4 
{
	// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.StyleSheets.StyleValueManaged::id
	int32_t ___id_0;
	// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleSheets.StyleValueManaged::keyword
	int32_t ___keyword_1;
	// System.Object UnityEngine.UIElements.StyleSheets.StyleValueManaged::value
	RuntimeObject* ___value_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.StyleValueManaged
struct StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com
{
	int32_t ___id_0;
	int32_t ___keyword_1;
	Il2CppIUnknown* ___value_2;
};

// UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A 
{
	// UnityEngine.UIElements.StyleValueCollection UnityEngine.UIElements.Experimental.StyleValues::m_StyleValues
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108
struct __StaticArrayInitTypeSizeU3D108_t77377C98986FFA47899F1D245B72ABADC65AC32C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D108_t77377C98986FFA47899F1D245B72ABADC65AC32C__padding[108];
	};
};

// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext
struct MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 
{
	// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext::valueIndex
	int32_t ___valueIndex_0;
	// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext::matchedVariableCount
	int32_t ___matchedVariableCount_1;
};

// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
struct BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext> UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::m_ContextStack
	Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* ___m_ContextStack_1;
	// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::m_CurrentContext
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___m_CurrentContext_2;
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

// UnityEngine.UIElements.StyleSheets.Syntax.Expression
struct Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6  : public RuntimeObject
{
	// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType UnityEngine.UIElements.StyleSheets.Syntax.Expression::type
	int32_t ___type_0;
	// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier UnityEngine.UIElements.StyleSheets.Syntax.Expression::multiplier
	ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB ___multiplier_1;
	// UnityEngine.UIElements.StyleSheets.Syntax.DataType UnityEngine.UIElements.StyleSheets.Syntax.Expression::dataType
	int32_t ___dataType_2;
	// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator UnityEngine.UIElements.StyleSheets.Syntax.Expression::combinator
	int32_t ___combinator_3;
	// UnityEngine.UIElements.StyleSheets.Syntax.Expression[] UnityEngine.UIElements.StyleSheets.Syntax.Expression::subExpressions
	ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* ___subExpressions_4;
	// System.String UnityEngine.UIElements.StyleSheets.Syntax.Expression::keyword
	String_t* ___keyword_5;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.StyleSheets.StylePropertyValue::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// UnityEngine.UIElements.StyleValueHandle UnityEngine.UIElements.StyleSheets.StylePropertyValue::handle
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSheets.StylePropertyValue
struct StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle_1;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher
struct StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248  : public BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::m_Values
	List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* ___m_Values_3;
};

// UnityEngine.UIElements.StyleSheets.StyleValue
struct StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// UnityEngine.UIElements.StyleSheets.StylePropertyId UnityEngine.UIElements.StyleSheets.StyleValue::id
			int32_t ___id_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___id_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyword_1_OffsetPadding[4];
			// UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.StyleSheets.StyleValue::keyword
			int32_t ___keyword_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyword_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___keyword_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___number_2_OffsetPadding[8];
			// System.Single UnityEngine.UIElements.StyleSheets.StyleValue::number
			float ___number_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___number_2_OffsetPadding_forAlignmentOnly[8];
			float ___number_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_3_OffsetPadding[8];
			// UnityEngine.UIElements.Length UnityEngine.UIElements.StyleSheets.StyleValue::length
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___length_3_OffsetPadding_forAlignmentOnly[8];
			Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___length_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___color_4_OffsetPadding[8];
			// UnityEngine.Color UnityEngine.UIElements.StyleSheets.StyleValue::color
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___color_4_OffsetPadding_forAlignmentOnly[8];
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___resource_5_OffsetPadding[8];
			// System.Runtime.InteropServices.GCHandle UnityEngine.UIElements.StyleSheets.StyleValue::resource
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___resource_5_OffsetPadding_forAlignmentOnly[8];
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___resource_5_forAlignmentOnly;
		};
	};
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>
struct Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ____current_3;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithErrors
	bool ___m_ImportedWithErrors_4;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithWarnings
	bool ___m_ImportedWithWarnings_5;
	// UnityEngine.UIElements.StyleRule[] UnityEngine.UIElements.StyleSheet::m_Rules
	StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3* ___m_Rules_6;
	// UnityEngine.UIElements.StyleComplexSelector[] UnityEngine.UIElements.StyleSheet::m_ComplexSelectors
	StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857* ___m_ComplexSelectors_7;
	// System.Single[] UnityEngine.UIElements.StyleSheet::floats
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats_8;
	// UnityEngine.UIElements.StyleSheets.Dimension[] UnityEngine.UIElements.StyleSheet::dimensions
	DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* ___dimensions_9;
	// UnityEngine.Color[] UnityEngine.UIElements.StyleSheet::colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors_10;
	// System.String[] UnityEngine.UIElements.StyleSheet::strings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strings_11;
	// UnityEngine.Object[] UnityEngine.UIElements.StyleSheet::assets
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___assets_12;
	// UnityEngine.UIElements.StyleSheet/ImportStruct[] UnityEngine.UIElements.StyleSheet::imports
	ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9* ___imports_13;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.StyleSheet::m_FlattenedImportedStyleSheets
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___m_FlattenedImportedStyleSheets_14;
	// System.Int32 UnityEngine.UIElements.StyleSheet::m_ContentHash
	int32_t ___m_ContentHash_15;
	// UnityEngine.UIElements.StyleSheets.ScalableImage[] UnityEngine.UIElements.StyleSheet::scalableImages
	ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* ___scalableImages_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedNameSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedNameSelectors_17;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedTypeSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedTypeSelectors_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedClassSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedClassSelectors_19;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_IsDefaultStyleSheet
	bool ___m_IsDefaultStyleSheet_20;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>
struct List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StylePropertyValueU5BU5D_t4DE6509822A9A487529DC8DC8C08CB8822CE8688* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>
struct List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StyleValue>
struct List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleValueU5BU5D_t544D1F13B44DC23CA765A18E32B7779768FDF0C8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StyleValue>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>

// System.Collections.Generic.Stack`1<System.Int32Enum>

// System.Collections.Generic.Stack`1<System.Int32Enum>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>

// System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t03ED7C6DFD030F64BE095A77446098CAA515B661_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108 <PrivateImplementationDetails>::2658253827592C8000DF6C48FD5487B674D9E695DB670A56FDEAB2B7F291523E
	__StaticArrayInitTypeSizeU3D108_t77377C98986FFA47899F1D245B72ABADC65AC32C ___2658253827592C8000DF6C48FD5487B674D9E695DB670A56FDEAB2B7F291523E_0;
};

// <PrivateImplementationDetails>

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// UnityEngine.UIElements.Experimental.Easing

// UnityEngine.UIElements.Experimental.Easing

// UnityEngine.UIElements.Experimental.Lerp

// UnityEngine.UIElements.Experimental.Lerp

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Globalization.NumberFormatInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.UIElements.StyleSheets.StyleSheetExtensions

// UnityEngine.UIElements.StyleSheets.StyleSheetExtensions

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer

// UnityEngine.UIElements.StyleValueCollection

// UnityEngine.UIElements.StyleValueCollection

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

// UnityEngine.UIElements.StyleSheets.Dimension

// UnityEngine.UIElements.StyleSheets.Dimension

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier

// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Int32

// System.Int32

// UnityEngine.UIElements.StyleSheets.MatchResult

// UnityEngine.UIElements.StyleSheets.MatchResult

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_5;
};

// UnityEngine.Mathf

// UnityEngine.UIElements.StyleSheets.ScalableImage

// UnityEngine.UIElements.StyleSheets.ScalableImage

// System.Single

// System.Single

// UnityEngine.UIElements.StyleFloat

// UnityEngine.UIElements.StyleFloat

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken

// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken

// UnityEngine.UIElements.StyleValueHandle

// UnityEngine.UIElements.StyleValueHandle

// UnityEngine.UIElements.StyleSheets.StyleValueManaged

// UnityEngine.UIElements.StyleSheets.StyleValueManaged

// UnityEngine.UIElements.Experimental.StyleValues

// UnityEngine.UIElements.Experimental.StyleValues

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108

// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext

// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext

// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher
struct BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::s_CustomIdentRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_CustomIdentRegex_0;
};

// UnityEngine.UIElements.StyleSheets.BaseStyleMatcher

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.UIElements.StyleSheets.Syntax.Expression

// UnityEngine.UIElements.StyleSheets.Syntax.Expression

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.UIElements.StyleSheets.StylePropertyValue

// UnityEngine.UIElements.StyleSheets.StylePropertyValue

// UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher

// UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher

// UnityEngine.UIElements.StyleSheets.StyleValue

// UnityEngine.UIElements.StyleSheets.StyleValue

// System.Type
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

// System.Type

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428_StaticFields
{
	// System.String UnityEngine.UIElements.StyleSheet::kCustomPropertyMarker
	String_t* ___kCustomPropertyMarker_21;
};

// UnityEngine.UIElements.StyleSheet
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UIElements.StyleSheets.Syntax.Expression[]
struct ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170  : public RuntimeArray
{
	ALIGN_FIELD (8) Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* m_Items[1];

	inline Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* value)
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
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken[]
struct StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C m_Items[1];

	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text_1), (void*)NULL);
	}
	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___text_1), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE_gshared (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_gshared (List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_gshared_inline (List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Int32Enum>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m4792730A13F3249ABCC0E87BE58C4CEFAA2593AB_gshared_inline (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32Enum>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_mCBB15AA52FA8864E2B9065918EE83B3B246CB54F_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32Enum>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m2A7A3A8D713263E2DE6846D71351F2951D0D3459_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32Enum>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_mF65EFCC543A2FA4060EBB2D1F791A2C95BF0C2B6_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD05342C1BB452792EAB7B189EEA951942662B556_gshared (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_gshared_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6_gshared (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_gshared_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_gshared_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAB028B38CC37E5E2E7B45271184DAFB1BE5F2220_gshared (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StyleValue>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091 List_1_GetEnumerator_m79C661B4F2593F250F3AAEBE725ABBB3B97314E1_gshared (List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1F4E04F6F817CA0C550E88CACDBF06CECEEBA5A4_gshared (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_gshared_inline (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m382A4115E9B245542508429960929A5A5A2DBC52_gshared (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091* __this, const RuntimeMethod* method) ;

// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9 (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.StyleSheet::ReadFloat(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StyleSheet_ReadFloat_m851DC327CFD6A2D3115007D0898DADF20588FC41 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Dimension UnityEngine.UIElements.StyleSheet::ReadDimension(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 StyleSheet_ReadDimension_mB3DF91A0800943F98D9309424F856C664D4856F4 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheets.Dimension::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dimension_ToString_m8E30603B70E83ECF45534EACD0812DAD3BE1F455 (Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.UIElements.StyleSheet::ReadColor(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F StyleSheet_ReadColor_mCB26B134446AA7F4F4E952E68587E536336A36D7 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.Color::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheet::ReadResourcePath(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSheet_ReadResourcePath_mE417335085D3CDF3BE28AE706EEA4ED809FF6D6D (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheet::ReadString(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSheet_ReadString_mBC300BE75F66B9A247ED5ECFD6E2AD507255ABA5 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheet::ReadEnum(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSheet_ReadEnum_mC1EB06FD8E584DE9350937EB798679496CB29087 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheet::ReadVariable(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSheet_ReadVariable_m5DF0761434CC3AABB1F75CFB6ECACDC638373F14 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleValueKeyword UnityEngine.UIElements.StyleSheet::ReadKeyword(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleSheet_ReadKeyword_m3EF6F505D32AE9EF52F6A44F52933EED32E30D7A (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleValueKeywordExtension::ToUssString(UnityEngine.UIElements.StyleValueKeyword)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleValueKeywordExtension_ToUssString_m14BE58E94EF31E8F61F98C2A235EAAABC97E3DC1 (int32_t ___0_svk, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.UIElements.StyleSheet::ReadAssetReference(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* StyleSheet_ReadAssetReference_m054BC1508B5A8950D81ED8AFCDF1DD64F99DC073 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheet::ReadFunctionName(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSheet_ReadFunctionName_m9E33930479DD2011BA941DDC943738EE2D46608E (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.ScalableImage UnityEngine.UIElements.StyleSheet::ReadScalableImage(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F StyleSheet_ReadScalableImage_m55F09449CAF5F600A1AAC79A2E7A8B4BE3F2E51D (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* __this, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheets.ScalableImage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScalableImage_ToString_m349ECB1969771B6F59F98F125E291537F2AB7B21 (ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.MatchResult::get_success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatchResult_get_success_mDCB87B0AB8A1E77378EAE079EC6DC9BF8C87347A (MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::Clear()
inline void Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*, const RuntimeMethod*))Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B_gshared)(__this, method);
}
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_currentIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::set_currentIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_set_currentIndex_mADC38F42F190746F9A915C4D28FE68641B574A7F (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::Push(T)
inline void Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861 (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*, MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253, const RuntimeMethod*))Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::Pop()
inline MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8 (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method)
{
	return ((  MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 (*) (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*, const RuntimeMethod*))Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchExpression(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchExpression_mAAC413A8AFCF878A382DE4A0B2244B13ADBDE09C (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchExpressionWithMultiplier(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchExpressionWithMultiplier_mBFCAC46AA4460E464A919B15A2D8A47CDA345D9B (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchCombinator(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchCombinator_m3E50049F43D516BEF918DD3727CBF60903E96A15 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_matchedVariableCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_get_matchedVariableCount_m2090DA4DC7D2A0AED62576AAD78348A994493F89 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::set_matchedVariableCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_set_matchedVariableCount_m413B082520159DD2126FE1C8E0ABB64288FA4B0A (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchDataType(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchDataType_mA2E09B3C57555FCAD9B6332CA31F41367FC2942B (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_MoveNext_mF360F322FA888D091A7B1F0AB0679A5F99E7EA9E (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_hasCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::Match(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_Match_m1609612DF727521E8F0761BC44D1871A4F337BC7 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::SaveContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_SaveContext_m0A69367B7A0B71DA15278949BF0EB375B5AAC223 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchOr(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchOr_mE824970A5C85241AF688DA2010423B40198EE5DD (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchOrOr(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchOrOr_mE20591E3A95500804C39917F74CB16FD66ADEC36 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchAndAnd(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchAndAnd_mFE388FED9D0BBA3F06ACB0E66C1679112B162A66 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchJuxtaposition(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchJuxtaposition_m29081B1F3935D28A70A670467882DC7B9B9CF5DE (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchGroup(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchGroup_m053689E8EFB16F910E0B6CF0A2D38F5507EF80A7 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::DropContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_DropContext_mF70772FFB9135E545AA27F89E09D479C6686EB5E (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::RestoreContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_RestoreContext_m1BBCA03D0D24AD791CC95D60FD5536773F40155A (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchMany(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_MatchMany_m276F90907391368BB07808A5784042DAA3E41578 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchManyByOrder(UnityEngine.UIElements.StyleSheets.Syntax.Expression,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_MatchManyByOrder_m017E50F62CD401B37DF18D6DEA50759E96F77FDA (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, int32_t* ___1_matchOrder, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.BaseStyleMatcher/MatchContext>::.ctor()
inline void Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*, const RuntimeMethod*))Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, int32_t ___1_options, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Item(System.Int32)
inline StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449 (List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 (*) (List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122*, int32_t, const RuntimeMethod*))List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>::get_Count()
inline int32_t List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_inline (List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122*, const RuntimeMethod*))List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_Initialize_mAB0AECF2BE22EB57448C78FF458C8D0537AAE473 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.StylePropertyValue UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UIElements.StyleSheets.StyleSheetExtensions::ReadAsString(UnityEngine.UIElements.StyleSheet,UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSheetExtensions_ReadAsString_mB0C99DB552A194D6A4311A098F14F883583C89C6 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___0_sheet, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___1_handle, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.StyleSheetColor::TryGetColor(System.String,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSheetColor_TryGetColor_m13D82F68AAE800E30AB1EEF30707DD95B77D4E81 (String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_color, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.Capture::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher__ctor_m1E29BEF9B8A00A365535F657B7869FCF4FF7D1E4 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionMultiplier__ctor_mC5D83ADD0223E15705CCBE05A1BBFD79409DC694 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::SetType(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionMultiplier_SetType_m82A6E9F69E66D9DD0F6D2F4315F87A688C702C39 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::set_type(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127 (Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* __this, String_t* ___0_key, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6*, String_t*, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxTokenizer__ctor_mE3C2F604F89E7FA85B4DA822D1A45A2CBCEF7731 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::Tokenize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxTokenizer_Tokenize_m5DFAFC167EBE9719CDAE89B92FBE7957B0A26841 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, String_t* ___0_syntax, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseExpression(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseExpression_mCB33313DAFE7810E2C29EB8D76CC1B73F9D63626 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mEFF6A626354DE5EF48B4E85B3A733AE49C5D3320 (Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* __this, String_t* ___0_key, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6*, String_t*, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseTerm(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseTerm_mB12D7F0814E95FA103C08D9F2403A4C07FD7ABD6 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseGroup(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseGroup_mB7AF9453FCD579A5765502410091CCE2AAFC384C (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::Push(T)
inline void Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA (Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56*, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___0_item, method);
}
// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseCombinatorType(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleSyntaxParser_ParseCombinatorType_mB3936896DBFAB7D1DA8A30A8172C4128F56C569F (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>::get_Count()
inline int32_t Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_inline (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747*, const RuntimeMethod*))Stack_1_get_Count_m4792730A13F3249ABCC0E87BE58C4CEFAA2593AB_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>::Peek()
inline int32_t Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844 (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747*, const RuntimeMethod*))Stack_1_Peek_mCBB15AA52FA8864E2B9065918EE83B3B246CB54F_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ProcessCombinatorStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_ProcessCombinatorStack_m74B3EBDAA67AD721280D872056F309B40B7B36A5 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>::Push(T)
inline void Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533 (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747*, int32_t, const RuntimeMethod*))Stack_1_Push_m2A7A3A8D713263E2DE6846D71351F2951D0D3459_gshared)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::IsExpressionEnd(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxParser_IsExpressionEnd_m2442E222004EE6BB23F2E9CA164CB97817986859 (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_token, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>::Pop()
inline int32_t Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747*, const RuntimeMethod*))Stack_1_Pop_mF65EFCC543A2FA4060EBB2D1F791A2C95BF0C2B6_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::Pop()
inline Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482 (Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* __this, const RuntimeMethod* method)
{
	return ((  Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* (*) (Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::Clear()
inline void List_1_Clear_m7089A10D7E181D3DF090D9C76FFE2970569F4CF8_inline (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::Add(T)
inline void List_1_Add_m69021BEF3CC5CAFC1FF7D31264B256AC784F2096_inline (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48*, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::Insert(System.Int32,T)
inline void List_1_Insert_m84D3394590A3FBB6D4B29CD1FE0D3D0620F6D6FC (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* __this, int32_t ___0_index, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48*, int32_t, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.Expression::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::ToArray()
inline ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* List_1_ToArray_m88AE0442950CD11E5E39C3DDBA2206A82128BEB8 (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* __this, const RuntimeMethod* method)
{
	return ((  ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* (*) (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseDataType(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseMultiplier(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer,UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_ParseMultiplier_mA8313FE9B18A7E119507252CE9A94A355FE9BD6B (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* ___1_multiplier, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::PeekNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C StyleSyntaxTokenizer_PeekNext_mE81BCB452AD10A0BAD3B84DAB450E0B2D72E8FC1 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::IsCombinator(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxParser_IsCombinator_mF14E5C66A70197E3C1591FF469CF6069220420DB (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_token, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::EatSpace(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_EatSpace_m99BCE4A8BF1C465FC090ADC0DA8C9997FE59504E (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyCache::TryGetNonTerminalValue(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyCache_TryGetNonTerminalValue_mDA8E0F241830316ED09D402448D7C5CA3B8C9581 (String_t* ___0_name, String_t** ___1_syntax, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseNonTerminalValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseNonTerminalValue_m699AF35910A5C5C2BE68D02097DCBF6F6B2F140E (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, String_t* ___0_syntax, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12 (Type_t* ___0_enumType, String_t* ___1_value, bool ___2_ignoreCase, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseProperty(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_Parse_mA1B3223B21B613631673FB591DC1AC15AC19DD59 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, String_t* ___0_syntax, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyCache::TryGetSyntax(System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyCache_TryGetSyntax_mC0BC9AEE43ACCB89541554339EB12EC2D09A4F77 (String_t* ___0_name, String_t** ___1_syntax, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::IsMultiplier(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxParser_IsMultiplier_m4B3FD74F7ED12452CB2674CAAD92FBB7A685DFAF (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_token, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseRanges(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_ParseRanges_m743C3DEB60B2B14F2EE458B8E76BF2CB90B9ECDC (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, int32_t* ___1_min, int32_t* ___2_max, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::.ctor()
inline void List_1__ctor_m02584664567EAE9393736792866820AE28FAA987 (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.Expression>::.ctor()
inline void Stack_1__ctor_m9FCD29964E97EDCC6C86CA096DDAB08019CFF9FF (Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator>::.ctor()
inline void Stack_1__ctor_m8CB5DF141C5731D63F53B036001F6C113B7BCB32 (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747*, const RuntimeMethod*))Stack_1__ctor_mD05342C1BB452792EAB7B189EEA951942662B556_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.Syntax.Expression>::.ctor()
inline void Dictionary_2__ctor_m8E56DB8CC1047B8EFE92FE3D016425366CCA46CA (Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1 (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* __this, int32_t ___0_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxToken__ctor_mC15E56A488DBA29E580BF59EEE61CFF9543A9F48 (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* __this, int32_t ___0_type, String_t* ___1_text, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxToken__ctor_mF92E189234E04FCBFD83DE1083B687F71658815E (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* __this, int32_t ___0_type, int32_t ___1_number, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::get_Count()
inline int32_t List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60*, const RuntimeMethod*))List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::get_Item(System.Int32)
inline StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6 (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C (*) (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60*, int32_t, const RuntimeMethod*))List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::Clear()
inline void List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60*, const RuntimeMethod*))List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_gshared_inline)(__this, method);
}
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_trimChars, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::GlobCharacter(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleSyntaxTokenizer_GlobCharacter_m200A9D86C8FB993FF46327C28BA40288639DE77A (String_t* ___0_s, int32_t ___1_index, Il2CppChar ___2_c, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::Add(T)
inline void List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60*, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C, const RuntimeMethod*))List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::IsNextCharacter(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxTokenizer_IsNextCharacter_m169215A495397919E2866953DFC6677C229CA550 (String_t* ___0_s, int32_t ___1_index, Il2CppChar ___2_c, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogAssertionFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogAssertionFormat_mBA7469D6C6033C5D45F9B7F2578BFDE7EF1DB578 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsNumber(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::IsNextNumber(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxTokenizer_IsNextNumber_mDE6487FDE8907A728221D75666ED793E07B7A562 (String_t* ___0_s, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsLetter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLetter_m4363120285B51739DEE559E5C81E89580DDC78C0 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::IsNextLetterOrDash(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxTokenizer_IsNextLetterOrDash_mE2084580A1958B1C61E433244073884A6948D91B (String_t* ___0_s, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken>::.ctor()
inline void List_1__ctor_mAB028B38CC37E5E2E7B45271184DAFB1BE5F2220 (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60*, const RuntimeMethod*))List_1__ctor_mAB028B38CC37E5E2E7B45271184DAFB1BE5F2220_gshared)(__this, method);
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InPower(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InPower_mA47850B6FAAE9713D759D9734B45EDCBAEF0B3D4 (float ___0_t, int32_t ___1_power, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::OutPower(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutPower_m38F7A5EAFF05BA246CA4C0871D681E6EBCAD7CCA (float ___0_t, int32_t ___1_power, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutPower(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutPower_m79A8187651FB38DD0AE866D44C87556391ECC0EB (float ___0_t, int32_t ___1_power, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::OutBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutBounce_mC10D97049A94174D4CE19DF1234413CD34AA8835 (float ___0_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::InBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InBounce_mB737333335A242C29C16076C07E5AA6079F283CE (float ___0_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::InElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InElastic_m2EF0C233CA3C2268FE36AC100A84E7AFD9D6D5DB (float ___0_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::OutElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutElastic_m8BBD9A87C73E87EC04F1D089E540BA1088EE131E (float ___0_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::InBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InBack_mAB0093D90CBCA71B83F98DE5FBA7A2FCF8A7706C (float ___0_t, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Easing::OutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutBack_m264B02A5B2A35059E62BC28C203C857637F9B027 (float ___0_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::SetValue(UnityEngine.UIElements.StyleSheets.StylePropertyId,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_top(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_top_m48E6217782E620393440CCCD81930520B1E1030D (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_left(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_left_mFAD27A84F960F6DF78853A2129A8204B4F8CD806 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_width_m9624D54682E20BF8F737C4B720F37E8E8F9525FA (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_height_m4ACA993F82BB0E9960844357040147BB15B45678 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_right(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_right_mA41389187E587D958E1ADC82616B9FC0A6D59010 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_bottom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_bottom_mF0585EEE945A1F798A2F3A39FB44918DF7577999 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::SetValue(UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, int32_t ___0_id, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_color_m0DE08D9E8470C008EF7977ABACB801B50C403604 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_backgroundColor_m2A9BC3A6EE3327E4AD37B833093F2B1045F42657 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_unityBackgroundImageTintColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_unityBackgroundImageTintColor_m9518C2F0EEF84A7514FB08D412ECA223481E26EB (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderColor_m51C6B51A6F5CF146DD5BC299D1F6996D8468BD19 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginLeft(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginLeft_m9B22FA1BD816F1A51F225928DF2F3D906E6DF88B (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginTop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginTop_mF863F6D466BC531C6AF621C89ECDBD39463BD93E (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginRight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginRight_m7CE017508A3B1D833C58994CC49D26526A2201B1 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginBottom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginBottom_mC6168EF9E4CF2B5C10E4F2C0C10173F47ECC5228 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingLeft(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingLeft_m5F86CBEAB6FBE559BCF2879CB8B29A818E1EE842 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleValueCollection UnityEngine.UIElements.Experimental.StyleValues::Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* StyleValues_Values_m88F2CD5ABCE813109E3AEC2EC7E188F3335124F4 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleFloat UnityEngine.UIElements.StyleValueCollection::GetStyleFloat(UnityEngine.UIElements.StyleSheets.StylePropertyId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 StyleValueCollection_GetStyleFloat_mFB67DF76D46EFF7CBFAAB1F5B699F3CBE6AF71EB (StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.StyleFloat::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StyleFloat_get_value_mA16B2A988966FF48ED290BA14F3CD1011608ECC2 (StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.StyleValues::get_paddingTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StyleValues_get_paddingTop_m4163613C0D8C0232FFF6E9FEEA365E8EE4C22F29 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingTop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingTop_m7ECA854BDED29E7EB321AAB864E31496AE9296C4 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingRight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingRight_mBF11DC662A123347AC9EE1E27E8E305CD8185DE6 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingBottom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingBottom_m3BFC2973535E0E6D039E20B772A8820FC8077E7B (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderLeftWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderLeftWidth_mBF143DCEA54204778667BF44C8E73B7975D4AAA9 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderRightWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderRightWidth_mEE38F80EEFACA8EA46E2FBFB999C66BF149237E7 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderTopWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderTopWidth_m1E5392A33528F1925D3069320B8FFF00560EFDA0 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderBottomWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderBottomWidth_m71302DEB066E5E6E573474C55257B322F7419365 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderTopLeftRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderTopLeftRadius_m73F97178B2C0D14C27D10343CA5531F89D43B111 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderTopRightRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderTopRightRadius_m88DD2EFAABD5E9561C785307ABAB01EF5B27622E (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderBottomLeftRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderBottomLeftRadius_m760918D8378859D7856071CE870EB65F959D4C76 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderBottomRightRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderBottomRightRadius_m333C6B1380996D18764DDB00C2840FB2BEAE41B8 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_opacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_opacity_m922BA4C7684E0A662DFE1E85283CFDC35C1CE81F (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_flexGrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_flexGrow_mA7EA5E8B7DEA6569366E164F00CA8160540FEF48 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_flexShrink(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_flexShrink_m4838D70B1233E2CA71A38AC32ECB4C96F8CDA67E (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleValueCollection::SetStyleValue(UnityEngine.UIElements.StyleSheets.StyleValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValueCollection_SetStyleValue_m0D2893CB063806B31C41887327B73877CD0101AC (StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* __this, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.StyleValueCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValueCollection__ctor_mFE0D8F376863E4DF1BCCB889ABC9896874413C23 (StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::LerpUnclamped(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StyleValue>::GetEnumerator()
inline Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091 List_1_GetEnumerator_m79C661B4F2593F250F3AAEBE725ABBB3B97314E1 (List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091 (*) (List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E*, const RuntimeMethod*))List_1_GetEnumerator_m79C661B4F2593F250F3AAEBE725ABBB3B97314E1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>::Dispose()
inline void Enumerator_Dispose_m1F4E04F6F817CA0C550E88CACDBF06CECEEBA5A4 (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091*, const RuntimeMethod*))Enumerator_Dispose_m1F4E04F6F817CA0C550E88CACDBF06CECEEBA5A4_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>::get_Current()
inline StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_inline (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091* __this, const RuntimeMethod* method)
{
	return ((  StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 (*) (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091*, const RuntimeMethod*))Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.UIElements.StyleValueCollection::TryGetStyleValue(UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StyleSheets.StyleValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleValueCollection_TryGetStyleValue_m440C7A9E0F94731ACB08A11B7FF06F75925BE40B (StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* __this, int32_t ___0_id, StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5* ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Single UnityEngine.UIElements.Experimental.Lerp::Interpolate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Lerp_Interpolate_m6600A3C40476BFAFF0B91EBDD50B8DA0695DEB44 (float ___0_start, float ___1_end, float ___2_ratio, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.UIElements.Experimental.Lerp::Interpolate(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Lerp_Interpolate_m3670F7FFEB36D2A5485DB0A46111608451725E7D (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_start, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_end, float ___2_ratio, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSheets.StyleValue>::MoveNext()
inline bool Enumerator_MoveNext_m382A4115E9B245542508429960929A5A5A2DBC52 (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091*, const RuntimeMethod*))Enumerator_MoveNext_m382A4115E9B245542508429960929A5A5A2DBC52_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.UIElements.StyleSheets.StyleSheetExtensions::ReadAsString(UnityEngine.UIElements.StyleSheet,UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleSheetExtensions_ReadAsString_mB0C99DB552A194D6A4311A098F14F883583C89C6 (StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___0_sheet, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___1_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral767EA09B5EB3270D152C90E593B45D31C8B05123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8AEEC607F0C93E0365869D9CDEEE8913E871BD1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		int32_t L_1;
		L_1 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___1_handle), NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_00d6;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_006d;
			}
			case 3:
			{
				goto IL_0089;
			}
			case 4:
			{
				goto IL_00a5;
			}
			case 5:
			{
				goto IL_00e5;
			}
			case 6:
			{
				goto IL_00bf;
			}
			case 7:
			{
				goto IL_00cc;
			}
			case 8:
			{
				goto IL_00b2;
			}
			case 9:
			{
				goto IL_00f4;
			}
			case 10:
			{
				goto IL_00fe;
			}
			case 11:
			{
				goto IL_0106;
			}
		}
	}
	{
		goto IL_011f;
	}

IL_004e:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_4 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = ___1_handle;
		NullCheck(L_4);
		float L_6;
		L_6 = StyleSheet_ReadFloat_m851DC327CFD6A2D3115007D0898DADF20588FC41(L_4, L_5, NULL);
		V_3 = L_6;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_7;
		L_7 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_7);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_8;
		L_8 = VirtualFuncInvoker0< NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* >::Invoke(14 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_7);
		String_t* L_9;
		L_9 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_3), L_8, NULL);
		V_0 = L_9;
		goto IL_0153;
	}

IL_006d:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_10 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = ___1_handle;
		NullCheck(L_10);
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_12;
		L_12 = StyleSheet_ReadDimension_mB3DF91A0800943F98D9309424F856C664D4856F4(L_10, L_11, NULL);
		V_4 = L_12;
		String_t* L_13;
		L_13 = Dimension_ToString_m8E30603B70E83ECF45534EACD0812DAD3BE1F455((&V_4), NULL);
		V_0 = L_13;
		goto IL_0153;
	}

IL_0089:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_14 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_15 = ___1_handle;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = StyleSheet_ReadColor_mCB26B134446AA7F4F4E952E68587E536336A36D7(L_14, L_15, NULL);
		V_5 = L_16;
		String_t* L_17;
		L_17 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147((&V_5), NULL);
		V_0 = L_17;
		goto IL_0153;
	}

IL_00a5:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_18 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_19 = ___1_handle;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = StyleSheet_ReadResourcePath_mE417335085D3CDF3BE28AE706EEA4ED809FF6D6D(L_18, L_19, NULL);
		V_0 = L_20;
		goto IL_0153;
	}

IL_00b2:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_21 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_22 = ___1_handle;
		NullCheck(L_21);
		String_t* L_23;
		L_23 = StyleSheet_ReadString_mBC300BE75F66B9A247ED5ECFD6E2AD507255ABA5(L_21, L_22, NULL);
		V_0 = L_23;
		goto IL_0153;
	}

IL_00bf:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_24 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_25 = ___1_handle;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = StyleSheet_ReadEnum_mC1EB06FD8E584DE9350937EB798679496CB29087(L_24, L_25, NULL);
		V_0 = L_26;
		goto IL_0153;
	}

IL_00cc:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_27 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_28 = ___1_handle;
		NullCheck(L_27);
		String_t* L_29;
		L_29 = StyleSheet_ReadVariable_m5DF0761434CC3AABB1F75CFB6ECACDC638373F14(L_27, L_28, NULL);
		V_0 = L_29;
		goto IL_0153;
	}

IL_00d6:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_30 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_31 = ___1_handle;
		NullCheck(L_30);
		int32_t L_32;
		L_32 = StyleSheet_ReadKeyword_m3EF6F505D32AE9EF52F6A44F52933EED32E30D7A(L_30, L_31, NULL);
		String_t* L_33;
		L_33 = StyleValueKeywordExtension_ToUssString_m14BE58E94EF31E8F61F98C2A235EAAABC97E3DC1(L_32, NULL);
		V_0 = L_33;
		goto IL_0153;
	}

IL_00e5:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_34 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_35 = ___1_handle;
		NullCheck(L_34);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = StyleSheet_ReadAssetReference_m054BC1508B5A8950D81ED8AFCDF1DD64F99DC073(L_34, L_35, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		V_0 = L_37;
		goto IL_0153;
	}

IL_00f4:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_38 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_39 = ___1_handle;
		NullCheck(L_38);
		String_t* L_40;
		L_40 = StyleSheet_ReadFunctionName_m9E33930479DD2011BA941DDC943738EE2D46608E(L_38, L_39, NULL);
		V_0 = L_40;
		goto IL_0153;
	}

IL_00fe:
	{
		V_0 = _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
		goto IL_0153;
	}

IL_0106:
	{
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_41 = ___0_sheet;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_42 = ___1_handle;
		NullCheck(L_41);
		ScalableImage_t64F0F6F75D1099EF5D595E70CA1A2A7B9914E80F L_43;
		L_43 = StyleSheet_ReadScalableImage_m55F09449CAF5F600A1AAC79A2E7A8B4BE3F2E51D(L_41, L_42, NULL);
		V_6 = L_43;
		String_t* L_44;
		L_44 = ScalableImage_ToString_m349ECB1969771B6F59F98F125E291537F2AB7B21((&V_6), NULL);
		V_0 = L_44;
		goto IL_0153;
	}

IL_011f:
	{
		int32_t L_45;
		L_45 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___1_handle), NULL);
		V_7 = L_45;
		Il2CppFakeBox<int32_t> L_46(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, (&V_7));
		String_t* L_47;
		L_47 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_46), NULL);
		int32_t* L_48 = (int32_t*)(&(&___1_handle)->___valueIndex_1);
		String_t* L_49;
		L_49 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF8AEEC607F0C93E0365869D9CDEEE8913E871BD1, L_47, _stringLiteral767EA09B5EB3270D152C90E593B45D31C8B05123, L_49, NULL);
		V_0 = L_50;
		goto IL_0153;
	}

IL_0153:
	{
		String_t* L_51 = V_0;
		V_8 = L_51;
		goto IL_0158;
	}

IL_0158:
	{
		String_t* L_52 = V_8;
		return L_52;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StyleSheetExtensions::IsVarFunction(UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSheetExtensions_IsVarFunction_mC992EF8AACF37ACA03E6564DCF595276B0B49E89 (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___0_handle, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___0_handle), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0017;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_1 = ___0_handle;
		int32_t L_2 = L_1.___valueIndex_1;
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		bool L_3 = V_0;
		return L_3;
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
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheets.StyleValueManaged
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke(const StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4& unmarshaled, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke& marshaled)
{
	marshaled.___id_0 = unmarshaled.___id_0;
	marshaled.___keyword_1 = unmarshaled.___keyword_1;
	if (unmarshaled.___value_2 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___value_2))
		{
			marshaled.___value_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___value_2));
			(marshaled.___value_2)->AddRef();
		}
		else
		{
			marshaled.___value_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___value_2);
		}
	}
	else
	{
		marshaled.___value_2 = NULL;
	}
}
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_back(const StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke& marshaled, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledid_temp_0 = 0;
	unmarshaledid_temp_0 = marshaled.___id_0;
	unmarshaled.___id_0 = unmarshaledid_temp_0;
	int32_t unmarshaledkeyword_temp_1 = 0;
	unmarshaledkeyword_temp_1 = marshaled.___keyword_1;
	unmarshaled.___keyword_1 = unmarshaledkeyword_temp_1;
	if (marshaled.___value_2 != NULL)
	{
		unmarshaled.___value_2 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___value_2, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_2), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___value_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___value_2))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___value_2), Il2CppIUnknown::IID, marshaled.___value_2);
		}
	}
	else
	{
		unmarshaled.___value_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_2), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheets.StyleValueManaged
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_pinvoke_cleanup(StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_pinvoke& marshaled)
{
	if (marshaled.___value_2 != NULL)
	{
		(marshaled.___value_2)->Release();
		marshaled.___value_2 = NULL;
	}
}
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheets.StyleValueManaged
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_com(const StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4& unmarshaled, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com& marshaled)
{
	marshaled.___id_0 = unmarshaled.___id_0;
	marshaled.___keyword_1 = unmarshaled.___keyword_1;
	if (unmarshaled.___value_2 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___value_2))
		{
			marshaled.___value_2 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___value_2));
			(marshaled.___value_2)->AddRef();
		}
		else
		{
			marshaled.___value_2 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___value_2);
		}
	}
	else
	{
		marshaled.___value_2 = NULL;
	}
}
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_com_back(const StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com& marshaled, StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledid_temp_0 = 0;
	unmarshaledid_temp_0 = marshaled.___id_0;
	unmarshaled.___id_0 = unmarshaledid_temp_0;
	int32_t unmarshaledkeyword_temp_1 = 0;
	unmarshaledkeyword_temp_1 = marshaled.___keyword_1;
	unmarshaled.___keyword_1 = unmarshaledkeyword_temp_1;
	if (marshaled.___value_2 != NULL)
	{
		unmarshaled.___value_2 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___value_2, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_2), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___value_2, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___value_2))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___value_2), Il2CppIUnknown::IID, marshaled.___value_2);
		}
	}
	else
	{
		unmarshaled.___value_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___value_2), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheets.StyleValueManaged
IL2CPP_EXTERN_C void StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshal_com_cleanup(StyleValueManaged_t68DFBEC1594279E4DC56634FD5092318D1E9A5F4_marshaled_com& marshaled)
{
	if (marshaled.___value_2 != NULL)
	{
		(marshaled.___value_2)->Release();
		marshaled.___value_2 = NULL;
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
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheets.MatchResult
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke(const MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A& unmarshaled, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_pinvoke& marshaled)
{
	marshaled.___errorCode_0 = unmarshaled.___errorCode_0;
	marshaled.___errorValue_1 = il2cpp_codegen_marshal_string(unmarshaled.___errorValue_1);
}
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_back(const MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_pinvoke& marshaled, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A& unmarshaled)
{
	int32_t unmarshalederrorCode_temp_0 = 0;
	unmarshalederrorCode_temp_0 = marshaled.___errorCode_0;
	unmarshaled.___errorCode_0 = unmarshalederrorCode_temp_0;
	unmarshaled.___errorValue_1 = il2cpp_codegen_marshal_string_result(marshaled.___errorValue_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___errorValue_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___errorValue_1));
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheets.MatchResult
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_pinvoke_cleanup(MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___errorValue_1);
	marshaled.___errorValue_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheets.MatchResult
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_com(const MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A& unmarshaled, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_com& marshaled)
{
	marshaled.___errorCode_0 = unmarshaled.___errorCode_0;
	marshaled.___errorValue_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___errorValue_1);
}
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_com_back(const MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_com& marshaled, MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A& unmarshaled)
{
	int32_t unmarshalederrorCode_temp_0 = 0;
	unmarshalederrorCode_temp_0 = marshaled.___errorCode_0;
	unmarshaled.___errorCode_0 = unmarshalederrorCode_temp_0;
	unmarshaled.___errorValue_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___errorValue_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___errorValue_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___errorValue_1));
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheets.MatchResult
IL2CPP_EXTERN_C void MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshal_com_cleanup(MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___errorValue_1);
	marshaled.___errorValue_1 = NULL;
}
// System.Boolean UnityEngine.UIElements.StyleSheets.MatchResult::get_success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatchResult_get_success_mDCB87B0AB8A1E77378EAE079EC6DC9BF8C87347A (MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___errorCode_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool MatchResult_get_success_mDCB87B0AB8A1E77378EAE079EC6DC9BF8C87347A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A*>(__this + _offset);
	bool _returnValue;
	_returnValue = MatchResult_get_success_mDCB87B0AB8A1E77378EAE079EC6DC9BF8C87347A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_hasCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_0 = (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253*)(&__this->___m_CurrentContext_2);
		int32_t L_1 = L_0->___valueIndex_0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_valueCount() */, __this);
		return (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_currentIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_0 = (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253*)(&__this->___m_CurrentContext_2);
		int32_t L_1 = L_0->___valueIndex_0;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::set_currentIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_set_currentIndex_mADC38F42F190746F9A915C4D28FE68641B574A7F (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_0 = (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253*)(&__this->___m_CurrentContext_2);
		int32_t L_1 = ___0_value;
		L_0->___valueIndex_0 = L_1;
		return;
	}
}
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_matchedVariableCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_get_matchedVariableCount_m2090DA4DC7D2A0AED62576AAD78348A994493F89 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_0 = (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253*)(&__this->___m_CurrentContext_2);
		int32_t L_1 = L_0->___matchedVariableCount_1;
		return L_1;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::set_matchedVariableCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_set_matchedVariableCount_m413B082520159DD2126FE1C8E0ABB64288FA4B0A (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_0 = (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253*)(&__this->___m_CurrentContext_2);
		int32_t L_1 = ___0_value;
		L_0->___matchedVariableCount_1 = L_1;
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_Initialize_mAB0AECF2BE22EB57448C78FF458C8D0537AAE473 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253* L_0 = (MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253*)(&__this->___m_CurrentContext_2);
		il2cpp_codegen_initobj(L_0, sizeof(MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253));
		Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* L_1 = __this->___m_ContextStack_1;
		NullCheck(L_1);
		Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B(L_1, Stack_1_Clear_mF241E1F4339BB39D483A733024684FE09382752B_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_MoveNext_mF360F322FA888D091A7B1F0AB0679A5F99E7EA9E (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB(__this, NULL);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_valueCount() */, __this);
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) > ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB(__this, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		BaseStyleMatcher_set_currentIndex_mADC38F42F190746F9A915C4D28FE68641B574A7F(__this, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::SaveContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_SaveContext_m0A69367B7A0B71DA15278949BF0EB375B5AAC223 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* L_0 = __this->___m_ContextStack_1;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_1 = __this->___m_CurrentContext_2;
		NullCheck(L_0);
		Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861(L_0, L_1, Stack_1_Push_mBAF79A1FA0D8C0E9E3658328E92404F6D4703861_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::RestoreContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_RestoreContext_m1BBCA03D0D24AD791CC95D60FD5536773F40155A (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* L_0 = __this->___m_ContextStack_1;
		NullCheck(L_0);
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_1;
		L_1 = Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8(L_0, Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_RuntimeMethod_var);
		__this->___m_CurrentContext_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::DropContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher_DropContext_mF70772FFB9135E545AA27F89E09D479C6686EB5E (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* L_0 = __this->___m_ContextStack_1;
		NullCheck(L_0);
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_1;
		L_1 = Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8(L_0, Stack_1_Pop_mC298BD508BB0B8BA70438D9A3ABDF83D59D1A4A8_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::Match(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_Match_m1609612DF727521E8F0761BC44D1871A4F337BC7 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64BA8B112FEF2A4C9D75A8F05D2768A9C8EEB649);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (bool)1;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_1 = (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*)(&L_0->___multiplier_1);
		int32_t L_2;
		L_2 = ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_4 = ___0_exp;
		bool L_5;
		L_5 = BaseStyleMatcher_MatchExpression_mAAC413A8AFCF878A382DE4A0B2244B13ADBDE09C(__this, L_4, NULL);
		V_0 = L_5;
		goto IL_0047;
	}

IL_0021:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_6 = ___0_exp;
		NullCheck(L_6);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_7 = (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*)(&L_6->___multiplier_1);
		int32_t L_8;
		L_8 = ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((((int32_t)((((int32_t)L_8) == ((int32_t)6))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral64BA8B112FEF2A4C9D75A8F05D2768A9C8EEB649, NULL);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_9 = ___0_exp;
		bool L_10;
		L_10 = BaseStyleMatcher_MatchExpressionWithMultiplier_mBFCAC46AA4460E464A919B15A2D8A47CDA345D9B(__this, L_9, NULL);
		V_0 = L_10;
	}

IL_0047:
	{
		bool L_11 = V_0;
		V_2 = L_11;
		goto IL_004b;
	}

IL_004b:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchExpression(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchExpression_mAAC413A8AFCF878A382DE4A0B2244B13ADBDE09C (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B15_0 = 0;
	{
		V_0 = (bool)0;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		int32_t L_1 = L_0->___type_0;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_3 = ___0_exp;
		bool L_4;
		L_4 = BaseStyleMatcher_MatchCombinator_m3E50049F43D516BEF918DD3727CBF60903E96A15(__this, L_3, NULL);
		V_0 = L_4;
		goto IL_0086;
	}

IL_001c:
	{
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(16 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_isCurrentVariable() */, __this);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		V_0 = (bool)1;
		int32_t L_7;
		L_7 = BaseStyleMatcher_get_matchedVariableCount_m2090DA4DC7D2A0AED62576AAD78348A994493F89(__this, NULL);
		V_3 = L_7;
		int32_t L_8 = V_3;
		BaseStyleMatcher_set_matchedVariableCount_m413B082520159DD2126FE1C8E0ABB64288FA4B0A(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		goto IL_0077;
	}

IL_003e:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_9 = ___0_exp;
		NullCheck(L_9);
		int32_t L_10 = L_9->___type_0;
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_12 = ___0_exp;
		bool L_13;
		L_13 = BaseStyleMatcher_MatchDataType_mA2E09B3C57555FCAD9B6332CA31F41367FC2942B(__this, L_12, NULL);
		V_0 = L_13;
		goto IL_0077;
	}

IL_0059:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_14 = ___0_exp;
		NullCheck(L_14);
		int32_t L_15 = L_14->___type_0;
		V_5 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_17 = ___0_exp;
		NullCheck(L_17);
		String_t* L_18 = L_17->___keyword_5;
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchKeyword(System.String) */, __this, L_18);
		V_0 = L_19;
	}

IL_0077:
	{
		bool L_20 = V_0;
		V_6 = L_20;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_0085;
		}
	}
	{
		BaseStyleMatcher_MoveNext_mF360F322FA888D091A7B1F0AB0679A5F99E7EA9E(__this, NULL);
	}

IL_0085:
	{
	}

IL_0086:
	{
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_009c;
		}
	}
	{
		bool L_23;
		L_23 = BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A(__this, NULL);
		if (L_23)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_24;
		L_24 = BaseStyleMatcher_get_matchedVariableCount_m2090DA4DC7D2A0AED62576AAD78348A994493F89(__this, NULL);
		G_B15_0 = ((((int32_t)L_24) > ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B15_0 = 0;
	}

IL_009d:
	{
		V_7 = (bool)G_B15_0;
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00a5;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_00a5:
	{
		bool L_26 = V_0;
		V_8 = L_26;
		goto IL_00aa;
	}

IL_00aa:
	{
		bool L_27 = V_8;
		return L_27;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchExpressionWithMultiplier(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchExpressionWithMultiplier_mBFCAC46AA4460E464A919B15A2D8A47CDA345D9B (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B20_0 = 0;
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_1 = (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*)(&L_0->___multiplier_1);
		int32_t L_2;
		L_2 = ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		V_1 = (bool)1;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_3 = ___0_exp;
		NullCheck(L_3);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_4 = (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*)(&L_3->___multiplier_1);
		int32_t L_5 = L_4->___min_2;
		V_2 = L_5;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_6 = ___0_exp;
		NullCheck(L_6);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_7 = (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*)(&L_6->___multiplier_1);
		int32_t L_8 = L_7->___max_3;
		V_3 = L_8;
		V_4 = 0;
		V_5 = 0;
		goto IL_0072;
	}

IL_0032:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_9 = ___0_exp;
		bool L_10;
		L_10 = BaseStyleMatcher_MatchExpression_mAAC413A8AFCF878A382DE4A0B2244B13ADBDE09C(__this, L_9, NULL);
		V_1 = L_10;
		bool L_11 = V_1;
		V_6 = L_11;
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		bool L_14 = V_0;
		V_7 = L_14;
		bool L_15 = V_7;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		bool L_16;
		L_16 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::get_isCurrentComma() */, __this);
		V_8 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_8;
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		goto IL_008b;
	}

IL_0062:
	{
		BaseStyleMatcher_MoveNext_mF360F322FA888D091A7B1F0AB0679A5F99E7EA9E(__this, NULL);
	}

IL_006a:
	{
	}

IL_006b:
	{
		int32_t L_18 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0072:
	{
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0084;
		}
	}
	{
		bool L_20;
		L_20 = BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A(__this, NULL);
		if (!L_20)
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_21 = V_5;
		int32_t L_22 = V_3;
		G_B12_0 = ((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		goto IL_0085;
	}

IL_0084:
	{
		G_B12_0 = 0;
	}

IL_0085:
	{
		V_9 = (bool)G_B12_0;
		bool L_23 = V_9;
		if (L_23)
		{
			goto IL_0032;
		}
	}

IL_008b:
	{
		int32_t L_24 = V_4;
		int32_t L_25 = V_2;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		G_B16_0 = ((((int32_t)((((int32_t)L_26) > ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B16_0 = 0;
	}

IL_009b:
	{
		V_1 = (bool)G_B16_0;
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_29 = V_4;
		int32_t L_30 = V_3;
		if ((((int32_t)L_29) > ((int32_t)L_30)))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_31;
		L_31 = BaseStyleMatcher_get_matchedVariableCount_m2090DA4DC7D2A0AED62576AAD78348A994493F89(__this, NULL);
		G_B20_0 = ((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		goto IL_00b0;
	}

IL_00af:
	{
		G_B20_0 = 0;
	}

IL_00b0:
	{
		V_10 = (bool)G_B20_0;
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00b8;
		}
	}
	{
		V_1 = (bool)1;
	}

IL_00b8:
	{
		bool L_33 = V_1;
		V_11 = L_33;
		goto IL_00bd;
	}

IL_00bd:
	{
		bool L_34 = V_11;
		return L_34;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchGroup(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchGroup_m053689E8EFB16F910E0B6CF0A2D38F5507EF80A7 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB2B01472BAAD45CAE2ED0A6B0724E64387522B);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_0 = NULL;
	bool V_1 = false;
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_1 = L_0->___subExpressions_4;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) == ((int32_t)1))? 1 : 0), _stringLiteralDFB2B01472BAAD45CAE2ED0A6B0724E64387522B, NULL);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_2 = ___0_exp;
		NullCheck(L_2);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_3 = L_2->___subExpressions_4;
		NullCheck(L_3);
		int32_t L_4 = 0;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_6 = V_0;
		bool L_7;
		L_7 = BaseStyleMatcher_Match_m1609612DF727521E8F0761BC44D1871A4F337BC7(__this, L_6, NULL);
		V_1 = L_7;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchCombinator(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchCombinator_m3E50049F43D516BEF918DD3727CBF60903E96A15 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		BaseStyleMatcher_SaveContext_m0A69367B7A0B71DA15278949BF0EB375B5AAC223(__this, NULL);
		V_0 = (bool)0;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		int32_t L_1 = L_0->___combinator_3;
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0065;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_003d;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_0067;
	}

IL_0033:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_4 = ___0_exp;
		bool L_5;
		L_5 = BaseStyleMatcher_MatchOr_mE824970A5C85241AF688DA2010423B40198EE5DD(__this, L_4, NULL);
		V_0 = L_5;
		goto IL_0067;
	}

IL_003d:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_6 = ___0_exp;
		bool L_7;
		L_7 = BaseStyleMatcher_MatchOrOr_mE20591E3A95500804C39917F74CB16FD66ADEC36(__this, L_6, NULL);
		V_0 = L_7;
		goto IL_0067;
	}

IL_0047:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_8 = ___0_exp;
		bool L_9;
		L_9 = BaseStyleMatcher_MatchAndAnd_mFE388FED9D0BBA3F06ACB0E66C1679112B162A66(__this, L_8, NULL);
		V_0 = L_9;
		goto IL_0067;
	}

IL_0051:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_10 = ___0_exp;
		bool L_11;
		L_11 = BaseStyleMatcher_MatchJuxtaposition_m29081B1F3935D28A70A670467882DC7B9B9CF5DE(__this, L_10, NULL);
		V_0 = L_11;
		goto IL_0067;
	}

IL_005b:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_12 = ___0_exp;
		bool L_13;
		L_13 = BaseStyleMatcher_MatchGroup_m053689E8EFB16F910E0B6CF0A2D38F5507EF80A7(__this, L_12, NULL);
		V_0 = L_13;
		goto IL_0067;
	}

IL_0065:
	{
		goto IL_0067;
	}

IL_0067:
	{
		bool L_14 = V_0;
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0075;
		}
	}
	{
		BaseStyleMatcher_DropContext_mF70772FFB9135E545AA27F89E09D479C6686EB5E(__this, NULL);
		goto IL_007c;
	}

IL_0075:
	{
		BaseStyleMatcher_RestoreContext_m1BBCA03D0D24AD791CC95D60FD5536773F40155A(__this, NULL);
	}

IL_007c:
	{
		bool L_16 = V_0;
		V_4 = L_16;
		goto IL_0081;
	}

IL_0081:
	{
		bool L_17 = V_4;
		return L_17;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchOr(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchOr_mE824970A5C85241AF688DA2010423B40198EE5DD (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B4_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253));
		V_1 = 0;
		V_2 = 0;
		goto IL_0062;
	}

IL_000f:
	{
		BaseStyleMatcher_SaveContext_m0A69367B7A0B71DA15278949BF0EB375B5AAC223(__this, NULL);
		int32_t L_0;
		L_0 = BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB(__this, NULL);
		V_3 = L_0;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_1 = ___0_exp;
		NullCheck(L_1);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_2 = L_1->___subExpressions_4;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		bool L_6;
		L_6 = BaseStyleMatcher_Match_m1609612DF727521E8F0761BC44D1871A4F337BC7(__this, L_5, NULL);
		V_4 = L_6;
		int32_t L_7;
		L_7 = BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB(__this, NULL);
		int32_t L_8 = V_3;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_10 = V_5;
		int32_t L_11 = V_1;
		G_B4_0 = ((((int32_t)L_10) > ((int32_t)L_11))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B4_0 = 0;
	}

IL_0044:
	{
		V_6 = (bool)G_B4_0;
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_13 = V_5;
		V_1 = L_13;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_14 = __this->___m_CurrentContext_2;
		V_0 = L_14;
	}

IL_0056:
	{
		BaseStyleMatcher_RestoreContext_m1BBCA03D0D24AD791CC95D60FD5536773F40155A(__this, NULL);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0062:
	{
		int32_t L_16 = V_2;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_17 = ___0_exp;
		NullCheck(L_17);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_18 = L_17->___subExpressions_4;
		NullCheck(L_18);
		V_7 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
		bool L_19 = V_7;
		if (L_19)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_20 = V_1;
		V_8 = (bool)((((int32_t)L_20) > ((int32_t)0))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_008a;
		}
	}
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_22 = V_0;
		__this->___m_CurrentContext_2 = L_22;
		V_9 = (bool)1;
		goto IL_008f;
	}

IL_008a:
	{
		V_9 = (bool)0;
		goto IL_008f;
	}

IL_008f:
	{
		bool L_23 = V_9;
		return L_23;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchOrOr(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchOrOr_mE20591E3A95500804C39917F74CB16FD66ADEC36 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		int32_t L_1;
		L_1 = BaseStyleMatcher_MatchMany_m276F90907391368BB07808A5784042DAA3E41578(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchAndAnd(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchAndAnd_mFE388FED9D0BBA3F06ACB0E66C1679112B162A66 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		int32_t L_1;
		L_1 = BaseStyleMatcher_MatchMany_m276F90907391368BB07808A5784042DAA3E41578(__this, L_0, NULL);
		V_0 = L_1;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_2 = ___0_exp;
		NullCheck(L_2);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_3 = L_2->___subExpressions_4;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0019;
	}

IL_0019:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchMany(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_MatchMany_m276F90907391368BB07808A5784042DAA3E41578 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseStyleMatcher_MatchMany_m276F90907391368BB07808A5784042DAA3E41578_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B12_0 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253));
		V_1 = 0;
		V_2 = (-1);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_1 = L_0->___subExpressions_4;
		NullCheck(L_1);
		V_3 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_3;
		if ((uintptr_t)((uintptr_t)L_2) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BaseStyleMatcher_MatchMany_m276F90907391368BB07808A5784042DAA3E41578_RuntimeMethod_var);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_2), 4));
		int8_t* L_4 = (int8_t*) (L_3 ? alloca(L_3) : NULL);
		memset(L_4, 0, L_3);
		V_4 = (int32_t*)(L_4);
	}

IL_001e:
	{
		BaseStyleMatcher_SaveContext_m0A69367B7A0B71DA15278949BF0EB375B5AAC223(__this, NULL);
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_6 = 0;
		goto IL_0052;
	}

IL_002f:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_7 = V_6;
		G_B5_0 = L_7;
		goto IL_003e;
	}

IL_0038:
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_6;
		int32_t L_10 = V_3;
		G_B5_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_8, L_9))%L_10));
	}

IL_003e:
	{
		V_7 = G_B5_0;
		int32_t* L_11 = V_4;
		int32_t L_12 = V_6;
		int32_t L_13 = V_7;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 4))))) = (int32_t)L_13;
		int32_t L_14 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0052:
	{
		int32_t L_15 = V_6;
		int32_t L_16 = V_3;
		V_8 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_8;
		if (L_17)
		{
			goto IL_002f;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_18 = ___0_exp;
		int32_t* L_19 = V_4;
		int32_t L_20;
		L_20 = BaseStyleMatcher_MatchManyByOrder_m017E50F62CD401B37DF18D6DEA50759E96F77FDA(__this, L_18, L_19, NULL);
		V_5 = L_20;
		int32_t L_21 = V_5;
		int32_t L_22 = V_1;
		V_9 = (bool)((((int32_t)L_21) > ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_24 = V_5;
		V_1 = L_24;
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_25 = __this->___m_CurrentContext_2;
		V_0 = L_25;
	}

IL_007f:
	{
		BaseStyleMatcher_RestoreContext_m1BBCA03D0D24AD791CC95D60FD5536773F40155A(__this, NULL);
		int32_t L_26 = V_1;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_28 = V_2;
		int32_t L_29 = V_3;
		G_B12_0 = ((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		goto IL_0092;
	}

IL_0091:
	{
		G_B12_0 = 0;
	}

IL_0092:
	{
		V_10 = (bool)G_B12_0;
		bool L_30 = V_10;
		if (L_30)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_31 = V_1;
		V_11 = (bool)((((int32_t)L_31) > ((int32_t)0))? 1 : 0);
		bool L_32 = V_11;
		if (!L_32)
		{
			goto IL_00a9;
		}
	}
	{
		MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 L_33 = V_0;
		__this->___m_CurrentContext_2 = L_33;
	}

IL_00a9:
	{
		int32_t L_34 = V_1;
		V_12 = L_34;
		goto IL_00ae;
	}

IL_00ae:
	{
		int32_t L_35 = V_12;
		return L_35;
	}
}
// System.Int32 UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchManyByOrder(UnityEngine.UIElements.StyleSheets.Syntax.Expression,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseStyleMatcher_MatchManyByOrder_m017E50F62CD401B37DF18D6DEA50759E96F77FDA (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, int32_t* ___1_matchOrder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseStyleMatcher_MatchManyByOrder_m017E50F62CD401B37DF18D6DEA50759E96F77FDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t G_B18_0 = 0;
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_1 = L_0->___subExpressions_4;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_0;
		if ((uintptr_t)((uintptr_t)L_2) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), BaseStyleMatcher_MatchManyByOrder_m017E50F62CD401B37DF18D6DEA50759E96F77FDA_RuntimeMethod_var);
		intptr_t L_3 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_2), 4));
		int8_t* L_4 = (int8_t*) (L_3 ? alloca(L_3) : NULL);
		memset(L_4, 0, L_3);
		V_1 = (int32_t*)(L_4);
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		goto IL_00bd;
	}

IL_001d:
	{
		int32_t* L_5 = ___1_matchOrder;
		int32_t L_6 = V_4;
		int32_t L_7 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 4)))));
		V_5 = L_7;
		V_6 = (bool)0;
		V_8 = 0;
		goto IL_0050;
	}

IL_0030:
	{
		int32_t* L_8 = V_1;
		int32_t L_9 = V_8;
		int32_t L_10 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 4)))));
		int32_t L_11 = V_5;
		V_9 = (bool)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_9;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		V_6 = (bool)1;
		goto IL_005b;
	}

IL_0049:
	{
		int32_t L_13 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_8;
		int32_t L_15 = V_2;
		V_10 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_10;
		if (L_16)
		{
			goto IL_0030;
		}
	}

IL_005b:
	{
		V_7 = (bool)0;
		bool L_17 = V_6;
		V_11 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_11;
		if (!L_18)
		{
			goto IL_007c;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_19 = ___0_exp;
		NullCheck(L_19);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_20 = L_19->___subExpressions_4;
		int32_t L_21 = V_5;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		bool L_24;
		L_24 = BaseStyleMatcher_Match_m1609612DF727521E8F0761BC44D1871A4F337BC7(__this, L_23, NULL);
		V_7 = L_24;
	}

IL_007c:
	{
		bool L_25 = V_7;
		V_12 = L_25;
		bool L_26 = V_12;
		if (!L_26)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = BaseStyleMatcher_get_matchedVariableCount_m2090DA4DC7D2A0AED62576AAD78348A994493F89(__this, NULL);
		V_13 = (bool)((((int32_t)L_27) == ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_13;
		if (!L_29)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t* L_30 = V_1;
		int32_t L_31 = V_2;
		int32_t L_32 = V_5;
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_30, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_31), 4))))) = (int32_t)L_32;
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		goto IL_00ae;
	}

IL_00a5:
	{
		int32_t L_34;
		L_34 = BaseStyleMatcher_get_matchedVariableCount_m2090DA4DC7D2A0AED62576AAD78348A994493F89(__this, NULL);
		V_3 = L_34;
	}

IL_00ae:
	{
		V_4 = 0;
		goto IL_00bc;
	}

IL_00b4:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00bc:
	{
	}

IL_00bd:
	{
		int32_t L_36 = V_4;
		int32_t L_37 = V_0;
		if ((((int32_t)L_36) >= ((int32_t)L_37)))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_38 = V_2;
		int32_t L_39 = V_3;
		int32_t L_40 = V_0;
		G_B18_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_38, L_39))) < ((int32_t)L_40))? 1 : 0);
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B18_0 = 0;
	}

IL_00cb:
	{
		V_14 = (bool)G_B18_0;
		bool L_41 = V_14;
		if (L_41)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_42 = V_2;
		int32_t L_43 = V_3;
		V_15 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		goto IL_00db;
	}

IL_00db:
	{
		int32_t L_44 = V_15;
		return L_44;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchJuxtaposition(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchJuxtaposition_m29081B1F3935D28A70A670467882DC7B9B9CF5DE (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		V_0 = (bool)1;
		V_1 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_0 = ___0_exp;
		NullCheck(L_0);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_1 = L_0->___subExpressions_4;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		bool L_5;
		L_5 = BaseStyleMatcher_Match_m1609612DF727521E8F0761BC44D1871A4F337BC7(__this, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_8 = V_1;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_9 = ___0_exp;
		NullCheck(L_9);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_10 = L_9->___subExpressions_4;
		NullCheck(L_10);
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0007;
		}
	}
	{
		bool L_12 = V_0;
		V_3 = L_12;
		goto IL_0035;
	}

IL_0035:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchDataType(UnityEngine.UIElements.StyleSheets.Syntax.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseStyleMatcher_MatchDataType_mA2E09B3C57555FCAD9B6332CA31F41367FC2942B (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		V_0 = (bool)0;
		bool L_0;
		L_0 = BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_00a7;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_2 = ___0_exp;
		NullCheck(L_2);
		int32_t L_3 = L_2->___dataType_2;
		V_3 = L_3;
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 1)))
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_005e;
			}
			case 3:
			{
				goto IL_0067;
			}
			case 4:
			{
				goto IL_0070;
			}
			case 5:
			{
				goto IL_0079;
			}
			case 6:
			{
				goto IL_0082;
			}
			case 7:
			{
				goto IL_008b;
			}
			case 8:
			{
				goto IL_0094;
			}
			case 9:
			{
				goto IL_009d;
			}
		}
	}
	{
		goto IL_00a6;
	}

IL_004c:
	{
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchNumber() */, __this);
		V_0 = L_6;
		goto IL_00a6;
	}

IL_0055:
	{
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchInteger() */, __this);
		V_0 = L_7;
		goto IL_00a6;
	}

IL_005e:
	{
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchLength() */, __this);
		V_0 = L_8;
		goto IL_00a6;
	}

IL_0067:
	{
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchPercentage() */, __this);
		V_0 = L_9;
		goto IL_00a6;
	}

IL_0070:
	{
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchColor() */, __this);
		V_0 = L_10;
		goto IL_00a6;
	}

IL_0079:
	{
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchResource() */, __this);
		V_0 = L_11;
		goto IL_00a6;
	}

IL_0082:
	{
		bool L_12;
		L_12 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchUrl() */, __this);
		V_0 = L_12;
		goto IL_00a6;
	}

IL_008b:
	{
		bool L_13;
		L_13 = VirtualFuncInvoker0< bool >::Invoke(12 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchTime() */, __this);
		V_0 = L_13;
		goto IL_00a6;
	}

IL_0094:
	{
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchAngle() */, __this);
		V_0 = L_14;
		goto IL_00a6;
	}

IL_009d:
	{
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(14 /* System.Boolean UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::MatchCustomIdent() */, __this);
		V_0 = L_15;
		goto IL_00a6;
	}

IL_00a6:
	{
	}

IL_00a7:
	{
		bool L_16 = V_0;
		V_4 = L_16;
		goto IL_00ac;
	}

IL_00ac:
	{
		bool L_17 = V_4;
		return L_17;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher__ctor_m1E29BEF9B8A00A365535F657B7869FCF4FF7D1E4 (BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* L_0 = (Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA*)il2cpp_codegen_object_new(Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE(L_0, Stack_1__ctor_m14AC177FC4E3DF8CD7C5026E5B98B999842682CE_RuntimeMethod_var);
		__this->___m_ContextStack_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ContextStack_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.BaseStyleMatcher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseStyleMatcher__cctor_m5F062C0861A0B835BAE474009E35EF647BFA9BEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral490A3D56C27E7F74B58B6DF98D237EA7EDA749B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_0, _stringLiteral490A3D56C27E7F74B58B6DF98D237EA7EDA749B1, ((int32_t)9), NULL);
		((BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_StaticFields*)il2cpp_codegen_static_fields_for(BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var))->___s_CustomIdentRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_StaticFields*)il2cpp_codegen_static_fields_for(BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var))->___s_CustomIdentRegex_0), (void*)L_0);
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
// UnityEngine.UIElements.StyleSheets.StylePropertyValue UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		bool L_0;
		L_0 = BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2));
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_1 = V_0;
		G_B3_0 = L_1;
		goto IL_0024;
	}

IL_0013:
	{
		List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* L_2 = __this->___m_Values_3;
		int32_t L_3;
		L_3 = BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB(__this, NULL);
		NullCheck(L_2);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_4;
		L_4 = List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449(L_2, L_3, List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_0024:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::get_valueCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StylePropertyValueMatcher_get_valueCount_mA69C4AE1E3E3DD437EFFDDF1E022B78B05B189B2 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* L_0 = __this->___m_Values_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_inline(L_0, List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::get_isCurrentVariable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_get_isCurrentVariable_m1EE0ACD24E6A699EA4E0281323F6C31804BBF750 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::get_isCurrentComma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_get_isCurrentComma_mDA392598ACA69567A9667AB199B0F1913A3FFC72 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A(__this, NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* L_1 = __this->___m_Values_3;
		int32_t L_2;
		L_2 = BaseStyleMatcher_get_currentIndex_m1AE6555B9F9263094A8766219E2FCF5FED571CAB(__this, NULL);
		NullCheck(L_1);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_3;
		L_3 = List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449(L_1, L_2, List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_RuntimeMethod_var);
		V_0 = L_3;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_4 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_5;
		L_5 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)((int32_t)11)))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
	}

IL_002d:
	{
		return (bool)G_B3_0;
	}
}
// UnityEngine.UIElements.StyleSheets.MatchResult UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::Match(UnityEngine.UIElements.StyleSheets.Syntax.Expression,System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheets.StylePropertyValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A StylePropertyValueMatcher_Match_m9200D93F5E6516142F71A23B2BA83AA98409FC1D (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* ___0_exp, List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* ___1_values, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D V_2;
	memset((&V_2), 0, sizeof(V_2));
	MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* V_8 = NULL;
	bool V_9 = false;
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* V_10 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		il2cpp_codegen_initobj((&V_3), sizeof(MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A));
		(&V_3)->___errorCode_0 = 0;
		MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A L_0 = V_3;
		V_0 = L_0;
		List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* L_1 = ___1_values;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* L_2 = ___1_values;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_inline(L_2, List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_4 = (bool)G_B3_0;
		bool L_4 = V_4;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		(&V_0)->___errorCode_0 = 2;
		MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A L_5 = V_0;
		V_5 = L_5;
		goto IL_010b;
	}

IL_0039:
	{
		BaseStyleMatcher_Initialize_mAB0AECF2BE22EB57448C78FF458C8D0537AAE473(__this, NULL);
		List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* L_6 = ___1_values;
		__this->___m_Values_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Values_3), (void*)L_6);
		V_1 = (bool)0;
		List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* L_7 = __this->___m_Values_3;
		NullCheck(L_7);
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_8;
		L_8 = List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449(L_7, 0, List_1_get_Item_mB0E2CD1140CAD7FAE8B6AF1263A5857F4393D449_RuntimeMethod_var);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_9 = L_8.___handle_1;
		V_2 = L_9;
		int32_t L_10;
		L_10 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&V_2), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0070;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = V_2;
		int32_t L_12 = L_11.___valueIndex_1;
		G_B8_0 = ((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		goto IL_0071;
	}

IL_0070:
	{
		G_B8_0 = 0;
	}

IL_0071:
	{
		V_6 = (bool)G_B8_0;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		BaseStyleMatcher_MoveNext_mF360F322FA888D091A7B1F0AB0679A5F99E7EA9E(__this, NULL);
		V_1 = (bool)1;
		goto IL_008e;
	}

IL_0084:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_14 = ___0_exp;
		bool L_15;
		L_15 = BaseStyleMatcher_Match_m1609612DF727521E8F0761BC44D1871A4F337BC7(__this, L_14, NULL);
		V_1 = L_15;
	}

IL_008e:
	{
		bool L_16 = V_1;
		V_7 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_00ca;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_18;
		L_18 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_19 = L_18.___sheet_0;
		V_8 = L_19;
		(&V_0)->___errorCode_0 = 1;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_20 = V_8;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_21;
		L_21 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_22 = L_21.___handle_1;
		String_t* L_23;
		L_23 = StyleSheetExtensions_ReadAsString_mB0C99DB552A194D6A4311A098F14F883583C89C6(L_20, L_22, NULL);
		(&V_0)->___errorValue_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___errorValue_1), (void*)L_23);
		goto IL_0106;
	}

IL_00ca:
	{
		bool L_24;
		L_24 = BaseStyleMatcher_get_hasCurrent_m914E52922F81A0FEF8AC8E195EF6A896F883E34A(__this, NULL);
		V_9 = L_24;
		bool L_25 = V_9;
		if (!L_25)
		{
			goto IL_0106;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_26;
		L_26 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_27 = L_26.___sheet_0;
		V_10 = L_27;
		(&V_0)->___errorCode_0 = 3;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_28 = V_10;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_29;
		L_29 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_30 = L_29.___handle_1;
		String_t* L_31;
		L_31 = StyleSheetExtensions_ReadAsString_mB0C99DB552A194D6A4311A098F14F883583C89C6(L_28, L_30, NULL);
		(&V_0)->___errorValue_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___errorValue_1), (void*)L_31);
	}

IL_0106:
	{
		MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A L_32 = V_0;
		V_5 = L_32;
		goto IL_010b;
	}

IL_010b:
	{
		MatchResult_t466703B46AB8050EABFF2E93F9439AD049D2566A L_33 = V_5;
		return L_33;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchKeyword_m197933903ED8B59D8A9BA3B2BE8A6951AAF8C774 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, String_t* ___0_keyword, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_4 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = L_4.___handle_1;
		int32_t L_6 = L_5.___valueIndex_1;
		V_2 = L_6;
		int32_t L_7 = V_2;
		String_t* L_8;
		L_8 = StyleValueKeywordExtension_ToUssString_m14BE58E94EF31E8F61F98C2A235EAAABC97E3DC1(L_7, NULL);
		String_t* L_9 = ___0_keyword;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_10, NULL);
		V_3 = L_11;
		goto IL_0079;
	}

IL_003c:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_12 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_13;
		L_13 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_12, NULL);
		V_4 = (bool)((((int32_t)L_13) == ((int32_t)7))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_15 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_16 = L_15.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_17 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_18 = L_17.___handle_1;
		NullCheck(L_16);
		String_t* L_19;
		L_19 = StyleSheet_ReadEnum_mC1EB06FD8E584DE9350937EB798679496CB29087(L_16, L_18, NULL);
		V_5 = L_19;
		String_t* L_20 = V_5;
		String_t* L_21 = ___0_keyword;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_21, NULL);
		bool L_23;
		L_23 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_22, NULL);
		V_3 = L_23;
		goto IL_0079;
	}

IL_0075:
	{
		V_3 = (bool)0;
		goto IL_0079;
	}

IL_0079:
	{
		bool L_24 = V_3;
		return L_24;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchNumber_m8FEDDBE664039590012F50F49FF8CA415FCE93BB (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchInteger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchInteger_m86C31C59CF23535695B175F74C84015BCCFBFC37 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchLength_m88DCC02ED055D8BDE0576B623932EA9618E66B04 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_4 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = L_4.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_7 = L_6.___handle_1;
		NullCheck(L_5);
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_8;
		L_8 = StyleSheet_ReadDimension_mB3DF91A0800943F98D9309424F856C664D4856F4(L_5, L_7, NULL);
		V_2 = L_8;
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_9 = V_2;
		int32_t L_10 = L_9.___unit_0;
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
		goto IL_0076;
	}

IL_003a:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_11 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_12;
		L_12 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_11, NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_14 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_15 = L_14.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_16 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_17 = L_16.___handle_1;
		NullCheck(L_15);
		float L_18;
		L_18 = StyleSheet_ReadFloat_m851DC327CFD6A2D3115007D0898DADF20588FC41(L_15, L_17, NULL);
		V_5 = L_18;
		float L_19 = V_5;
		bool L_20;
		L_20 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((0.0f), L_19, NULL);
		V_3 = L_20;
		goto IL_0076;
	}

IL_0072:
	{
		V_3 = (bool)0;
		goto IL_0076;
	}

IL_0076:
	{
		bool L_21 = V_3;
		return L_21;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchPercentage_mF591515222DB99E14B83691213F6903064857CB9 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	float V_5 = 0.0f;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_4 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = L_4.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_7 = L_6.___handle_1;
		NullCheck(L_5);
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_8;
		L_8 = StyleSheet_ReadDimension_mB3DF91A0800943F98D9309424F856C664D4856F4(L_5, L_7, NULL);
		V_2 = L_8;
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_9 = V_2;
		int32_t L_10 = L_9.___unit_0;
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		goto IL_0076;
	}

IL_003a:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_11 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_12;
		L_12 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_11, NULL);
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)2))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_14 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_15 = L_14.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_16 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_17 = L_16.___handle_1;
		NullCheck(L_15);
		float L_18;
		L_18 = StyleSheet_ReadFloat_m851DC327CFD6A2D3115007D0898DADF20588FC41(L_15, L_17, NULL);
		V_5 = L_18;
		float L_19 = V_5;
		bool L_20;
		L_20 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((0.0f), L_19, NULL);
		V_3 = L_20;
		goto IL_0076;
	}

IL_0072:
	{
		V_3 = (bool)0;
		goto IL_0076;
	}

IL_0076:
	{
		bool L_21 = V_3;
		return L_21;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchColor_mCEE3020B0EFF69EF68B46140F506253C7EA1058B (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleSheetColor_t0CB1036BE5DDA7FC0A9B649FC0F8453A2064CFBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	bool V_6 = false;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)4))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_006a;
	}

IL_001f:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_4 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_5;
		L_5 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_4, NULL);
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)7))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		V_4 = L_7;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_8 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_9 = L_8.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_10 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = L_10.___handle_1;
		String_t* L_12;
		L_12 = StyleSheetExtensions_ReadAsString_mB0C99DB552A194D6A4311A098F14F883583C89C6(L_9, L_11, NULL);
		V_5 = L_12;
		String_t* L_13 = V_5;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(StyleSheetColor_t0CB1036BE5DDA7FC0A9B649FC0F8453A2064CFBD_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = StyleSheetColor_TryGetColor_m13D82F68AAE800E30AB1EEF30707DD95B77D4E81(L_14, (&V_4), NULL);
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_006a;
	}

IL_0065:
	{
	}

IL_0066:
	{
		V_2 = (bool)0;
		goto IL_006a;
	}

IL_006a:
	{
		bool L_17 = V_2;
		return L_17;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchResource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchResource_mA4A87B126E835DF49C43347D41149099555B1F4C (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)5))? 1 : 0);
		goto IL_001a;
	}

IL_001a:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchUrl_m1131F617C3FDB81267D61ADC7C5C678334B0B71D (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_1 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_1)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)6)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		G_B3_0 = ((((int32_t)((((int32_t)L_4) == ((int32_t)((int32_t)12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_2 = (bool)((((int32_t)G_B3_0) == ((int32_t)0))? 1 : 0);
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchTime_m4A0A8A4626F668CCD103696738784A1E4F30B395 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_4 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = L_4.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_7 = L_6.___handle_1;
		NullCheck(L_5);
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_8;
		L_8 = StyleSheet_ReadDimension_mB3DF91A0800943F98D9309424F856C664D4856F4(L_5, L_7, NULL);
		V_2 = L_8;
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_9 = V_2;
		int32_t L_10 = L_9.___unit_0;
		if ((((int32_t)L_10) == ((int32_t)3)))
		{
			goto IL_0042;
		}
	}
	{
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_11 = V_2;
		int32_t L_12 = L_11.___unit_0;
		G_B4_0 = ((((int32_t)L_12) == ((int32_t)4))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B4_0 = 1;
	}

IL_0043:
	{
		V_3 = (bool)G_B4_0;
		goto IL_004a;
	}

IL_0046:
	{
		V_3 = (bool)0;
		goto IL_004a;
	}

IL_004a:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchCustomIdent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchCustomIdent_m56F09DC71D536456EF8D8087B2C25482B13D389A (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)7))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_4 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = L_4.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_7 = L_6.___handle_1;
		String_t* L_8;
		L_8 = StyleSheetExtensions_ReadAsString_mB0C99DB552A194D6A4311A098F14F883583C89C6(L_5, L_7, NULL);
		V_2 = L_8;
		il2cpp_codegen_runtime_class_init_inline(BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_9 = ((BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_StaticFields*)il2cpp_codegen_static_fields_for(BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var))->___s_CustomIdentRegex_0;
		String_t* L_10 = V_2;
		NullCheck(L_9);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_11;
		L_11 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_9, L_10, NULL);
		V_3 = L_11;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_12 = V_3;
		NullCheck(L_12);
		bool L_13;
		L_13 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_12, NULL);
		if (!L_13)
		{
			goto IL_0052;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline(L_14, NULL);
		String_t* L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		G_B4_0 = ((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		V_4 = (bool)G_B4_0;
		goto IL_005c;
	}

IL_0057:
	{
		V_4 = (bool)0;
		goto IL_005c;
	}

IL_005c:
	{
		bool L_18 = V_4;
		return L_18;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::MatchAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyValueMatcher_MatchAngle_m3929DC4EC9F5413AC5D91A97BF600F0B583ABA00 (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	float V_7 = 0.0f;
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_0;
		L_0 = StylePropertyValueMatcher_get_current_m226E12318DE7DF11BF85E10977CCD6D81BB80155(__this, NULL);
		V_0 = L_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_1 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_2;
		L_2 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_4 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_5 = L_4.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_6 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_7 = L_6.___handle_1;
		NullCheck(L_5);
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_8;
		L_8 = StyleSheet_ReadDimension_mB3DF91A0800943F98D9309424F856C664D4856F4(L_5, L_7, NULL);
		V_2 = L_8;
		Dimension_t5B1EAB500AE32C3789A2BCC4D43F7A29996DF3F8 L_9 = V_2;
		int32_t L_10 = L_9.___unit_0;
		V_4 = L_10;
		int32_t L_11 = V_4;
		V_3 = L_11;
		int32_t L_12 = V_3;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, 5))) > ((uint32_t)3))))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0046;
	}

IL_0041:
	{
		V_5 = (bool)1;
		goto IL_0085;
	}

IL_0046:
	{
	}

IL_0047:
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* L_13 = (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D*)(&(&V_0)->___handle_1);
		int32_t L_14;
		L_14 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9(L_13, NULL);
		V_6 = (bool)((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_16 = V_0;
		StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* L_17 = L_16.___sheet_0;
		StylePropertyValue_tED32F617FABE99611B213BFCF9D1D909E7F141C2 L_18 = V_0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_19 = L_18.___handle_1;
		NullCheck(L_17);
		float L_20;
		L_20 = StyleSheet_ReadFloat_m851DC327CFD6A2D3115007D0898DADF20588FC41(L_17, L_19, NULL);
		V_7 = L_20;
		float L_21 = V_7;
		bool L_22;
		L_22 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline((0.0f), L_21, NULL);
		V_5 = L_22;
		goto IL_0085;
	}

IL_0080:
	{
		V_5 = (bool)0;
		goto IL_0085;
	}

IL_0085:
	{
		bool L_23 = V_5;
		return L_23;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.StylePropertyValueMatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyValueMatcher__ctor_mF7898D0C87D9285AA99E046209BF4A8F19E4940B (StylePropertyValueMatcher_tE39FB52A804864748CF9C473A45F065A89500248* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseStyleMatcher_tFD6EA6826D257F17BCF152BD6C76D9E154D23ECE_il2cpp_TypeInfo_var);
		BaseStyleMatcher__ctor_m1E29BEF9B8A00A365535F657B7869FCF4FF7D1E4(__this, NULL);
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
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.Expression::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_type;
		__this->___type_0 = L_0;
		__this->___combinator_3 = 0;
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB L_1;
		memset((&L_1), 0, sizeof(L_1));
		ExpressionMultiplier__ctor_mC5D83ADD0223E15705CCBE05A1BBFD79409DC694((&L_1), 0, /*hidden argument*/NULL);
		__this->___multiplier_1 = L_1;
		__this->___subExpressions_4 = (ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subExpressions_4), (void*)(ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)NULL);
		__this->___keyword_5 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyword_5), (void*)(String_t*)NULL);
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
// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Type_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::set_type(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		ExpressionMultiplier_SetType_m82A6E9F69E66D9DD0F6D2F4315F87A688C702C39(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*>(__this + _offset);
	ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionMultiplier__ctor_mC5D83ADD0223E15705CCBE05A1BBFD79409DC694 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_type;
		__this->___m_Type_1 = L_0;
		int32_t L_1 = 1;
		V_0 = L_1;
		__this->___max_3 = L_1;
		int32_t L_2 = V_0;
		__this->___min_2 = L_2;
		int32_t L_3 = ___0_type;
		ExpressionMultiplier_SetType_m82A6E9F69E66D9DD0F6D2F4315F87A688C702C39(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void ExpressionMultiplier__ctor_mC5D83ADD0223E15705CCBE05A1BBFD79409DC694_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, const RuntimeMethod* method)
{
	ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*>(__this + _offset);
	ExpressionMultiplier__ctor_mC5D83ADD0223E15705CCBE05A1BBFD79409DC694(_thisAdjusted, ___0_type, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier::SetType(UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplierType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionMultiplier_SetType_m82A6E9F69E66D9DD0F6D2F4315F87A688C702C39 (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		__this->___m_Type_1 = L_0;
		int32_t L_1 = ___0_value;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_0060;
			}
			case 4:
			{
				goto IL_004f;
			}
			case 5:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_0060;
	}

IL_002e:
	{
		__this->___min_2 = 0;
		__this->___max_3 = ((int32_t)100);
		goto IL_0072;
	}

IL_003f:
	{
		__this->___min_2 = 0;
		__this->___max_3 = 1;
		goto IL_0072;
	}

IL_004f:
	{
		__this->___min_2 = 1;
		__this->___max_3 = ((int32_t)100);
		goto IL_0072;
	}

IL_0060:
	{
		int32_t L_4 = 1;
		V_2 = L_4;
		__this->___max_3 = L_4;
		int32_t L_5 = V_2;
		__this->___min_2 = L_5;
		goto IL_0072;
	}

IL_0072:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ExpressionMultiplier_SetType_m82A6E9F69E66D9DD0F6D2F4315F87A688C702C39_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*>(__this + _offset);
	ExpressionMultiplier_SetType_m82A6E9F69E66D9DD0F6D2F4315F87A688C702C39(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_Parse_mA1B3223B21B613631673FB591DC1AC15AC19DD59 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, String_t* ___0_syntax, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mEFF6A626354DE5EF48B4E85B3A733AE49C5D3320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_0 = NULL;
	bool V_1 = false;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_2 = NULL;
	bool V_3 = false;
	StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_syntax;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		V_2 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)NULL;
		goto IL_0065;
	}

IL_000f:
	{
		V_0 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)NULL;
		Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* L_3 = __this->___m_ParsedExpressionCache_3;
		String_t* L_4 = ___0_syntax;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127(L_3, L_4, (&V_0), Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_7 = (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511*)il2cpp_codegen_object_new(StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StyleSyntaxTokenizer__ctor_mE3C2F604F89E7FA85B4DA822D1A45A2CBCEF7731(L_7, NULL);
		V_4 = L_7;
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_8 = V_4;
		String_t* L_9 = ___0_syntax;
		NullCheck(L_8);
		StyleSyntaxTokenizer_Tokenize_m5DFAFC167EBE9719CDAE89B92FBE7957B0A26841(L_8, L_9, NULL);
	}
	try
	{// begin try (depth: 1)
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_10 = V_4;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_11;
		L_11 = StyleSyntaxParser_ParseExpression_mCB33313DAFE7810E2C29EB8D76CC1B73F9D63626(__this, L_10, NULL);
		V_0 = L_11;
		goto IL_0052;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0044;
		}
		throw e;
	}

CATCH_0044:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_12 = V_5;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(L_12, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0052;
	}// end catch (depth: 1)

IL_0052:
	{
		Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* L_13 = __this->___m_ParsedExpressionCache_3;
		String_t* L_14 = ___0_syntax;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_15 = V_0;
		NullCheck(L_13);
		Dictionary_2_set_Item_mEFF6A626354DE5EF48B4E85B3A733AE49C5D3320(L_13, L_14, L_15, Dictionary_2_set_Item_mEFF6A626354DE5EF48B4E85B3A733AE49C5D3320_RuntimeMethod_var);
	}

IL_0061:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_16 = V_0;
		V_2 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_17 = V_2;
		return L_17;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseExpression(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseExpression_mCB33313DAFE7810E2C29EB8D76CC1B73F9D63626 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_15 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_0 = L_1;
		goto IL_0112;
	}

IL_000d:
	{
		V_1 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)NULL;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_0;
		int32_t L_3 = L_2.___type_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_4 = V_0;
		int32_t L_5 = L_4.___type_0;
		G_B4_0 = ((((int32_t)L_5) == ((int32_t)((int32_t)18)))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
	}

IL_0026:
	{
		V_3 = (bool)G_B4_0;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_7 = ___0_tokenizer;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_8;
		L_8 = StyleSyntaxParser_ParseTerm_mB12D7F0814E95FA103C08D9F2403A4C07FD7ABD6(__this, L_7, NULL);
		V_1 = L_8;
		goto IL_006e;
	}

IL_0036:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_9 = V_0;
		int32_t L_10 = L_9.___type_0;
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)((int32_t)14)))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_12 = ___0_tokenizer;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_13;
		L_13 = StyleSyntaxParser_ParseGroup_mB7AF9453FCD579A5765502410091CCE2AAFC384C(__this, L_12, NULL);
		V_1 = L_13;
		goto IL_006e;
	}

IL_0052:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_14 = V_0;
		int32_t L_15 = L_14.___type_0;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0DA851C079D678A8AF7954B74CA75B7D46AF7E0C)), L_17, NULL);
		Exception_t* L_19 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseExpression_mCB33313DAFE7810E2C29EB8D76CC1B73F9D63626_RuntimeMethod_var)));
	}

IL_006e:
	{
		Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* L_20 = __this->___m_ExpressionStack_1;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_21 = V_1;
		NullCheck(L_20);
		Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA(L_20, L_21, Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA_RuntimeMethod_var);
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_22 = ___0_tokenizer;
		int32_t L_23;
		L_23 = StyleSyntaxParser_ParseCombinatorType_mB3936896DBFAB7D1DA8A30A8172C4128F56C569F(__this, L_22, NULL);
		V_2 = L_23;
		int32_t L_24 = V_2;
		V_5 = (bool)((!(((uint32_t)L_24) <= ((uint32_t)0)))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_010a;
		}
	}
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_26 = __this->___m_CombinatorStack_2;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_inline(L_26, Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_27) > ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (!L_28)
		{
			goto IL_00fc;
		}
	}
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_29 = __this->___m_CombinatorStack_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844(L_29, Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844_RuntimeMethod_var);
		V_7 = L_30;
		int32_t L_31 = V_7;
		V_8 = L_31;
		int32_t L_32 = V_2;
		V_9 = L_32;
		goto IL_00e4;
	}

IL_00b9:
	{
		StyleSyntaxParser_ProcessCombinatorStack_m74B3EBDAA67AD721280D872056F309B40B7B36A5(__this, NULL);
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_33 = __this->___m_CombinatorStack_2;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_inline(L_33, Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_RuntimeMethod_var);
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_00d2;
		}
	}
	{
		G_B15_0 = 0;
		goto IL_00dd;
	}

IL_00d2:
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_35 = __this->___m_CombinatorStack_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844(L_35, Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844_RuntimeMethod_var);
		G_B15_0 = ((int32_t)(L_36));
	}

IL_00dd:
	{
		V_7 = G_B15_0;
		int32_t L_37 = V_7;
		V_8 = L_37;
	}

IL_00e4:
	{
		int32_t L_38 = V_8;
		int32_t L_39 = V_9;
		if ((((int32_t)L_38) <= ((int32_t)L_39)))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_40 = V_7;
		G_B19_0 = ((((int32_t)((((int32_t)L_40) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00f5;
	}

IL_00f4:
	{
		G_B19_0 = 0;
	}

IL_00f5:
	{
		V_10 = (bool)G_B19_0;
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_00b9;
		}
	}
	{
	}

IL_00fc:
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_42 = __this->___m_CombinatorStack_2;
		int32_t L_43 = V_2;
		NullCheck(L_42);
		Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533(L_42, L_43, Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
	}

IL_010a:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_44 = ___0_tokenizer;
		NullCheck(L_44);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_45;
		L_45 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_44, NULL);
		V_0 = L_45;
	}

IL_0112:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_46 = V_0;
		bool L_47;
		L_47 = StyleSyntaxParser_IsExpressionEnd_m2442E222004EE6BB23F2E9CA164CB97817986859(L_46, NULL);
		V_11 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_11;
		if (L_48)
		{
			goto IL_000d;
		}
	}
	{
		goto IL_0158;
	}

IL_0126:
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_49 = __this->___m_CombinatorStack_2;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844(L_49, Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844_RuntimeMethod_var);
		V_12 = L_50;
		int32_t L_51 = V_12;
		V_13 = (bool)((((int32_t)L_51) == ((int32_t)5))? 1 : 0);
		bool L_52 = V_13;
		if (!L_52)
		{
			goto IL_014e;
		}
	}
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_53 = __this->___m_CombinatorStack_2;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB(L_53, Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB_RuntimeMethod_var);
		goto IL_016c;
	}

IL_014e:
	{
		StyleSyntaxParser_ProcessCombinatorStack_m74B3EBDAA67AD721280D872056F309B40B7B36A5(__this, NULL);
	}

IL_0158:
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_55 = __this->___m_CombinatorStack_2;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_inline(L_55, Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_56) > ((int32_t)0))? 1 : 0);
		bool L_57 = V_14;
		if (L_57)
		{
			goto IL_0126;
		}
	}

IL_016c:
	{
		Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* L_58 = __this->___m_ExpressionStack_1;
		NullCheck(L_58);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_59;
		L_59 = Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482(L_58, Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482_RuntimeMethod_var);
		V_15 = L_59;
		goto IL_017b;
	}

IL_017b:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_60 = V_15;
		return L_60;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ProcessCombinatorStack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_ProcessCombinatorStack_m74B3EBDAA67AD721280D872056F309B40B7B36A5 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m69021BEF3CC5CAFC1FF7D31264B256AC784F2096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7089A10D7E181D3DF090D9C76FFE2970569F4CF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m84D3394590A3FBB6D4B29CD1FE0D3D0620F6D6FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m88AE0442950CD11E5E39C3DDBA2206A82128BEB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_1 = NULL;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_2 = NULL;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_3 = NULL;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_4 = NULL;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_0 = __this->___m_CombinatorStack_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB(L_0, Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB_RuntimeMethod_var);
		V_0 = L_1;
		Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* L_2 = __this->___m_ExpressionStack_1;
		NullCheck(L_2);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_3;
		L_3 = Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482(L_2, Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482_RuntimeMethod_var);
		V_1 = L_3;
		Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* L_4 = __this->___m_ExpressionStack_1;
		NullCheck(L_4);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_5;
		L_5 = Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482(L_4, Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482_RuntimeMethod_var);
		V_2 = L_5;
		List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* L_6 = __this->___m_ProcessExpressionList_0;
		NullCheck(L_6);
		List_1_Clear_m7089A10D7E181D3DF090D9C76FFE2970569F4CF8_inline(L_6, List_1_Clear_m7089A10D7E181D3DF090D9C76FFE2970569F4CF8_RuntimeMethod_var);
		List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* L_7 = __this->___m_ProcessExpressionList_0;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_8 = V_2;
		NullCheck(L_7);
		List_1_Add_m69021BEF3CC5CAFC1FF7D31264B256AC784F2096_inline(L_7, L_8, List_1_Add_m69021BEF3CC5CAFC1FF7D31264B256AC784F2096_RuntimeMethod_var);
		List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* L_9 = __this->___m_ProcessExpressionList_0;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_10 = V_1;
		NullCheck(L_9);
		List_1_Add_m69021BEF3CC5CAFC1FF7D31264B256AC784F2096_inline(L_9, L_10, List_1_Add_m69021BEF3CC5CAFC1FF7D31264B256AC784F2096_RuntimeMethod_var);
		goto IL_0077;
	}

IL_004d:
	{
		Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* L_11 = __this->___m_ExpressionStack_1;
		NullCheck(L_11);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_12;
		L_12 = Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482(L_11, Stack_1_Pop_m3978618DE1065EBDB45302C8867CA0079337B482_RuntimeMethod_var);
		V_4 = L_12;
		List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* L_13 = __this->___m_ProcessExpressionList_0;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_14 = V_4;
		NullCheck(L_13);
		List_1_Insert_m84D3394590A3FBB6D4B29CD1FE0D3D0620F6D6FC(L_13, 0, L_14, List_1_Insert_m84D3394590A3FBB6D4B29CD1FE0D3D0620F6D6FC_RuntimeMethod_var);
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_15 = __this->___m_CombinatorStack_2;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB(L_15, Stack_1_Pop_m2AF67BEB2366144D6EC410263129762727F0C6FB_RuntimeMethod_var);
	}

IL_0077:
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_17 = __this->___m_CombinatorStack_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_inline(L_17, Stack_1_get_Count_mDF3976858BDECD5846591AEB2384C4F09509FE9F_RuntimeMethod_var);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_19 = V_0;
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_20 = __this->___m_CombinatorStack_2;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844(L_20, Stack_1_Peek_m2CD39BE04FAC5AFDCAB68694648835F6E5699844_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		goto IL_0096;
	}

IL_0095:
	{
		G_B5_0 = 0;
	}

IL_0096:
	{
		V_5 = (bool)G_B5_0;
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_004d;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_23 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)il2cpp_codegen_object_new(Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C(L_23, 3, NULL);
		V_3 = L_23;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_24 = V_3;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		L_24->___combinator_3 = L_25;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_26 = V_3;
		List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* L_27 = __this->___m_ProcessExpressionList_0;
		NullCheck(L_27);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_28;
		L_28 = List_1_ToArray_m88AE0442950CD11E5E39C3DDBA2206A82128BEB8(L_27, List_1_ToArray_m88AE0442950CD11E5E39C3DDBA2206A82128BEB8_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->___subExpressions_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___subExpressions_4), (void*)L_28);
		Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* L_29 = __this->___m_ExpressionStack_1;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_30 = V_3;
		NullCheck(L_29);
		Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA(L_29, L_30, Stack_1_Push_mB6A2F01951FDF1A58FCB6A4ECCFA71CB04D0A4CA_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseTerm(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseTerm_mB12D7F0814E95FA103C08D9F2403A4C07FD7ABD6 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_0 = NULL;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_4 = NULL;
	{
		V_0 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)NULL;
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_1 = L_1;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_1;
		int32_t L_3 = L_2.___type_0;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)((int32_t)18)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_5 = ___0_tokenizer;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_6;
		L_6 = StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF(__this, L_5, NULL);
		V_0 = L_6;
		goto IL_0070;
	}

IL_0024:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_7 = V_1;
		int32_t L_8 = L_7.___type_0;
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)1))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_10 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)il2cpp_codegen_object_new(Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C(L_10, 2, NULL);
		V_0 = L_10;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_11 = V_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_12 = V_1;
		String_t* L_13 = L_12.___text_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_13, NULL);
		NullCheck(L_11);
		L_11->___keyword_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___keyword_5), (void*)L_14);
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_15 = ___0_tokenizer;
		NullCheck(L_15);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_16;
		L_16 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_15, NULL);
		goto IL_0070;
	}

IL_0054:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_17 = V_1;
		int32_t L_18 = L_17.___type_0;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_19);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D86B8152652ECE0930C57A47DABFF28132F8764)), L_20, NULL);
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseTerm_mB12D7F0814E95FA103C08D9F2403A4C07FD7ABD6_RuntimeMethod_var)));
	}

IL_0070:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_23 = ___0_tokenizer;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_24 = V_0;
		NullCheck(L_24);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_25 = (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*)(&L_24->___multiplier_1);
		StyleSyntaxParser_ParseMultiplier_mA8313FE9B18A7E119507252CE9A94A355FE9BD6B(__this, L_23, L_25, NULL);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_26 = V_0;
		V_4 = L_26;
		goto IL_0083;
	}

IL_0083:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_27 = V_4;
		return L_27;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.ExpressionCombinator UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseCombinatorType(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleSyntaxParser_ParseCombinatorType_mB3936896DBFAB7D1DA8A30A8172C4128F56C569F (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B17_0 = 0;
	{
		V_0 = 0;
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_1 = L_1;
		goto IL_008f;
	}

IL_000f:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_2 = ___0_tokenizer;
		NullCheck(L_2);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_3;
		L_3 = StyleSyntaxTokenizer_PeekNext_mE81BCB452AD10A0BAD3B84DAB450E0B2D72E8FC1(L_2, NULL);
		V_2 = L_3;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_4 = V_1;
		int32_t L_5 = L_4.___type_0;
		V_4 = L_5;
		int32_t L_6 = V_4;
		V_3 = L_6;
		int32_t L_7 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 3)))
		{
			case 0:
			{
				goto IL_003c;
			}
			case 1:
			{
				goto IL_0060;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_003c:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_8 = V_2;
		bool L_9;
		L_9 = StyleSyntaxParser_IsCombinator_mF14E5C66A70197E3C1591FF469CF6069220420DB(L_8, NULL);
		if (L_9)
		{
			goto IL_0053;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_10 = V_2;
		int32_t L_11 = L_10.___type_0;
		G_B6_0 = ((((int32_t)((((int32_t)L_11) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B6_0 = 0;
	}

IL_0054:
	{
		V_5 = (bool)G_B6_0;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		V_0 = 4;
	}

IL_005e:
	{
		goto IL_0087;
	}

IL_0060:
	{
		V_0 = 1;
		goto IL_0087;
	}

IL_0064:
	{
		V_0 = 2;
		goto IL_0087;
	}

IL_0068:
	{
		V_0 = 3;
		goto IL_0087;
	}

IL_006c:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_13 = V_1;
		int32_t L_14 = L_13.___type_0;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF17195BC6D288FE4D006860FE826AF5E1776CA87)), L_16, NULL);
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseCombinatorType_mB3936896DBFAB7D1DA8A30A8172C4128F56C569F_RuntimeMethod_var)));
	}

IL_0087:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_19 = ___0_tokenizer;
		NullCheck(L_19);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_20;
		L_20 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_19, NULL);
		V_1 = L_20;
	}

IL_008f:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_21 = V_1;
		bool L_22;
		L_22 = StyleSyntaxParser_IsExpressionEnd_m2442E222004EE6BB23F2E9CA164CB97817986859(L_21, NULL);
		if (L_22)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_23 = V_0;
		G_B17_0 = ((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		goto IL_009e;
	}

IL_009d:
	{
		G_B17_0 = 0;
	}

IL_009e:
	{
		V_6 = (bool)G_B17_0;
		bool L_24 = V_6;
		if (L_24)
		{
			goto IL_000f;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_25 = ___0_tokenizer;
		StyleSyntaxParser_EatSpace_m99BCE4A8BF1C465FC090ADC0DA8C9997FE59504E(L_25, NULL);
		int32_t L_26 = V_0;
		V_7 = L_26;
		goto IL_00b3;
	}

IL_00b3:
	{
		int32_t L_27 = V_7;
		return L_27;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseGroup(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseGroup_mB7AF9453FCD579A5765502410091CCE2AAFC384C (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_1 = NULL;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_5 = NULL;
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_0 = L_1;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_0;
		int32_t L_3 = L_2.___type_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = V_0;
		int32_t L_6 = L_5.___type_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D14024BA10FBEB6D27321B30B77259DDDAC9F15)), L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseGroup_mB7AF9453FCD579A5765502410091CCE2AAFC384C_RuntimeMethod_var)));
	}

IL_0034:
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_11 = __this->___m_CombinatorStack_2;
		NullCheck(L_11);
		Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533(L_11, 5, Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_12 = ___0_tokenizer;
		NullCheck(L_12);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_13;
		L_13 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_12, NULL);
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_14 = ___0_tokenizer;
		StyleSyntaxParser_EatSpace_m99BCE4A8BF1C465FC090ADC0DA8C9997FE59504E(L_14, NULL);
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_15 = ___0_tokenizer;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_16;
		L_16 = StyleSyntaxParser_ParseExpression_mCB33313DAFE7810E2C29EB8D76CC1B73F9D63626(__this, L_15, NULL);
		V_1 = L_16;
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_17 = ___0_tokenizer;
		NullCheck(L_17);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_18;
		L_18 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_17, NULL);
		V_0 = L_18;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_19 = V_0;
		int32_t L_20 = L_19.___type_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_20) == ((int32_t)((int32_t)15)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_22 = V_0;
		int32_t L_23 = L_22.___type_0;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_24);
		String_t* L_26;
		L_26 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1F565B458F319347315840224F74685AF7D613D)), L_25, NULL);
		Exception_t* L_27 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseGroup_mB7AF9453FCD579A5765502410091CCE2AAFC384C_RuntimeMethod_var)));
	}

IL_008c:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_28 = ___0_tokenizer;
		NullCheck(L_28);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_29;
		L_29 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_28, NULL);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_30 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)il2cpp_codegen_object_new(Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C(L_30, 3, NULL);
		V_2 = L_30;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_31 = V_2;
		NullCheck(L_31);
		L_31->___combinator_3 = 5;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_32 = V_2;
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_33 = (ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)(ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)SZArrayNew(ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_34 = L_33;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_35 = V_1;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)L_35);
		NullCheck(L_32);
		L_32->___subExpressions_4 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->___subExpressions_4), (void*)L_34);
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_36 = ___0_tokenizer;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_37 = V_2;
		NullCheck(L_37);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_38 = (ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB*)(&L_37->___multiplier_1);
		StyleSyntaxParser_ParseMultiplier_mA8313FE9B18A7E119507252CE9A94A355FE9BD6B(__this, L_36, L_38, NULL);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_39 = V_2;
		V_5 = L_39;
		goto IL_00c4;
	}

IL_00c4:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_40 = V_5;
		return L_40;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseDataType(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataType_tB1CE55CBDC1B9C7ED5D732F01851648E9150C680_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataType_tB1CE55CBDC1B9C7ED5D732F01851648E9150C680_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylePropertyCache_t026956492B146632E15AD91F6AC0793E64D8CF00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_0 = NULL;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)NULL;
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_1 = L_1;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_1;
		int32_t L_3 = L_2.___type_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)18)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = V_1;
		int32_t L_6 = L_5.___type_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral939A3D55429B36E387164A649897AD8699836CA7)), L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF_RuntimeMethod_var)));
	}

IL_0036:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_11 = ___0_tokenizer;
		NullCheck(L_11);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_12;
		L_12 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_11, NULL);
		V_1 = L_12;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_13 = V_1;
		int32_t L_14 = L_13.___type_0;
		V_5 = L_14;
		int32_t L_15 = V_5;
		V_4 = L_15;
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		goto IL_0050;
	}

IL_0050:
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) == ((int32_t)8)))
		{
			goto IL_00f5;
		}
	}
	{
		goto IL_00ff;
	}

IL_005d:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_18 = V_1;
		String_t* L_19 = L_18.___text_1;
		il2cpp_codegen_runtime_class_init_inline(StylePropertyCache_t026956492B146632E15AD91F6AC0793E64D8CF00_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = StylePropertyCache_TryGetNonTerminalValue_mDA8E0F241830316ED09D402448D7C5CA3B8C9581(L_19, (&V_3), NULL);
		V_6 = L_20;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_22 = V_3;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_23;
		L_23 = StyleSyntaxParser_ParseNonTerminalValue_m699AF35910A5C5C2BE68D02097DCBF6F6B2F140E(__this, L_22, NULL);
		V_0 = L_23;
		goto IL_00ec;
	}

IL_007c:
	{
		V_7 = 0;
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (DataType_tB1CE55CBDC1B9C7ED5D732F01851648E9150C680_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_25;
			L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
			StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_26 = V_1;
			String_t* L_27 = L_26.___text_1;
			NullCheck(L_27);
			String_t* L_28;
			L_28 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_27, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
			il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
			RuntimeObject* L_29;
			L_29 = Enum_Parse_m0316ABE916ED60AA2257A464A33A33D544EDEE12(L_25, L_28, (bool)1, NULL);
			V_8 = L_29;
			RuntimeObject* L_30 = V_8;
			V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_30) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_31 = V_9;
			if (!L_31)
			{
				goto IL_00bc_1;
			}
		}
		{
			RuntimeObject* L_32 = V_8;
			V_7 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_32, DataType_tB1CE55CBDC1B9C7ED5D732F01851648E9150C680_il2cpp_TypeInfo_var))));
		}

IL_00bc_1:
		{
			goto IL_00dc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bf;
		}
		throw e;
	}

CATCH_00bf:
	{// begin catch(System.Exception)
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_33 = V_1;
		String_t* L_34 = L_33.___text_1;
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC298FD3553810E1883D33A90EC43B7A32505AFCC)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_36 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00dc:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_37 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)il2cpp_codegen_object_new(Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C(L_37, 1, NULL);
		V_0 = L_37;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_38 = V_0;
		int32_t L_39 = V_7;
		NullCheck(L_38);
		L_38->___dataType_2 = L_39;
	}

IL_00ec:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_40 = ___0_tokenizer;
		NullCheck(L_40);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_41;
		L_41 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_40, NULL);
		goto IL_011a;
	}

IL_00f5:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_42 = ___0_tokenizer;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_43;
		L_43 = StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C(__this, L_42, NULL);
		V_0 = L_43;
		goto IL_011a;
	}

IL_00ff:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_44 = V_1;
		int32_t L_45 = L_44.___type_0;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_46);
		String_t* L_48;
		L_48 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A474EEF5045AA1C2CD84C518196B8AAB792EB34)), L_47, NULL);
		Exception_t* L_49 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_49);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_49, L_48, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF_RuntimeMethod_var)));
	}

IL_011a:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_50 = ___0_tokenizer;
		NullCheck(L_50);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_51;
		L_51 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_50, NULL);
		V_1 = L_51;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_52 = V_1;
		int32_t L_53 = L_52.___type_0;
		V_10 = (bool)((((int32_t)((((int32_t)L_53) == ((int32_t)((int32_t)19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_54 = V_10;
		if (!L_54)
		{
			goto IL_014f;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_55 = V_1;
		int32_t L_56 = L_55.___type_0;
		int32_t L_57 = L_56;
		RuntimeObject* L_58 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_57);
		String_t* L_59;
		L_59 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE615364FBB4A5F96EA9D653C3E243F81B1FFAF8B)), L_58, NULL);
		Exception_t* L_60 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_60);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_60, L_59, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_60, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseDataType_mBA71075D98F388F8FC7A81FCB861481078AAB3AF_RuntimeMethod_var)));
	}

IL_014f:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_61 = ___0_tokenizer;
		NullCheck(L_61);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_62;
		L_62 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_61, NULL);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_63 = V_0;
		V_11 = L_63;
		goto IL_015b;
	}

IL_015b:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_64 = V_11;
		return L_64;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseNonTerminalValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseNonTerminalValue_m699AF35910A5C5C2BE68D02097DCBF6F6B2F140E (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, String_t* ___0_syntax, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_0 = NULL;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_1 = NULL;
	bool V_2 = false;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_3 = NULL;
	{
		V_0 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)NULL;
		Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* L_0 = __this->___m_ParsedExpressionCache_3;
		String_t* L_1 = ___0_syntax;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_4 = __this->___m_CombinatorStack_2;
		NullCheck(L_4);
		Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533(L_4, 5, Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
		String_t* L_5 = ___0_syntax;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_6;
		L_6 = StyleSyntaxParser_Parse_mA1B3223B21B613631673FB591DC1AC15AC19DD59(__this, L_5, NULL);
		V_0 = L_6;
	}

IL_002f:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_7 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)il2cpp_codegen_object_new(Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C(L_7, 3, NULL);
		V_1 = L_7;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_8 = V_1;
		NullCheck(L_8);
		L_8->___combinator_3 = 5;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_9 = V_1;
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_10 = (ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)(ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)SZArrayNew(ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_11 = L_10;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)L_12);
		NullCheck(L_9);
		L_9->___subExpressions_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___subExpressions_4), (void*)L_11);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_13 = V_1;
		V_3 = L_13;
		goto IL_0051;
	}

IL_0051:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_14 = V_3;
		return L_14;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.Expression UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseProperty(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StylePropertyCache_t026956492B146632E15AD91F6AC0793E64D8CF00_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_0 = NULL;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* V_11 = NULL;
	{
		V_0 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)NULL;
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_1 = L_1;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_1;
		int32_t L_3 = L_2.___type_0;
		V_5 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = V_1;
		int32_t L_6 = L_5.___type_0;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE558C6207FC66752C729916FB9D30F84D557F68F)), L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C_RuntimeMethod_var)));
	}

IL_0037:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_11 = ___0_tokenizer;
		NullCheck(L_11);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_12;
		L_12 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_11, NULL);
		V_1 = L_12;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_13 = V_1;
		int32_t L_14 = L_13.___type_0;
		V_6 = (bool)((((int32_t)((((int32_t)L_14) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_16 = V_1;
		int32_t L_17 = L_16.___type_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_18);
		String_t* L_20;
		L_20 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E78C7F6A2F083881F50D1028AD48D11A8D18811)), L_19, NULL);
		Exception_t* L_21 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C_RuntimeMethod_var)));
	}

IL_006b:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_22 = V_1;
		String_t* L_23 = L_22.___text_1;
		V_2 = L_23;
		String_t* L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(StylePropertyCache_t026956492B146632E15AD91F6AC0793E64D8CF00_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = StylePropertyCache_TryGetSyntax_mC0BC9AEE43ACCB89541554339EB12EC2D09A4F77(L_24, (&V_3), NULL);
		V_7 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_27 = V_2;
		String_t* L_28;
		L_28 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4ED1FD11E20D7F2898B30390A59215252DE2F5C3)), L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral503B2D93E4267E42BD57F13F7D8E05E382D0BC76)), NULL);
		Exception_t* L_29 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_29, L_28, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C_RuntimeMethod_var)));
	}

IL_0099:
	{
		Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* L_30 = __this->___m_ParsedExpressionCache_3;
		String_t* L_31 = V_3;
		NullCheck(L_30);
		bool L_32;
		L_32 = Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127(L_30, L_31, (&V_0), Dictionary_2_TryGetValue_m13A7E6AC2E2CA4257A3986420C8BEA6394C02127_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00c7;
		}
	}
	{
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_34 = __this->___m_CombinatorStack_2;
		NullCheck(L_34);
		Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533(L_34, 5, Stack_1_Push_m60D85D5939055986CA5C216B64B21E5386384533_RuntimeMethod_var);
		String_t* L_35 = V_3;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_36;
		L_36 = StyleSyntaxParser_Parse_mA1B3223B21B613631673FB591DC1AC15AC19DD59(__this, L_35, NULL);
		V_0 = L_36;
	}

IL_00c7:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_37 = ___0_tokenizer;
		NullCheck(L_37);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_38;
		L_38 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_37, NULL);
		V_1 = L_38;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_39 = V_1;
		int32_t L_40 = L_39.___type_0;
		V_9 = (bool)((((int32_t)((((int32_t)L_40) == ((int32_t)8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_00fb;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_42 = V_1;
		int32_t L_43 = L_42.___type_0;
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_44);
		String_t* L_46;
		L_46 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE558C6207FC66752C729916FB9D30F84D557F68F)), L_45, NULL);
		Exception_t* L_47 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_47);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_47, L_46, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C_RuntimeMethod_var)));
	}

IL_00fb:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_48 = ___0_tokenizer;
		NullCheck(L_48);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_49;
		L_49 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_48, NULL);
		V_1 = L_49;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_50 = V_1;
		int32_t L_51 = L_50.___type_0;
		V_10 = (bool)((((int32_t)((((int32_t)L_51) == ((int32_t)((int32_t)19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_52 = V_10;
		if (!L_52)
		{
			goto IL_0130;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_53 = V_1;
		int32_t L_54 = L_53.___type_0;
		int32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_55);
		String_t* L_57;
		L_57 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral452A8594B8380C2634942A877BF2B8AF90152EB8)), L_56, NULL);
		Exception_t* L_58 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_58);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_58, L_57, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseProperty_mF67A796C233927B65AC906B8E33FEC1FA92CA90C_RuntimeMethod_var)));
	}

IL_0130:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_59 = (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)il2cpp_codegen_object_new(Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Expression__ctor_mE1584224CF45FC4C48DFABDCB40F344AC0D0033C(L_59, 3, NULL);
		V_4 = L_59;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_60 = V_4;
		NullCheck(L_60);
		L_60->___combinator_3 = 5;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_61 = V_4;
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_62 = (ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)(ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170*)SZArrayNew(ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170_il2cpp_TypeInfo_var, (uint32_t)1);
		ExpressionU5BU5D_tD46A409FDDFCA9729C58372D8A196785A7816170* L_63 = L_62;
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_64 = V_0;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6*)L_64);
		NullCheck(L_61);
		L_61->___subExpressions_4 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&L_61->___subExpressions_4), (void*)L_63);
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_65 = V_4;
		V_11 = L_65;
		goto IL_0157;
	}

IL_0157:
	{
		Expression_tCF765985229BD440260CA349B7CCD263AEF4A7C6* L_66 = V_11;
		return L_66;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseMultiplier(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer,UnityEngine.UIElements.StyleSheets.Syntax.ExpressionMultiplier&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_ParseMultiplier_mA8313FE9B18A7E119507252CE9A94A355FE9BD6B (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* ___1_multiplier, const RuntimeMethod* method) 
{
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_0 = L_1;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_0;
		bool L_3;
		L_3 = StyleSyntaxParser_IsMultiplier_m4B3FD74F7ED12452CB2674CAAD92FBB7A685DFAF(L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00a9;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5 = V_0;
		int32_t L_6 = L_5.___type_0;
		V_3 = L_6;
		int32_t L_7 = V_3;
		V_2 = L_7;
		int32_t L_8 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0054;
			}
			case 2:
			{
				goto IL_005e;
			}
			case 3:
			{
				goto IL_0068;
			}
			case 4:
			{
				goto IL_0072;
			}
			case 5:
			{
				goto IL_0086;
			}
			case 6:
			{
				goto IL_0086;
			}
			case 7:
			{
				goto IL_007c;
			}
		}
	}
	{
		goto IL_0086;
	}

IL_004a:
	{
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_9 = ___1_multiplier;
		ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400(L_9, 1, NULL);
		goto IL_00a1;
	}

IL_0054:
	{
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_10 = ___1_multiplier;
		ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400(L_10, 2, NULL);
		goto IL_00a1;
	}

IL_005e:
	{
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_11 = ___1_multiplier;
		ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400(L_11, 3, NULL);
		goto IL_00a1;
	}

IL_0068:
	{
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_12 = ___1_multiplier;
		ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400(L_12, 5, NULL);
		goto IL_00a1;
	}

IL_0072:
	{
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_13 = ___1_multiplier;
		ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400(L_13, 6, NULL);
		goto IL_00a1;
	}

IL_007c:
	{
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_14 = ___1_multiplier;
		ExpressionMultiplier_set_type_mB5C725187EB0A46DC6C75BF558544F86EEFA0400(L_14, 4, NULL);
		goto IL_00a1;
	}

IL_0086:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_15 = V_0;
		int32_t L_16 = L_15.___type_0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_17);
		String_t* L_19;
		L_19 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralADABA3E090BA65749B1D8B10E97EB5969A9E44F3)), L_18, NULL);
		Exception_t* L_20 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseMultiplier_mA8313FE9B18A7E119507252CE9A94A355FE9BD6B_RuntimeMethod_var)));
	}

IL_00a1:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_21 = ___0_tokenizer;
		NullCheck(L_21);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_22;
		L_22 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_21, NULL);
		V_0 = L_22;
	}

IL_00a9:
	{
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_23 = ___1_multiplier;
		int32_t L_24;
		L_24 = ExpressionMultiplier_get_type_m5462A678745CB753F29F9B6EF42FF69D88B7F033(L_23, NULL);
		V_4 = (bool)((((int32_t)L_24) == ((int32_t)4))? 1 : 0);
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00cc;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_26 = ___0_tokenizer;
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_27 = ___1_multiplier;
		int32_t* L_28 = (int32_t*)(&L_27->___min_2);
		ExpressionMultiplier_tE91EF712DEC648CB4C4EB7657AF65BE9F6F1A8DB* L_29 = ___1_multiplier;
		int32_t* L_30 = (int32_t*)(&L_29->___max_3);
		StyleSyntaxParser_ParseRanges_m743C3DEB60B2B14F2EE458B8E76BF2CB90B9ECDC(__this, L_26, L_28, L_30, NULL);
	}

IL_00cc:
	{
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::ParseRanges(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_ParseRanges_m743C3DEB60B2B14F2EE458B8E76BF2CB90B9ECDC (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, int32_t* ___1_min, int32_t* ___2_max, const RuntimeMethod* method) 
{
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t* L_0 = ___1_min;
		*((int32_t*)L_0) = (int32_t)(-1);
		int32_t* L_1 = ___2_max;
		*((int32_t*)L_1) = (int32_t)(-1);
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_2 = ___0_tokenizer;
		NullCheck(L_2);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_3;
		L_3 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_2, NULL);
		V_0 = L_3;
		V_1 = (bool)0;
		goto IL_0071;
	}

IL_0012:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_4 = V_0;
		int32_t L_5 = L_4.___type_0;
		V_3 = L_5;
		int32_t L_6 = V_3;
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0022;
	}

IL_0022:
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_004a;
		}
	}
	{
		goto IL_004e;
	}

IL_0028:
	{
		bool L_9 = V_1;
		V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_11 = ___1_min;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_12 = V_0;
		int32_t L_13 = L_12.___number_2;
		*((int32_t*)L_11) = (int32_t)L_13;
		goto IL_0048;
	}

IL_003e:
	{
		int32_t* L_14 = ___2_max;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_15 = V_0;
		int32_t L_16 = L_15.___number_2;
		*((int32_t*)L_14) = (int32_t)L_16;
	}

IL_0048:
	{
		goto IL_0069;
	}

IL_004a:
	{
		V_1 = (bool)1;
		goto IL_0069;
	}

IL_004e:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_17 = V_0;
		int32_t L_18 = L_17.___type_0;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxTokenType_tFB5906557ADB62467788C6C7F28D771374EC4834_il2cpp_TypeInfo_var)), &L_19);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7994D6420AD609C547B7549B932A0A47044123AC)), L_20, NULL);
		Exception_t* L_22 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StyleSyntaxParser_ParseRanges_m743C3DEB60B2B14F2EE458B8E76BF2CB90B9ECDC_RuntimeMethod_var)));
	}

IL_0069:
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_23 = ___0_tokenizer;
		NullCheck(L_23);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_24;
		L_24 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_23, NULL);
		V_0 = L_24;
	}

IL_0071:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_25 = V_0;
		int32_t L_26 = L_25.___type_0;
		V_5 = (bool)((((int32_t)((((int32_t)L_26) == ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_5;
		if (L_27)
		{
			goto IL_0012;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_28 = ___0_tokenizer;
		NullCheck(L_28);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_29;
		L_29 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_28, NULL);
		return;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::EatSpace(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser_EatSpace_m99BCE4A8BF1C465FC090ADC0DA8C9997FE59504E (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* ___0_tokenizer, const RuntimeMethod* method) 
{
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_0 = ___0_tokenizer;
		NullCheck(L_0);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1;
		L_1 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(L_0, NULL);
		V_0 = L_1;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_2 = V_0;
		int32_t L_3 = L_2.___type_0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* L_5 = ___0_tokenizer;
		NullCheck(L_5);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_6;
		L_6 = StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92(L_5, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::IsExpressionEnd(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxParser_IsExpressionEnd_m2442E222004EE6BB23F2E9CA164CB97817986859 (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_token, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_0 = ___0_token;
		int32_t L_1 = L_0.___type_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)15))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)20))))
		{
			goto IL_0018;
		}
	}
	{
		goto IL_001c;
	}

IL_0018:
	{
		V_2 = (bool)1;
		goto IL_0020;
	}

IL_001c:
	{
		V_2 = (bool)0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::IsCombinator(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxParser_IsCombinator_mF14E5C66A70197E3C1591FF469CF6069220420DB (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_token, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_0 = ___0_token;
		int32_t L_1 = L_0.___type_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 3))) > ((uint32_t)3))))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		V_2 = (bool)1;
		goto IL_001a;
	}

IL_0016:
	{
		V_2 = (bool)0;
		goto IL_001a;
	}

IL_001a:
	{
		bool L_4 = V_2;
		return L_4;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::IsMultiplier(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxParser_IsMultiplier_m4B3FD74F7ED12452CB2674CAAD92FBB7A685DFAF (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_token, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_0 = ___0_token;
		int32_t L_1 = L_0.___type_0;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)9)))) > ((uint32_t)4))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0013;
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)16))))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_001e;
	}

IL_001a:
	{
		V_2 = (bool)1;
		goto IL_0022;
	}

IL_001e:
	{
		V_2 = (bool)0;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxParser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxParser__ctor_m1FD9FDD76886E8C0E3FD388FB22A786B579D1971 (StyleSyntaxParser_t7032C3985ADE57F59D635A1BA773DC75D1895263* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8E56DB8CC1047B8EFE92FE3D016425366CCA46CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m02584664567EAE9393736792866820AE28FAA987_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m8CB5DF141C5731D63F53B036001F6C113B7BCB32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m9FCD29964E97EDCC6C86CA096DDAB08019CFF9FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48* L_0 = (List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48*)il2cpp_codegen_object_new(List_1_tCBE9E2C63706FE0CD9A6D23B9402AD482BFFDC48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m02584664567EAE9393736792866820AE28FAA987(L_0, List_1__ctor_m02584664567EAE9393736792866820AE28FAA987_RuntimeMethod_var);
		__this->___m_ProcessExpressionList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ProcessExpressionList_0), (void*)L_0);
		Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56* L_1 = (Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56*)il2cpp_codegen_object_new(Stack_1_tD6DF477EB7585D1F4442F510885CD1D22250BA56_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_m9FCD29964E97EDCC6C86CA096DDAB08019CFF9FF(L_1, Stack_1__ctor_m9FCD29964E97EDCC6C86CA096DDAB08019CFF9FF_RuntimeMethod_var);
		__this->___m_ExpressionStack_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExpressionStack_1), (void*)L_1);
		Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747* L_2 = (Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747*)il2cpp_codegen_object_new(Stack_1_t0D47F5E9B4943D4CBCB9CFA4B59EB251D28E5747_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Stack_1__ctor_m8CB5DF141C5731D63F53B036001F6C113B7BCB32(L_2, Stack_1__ctor_m8CB5DF141C5731D63F53B036001F6C113B7BCB32_RuntimeMethod_var);
		__this->___m_CombinatorStack_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CombinatorStack_2), (void*)L_2);
		Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6* L_3 = (Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6*)il2cpp_codegen_object_new(Dictionary_2_t41A97B6849DA9B80390BF3C8A232EC503E0314E6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m8E56DB8CC1047B8EFE92FE3D016425366CCA46CA(L_3, Dictionary_2__ctor_m8E56DB8CC1047B8EFE92FE3D016425366CCA46CA_RuntimeMethod_var);
		__this->___m_ParsedExpressionCache_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParsedExpressionCache_3), (void*)L_3);
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
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke(const StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C& unmarshaled, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___text_1 = il2cpp_codegen_marshal_string(unmarshaled.___text_1);
	marshaled.___number_2 = unmarshaled.___number_2;
}
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_back(const StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke& marshaled, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___text_1 = il2cpp_codegen_marshal_string_result(marshaled.___text_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___text_1));
	int32_t unmarshalednumber_temp_2 = 0;
	unmarshalednumber_temp_2 = marshaled.___number_2;
	unmarshaled.___number_2 = unmarshalednumber_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_pinvoke_cleanup(StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text_1);
	marshaled.___text_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_com(const StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C& unmarshaled, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___text_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___text_1);
	marshaled.___number_2 = unmarshaled.___number_2;
}
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_com_back(const StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com& marshaled, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C& unmarshaled)
{
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___text_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___text_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___text_1));
	int32_t unmarshalednumber_temp_2 = 0;
	unmarshalednumber_temp_2 = marshaled.___number_2;
	unmarshaled.___number_2 = unmarshalednumber_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken
IL2CPP_EXTERN_C void StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshal_com_cleanup(StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___text_1);
	marshaled.___text_1 = NULL;
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1 (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* __this, int32_t ___0_t, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_t;
		__this->___type_0 = L_0;
		__this->___text_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_1), (void*)(String_t*)NULL);
		__this->___number_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1_AdjustorThunk (RuntimeObject* __this, int32_t ___0_t, const RuntimeMethod* method)
{
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C*>(__this + _offset);
	StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1(_thisAdjusted, ___0_t, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxToken__ctor_mC15E56A488DBA29E580BF59EEE61CFF9543A9F48 (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* __this, int32_t ___0_type, String_t* ___1_text, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		__this->___type_0 = L_0;
		String_t* L_1 = ___1_text;
		__this->___text_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_1), (void*)L_1);
		__this->___number_2 = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void StyleSyntaxToken__ctor_mC15E56A488DBA29E580BF59EEE61CFF9543A9F48_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, String_t* ___1_text, const RuntimeMethod* method)
{
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C*>(__this + _offset);
	StyleSyntaxToken__ctor_mC15E56A488DBA29E580BF59EEE61CFF9543A9F48(_thisAdjusted, ___0_type, ___1_text, method);
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken::.ctor(UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxToken__ctor_mF92E189234E04FCBFD83DE1083B687F71658815E (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* __this, int32_t ___0_type, int32_t ___1_number, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_type;
		__this->___type_0 = L_0;
		__this->___text_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_1), (void*)(String_t*)NULL);
		int32_t L_1 = ___1_number;
		__this->___number_2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void StyleSyntaxToken__ctor_mF92E189234E04FCBFD83DE1083B687F71658815E_AdjustorThunk (RuntimeObject* __this, int32_t ___0_type, int32_t ___1_number, const RuntimeMethod* method)
{
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C*>(__this + _offset);
	StyleSyntaxToken__ctor_mF92E189234E04FCBFD83DE1083B687F71658815E(_thisAdjusted, ___0_type, ___1_number, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___m_CurrentTokenIndex_1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___m_CurrentTokenIndex_1;
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_2 = __this->___m_Tokens_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_inline(L_2, List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_5;
		memset((&L_5), 0, sizeof(L_5));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_5), 0, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0044;
	}

IL_0030:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_6 = __this->___m_Tokens_0;
		int32_t L_7 = __this->___m_CurrentTokenIndex_1;
		NullCheck(L_6);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_8;
		L_8 = List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6(L_6, L_7, List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6_RuntimeMethod_var);
		V_1 = L_8;
		goto IL_0044;
	}

IL_0044:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_9 = V_1;
		return L_9;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C StyleSyntaxTokenizer_MoveNext_mBB1FE1208842D774FE238B6B5A393653FD4EAD92 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_0;
		L_0 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(__this, NULL);
		V_0 = L_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_1 = V_0;
		int32_t L_2 = L_1.___type_0;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_4 = V_0;
		V_2 = L_4;
		goto IL_0050;
	}

IL_0019:
	{
		int32_t L_5 = __this->___m_CurrentTokenIndex_1;
		__this->___m_CurrentTokenIndex_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_6;
		L_6 = StyleSyntaxTokenizer_get_current_m4EA90CE6D382F5A83F5F4D6B0BEC38C7A43EC137(__this, NULL);
		V_0 = L_6;
		int32_t L_7 = __this->___m_CurrentTokenIndex_1;
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_8 = __this->___m_Tokens_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_inline(L_8, List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		__this->___m_CurrentTokenIndex_1 = (-1);
	}

IL_004c:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_11 = V_0;
		V_2 = L_11;
		goto IL_0050;
	}

IL_0050:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxToken UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::PeekNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C StyleSyntaxTokenizer_PeekNext_mE81BCB452AD10A0BAD3B84DAB450E0B2D72E8FC1 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___m_CurrentTokenIndex_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_CurrentTokenIndex_1;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_2 = V_0;
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_3 = __this->___m_Tokens_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_inline(L_3, List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = 1;
	}

IL_0027:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_6;
		memset((&L_6), 0, sizeof(L_6));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_6), 0, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0043;
	}

IL_0034:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_7 = __this->___m_Tokens_0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_9;
		L_9 = List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6(L_7, L_8, List_1_get_Item_m9E4D2ADDE965704BD558112A73984A85AB4E7AB6_RuntimeMethod_var);
		V_2 = L_9;
		goto IL_0043;
	}

IL_0043:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_10 = V_2;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::Tokenize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxTokenizer_Tokenize_m5DFAFC167EBE9719CDAE89B92FBE7957B0A26841 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, String_t* ___0_syntax, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B2013972C54D6D7DCEEC35FB871231D68DCE6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD69A8E7FA6FC9EC8EFF315EB44B7CA71B2E4A08);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	Il2CppChar V_2 = 0x0;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	String_t* V_6 = NULL;
	Il2CppChar V_7 = 0x0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	String_t* V_11 = NULL;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	String_t* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	String_t* G_B21_0 = NULL;
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_0 = __this->___m_Tokens_0;
		NullCheck(L_0);
		List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_inline(L_0, List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_RuntimeMethod_var);
		__this->___m_CurrentTokenIndex_1 = 0;
		String_t* L_1 = ___0_syntax;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_1, L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_4, NULL);
		___0_syntax = L_5;
		V_0 = 0;
		goto IL_03ca;
	}

IL_0033:
	{
		String_t* L_6 = ___0_syntax;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		V_1 = L_8;
		Il2CppChar L_9 = V_1;
		V_3 = L_9;
		Il2CppChar L_10 = V_3;
		V_2 = L_10;
		Il2CppChar L_11 = V_2;
		if ((!(((uint32_t)L_11) <= ((uint32_t)((int32_t)63)))))
		{
			goto IL_00a2;
		}
	}
	{
		Il2CppChar L_12 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_12, ((int32_t)32))))
		{
			case 0:
			{
				goto IL_00d0;
			}
			case 1:
			{
				goto IL_0242;
			}
			case 2:
			{
				goto IL_02ea;
			}
			case 3:
			{
				goto IL_022a;
			}
			case 4:
			{
				goto IL_02ea;
			}
			case 5:
			{
				goto IL_02ea;
			}
			case 6:
			{
				goto IL_0133;
			}
			case 7:
			{
				goto IL_01cb;
			}
			case 8:
			{
				goto IL_02ea;
			}
			case 9:
			{
				goto IL_02ea;
			}
			case 10:
			{
				goto IL_01e2;
			}
			case 11:
			{
				goto IL_01fa;
			}
			case 12:
			{
				goto IL_01b4;
			}
		}
	}
	{
		goto IL_0084;
	}

IL_0084:
	{
		Il2CppChar L_13 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)60))))
		{
			case 0:
			{
				goto IL_02ba;
			}
			case 1:
			{
				goto IL_02ea;
			}
			case 2:
			{
				goto IL_02d2;
			}
			case 3:
			{
				goto IL_0212;
			}
		}
	}
	{
		goto IL_02ea;
	}

IL_00a2:
	{
		Il2CppChar L_14 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)91))))
		{
			goto IL_025a;
		}
	}
	{
		goto IL_00ac;
	}

IL_00ac:
	{
		Il2CppChar L_15 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)93))))
		{
			goto IL_0272;
		}
	}
	{
		goto IL_00b6;
	}

IL_00b6:
	{
		Il2CppChar L_16 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, ((int32_t)123))))
		{
			case 0:
			{
				goto IL_028a;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_02a2;
			}
		}
	}
	{
		goto IL_02ea;
	}

IL_00d0:
	{
		String_t* L_17 = ___0_syntax;
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = StyleSyntaxTokenizer_GlobCharacter_m200A9D86C8FB993FF46327C28BA40288639DE77A(L_17, L_18, ((int32_t)32), NULL);
		V_0 = L_19;
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_20 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_21;
		memset((&L_21), 0, sizeof(L_21));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_21), 3, /*hidden argument*/NULL);
		NullCheck(L_20);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_20, L_21, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_00f1:
	{
		String_t* L_22 = ___0_syntax;
		int32_t L_23 = V_0;
		bool L_24;
		L_24 = StyleSyntaxTokenizer_IsNextCharacter_m169215A495397919E2866953DFC6677C229CA550(L_22, L_23, ((int32_t)124), NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_011a;
		}
	}
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_26 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_27;
		memset((&L_27), 0, sizeof(L_27));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_27), 5, /*hidden argument*/NULL);
		NullCheck(L_26);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_26, L_27, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		goto IL_012e;
	}

IL_011a:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_29 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_30;
		memset((&L_30), 0, sizeof(L_30));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_30), 4, /*hidden argument*/NULL);
		NullCheck(L_29);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_29, L_30, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
	}

IL_012e:
	{
		goto IL_03c5;
	}

IL_0133:
	{
		String_t* L_31 = ___0_syntax;
		int32_t L_32 = V_0;
		bool L_33;
		L_33 = StyleSyntaxTokenizer_IsNextCharacter_m169215A495397919E2866953DFC6677C229CA550(L_31, L_32, ((int32_t)38), NULL);
		V_5 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_35 = V_0;
		String_t* L_36 = ___0_syntax;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_35, 1))) < ((int32_t)L_37)))
		{
			goto IL_0158;
		}
	}
	{
		G_B21_0 = _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
		goto IL_016a;
	}

IL_0158:
	{
		String_t* L_38 = ___0_syntax;
		int32_t L_39 = V_0;
		NullCheck(L_38);
		Il2CppChar L_40;
		L_40 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_38, ((int32_t)il2cpp_codegen_add(L_39, 1)), NULL);
		V_7 = L_40;
		String_t* L_41;
		L_41 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_7), NULL);
		G_B21_0 = L_41;
	}

IL_016a:
	{
		V_6 = G_B21_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = L_42;
		String_t* L_44 = V_6;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogAssertionFormat_mBA7469D6C6033C5D45F9B7F2578BFDE7EF1DB578(_stringLiteral28B2013972C54D6D7DCEEC35FB871231D68DCE6A, L_43, NULL);
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_45 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_46;
		memset((&L_46), 0, sizeof(L_46));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_46), 0, /*hidden argument*/NULL);
		NullCheck(L_45);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_45, L_46, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_01af;
	}

IL_0197:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_47 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_48;
		memset((&L_48), 0, sizeof(L_48));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_48), 6, /*hidden argument*/NULL);
		NullCheck(L_47);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_47, L_48, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_01af:
	{
		goto IL_03c5;
	}

IL_01b4:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_50 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_51;
		memset((&L_51), 0, sizeof(L_51));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_51), 7, /*hidden argument*/NULL);
		NullCheck(L_50);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_50, L_51, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_01cb:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_52 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_53;
		memset((&L_53), 0, sizeof(L_53));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_53), 8, /*hidden argument*/NULL);
		NullCheck(L_52);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_52, L_53, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_01e2:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_54 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_55;
		memset((&L_55), 0, sizeof(L_55));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_55), ((int32_t)9), /*hidden argument*/NULL);
		NullCheck(L_54);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_54, L_55, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_01fa:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_56 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_57;
		memset((&L_57), 0, sizeof(L_57));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_57), ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_56, L_57, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_0212:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_58 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_59;
		memset((&L_59), 0, sizeof(L_59));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_59), ((int32_t)11), /*hidden argument*/NULL);
		NullCheck(L_58);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_58, L_59, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_022a:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_60 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_61;
		memset((&L_61), 0, sizeof(L_61));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_61), ((int32_t)12), /*hidden argument*/NULL);
		NullCheck(L_60);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_60, L_61, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_0242:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_62 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_63;
		memset((&L_63), 0, sizeof(L_63));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_63), ((int32_t)13), /*hidden argument*/NULL);
		NullCheck(L_62);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_62, L_63, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_025a:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_64 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_65;
		memset((&L_65), 0, sizeof(L_65));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_65), ((int32_t)14), /*hidden argument*/NULL);
		NullCheck(L_64);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_64, L_65, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_0272:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_66 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_67;
		memset((&L_67), 0, sizeof(L_67));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_67), ((int32_t)15), /*hidden argument*/NULL);
		NullCheck(L_66);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_66, L_67, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_028a:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_68 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_69;
		memset((&L_69), 0, sizeof(L_69));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_69), ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_68);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_68, L_69, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_02a2:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_70 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_71;
		memset((&L_71), 0, sizeof(L_71));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_71), ((int32_t)17), /*hidden argument*/NULL);
		NullCheck(L_70);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_70, L_71, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_02ba:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_72 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_73;
		memset((&L_73), 0, sizeof(L_73));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_73), ((int32_t)18), /*hidden argument*/NULL);
		NullCheck(L_72);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_72, L_73, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_02d2:
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_74 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_75;
		memset((&L_75), 0, sizeof(L_75));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_75), ((int32_t)19), /*hidden argument*/NULL);
		NullCheck(L_74);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_74, L_75, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c5;
	}

IL_02ea:
	{
		Il2CppChar L_76 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_76, NULL);
		V_8 = L_77;
		bool L_78 = V_8;
		if (!L_78)
		{
			goto IL_0344;
		}
	}
	{
		int32_t L_79 = V_0;
		V_9 = L_79;
		V_10 = 1;
		goto IL_030b;
	}

IL_02ff:
	{
		int32_t L_80 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_80, 1));
		int32_t L_81 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_030b:
	{
		String_t* L_82 = ___0_syntax;
		int32_t L_83 = V_0;
		bool L_84;
		L_84 = StyleSyntaxTokenizer_IsNextNumber_mDE6487FDE8907A728221D75666ED793E07B7A562(L_82, L_83, NULL);
		V_13 = L_84;
		bool L_85 = V_13;
		if (L_85)
		{
			goto IL_02ff;
		}
	}
	{
		String_t* L_86 = ___0_syntax;
		int32_t L_87 = V_9;
		int32_t L_88 = V_10;
		NullCheck(L_86);
		String_t* L_89;
		L_89 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_86, L_87, L_88, NULL);
		V_11 = L_89;
		String_t* L_90 = V_11;
		int32_t L_91;
		L_91 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_90, NULL);
		V_12 = L_91;
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_92 = __this->___m_Tokens_0;
		int32_t L_93 = V_12;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_94;
		memset((&L_94), 0, sizeof(L_94));
		StyleSyntaxToken__ctor_mF92E189234E04FCBFD83DE1083B687F71658815E((&L_94), 2, L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_92, L_94, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c3;
	}

IL_0344:
	{
		Il2CppChar L_95 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_96;
		L_96 = Char_IsLetter_m4363120285B51739DEE559E5C81E89580DDC78C0(L_95, NULL);
		V_14 = L_96;
		bool L_97 = V_14;
		if (!L_97)
		{
			goto IL_0395;
		}
	}
	{
		int32_t L_98 = V_0;
		V_15 = L_98;
		V_16 = 1;
		goto IL_0365;
	}

IL_0359:
	{
		int32_t L_99 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_99, 1));
		int32_t L_100 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0365:
	{
		String_t* L_101 = ___0_syntax;
		int32_t L_102 = V_0;
		bool L_103;
		L_103 = StyleSyntaxTokenizer_IsNextLetterOrDash_mE2084580A1958B1C61E433244073884A6948D91B(L_101, L_102, NULL);
		V_18 = L_103;
		bool L_104 = V_18;
		if (L_104)
		{
			goto IL_0359;
		}
	}
	{
		String_t* L_105 = ___0_syntax;
		int32_t L_106 = V_15;
		int32_t L_107 = V_16;
		NullCheck(L_105);
		String_t* L_108;
		L_108 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_105, L_106, L_107, NULL);
		V_17 = L_108;
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_109 = __this->___m_Tokens_0;
		String_t* L_110 = V_17;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_111;
		memset((&L_111), 0, sizeof(L_111));
		StyleSyntaxToken__ctor_mC15E56A488DBA29E580BF59EEE61CFF9543A9F48((&L_111), 1, L_110, /*hidden argument*/NULL);
		NullCheck(L_109);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_109, L_111, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		goto IL_03c3;
	}

IL_0395:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_112 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_113 = L_112;
		Il2CppChar L_114 = V_1;
		Il2CppChar L_115 = L_114;
		RuntimeObject* L_116 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_115);
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_116);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_116);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogAssertionFormat_mBA7469D6C6033C5D45F9B7F2578BFDE7EF1DB578(_stringLiteralDD69A8E7FA6FC9EC8EFF315EB44B7CA71B2E4A08, L_113, NULL);
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_117 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_118;
		memset((&L_118), 0, sizeof(L_118));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_118), 0, /*hidden argument*/NULL);
		NullCheck(L_117);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_117, L_118, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
	}

IL_03c3:
	{
		goto IL_03c5;
	}

IL_03c5:
	{
		int32_t L_119 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_119, 1));
	}

IL_03ca:
	{
		int32_t L_120 = V_0;
		String_t* L_121 = ___0_syntax;
		NullCheck(L_121);
		int32_t L_122;
		L_122 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_121, NULL);
		V_19 = (bool)((((int32_t)L_120) < ((int32_t)L_122))? 1 : 0);
		bool L_123 = V_19;
		if (L_123)
		{
			goto IL_0033;
		}
	}
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_124 = __this->___m_Tokens_0;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_125;
		memset((&L_125), 0, sizeof(L_125));
		StyleSyntaxToken__ctor_m8E4D9BD46C5585232C4E7EF5B74D19EA644C02B1((&L_125), ((int32_t)20), /*hidden argument*/NULL);
		NullCheck(L_124);
		List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_inline(L_124, L_125, List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::IsNextCharacter(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxTokenizer_IsNextCharacter_m169215A495397919E2866953DFC6677C229CA550 (String_t* ___0_s, int32_t ___1_index, Il2CppChar ___2_c, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_index;
		String_t* L_1 = ___0_s;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) >= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		Il2CppChar L_6 = ___2_c;
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::IsNextLetterOrDash(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxTokenizer_IsNextLetterOrDash_mE2084580A1958B1C61E433244073884A6948D91B (String_t* ___0_s, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		int32_t L_0 = ___1_index;
		String_t* L_1 = ___0_s;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) >= ((int32_t)L_2)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsLetter_m4363120285B51739DEE559E5C81E89580DDC78C0(L_5, NULL);
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_7 = ___0_s;
		int32_t L_8 = ___1_index;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		G_B4_0 = ((((int32_t)L_9) == ((int32_t)((int32_t)45)))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B4_0 = 1;
	}

IL_002c:
	{
		G_B6_0 = G_B4_0;
		goto IL_002f;
	}

IL_002e:
	{
		G_B6_0 = 0;
	}

IL_002f:
	{
		V_0 = (bool)G_B6_0;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::IsNextNumber(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSyntaxTokenizer_IsNextNumber_mDE6487FDE8907A728221D75666ED793E07B7A562 (String_t* ___0_s, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_index;
		String_t* L_1 = ___0_s;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) >= ((int32_t)L_2)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = ___0_s;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Int32 UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::GlobCharacter(System.String,System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleSyntaxTokenizer_GlobCharacter_m200A9D86C8FB993FF46327C28BA40288639DE77A (String_t* ___0_s, int32_t ___1_index, Il2CppChar ___2_c, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		goto IL_000a;
	}

IL_0003:
	{
		int32_t L_0 = ___1_index;
		___1_index = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}

IL_000a:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = ___1_index;
		Il2CppChar L_3 = ___2_c;
		bool L_4;
		L_4 = StyleSyntaxTokenizer_IsNextCharacter_m169215A495397919E2866953DFC6677C229CA550(L_1, L_2, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_0003;
		}
	}
	{
		int32_t L_6 = ___1_index;
		V_1 = L_6;
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.UIElements.StyleSheets.Syntax.StyleSyntaxTokenizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSyntaxTokenizer__ctor_mE3C2F604F89E7FA85B4DA822D1A45A2CBCEF7731 (StyleSyntaxTokenizer_t2BFF029B87B556C3401C0D094540C1DBC0506511* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAB028B38CC37E5E2E7B45271184DAFB1BE5F2220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* L_0 = (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60*)il2cpp_codegen_object_new(List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mAB028B38CC37E5E2E7B45271184DAFB1BE5F2220(L_0, List_1__ctor_mAB028B38CC37E5E2E7B45271184DAFB1BE5F2220_RuntimeMethod_var);
		__this->___m_Tokens_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Tokens_0), (void*)L_0);
		__this->___m_CurrentTokenIndex_1 = (-1);
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
// System.Single UnityEngine.UIElements.Experimental.Easing::Linear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_Linear_m26B84AC0DB4E373460F582D8671662EFC244BDCC (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InSine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InSine_mF79460FBEA1431706104AFD4BF994C4197363E88 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply((1.57079637f), ((float)il2cpp_codegen_subtract(L_0, (1.0f))))));
		V_0 = ((float)il2cpp_codegen_add(L_1, (1.0f)));
		goto IL_001c;
	}

IL_001c:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutSine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutSine_mA11E432F5110190656D59AE2719795F639FA361F (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply(L_0, (1.57079637f))));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutSine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutSine_mD3394172625E2FF380F1E05EEFB8D351DAD29087 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = sinf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)il2cpp_codegen_subtract(L_0, (0.5f))))));
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_1, (1.0f))), (0.5f)));
		goto IL_0022;
	}

IL_0022:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InQuad_mFD8C314139AAF5D7C94EE485C20B7976232F0E4E (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		goto IL_0007;
	}

IL_0007:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutQuad_mF94E48DCADB22111D075DAA4AADD181986B26553 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, ((float)il2cpp_codegen_subtract((2.0f), L_1))));
		goto IL_000d;
	}

IL_000d:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutQuad_m2EED802CAFE08A8EED6AD7522A07DAF7FC6F190A (float ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_t;
		___0_t = ((float)il2cpp_codegen_multiply(L_0, (2.0f)));
		float L_1 = ___0_t;
		V_0 = (bool)((((float)L_1) < ((float)(1.0f)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		float L_3 = ___0_t;
		float L_4 = ___0_t;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), (0.5f)));
		goto IL_0040;
	}

IL_0022:
	{
		float L_5 = ___0_t;
		float L_6 = ___0_t;
		V_1 = ((float)il2cpp_codegen_multiply((-0.5f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, (1.0f))), ((float)il2cpp_codegen_subtract(L_6, (3.0f))))), (1.0f)))));
		goto IL_0040;
	}

IL_0040:
	{
		float L_7 = V_1;
		return L_7;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InCubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InCubic_m39394BF1436CDBE943A9CCE3E67A18BCF0D2C4C7 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_InPower_mA47850B6FAAE9713D759D9734B45EDCBAEF0B3D4(L_0, 3, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutCubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutCubic_m667A5964498739D6B21F69DA4E835F14C72715B0 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_OutPower_m38F7A5EAFF05BA246CA4C0871D681E6EBCAD7CCA(L_0, 3, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutCubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutCubic_m34224759D2E984B14108C79D4F13CCC0B30D516D (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_InOutPower_m79A8187651FB38DD0AE866D44C87556391ECC0EB(L_0, 3, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InPower(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InPower_mA47850B6FAAE9713D759D9734B45EDCBAEF0B3D4 (float ___0_t, int32_t ___1_power, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		int32_t L_1 = ___1_power;
		float L_2;
		L_2 = powf(L_0, ((float)L_1));
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutPower(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutPower_m38F7A5EAFF05BA246CA4C0871D681E6EBCAD7CCA (float ___0_t, int32_t ___1_power, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___1_power;
		if (!((int32_t)(L_0%2)))
		{
			goto IL_0009;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_000a;
	}

IL_0009:
	{
		G_B3_0 = (-1);
	}

IL_000a:
	{
		V_0 = G_B3_0;
		int32_t L_1 = V_0;
		float L_2 = ___0_t;
		int32_t L_3 = ___1_power;
		float L_4;
		L_4 = powf(((float)il2cpp_codegen_subtract(L_2, (1.0f))), ((float)L_3));
		int32_t L_5 = V_0;
		V_1 = ((float)((float)il2cpp_codegen_multiply(((float)L_1), ((float)il2cpp_codegen_add(L_4, ((float)L_5))))));
		goto IL_0023;
	}

IL_0023:
	{
		float L_6 = V_1;
		return L_6;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutPower(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutPower_m79A8187651FB38DD0AE866D44C87556391ECC0EB (float ___0_t, int32_t ___1_power, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	int32_t G_B5_0 = 0;
	{
		float L_0 = ___0_t;
		___0_t = ((float)il2cpp_codegen_multiply(L_0, (2.0f)));
		float L_1 = ___0_t;
		V_1 = (bool)((((float)L_1) < ((float)(1.0f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		float L_3 = ___0_t;
		int32_t L_4 = ___1_power;
		float L_5;
		L_5 = Easing_InPower_mA47850B6FAAE9713D759D9734B45EDCBAEF0B3D4(L_3, L_4, NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_5, (0.5f)));
		goto IL_004f;
	}

IL_0026:
	{
		int32_t L_6 = ___1_power;
		if (!((int32_t)(L_6%2)))
		{
			goto IL_002e;
		}
	}
	{
		G_B5_0 = 1;
		goto IL_002f;
	}

IL_002e:
	{
		G_B5_0 = (-1);
	}

IL_002f:
	{
		V_0 = G_B5_0;
		int32_t L_7 = V_0;
		float L_8 = ___0_t;
		int32_t L_9 = ___1_power;
		float L_10;
		L_10 = powf(((float)il2cpp_codegen_subtract(L_8, (2.0f))), ((float)L_9));
		int32_t L_11 = V_0;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_7), (0.5f))), ((float)il2cpp_codegen_add(L_10, ((float)((int32_t)il2cpp_codegen_multiply(L_11, 2)))))));
		goto IL_004f;
	}

IL_004f:
	{
		float L_12 = V_2;
		return L_12;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InBounce_mB737333335A242C29C16076C07E5AA6079F283CE (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_OutBounce_mC10D97049A94174D4CE19DF1234413CD34AA8835(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_1));
		goto IL_0016;
	}

IL_0016:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutBounce_mC10D97049A94174D4CE19DF1234413CD34AA8835 (float ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		float L_0 = ___0_t;
		V_0 = (bool)((((float)L_0) < ((float)(0.363636374f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		float L_2 = ___0_t;
		float L_3 = ___0_t;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_2)), L_3));
		goto IL_0092;
	}

IL_001a:
	{
		float L_4 = ___0_t;
		V_2 = (bool)((((float)L_4) < ((float)(0.727272749f)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		float L_6 = ___0_t;
		float L_7 = ((float)il2cpp_codegen_subtract(L_6, (0.545454562f)));
		___0_t = L_7;
		V_3 = L_7;
		float L_8 = V_3;
		float L_9 = ___0_t;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_8)), L_9)), (0.75f)));
		goto IL_0092;
	}

IL_0044:
	{
		float L_10 = ___0_t;
		V_4 = (bool)((((float)L_10) < ((float)(0.909090936f)))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0072;
		}
	}
	{
		float L_12 = ___0_t;
		float L_13 = ((float)il2cpp_codegen_subtract(L_12, (0.818181813f)));
		___0_t = L_13;
		V_5 = L_13;
		float L_14 = V_5;
		float L_15 = ___0_t;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_14)), L_15)), (0.9375f)));
		goto IL_0092;
	}

IL_0072:
	{
		float L_16 = ___0_t;
		float L_17 = ((float)il2cpp_codegen_subtract(L_16, (0.954545438f)));
		___0_t = L_17;
		V_6 = L_17;
		float L_18 = V_6;
		float L_19 = ___0_t;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_18)), L_19)), (0.984375f)));
		goto IL_0092;
	}

IL_0092:
	{
		float L_20 = V_1;
		return L_20;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutBounce_m3DFA60CEC69E909A4F3C0238E792F1D1F73D6754 (float ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_t;
		V_0 = (bool)((((float)L_0) < ((float)(0.5f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		float L_2 = ___0_t;
		float L_3;
		L_3 = Easing_InBounce_mB737333335A242C29C16076C07E5AA6079F283CE(((float)il2cpp_codegen_multiply(L_2, (2.0f))), NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
		goto IL_0045;
	}

IL_0023:
	{
		float L_4 = ___0_t;
		float L_5;
		L_5 = Easing_OutBounce_mC10D97049A94174D4CE19DF1234413CD34AA8835(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, (0.5f))), (2.0f))), NULL);
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, (0.5f))), (0.5f)));
		goto IL_0045;
	}

IL_0045:
	{
		float L_6 = V_1;
		return L_6;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InElastic_m2EF0C233CA3C2268FE36AC100A84E7AFD9D6D5DB (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		float L_0 = ___0_t;
		V_3 = (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		V_4 = (0.0f);
		goto IL_006d;
	}

IL_0016:
	{
		float L_2 = ___0_t;
		V_5 = (bool)((((float)L_2) == ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		V_4 = (1.0f);
		goto IL_006d;
	}

IL_002d:
	{
		V_0 = (0.300000012f);
		float L_4 = V_0;
		V_1 = ((float)(L_4/(4.0f)));
		float L_5 = ___0_t;
		float L_6 = ((float)il2cpp_codegen_subtract(L_5, (1.0f)));
		___0_t = L_6;
		float L_7;
		L_7 = powf((2.0f), ((float)il2cpp_codegen_multiply((10.0f), L_6)));
		V_2 = L_7;
		float L_8 = V_2;
		float L_9 = ___0_t;
		float L_10 = V_1;
		float L_11 = V_0;
		float L_12;
		L_12 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_10)), (6.28318548f)))/L_11)));
		V_4 = ((-((float)il2cpp_codegen_multiply(L_8, L_12))));
		goto IL_006d;
	}

IL_006d:
	{
		float L_13 = V_4;
		return L_13;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutElastic_m8BBD9A87C73E87EC04F1D089E540BA1088EE131E (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		float L_0 = ___0_t;
		V_2 = (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0064;
	}

IL_0015:
	{
		float L_2 = ___0_t;
		V_4 = (bool)((((float)L_2) == ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		V_3 = (1.0f);
		goto IL_0064;
	}

IL_002b:
	{
		V_0 = (0.300000012f);
		float L_4 = V_0;
		V_1 = ((float)(L_4/(4.0f)));
		float L_5 = ___0_t;
		float L_6;
		L_6 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_5)));
		float L_7 = ___0_t;
		float L_8 = V_1;
		float L_9 = V_0;
		float L_10;
		L_10 = sinf(((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_7, L_8)), (6.28318548f)))/L_9)));
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_10)), (1.0f)));
		goto IL_0064;
	}

IL_0064:
	{
		float L_11 = V_3;
		return L_11;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutElastic_m45660D05A32F32BBDDA2044E5E808FA0B018D4E0 (float ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_t;
		V_0 = (bool)((((float)L_0) < ((float)(0.5f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		float L_2 = ___0_t;
		float L_3;
		L_3 = Easing_InElastic_m2EF0C233CA3C2268FE36AC100A84E7AFD9D6D5DB(((float)il2cpp_codegen_multiply(L_2, (2.0f))), NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
		goto IL_0045;
	}

IL_0023:
	{
		float L_4 = ___0_t;
		float L_5;
		L_5 = Easing_OutElastic_m8BBD9A87C73E87EC04F1D089E540BA1088EE131E(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, (0.5f))), (2.0f))), NULL);
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, (0.5f))), (0.5f)));
		goto IL_0045;
	}

IL_0045:
	{
		float L_6 = V_1;
		return L_6;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InBack_mAB0093D90CBCA71B83F98DE5FBA7A2FCF8A7706C (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		V_0 = (1.70158005f);
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = V_0;
		float L_3 = ___0_t;
		float L_4 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_2, (1.0f))), L_3)), L_4))));
		goto IL_0019;
	}

IL_0019:
	{
		float L_5 = V_1;
		return L_5;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutBack_m264B02A5B2A35059E62BC28C203C857637F9B027 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1;
		L_1 = Easing_InBack_mAB0093D90CBCA71B83F98DE5FBA7A2FCF8A7706C(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_1));
		goto IL_0016;
	}

IL_0016:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutBack_m3F682E7820B12AA0C745DF16845ED76406B076ED (float ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_t;
		V_0 = (bool)((((float)L_0) < ((float)(0.5f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		float L_2 = ___0_t;
		float L_3;
		L_3 = Easing_InBack_mAB0093D90CBCA71B83F98DE5FBA7A2FCF8A7706C(((float)il2cpp_codegen_multiply(L_2, (2.0f))), NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
		goto IL_0045;
	}

IL_0023:
	{
		float L_4 = ___0_t;
		float L_5;
		L_5 = Easing_OutBack_m264B02A5B2A35059E62BC28C203C857637F9B027(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_4, (0.5f))), (2.0f))), NULL);
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_5, (0.5f))), (0.5f)));
		goto IL_0045;
	}

IL_0045:
	{
		float L_6 = V_1;
		return L_6;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InCirc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InCirc_m306CBA4529EEDBBEBFBF0EDB14E0FDA4D199F242 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2;
		L_2 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_0, L_1)))));
		V_0 = ((-((float)il2cpp_codegen_subtract(L_2, (1.0f)))));
		goto IL_0019;
	}

IL_0019:
	{
		float L_3 = V_0;
		return L_3;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::OutCirc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_OutCirc_m7306BB491A21CF34B680291076363EAF99C50200 (float ___0_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		___0_t = ((float)il2cpp_codegen_subtract(L_0, (1.0f)));
		float L_1 = ___0_t;
		float L_2 = ___0_t;
		float L_3;
		L_3 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_1, L_2)))));
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// System.Single UnityEngine.UIElements.Experimental.Easing::InOutCirc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Easing_InOutCirc_mE95DF3EF9A24B6C9A17350C3102A192020242672 (float ___0_t, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_t;
		___0_t = ((float)il2cpp_codegen_multiply(L_0, (2.0f)));
		float L_1 = ___0_t;
		V_0 = (bool)((((float)L_1) < ((float)(1.0f)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = ___0_t;
		float L_4 = ___0_t;
		float L_5;
		L_5 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)))));
		V_1 = ((float)il2cpp_codegen_multiply((-0.5f), ((float)il2cpp_codegen_subtract(L_5, (1.0f)))));
		goto IL_005b;
	}

IL_0034:
	{
		float L_6 = ___0_t;
		___0_t = ((float)il2cpp_codegen_subtract(L_6, (2.0f)));
		float L_7 = ___0_t;
		float L_8 = ___0_t;
		float L_9;
		L_9 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_7, L_8)))));
		V_1 = ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_9, (1.0f)))));
		goto IL_005b;
	}

IL_005b:
	{
		float L_10 = V_1;
		return L_10;
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
// Conversion methods for marshalling of: UnityEngine.UIElements.Experimental.StyleValues
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke(const StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A& unmarshaled, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StyleValues_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StyleValues' of type 'StyleValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StyleValues_0Exception, NULL);
}
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_back(const StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke& marshaled, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A& unmarshaled)
{
	Exception_t* ___m_StyleValues_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StyleValues' of type 'StyleValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StyleValues_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.Experimental.StyleValues
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_pinvoke_cleanup(StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.UIElements.Experimental.StyleValues
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_com(const StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A& unmarshaled, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com& marshaled)
{
	Exception_t* ___m_StyleValues_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StyleValues' of type 'StyleValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StyleValues_0Exception, NULL);
}
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_com_back(const StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com& marshaled, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A& unmarshaled)
{
	Exception_t* ___m_StyleValues_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StyleValues' of type 'StyleValues': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StyleValues_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.UIElements.Experimental.StyleValues
IL2CPP_EXTERN_C void StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshal_com_cleanup(StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_top(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_top_m48E6217782E620393440CCCD81930520B1E1030D (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131103), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_top_m48E6217782E620393440CCCD81930520B1E1030D_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_top_m48E6217782E620393440CCCD81930520B1E1030D(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_left(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_left_mFAD27A84F960F6DF78853A2129A8204B4F8CD806 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131088), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_left_mFAD27A84F960F6DF78853A2129A8204B4F8CD806_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_left_mFAD27A84F960F6DF78853A2129A8204B4F8CD806(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_width_m9624D54682E20BF8F737C4B720F37E8E8F9525FA (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131104), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_width_m9624D54682E20BF8F737C4B720F37E8E8F9525FA_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_width_m9624D54682E20BF8F737C4B720F37E8E8F9525FA(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_height_m4ACA993F82BB0E9960844357040147BB15B45678 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131086), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_height_m4ACA993F82BB0E9960844357040147BB15B45678_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_height_m4ACA993F82BB0E9960844357040147BB15B45678(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_right(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_right_mA41389187E587D958E1ADC82616B9FC0A6D59010 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131102), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_right_mA41389187E587D958E1ADC82616B9FC0A6D59010_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_right_mA41389187E587D958E1ADC82616B9FC0A6D59010(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_bottom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_bottom_mF0585EEE945A1F798A2F3A39FB44918DF7577999 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131079), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_bottom_mF0585EEE945A1F798A2F3A39FB44918DF7577999_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_bottom_mF0585EEE945A1F798A2F3A39FB44918DF7577999(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_color_m0DE08D9E8470C008EF7977ABACB801B50C403604 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D(__this, ((int32_t)65536), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_color_m0DE08D9E8470C008EF7977ABACB801B50C403604_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_color_m0DE08D9E8470C008EF7977ABACB801B50C403604(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_backgroundColor_m2A9BC3A6EE3327E4AD37B833093F2B1045F42657 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D(__this, ((int32_t)458752), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_backgroundColor_m2A9BC3A6EE3327E4AD37B833093F2B1045F42657_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_backgroundColor_m2A9BC3A6EE3327E4AD37B833093F2B1045F42657(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_unityBackgroundImageTintColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_unityBackgroundImageTintColor_m9518C2F0EEF84A7514FB08D412ECA223481E26EB (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D(__this, ((int32_t)196610), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_unityBackgroundImageTintColor_m9518C2F0EEF84A7514FB08D412ECA223481E26EB_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_unityBackgroundImageTintColor_m9518C2F0EEF84A7514FB08D412ECA223481E26EB(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderColor_m51C6B51A6F5CF146DD5BC299D1F6996D8468BD19 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D(__this, ((int32_t)262145), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderColor_m51C6B51A6F5CF146DD5BC299D1F6996D8468BD19_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderColor_m51C6B51A6F5CF146DD5BC299D1F6996D8468BD19(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginLeft(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginLeft_m9B22FA1BD816F1A51F225928DF2F3D906E6DF88B (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131090), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_marginLeft_m9B22FA1BD816F1A51F225928DF2F3D906E6DF88B_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_marginLeft_m9B22FA1BD816F1A51F225928DF2F3D906E6DF88B(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginTop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginTop_mF863F6D466BC531C6AF621C89ECDBD39463BD93E (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131092), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_marginTop_mF863F6D466BC531C6AF621C89ECDBD39463BD93E_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_marginTop_mF863F6D466BC531C6AF621C89ECDBD39463BD93E(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginRight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginRight_m7CE017508A3B1D833C58994CC49D26526A2201B1 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131091), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_marginRight_m7CE017508A3B1D833C58994CC49D26526A2201B1_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_marginRight_m7CE017508A3B1D833C58994CC49D26526A2201B1(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_marginBottom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_marginBottom_mC6168EF9E4CF2B5C10E4F2C0C10173F47ECC5228 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131089), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_marginBottom_mC6168EF9E4CF2B5C10E4F2C0C10173F47ECC5228_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_marginBottom_mC6168EF9E4CF2B5C10E4F2C0C10173F47ECC5228(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingLeft(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingLeft_m5F86CBEAB6FBE559BCF2879CB8B29A818E1EE842 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131098), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_paddingLeft_m5F86CBEAB6FBE559BCF2879CB8B29A818E1EE842_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_paddingLeft_m5F86CBEAB6FBE559BCF2879CB8B29A818E1EE842(_thisAdjusted, ___0_value, method);
}
// System.Single UnityEngine.UIElements.Experimental.StyleValues::get_paddingTop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StyleValues_get_paddingTop_m4163613C0D8C0232FFF6E9FEEA365E8EE4C22F29 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, const RuntimeMethod* method) 
{
	StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_0;
		L_0 = StyleValues_Values_m88F2CD5ABCE813109E3AEC2EC7E188F3335124F4(__this, NULL);
		NullCheck(L_0);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_1;
		L_1 = StyleValueCollection_GetStyleFloat_mFB67DF76D46EFF7CBFAAB1F5B699F3CBE6AF71EB(L_0, ((int32_t)131100), NULL);
		V_0 = L_1;
		float L_2;
		L_2 = StyleFloat_get_value_mA16B2A988966FF48ED290BA14F3CD1011608ECC2((&V_0), NULL);
		V_1 = L_2;
		goto IL_001c;
	}

IL_001c:
	{
		float L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  float StyleValues_get_paddingTop_m4163613C0D8C0232FFF6E9FEEA365E8EE4C22F29_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	float _returnValue;
	_returnValue = StyleValues_get_paddingTop_m4163613C0D8C0232FFF6E9FEEA365E8EE4C22F29(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingTop(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingTop_m7ECA854BDED29E7EB321AAB864E31496AE9296C4 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131100), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_paddingTop_m7ECA854BDED29E7EB321AAB864E31496AE9296C4_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_paddingTop_m7ECA854BDED29E7EB321AAB864E31496AE9296C4(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingRight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingRight_mBF11DC662A123347AC9EE1E27E8E305CD8185DE6 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131099), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_paddingRight_mBF11DC662A123347AC9EE1E27E8E305CD8185DE6_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_paddingRight_mBF11DC662A123347AC9EE1E27E8E305CD8185DE6(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_paddingBottom(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_paddingBottom_m3BFC2973535E0E6D039E20B772A8820FC8077E7B (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131097), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_paddingBottom_m3BFC2973535E0E6D039E20B772A8820FC8077E7B_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_paddingBottom_m3BFC2973535E0E6D039E20B772A8820FC8077E7B(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderLeftWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderLeftWidth_mBF143DCEA54204778667BF44C8E73B7975D4AAA9 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131076), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderLeftWidth_mBF143DCEA54204778667BF44C8E73B7975D4AAA9_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderLeftWidth_mBF143DCEA54204778667BF44C8E73B7975D4AAA9(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderRightWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderRightWidth_mEE38F80EEFACA8EA46E2FBFB999C66BF149237E7 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131077), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderRightWidth_mEE38F80EEFACA8EA46E2FBFB999C66BF149237E7_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderRightWidth_mEE38F80EEFACA8EA46E2FBFB999C66BF149237E7(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderTopWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderTopWidth_m1E5392A33528F1925D3069320B8FFF00560EFDA0 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131078), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderTopWidth_m1E5392A33528F1925D3069320B8FFF00560EFDA0_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderTopWidth_m1E5392A33528F1925D3069320B8FFF00560EFDA0(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderBottomWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderBottomWidth_m71302DEB066E5E6E573474C55257B322F7419365 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131075), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderBottomWidth_m71302DEB066E5E6E573474C55257B322F7419365_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderBottomWidth_m71302DEB066E5E6E573474C55257B322F7419365(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderTopLeftRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderTopLeftRadius_m73F97178B2C0D14C27D10343CA5531F89D43B111 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)458760), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderTopLeftRadius_m73F97178B2C0D14C27D10343CA5531F89D43B111_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderTopLeftRadius_m73F97178B2C0D14C27D10343CA5531F89D43B111(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderTopRightRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderTopRightRadius_m88DD2EFAABD5E9561C785307ABAB01EF5B27622E (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)458761), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderTopRightRadius_m88DD2EFAABD5E9561C785307ABAB01EF5B27622E_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderTopRightRadius_m88DD2EFAABD5E9561C785307ABAB01EF5B27622E(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderBottomLeftRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderBottomLeftRadius_m760918D8378859D7856071CE870EB65F959D4C76 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)458755), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderBottomLeftRadius_m760918D8378859D7856071CE870EB65F959D4C76_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderBottomLeftRadius_m760918D8378859D7856071CE870EB65F959D4C76(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_borderBottomRightRadius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_borderBottomRightRadius_m333C6B1380996D18764DDB00C2840FB2BEAE41B8 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)458756), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_borderBottomRightRadius_m333C6B1380996D18764DDB00C2840FB2BEAE41B8_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_borderBottomRightRadius_m333C6B1380996D18764DDB00C2840FB2BEAE41B8(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_opacity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_opacity_m922BA4C7684E0A662DFE1E85283CFDC35C1CE81F (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)458762), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_opacity_m922BA4C7684E0A662DFE1E85283CFDC35C1CE81F_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_opacity_m922BA4C7684E0A662DFE1E85283CFDC35C1CE81F(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_flexGrow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_flexGrow_mA7EA5E8B7DEA6569366E164F00CA8160540FEF48 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131083), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_flexGrow_mA7EA5E8B7DEA6569366E164F00CA8160540FEF48_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_flexGrow_mA7EA5E8B7DEA6569366E164F00CA8160540FEF48(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::set_flexShrink(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_set_flexShrink_m4838D70B1233E2CA71A38AC32ECB4C96F8CDA67E (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(__this, ((int32_t)131083), L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_set_flexShrink_m4838D70B1233E2CA71A38AC32ECB4C96F8CDA67E_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_set_flexShrink_m4838D70B1233E2CA71A38AC32ECB4C96F8CDA67E(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::SetValue(UnityEngine.UIElements.StyleSheets.StylePropertyId,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) 
{
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5));
		int32_t L_0 = ___0_id;
		(&V_0)->___id_0 = L_0;
		float L_1 = ___1_value;
		(&V_0)->___number_2 = L_1;
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_2;
		L_2 = StyleValues_Values_m88F2CD5ABCE813109E3AEC2EC7E188F3335124F4(__this, NULL);
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_3 = V_0;
		NullCheck(L_2);
		StyleValueCollection_SetStyleValue_m0D2893CB063806B31C41887327B73877CD0101AC(L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA(_thisAdjusted, ___0_id, ___1_value, method);
}
// System.Void UnityEngine.UIElements.Experimental.StyleValues::SetValue(UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, int32_t ___0_id, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) 
{
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5));
		int32_t L_0 = ___0_id;
		(&V_0)->___id_0 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_value;
		(&V_0)->___color_4 = L_1;
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_2;
		L_2 = StyleValues_Values_m88F2CD5ABCE813109E3AEC2EC7E188F3335124F4(__this, NULL);
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_3 = V_0;
		NullCheck(L_2);
		StyleValueCollection_SetStyleValue_m0D2893CB063806B31C41887327B73877CD0101AC(L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_id, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D(_thisAdjusted, ___0_id, ___1_value, method);
}
// UnityEngine.UIElements.StyleValueCollection UnityEngine.UIElements.Experimental.StyleValues::Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* StyleValues_Values_m88F2CD5ABCE813109E3AEC2EC7E188F3335124F4 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* V_1 = NULL;
	{
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_0 = __this->___m_StyleValues_0;
		V_0 = (bool)((((RuntimeObject*)(StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_2 = (StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377*)il2cpp_codegen_object_new(StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StyleValueCollection__ctor_mFE0D8F376863E4DF1BCCB889ABC9896874413C23(L_2, NULL);
		__this->___m_StyleValues_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StyleValues_0), (void*)L_2);
	}

IL_001b:
	{
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_3 = __this->___m_StyleValues_0;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* StyleValues_Values_m88F2CD5ABCE813109E3AEC2EC7E188F3335124F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A*>(__this + _offset);
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* _returnValue;
	_returnValue = StyleValues_Values_m88F2CD5ABCE813109E3AEC2EC7E188F3335124F4(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.UIElements.Experimental.Lerp::Interpolate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Lerp_Interpolate_m6600A3C40476BFAFF0B91EBDD50B8DA0695DEB44 (float ___0_start, float ___1_end, float ___2_ratio, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_start;
		float L_1 = ___1_end;
		float L_2 = ___2_ratio;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.Color UnityEngine.UIElements.Experimental.Lerp::Interpolate(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Lerp_Interpolate_m3670F7FFEB36D2A5485DB0A46111608451725E7D (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_start, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_end, float ___2_ratio, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_start;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_end;
		float L_2 = ___2_ratio;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.UIElements.Experimental.StyleValues UnityEngine.UIElements.Experimental.Lerp::Interpolate(UnityEngine.UIElements.Experimental.StyleValues,UnityEngine.UIElements.Experimental.StyleValues,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A Lerp_Interpolate_mB8C742AFAB0D735F42E1D3271520B0F4870C13F3 (StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___0_start, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___1_end, float ___2_ratio, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1F4E04F6F817CA0C550E88CACDBF06CECEEBA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m382A4115E9B245542508429960929A5A5A2DBC52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m79C661B4F2593F250F3AAEBE725ABBB3B97314E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091 V_1;
	memset((&V_1), 0, sizeof(V_1));
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A));
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_0 = ___1_end;
		StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_1 = L_0.___m_StyleValues_0;
		NullCheck(L_1);
		List_1_t686B3253BF1ECA33C528F281967CD2DA263C252E* L_2 = L_1->___m_Values_0;
		NullCheck(L_2);
		Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091 L_3;
		L_3 = List_1_GetEnumerator_m79C661B4F2593F250F3AAEBE725ABBB3B97314E1(L_2, List_1_GetEnumerator_m79C661B4F2593F250F3AAEBE725ABBB3B97314E1_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_026c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1F4E04F6F817CA0C550E88CACDBF06CECEEBA5A4((&V_1), Enumerator_Dispose_m1F4E04F6F817CA0C550E88CACDBF06CECEEBA5A4_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_025e_1;
			}

IL_0020_1:
			{
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_4;
				L_4 = Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_inline((&V_1), Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_RuntimeMethod_var);
				V_2 = L_4;
				il2cpp_codegen_initobj((&V_3), sizeof(StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5));
				StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_5 = ___0_start;
				StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* L_6 = L_5.___m_StyleValues_0;
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_7 = V_2;
				int32_t L_8 = L_7.___id_0;
				NullCheck(L_6);
				bool L_9;
				L_9 = StyleValueCollection_TryGetStyleValue_m440C7A9E0F94731ACB08A11B7FF06F75925BE40B(L_6, L_8, (&V_3), NULL);
				V_4 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_0070_1;
				}
			}
			{
				int32_t* L_11 = (int32_t*)(&(&V_2)->___id_0);
				Il2CppFakeBox<int32_t> L_12(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69_il2cpp_TypeInfo_var)), L_11);
				String_t* L_13;
				L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
				String_t* L_14;
				L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B5DCCE19078A828FC588BE11C84ACE1D3A4E38A)), L_13, NULL);
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_15);
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lerp_Interpolate_mB8C742AFAB0D735F42E1D3271520B0F4870C13F3_RuntimeMethod_var)));
			}

IL_0070_1:
			{
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_16 = V_2;
				int32_t L_17 = L_16.___id_0;
				V_6 = L_17;
				int32_t L_18 = V_6;
				V_5 = L_18;
				int32_t L_19 = V_5;
				if ((((int32_t)L_19) > ((int32_t)((int32_t)131104))))
				{
					goto IL_016d_1;
				}
			}
			{
				int32_t L_20 = V_5;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (-1)))) > ((uint32_t)1))))
				{
					goto IL_0252_1;
				}
			}
			{
				goto IL_0094_1;
			}

IL_0094_1:
			{
				int32_t L_21 = V_5;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_21, ((int32_t)65536))))
				{
					case 0:
					{
						goto IL_022e_1;
					}
					case 1:
					{
						goto IL_020a_1;
					}
					case 2:
					{
						goto IL_0252_1;
					}
					case 3:
					{
						goto IL_0252_1;
					}
					case 4:
					{
						goto IL_0252_1;
					}
					case 5:
					{
						goto IL_0252_1;
					}
					case 6:
					{
						goto IL_0252_1;
					}
					case 7:
					{
						goto IL_0252_1;
					}
					case 8:
					{
						goto IL_0252_1;
					}
					case 9:
					{
						goto IL_0252_1;
					}
					case 10:
					{
						goto IL_0252_1;
					}
					case 11:
					{
						goto IL_0252_1;
					}
					case 12:
					{
						goto IL_0252_1;
					}
				}
			}
			{
				goto IL_00d7_1;
			}

IL_00d7_1:
			{
				int32_t L_22 = V_5;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_22, ((int32_t)131072))))
				{
					case 0:
					{
						goto IL_0252_1;
					}
					case 1:
					{
						goto IL_0252_1;
					}
					case 2:
					{
						goto IL_0252_1;
					}
					case 3:
					{
						goto IL_020a_1;
					}
					case 4:
					{
						goto IL_020a_1;
					}
					case 5:
					{
						goto IL_020a_1;
					}
					case 6:
					{
						goto IL_020a_1;
					}
					case 7:
					{
						goto IL_020a_1;
					}
					case 8:
					{
						goto IL_0252_1;
					}
					case 9:
					{
						goto IL_020a_1;
					}
					case 10:
					{
						goto IL_0252_1;
					}
					case 11:
					{
						goto IL_020a_1;
					}
					case 12:
					{
						goto IL_020a_1;
					}
					case 13:
					{
						goto IL_0252_1;
					}
					case 14:
					{
						goto IL_020a_1;
					}
					case 15:
					{
						goto IL_0252_1;
					}
					case 16:
					{
						goto IL_020a_1;
					}
					case 17:
					{
						goto IL_020a_1;
					}
					case 18:
					{
						goto IL_020a_1;
					}
					case 19:
					{
						goto IL_020a_1;
					}
					case 20:
					{
						goto IL_020a_1;
					}
					case 21:
					{
						goto IL_020a_1;
					}
					case 22:
					{
						goto IL_020a_1;
					}
					case 23:
					{
						goto IL_020a_1;
					}
					case 24:
					{
						goto IL_020a_1;
					}
					case 25:
					{
						goto IL_020a_1;
					}
					case 26:
					{
						goto IL_020a_1;
					}
					case 27:
					{
						goto IL_020a_1;
					}
					case 28:
					{
						goto IL_020a_1;
					}
					case 29:
					{
						goto IL_0252_1;
					}
					case 30:
					{
						goto IL_020a_1;
					}
					case 31:
					{
						goto IL_020a_1;
					}
					case 32:
					{
						goto IL_020a_1;
					}
				}
			}
			{
				goto IL_0252_1;
			}

IL_016d_1:
			{
				int32_t L_23 = V_5;
				if ((((int32_t)L_23) > ((int32_t)((int32_t)262145))))
				{
					goto IL_01bb_1;
				}
			}
			{
				int32_t L_24 = V_5;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_24, ((int32_t)196608))))
				{
					case 0:
					{
						goto IL_0252_1;
					}
					case 1:
					{
						goto IL_0252_1;
					}
					case 2:
					{
						goto IL_022e_1;
					}
					case 3:
					{
						goto IL_0252_1;
					}
					case 4:
					{
						goto IL_0252_1;
					}
					case 5:
					{
						goto IL_0252_1;
					}
					case 6:
					{
						goto IL_0252_1;
					}
					case 7:
					{
						goto IL_0252_1;
					}
					case 8:
					{
						goto IL_0252_1;
					}
					case 9:
					{
						goto IL_0252_1;
					}
				}
			}
			{
				goto IL_01ad_1;
			}

IL_01ad_1:
			{
				int32_t L_25 = V_5;
				if ((((int32_t)L_25) == ((int32_t)((int32_t)262145))))
				{
					goto IL_022e_1;
				}
			}
			{
				goto IL_0252_1;
			}

IL_01bb_1:
			{
				int32_t L_26 = V_5;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, ((int32_t)262146)))) > ((uint32_t)4))))
				{
					goto IL_0252_1;
				}
			}
			{
				goto IL_01cb_1;
			}

IL_01cb_1:
			{
				int32_t L_27 = V_5;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_27, ((int32_t)458752))))
				{
					case 0:
					{
						goto IL_022e_1;
					}
					case 1:
					{
						goto IL_0252_1;
					}
					case 2:
					{
						goto IL_0252_1;
					}
					case 3:
					{
						goto IL_020a_1;
					}
					case 4:
					{
						goto IL_020a_1;
					}
					case 5:
					{
						goto IL_0252_1;
					}
					case 6:
					{
						goto IL_0252_1;
					}
					case 7:
					{
						goto IL_0252_1;
					}
					case 8:
					{
						goto IL_020a_1;
					}
					case 9:
					{
						goto IL_020a_1;
					}
					case 10:
					{
						goto IL_020a_1;
					}
					case 11:
					{
						goto IL_0252_1;
					}
				}
			}
			{
				goto IL_0252_1;
			}

IL_020a_1:
			{
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_28 = V_2;
				int32_t L_29 = L_28.___id_0;
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_30 = V_3;
				float L_31 = L_30.___number_2;
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_32 = V_2;
				float L_33 = L_32.___number_2;
				float L_34 = ___2_ratio;
				float L_35;
				L_35 = Lerp_Interpolate_m6600A3C40476BFAFF0B91EBDD50B8DA0695DEB44(L_31, L_33, L_34, NULL);
				StyleValues_SetValue_m0A2171A1F7DA8AC12ADF95B63B0EF7E446A6D6BA((&V_0), L_29, L_35, NULL);
				goto IL_025d_1;
			}

IL_022e_1:
			{
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_36 = V_2;
				int32_t L_37 = L_36.___id_0;
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_38 = V_3;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = L_38.___color_4;
				StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_40 = V_2;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41 = L_40.___color_4;
				float L_42 = ___2_ratio;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
				L_43 = Lerp_Interpolate_m3670F7FFEB36D2A5485DB0A46111608451725E7D(L_39, L_41, L_42, NULL);
				StyleValues_SetValue_mBAC6E9C25500E6660F25A0D6F87E2C1594D64A7D((&V_0), L_37, L_43, NULL);
				goto IL_025d_1;
			}

IL_0252_1:
			{
				ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
				NullCheck(L_44);
				ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCD257F752DD9F10B9231939923CC54ECADEF521B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lerp_Interpolate_mB8C742AFAB0D735F42E1D3271520B0F4870C13F3_RuntimeMethod_var)));
			}

IL_025d_1:
			{
			}

IL_025e_1:
			{
				bool L_45;
				L_45 = Enumerator_MoveNext_m382A4115E9B245542508429960929A5A5A2DBC52((&V_1), Enumerator_MoveNext_m382A4115E9B245542508429960929A5A5A2DBC52_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_027b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_027b:
	{
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_46 = V_0;
		V_7 = L_46;
		goto IL_0280;
	}

IL_0280:
	{
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_47 = V_7;
		return L_47;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_5;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Capture_get_Length_mA3E97C9DF116CD4B4C20EBFB70A1312F33DA7A92_inline (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_LerpUnclamped_m91027D026E64424B71959149B942F706FC16B1A2_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___r_0;
		float L_6 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___0_a;
		float L_8 = L_7.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___1_b;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___0_a;
		float L_12 = L_11.___g_1;
		float L_13 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___0_a;
		float L_15 = L_14.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___1_b;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___0_a;
		float L_19 = L_18.___b_2;
		float L_20 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = ___0_a;
		float L_22 = L_21.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___1_b;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___0_a;
		float L_26 = L_25.___a_3;
		float L_27 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_24, L_26)), L_27)))), /*hidden argument*/NULL);
		V_0 = L_28;
		goto IL_0061;
	}

IL_0061:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_0;
		return L_29;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFCF2B2ECBAC0430A3776BA1C3AE0B4B59733CB85_gshared_inline (List_1_t893BC4E6EA21D89E7107414FB1199B089EB9F122* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m4792730A13F3249ABCC0E87BE58C4CEFAA2593AB_gshared_inline (Stack_1_t509AEAED71EF48FB8551C238C1BA01882CC654B9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE25AB5C887DDE4CBAD4FD1E25D445F1FAA9FE3E3_gshared_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mC670B41F9AB70CA8F0E2653643A31F770D9CC877_gshared_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* L_3 = __this->____items_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m6CBE20F4201FDC8B166E26E11B9DA3F42A41E753_gshared_inline (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60* __this, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C ___0_item, const RuntimeMethod* method) 
{
	StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		StyleSyntaxTokenU5BU5D_t47245051E1F0EBD45B56D9E0ED113E9586B33CD8* L_6 = V_0;
		int32_t L_7 = V_1;
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C)L_8);
		return;
	}

IL_0034:
	{
		StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C L_9 = ___0_item;
		((  void (*) (List_1_t7EE6A5C0B2D6A0225722C4CCEFDCD7C2904D3F60*, StyleSyntaxToken_tE4474F86F800F298F966FFDE947528453E769E0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 Enumerator_get_Current_m2A71803E92C0B34206D38F91490F372EE7E8E999_gshared_inline (Enumerator_tB72DF0A1B1C0AE8C401AAA543550E6B7F4F8E091* __this, const RuntimeMethod* method) 
{
	{
		StyleValue_t56307594EC04E04EFBCC3220595B4AAD66FF93C5 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
