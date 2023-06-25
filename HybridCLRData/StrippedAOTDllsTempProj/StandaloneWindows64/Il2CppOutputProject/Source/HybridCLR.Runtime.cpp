#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// HybridCLR.ReversePInvokeWrapperGenerationAttribute
struct ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB;


struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD0DFB154750CEF95F40DFD18F49DF0881C0A7176 
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// HybridCLR.RuntimeApi
struct RuntimeApi_tA19E50636DDDC4D8EA30DEC54EE4DFD73CAE62D2  : public RuntimeObject
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// HybridCLR.ReversePInvokeWrapperGenerationAttribute
struct ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 HybridCLR.ReversePInvokeWrapperGenerationAttribute::<ReserveWrapperCount>k__BackingField
	int32_t ___U3CReserveWrapperCountU3Ek__BackingField_0;
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

// <Module>

// <Module>

// System.Attribute

// System.Attribute

// HybridCLR.RuntimeApi

// HybridCLR.RuntimeApi

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// HybridCLR.ReversePInvokeWrapperGenerationAttribute

// HybridCLR.ReversePInvokeWrapperGenerationAttribute

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Int32 HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_m6ED4725E4C774891EF9403AD0ADC6B081164EF4F (uint8_t* ___0_dllBytes, int32_t ___1_dllSize, int32_t ___2_mode, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RuntimeApi_LoadMetadataForAOTAssembly(uint8_t*, int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RuntimeApi_GetInterpreterThreadObjectStackSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RuntimeApi_SetInterpreterThreadObjectStackSize(int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RuntimeApi_GetInterpreterThreadFrameStackSize();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL RuntimeApi_SetInterpreterThreadFrameStackSize(int32_t);
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
// System.Int32 HybridCLR.ReversePInvokeWrapperGenerationAttribute::get_ReserveWrapperCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReversePInvokeWrapperGenerationAttribute_get_ReserveWrapperCount_m39F675FA90E65D8E9F8550796F774133E33A7967 (ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB* __this, const RuntimeMethod* method) 
{
	{
		// public int ReserveWrapperCount { get; }
		int32_t L_0 = __this->___U3CReserveWrapperCountU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void HybridCLR.ReversePInvokeWrapperGenerationAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReversePInvokeWrapperGenerationAttribute__ctor_mF2B8EE86D31188FEDB364935852C113DF7BBA68D (ReversePInvokeWrapperGenerationAttribute_t884C403F2A4DFDA5B53C5142028EA7FFB6F295AB* __this, int32_t ___0_reserveWrapperCount, const RuntimeMethod* method) 
{
	{
		// public ReversePInvokeWrapperGenerationAttribute(int reserveWrapperCount)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// ReserveWrapperCount = reserveWrapperCount;
		int32_t L_0 = ___0_reserveWrapperCount;
		__this->___U3CReserveWrapperCountU3Ek__BackingField_0 = L_0;
		// }
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
// HybridCLR.LoadImageErrorCode HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte[],HybridCLR.HomologousImageMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_mE1E398132DBF86D7DE042300E1EE6AC37B7649D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_dllBytes, int32_t ___1_mode, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// fixed(byte* data = dllBytes)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_dllBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (uint8_t*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		// return (LoadImageErrorCode)LoadMetadataForAOTAssembly(data, dllBytes.Length, (int)mode);
		uint8_t* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_dllBytes;
		NullCheck(L_5);
		int32_t L_6 = ___1_mode;
		int32_t L_7;
		L_7 = RuntimeApi_LoadMetadataForAOTAssembly_m6ED4725E4C774891EF9403AD0ADC6B081164EF4F(L_4, ((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6, NULL);
		return (int32_t)(L_7);
	}
}
// System.Int32 HybridCLR.RuntimeApi::LoadMetadataForAOTAssembly(System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_LoadMetadataForAOTAssembly_m6ED4725E4C774891EF9403AD0ADC6B081164EF4F (uint8_t* ___0_dllBytes, int32_t ___1_dllSize, int32_t ___2_mode, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint8_t*, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint8_t*) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_LoadMetadataForAOTAssembly", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RuntimeApi_LoadMetadataForAOTAssembly)(___0_dllBytes, ___1_dllSize, ___2_mode);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___0_dllBytes, ___1_dllSize, ___2_mode);
	#endif

	return returnValue;
}
// System.Int32 HybridCLR.RuntimeApi::GetInterpreterThreadObjectStackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetInterpreterThreadObjectStackSize_m14F7A9B2189031E90AF86604ED7C1A51206BE13B (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_GetInterpreterThreadObjectStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RuntimeApi_GetInterpreterThreadObjectStackSize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void HybridCLR.RuntimeApi::SetInterpreterThreadObjectStackSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetInterpreterThreadObjectStackSize_m979FCC41260D4408BB9DFA200A9C0A2F9010C2C5 (int32_t ___0_size, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_SetInterpreterThreadObjectStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	reinterpret_cast<PInvokeFunc>(RuntimeApi_SetInterpreterThreadObjectStackSize)(___0_size);
	#else
	il2cppPInvokeFunc(___0_size);
	#endif

}
// System.Int32 HybridCLR.RuntimeApi::GetInterpreterThreadFrameStackSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeApi_GetInterpreterThreadFrameStackSize_m455CC0C9D87B847CAEB778E9A0E1588D9506F1D4 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_GetInterpreterThreadFrameStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RuntimeApi_GetInterpreterThreadFrameStackSize)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Void HybridCLR.RuntimeApi::SetInterpreterThreadFrameStackSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeApi_SetInterpreterThreadFrameStackSize_mFAF106800174ED6F6BC7FA25832081B21A4CAD97 (int32_t ___0_size, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_GameAssembly_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("GameAssembly"), "RuntimeApi_SetInterpreterThreadFrameStackSize", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_GameAssembly_INTERNAL
	reinterpret_cast<PInvokeFunc>(RuntimeApi_SetInterpreterThreadFrameStackSize)(___0_size);
	#else
	il2cppPInvokeFunc(___0_size);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
