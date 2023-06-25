#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8;
// System.String
struct String_t;
// UnityEngine.Tilemaps.Tile
struct Tile_t33119F106CFC3DC767E7D9306A958AAE12133490;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751;
// UnityEngine.Tilemaps.TilemapRenderer
struct TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5E8190EE43F4DF5D80E8A6651A0469A8FD445F94 
{
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

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Tilemaps.TileData>
struct NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>
struct NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 
{
	// UnityEngine.Sprite[] UnityEngine.Tilemaps.TileAnimationData::m_AnimatedSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationSpeed
	float ___m_AnimationSpeed_1;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationStartTime
	float ___m_AnimationStartTime_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164  : public RuntimeObject
{
	// UnityEngine.Tilemaps.Tilemap UnityEngine.Tilemaps.ITilemap::m_Tilemap
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___m_Tilemap_1;
	// System.Boolean UnityEngine.Tilemaps.ITilemap::m_AddToList
	bool ___m_AddToList_2;
	// System.Int32 UnityEngine.Tilemaps.ITilemap::m_RefreshCount
	int32_t ___m_RefreshCount_3;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int> UnityEngine.Tilemaps.ITilemap::m_RefreshPos
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___m_RefreshPos_4;
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

// UnityEngine.Tilemaps.TileChangeData
struct TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E 
{
	// UnityEngine.Vector3Int UnityEngine.Tilemaps.TileChangeData::m_Position
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	// UnityEngine.Object UnityEngine.Tilemaps.TileChangeData::m_TileAsset
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_TileAsset_1;
	// UnityEngine.Color UnityEngine.Tilemaps.TileChangeData::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_2;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileChangeData::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_3;
};

// UnityEngine.Tilemaps.TileData
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	// System.Int32 UnityEngine.Tilemaps.TileData::m_Sprite
	int32_t ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileData::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileData::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// System.Int32 UnityEngine.Tilemaps.TileData::m_GameObject
	int32_t ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileData::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::m_ColliderType
	int32_t ___m_ColliderType_5;
};

// UnityEngine.Tilemaps.TileDataNative
struct TileDataNative_tAD277F2C587DC35577654A4C111ECE2C4114C528 
{
	// System.Int32 UnityEngine.Tilemaps.TileDataNative::m_Sprite
	int32_t ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileDataNative::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileDataNative::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// System.Int32 UnityEngine.Tilemaps.TileDataNative::m_GameObject
	int32_t ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileDataNative::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileDataNative::m_ColliderType
	int32_t ___m_ColliderType_5;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Tilemaps.Tile
struct Tile_t33119F106CFC3DC767E7D9306A958AAE12133490  : public TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9
{
	// UnityEngine.Sprite UnityEngine.Tilemaps.Tile::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_4;
	// UnityEngine.Color UnityEngine.Tilemaps.Tile::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_5;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_6;
	// UnityEngine.GameObject UnityEngine.Tilemaps.Tile::m_InstancedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_InstancedGameObject_7;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::m_Flags
	int32_t ___m_Flags_8;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::m_ColliderType
	int32_t ___m_ColliderType_9;
};

// UnityEngine.Tilemaps.TilemapRenderer
struct TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};

// <Module>

// <Module>

// Unity.Collections.NativeArray`1<System.Int32>

// Unity.Collections.NativeArray`1<System.Int32>

// Unity.Collections.NativeArray`1<UnityEngine.Tilemaps.TileData>

// Unity.Collections.NativeArray`1<UnityEngine.Tilemaps.TileData>

// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>

// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Single

// System.Single

// UnityEngine.Tilemaps.TileAnimationData

// UnityEngine.Tilemaps.TileAnimationData

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector3Int

// System.Void

// System.Void

// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields
{
	// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::s_Instance
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___s_Instance_0;
};

// UnityEngine.Tilemaps.ITilemap

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Tilemaps.TileChangeData

// UnityEngine.Tilemaps.TileChangeData

// UnityEngine.Tilemaps.TileData
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::Default
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default_6;
};

// UnityEngine.Tilemaps.TileData

// UnityEngine.Tilemaps.TileDataNative

// UnityEngine.Tilemaps.TileDataNative

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.U2D.SpriteAtlas

// UnityEngine.U2D.SpriteAtlas

// System.Action`1<UnityEngine.U2D.SpriteAtlas>

// System.Action`1<UnityEngine.U2D.SpriteAtlas>

// UnityEngine.Tilemaps.TileBase

// UnityEngine.Tilemaps.TileBase

// UnityEngine.Tilemaps.Tile

// UnityEngine.Tilemaps.Tile

// UnityEngine.Tilemaps.TilemapRenderer

// UnityEngine.Tilemaps.TilemapRenderer

// UnityEngine.Tilemaps.Tilemap

// UnityEngine.Tilemaps.Tilemap
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_src, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3Int>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Tilemaps.TileData>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_gshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_gshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,System.Int32)
inline void NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___0_src, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_gshared)(___0_src, ___1_dst, ___2_length, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Dispose()
inline void NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, const RuntimeMethod*))NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_gshared)(__this, method);
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.ITilemap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_gshared)(__this, method);
}
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3Int>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
// UnityEngine.Object UnityEngine.Object::ForceLoadFromInstanceID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6 (int32_t ___0_instanceID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTilesNative(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, void* ___0_positions, int32_t ___1_count, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Tilemaps.TileData>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_gshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_position, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.U2D.SpriteAtlas>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::add_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_add_atlasRegistered_mA46A6A347F25B2E03DB4FD8044B93B4FD8ED50A5 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.U2D.SpriteAtlasManager::remove_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_remove_atlasRegistered_m67E745D3503463E3DB9CC12C157ABB4F469ABE79 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::CreateDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Tilemaps.ITilemap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		bool L_0 = __this->___m_AddToList_2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_2 = __this->___m_RefreshCount_3;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_3 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos_4);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = __this->___m_RefreshCount_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)il2cpp_codegen_multiply(L_6, 2)), NULL);
		NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2((&V_2), L_7, 2, 1, NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_8 = __this->___m_RefreshPos_4;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_9 = V_2;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_10 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos_4);
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_10)->___m_Length_1);
		NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24(L_8, L_9, L_11, NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_12 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos_4);
		NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055(L_12, NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_13 = V_2;
		__this->___m_RefreshPos_4 = L_13;
	}

IL_006d:
	{
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_14 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&__this->___m_RefreshPos_4);
		int32_t L_15 = __this->___m_RefreshCount_3;
		V_3 = L_15;
		int32_t L_16 = V_3;
		__this->___m_RefreshCount_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = ___0_position;
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, (L_14)->___m_Buffer_0, L_17, (L_18));
		goto IL_009b;
	}

IL_008e:
	{
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_19 = __this->___m_Tilemap_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_20 = ___0_position;
		NullCheck(L_19);
		Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF(L_19, L_20, NULL);
	}

IL_009b:
	{
		return;
	}
}
// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ITilemap_CreateInstance_m63D3D1EDDCA86A1F1A116A2205D798AD2BAF3E96 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_0 = NULL;
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*)il2cpp_codegen_object_new(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258(L_0, NULL);
		((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance_0;
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Tilemaps.ITilemap::FindAllRefreshPositions(UnityEngine.Tilemaps.ITilemap,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_FindAllRefreshPositions_m681FAC77C526640B18549097C961C85EA5846CCC (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___0_tilemap, int32_t ___1_count, intptr_t ___2_oldTilesIntPtr, intptr_t ___3_newTilesIntPtr, intptr_t ___4_positionsIntPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_12 = NULL;
	bool V_13 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_14 = NULL;
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = ___0_tilemap;
		NullCheck(L_0);
		L_0->___m_AddToList_2 = (bool)1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___0_tilemap;
		NullCheck(L_1);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_2 = L_1->___m_RefreshPos_4;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_3 = ___0_tilemap;
		NullCheck(L_3);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_4 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_3->___m_RefreshPos_4);
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30(L_4, NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_6 = ___0_tilemap;
		NullCheck(L_6);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_7 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_6->___m_RefreshPos_4);
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_7)->___m_Length_1);
		int32_t L_9 = ___1_count;
		G_B3_0 = ((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_6 = (bool)G_B3_0;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_11 = ___0_tilemap;
		int32_t L_12 = ___1_count;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)16), L_12, NULL);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2((&L_14), L_13, 2, 1, /*hidden argument*/NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___m_RefreshPos_4 = L_14;
	}

IL_0048:
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_15 = ___0_tilemap;
		NullCheck(L_15);
		L_15->___m_RefreshCount_3 = 0;
		void* L_16;
		L_16 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___2_oldTilesIntPtr), NULL);
		V_0 = L_16;
		void* L_17;
		L_17 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___3_newTilesIntPtr), NULL);
		V_1 = L_17;
		void* L_18;
		L_18 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___4_positionsIntPtr), NULL);
		V_2 = L_18;
		void* L_19 = V_0;
		int32_t L_20 = ___1_count;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_21;
		L_21 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_19, L_20, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_21;
		void* L_22 = V_1;
		int32_t L_23 = ___1_count;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_24;
		L_24 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_22, L_23, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_4 = L_24;
		void* L_25 = V_2;
		int32_t L_26 = ___1_count;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_27;
		L_27 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_25, L_26, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_5 = L_27;
		V_7 = 0;
		goto IL_00fe;
	}

IL_0089:
	{
		int32_t L_28 = V_7;
		int32_t L_29;
		L_29 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer_0, L_28);
		V_8 = L_29;
		int32_t L_30 = V_7;
		int32_t L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_4))->___m_Buffer_0, L_30);
		V_9 = L_31;
		int32_t L_32 = V_7;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		L_33 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ((&V_5))->___m_Buffer_0, L_32);
		V_10 = L_33;
		int32_t L_34 = V_8;
		V_11 = (bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_36 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_37;
		L_37 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_36, NULL);
		V_12 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_37, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_38 = V_12;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_39 = V_10;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_40 = ___0_tilemap;
		NullCheck(L_38);
		VirtualActionInvoker2< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* >::Invoke(4 /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */, L_38, L_39, L_40);
	}

IL_00d1:
	{
		int32_t L_41 = V_9;
		V_13 = (bool)((!(((uint32_t)L_41) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_43 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_44;
		L_44 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_43, NULL);
		V_14 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_44, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_45 = V_14;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_46 = V_10;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_47 = ___0_tilemap;
		NullCheck(L_45);
		VirtualActionInvoker2< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* >::Invoke(4 /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */, L_45, L_46, L_47);
	}

IL_00f7:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00fe:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = ___1_count;
		V_15 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_15;
		if (L_51)
		{
			goto IL_0089;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_52 = ___0_tilemap;
		NullCheck(L_52);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_53 = L_52->___m_Tilemap_1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_54 = ___0_tilemap;
		NullCheck(L_54);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_55 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_54->___m_RefreshPos_4);
		void* L_56 = L_55->___m_Buffer_0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_57 = ___0_tilemap;
		NullCheck(L_57);
		int32_t L_58 = L_57->___m_RefreshCount_3;
		NullCheck(L_53);
		Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232(L_53, L_56, L_58, NULL);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_59 = ___0_tilemap;
		NullCheck(L_59);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_60 = (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*)(&L_59->___m_RefreshPos_4);
		NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055(L_60, NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_61 = ___0_tilemap;
		NullCheck(L_61);
		L_61->___m_AddToList_2 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.Tilemaps.ITilemap::GetAllTileData(UnityEngine.Tilemaps.ITilemap,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_GetAllTileData_m3B6CF200F925322F951314FE8336C581A782F804 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___0_tilemap, int32_t ___1_count, intptr_t ___2_tilesIntPtr, intptr_t ___3_positionsIntPtr, intptr_t ___4_outTileDataIntPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	bool V_9 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_10 = NULL;
	bool V_11 = false;
	{
		void* L_0;
		L_0 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___2_tilesIntPtr), NULL);
		V_0 = L_0;
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___3_positionsIntPtr), NULL);
		V_1 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___4_outTileDataIntPtr), NULL);
		V_2 = L_2;
		void* L_3 = V_0;
		int32_t L_4 = ___1_count;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_3, L_4, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_5;
		void* L_6 = V_1;
		int32_t L_7 = ___1_count;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_6, L_7, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_4 = L_8;
		void* L_9 = V_2;
		int32_t L_10 = ___1_count;
		NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C L_11;
		L_11 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C(L_9, L_10, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0090;
	}

IL_003b:
	{
		il2cpp_codegen_runtime_class_init_inline(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_12 = ((TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields*)il2cpp_codegen_static_fields_for(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var))->___Default_6;
		V_7 = L_12;
		int32_t L_13 = V_6;
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer_0, L_13);
		V_8 = L_14;
		int32_t L_15 = V_8;
		V_9 = (bool)((!(((uint32_t)L_15) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_9;
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_17 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_17, NULL);
		V_10 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_18, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_19 = V_10;
		int32_t L_20 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ((&V_4))->___m_Buffer_0, L_20);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_22 = ___0_tilemap;
		NullCheck(L_19);
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_19, L_21, L_22, (&V_7));
	}

IL_007d:
	{
		int32_t L_23 = V_6;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_24 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F, ((&V_5))->___m_Buffer_0, L_23, (L_24));
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0090:
	{
		int32_t L_26 = V_6;
		int32_t L_27 = ___1_count;
		V_11 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_11;
		if (L_28)
		{
			goto IL_003b;
		}
	}
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
// UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Tile_get_sprite_m3324CBA00505C3C95DA57FC3A6F8B0D5FA2EF553 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_sprite_mD9F351775FDFDFFA0FCC40121B4C54D566052D18 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) 
{
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_value;
		__this->___m_Sprite_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Sprite_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Tile_get_color_mD50E790F486A1E64757E9471D48BA42FC9ECCE4C (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_Color_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_color_m9D76C21865CA89F39FF56C112CB13AFD45CD8B69 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_Color_5 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tile_get_transform_mFA119A0C353E4E75C92C8BE829C6BDFA40F17643 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___m_Transform_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_transform_m2E46927D29823DBDC3B7B36E013845006075EB02 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_value;
		__this->___m_Transform_6 = L_0;
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tile_get_gameObject_m8B1B09FD1B6B5A0402D63D3AFF139C6078754077 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_InstancedGameObject_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_gameObject_mD4C82AFCA4B96D44BE5549CFF9E0F36218A4ECE9 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		__this->___m_InstancedGameObject_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstancedGameObject_7), (void*)L_0);
		return;
	}
}
// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_flags_m4AC2E9F8CF43DB83E9F8389EFDF7E6111E5A9806 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Flags_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_flags_mE221D85F2B767EC5C3D473266CB7AABD66674DEA (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Flags_8 = L_0;
		return;
	}
}
// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_colliderType_mDB7A2E3BEF055617F6AC198841938B79C289E967 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_ColliderType_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_colliderType_m21E434F55E4CC8AEB867E7FCF88821EFFC9CEB3F (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ColliderType_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_GetTileData_m187B4A0A655AAB70CC8EC203F78E4777ABB96D4E (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___2_tileData, const RuntimeMethod* method) 
{
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___2_tileData;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___m_Sprite_4;
		TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(L_0, L_1, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_2 = ___2_tileData;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_5;
		TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A(L_2, L_3, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_4 = ___2_tileData;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = __this->___m_Transform_6;
		TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(L_4, L_5, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_6 = ___2_tileData;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___m_InstancedGameObject_7;
		TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09(L_6, L_7, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_8 = ___2_tileData;
		int32_t L_9 = __this->___m_Flags_8;
		TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30(L_8, L_9, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_10 = ___2_tileData;
		int32_t L_11 = __this->___m_ColliderType_9;
		TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(L_10, L_11, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m1680C25E80E5ACCB156133C14199BD5BFE00EA5E (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_Color_5 = L_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_Transform_6 = L_1;
		__this->___m_Flags_8 = 1;
		__this->___m_ColliderType_9 = 1;
		TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2(__this, NULL);
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
// System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_RefreshTile_m7302220B588658247D635871B92DBFF7708E2224 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, const RuntimeMethod* method) 
{
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = ___1_tilemap;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_position;
		NullCheck(L_0);
		ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_GetTileData_m04B3B474F4DBF88997FF29ABA115A2FFB91BAF81 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___2_tileData, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileBase_GetTileDataNoRef_m657510B6853906E397D8FC7E6F1A8B2DC4B34397 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, const RuntimeMethod* method) 
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___1_tilemap;
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, __this, L_0, L_1, (&V_0));
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_2 = V_0;
		V_1 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileBase_GetTileAnimationData_m8E1C84B8BC0B38E978ECEE6C7AD50D7D8BF810FE (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* ___2_tileAnimationData, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 TileBase_GetTileAnimationDataNoRef_m061D2FB92E28E5C2379385827F78C22719287D97 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, const RuntimeMethod* method) 
{
	TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___1_tilemap;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* >::Invoke(6 /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */, __this, L_0, L_1, (&V_0));
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::GetTileAnimationDataRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_GetTileAnimationDataRef_m10D856F55369986224F166E8EEF5633EB8EBA5C3 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* ___2_tileAnimationData, bool* ___3_hasAnimation, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___3_hasAnimation;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = ___1_tilemap;
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* L_3 = ___2_tileAnimationData;
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* >::Invoke(6 /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */, __this, L_1, L_2, L_3);
		*((int8_t*)L_0) = (int8_t)L_4;
		return;
	}
}
// System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileBase_StartUp_mBAF37DBB4DCC7BDB384352D93AB609CEB0E2E78B (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::StartUpRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_StartUpRef_mB00DB38868F87645811DE4784F57278388FAEEF9 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___1_tilemap, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, bool* ___3_startUpInvokedByUser, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___3_startUpInvokedByUser;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_position;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = ___1_tilemap;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___2_go;
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(7 /* System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */, __this, L_1, L_2, L_3);
		*((int8_t*)L_0) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_position, const RuntimeMethod* method) 
{
	{
		Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69(__this, (&___0_position), NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTilesNative(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, void* ___0_positions, int32_t ___1_count, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, void*, int32_t);
	static Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshTilesNative(System.Void*,System.Int32)");
	_il2cpp_icall_func(__this, ___0_positions, ___1_count);
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_position, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___0_position);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_RegisterSpriteAtlasRegistered_m5D7676A05B0B16ABCCF4CEE57BA9E28FA4D171BC (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_0, __this, (intptr_t)((void*)TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var), NULL);
		SpriteAtlasManager_add_atlasRegistered_mA46A6A347F25B2E03DB4FD8044B93B4FD8ED50A5(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_UnregisterSpriteAtlasRegistered_mFE33C972CF738A50A631203D0DD7E325AADFCB08 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_0, __this, (intptr_t)((void*)TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var), NULL);
		SpriteAtlasManager_remove_atlasRegistered_m67E745D3503463E3DB9CC12C157ABB4F469ABE79(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___0_atlas, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*);
	static TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas)");
	_il2cpp_icall_func(__this, ___0_atlas);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B2_0 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B3_1 = NULL;
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_Sprite_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94_AdjustorThunk (RuntimeObject* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___m_Color_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_value;
		__this->___m_Transform_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F_AdjustorThunk (RuntimeObject* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B2_0 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B3_1 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_value;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_GameObject_3 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09_AdjustorThunk (RuntimeObject* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_Flags_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___m_ColliderType_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(_thisAdjusted, ___0_value, method);
}
// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::CreateDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D (const RuntimeMethod* method) 
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A((&V_0), L_0, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F((&V_0), L_1, NULL);
		TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30((&V_0), 0, NULL);
		TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96((&V_0), 0, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_2 = V_0;
		V_1 = L_2;
		goto IL_0039;
	}

IL_0039:
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Tilemaps.TileData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData__cctor_mE2F5A802075C68DE978E46092DC8BF465182934A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_0;
		L_0 = TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D(NULL);
		((TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields*)il2cpp_codegen_static_fields_for(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var))->___Default_6 = L_0;
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
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_back(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_cleanup(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com_back(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com_cleanup(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
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
