#pragma once

#include "codegen/il2cpp-codegen-il2cpp.h"

#include "InterpreterDefs.h"

namespace hybridclr
{
namespace interpreter
{

	IL2CPP_FORCE_INLINE void RuntimeInitClassCCtor(Il2CppClass* klass)
	{
		il2cpp::vm::ClassInlines::InitFromCodegen(klass);
		if (!IS_CCTOR_FINISH_OR_NO_CCTOR(klass))
		{
			il2cpp_codegen_runtime_class_init(klass);
		}
	}

	IL2CPP_FORCE_INLINE void RuntimeInitClassCCtor(const MethodInfo* method)
	{
		RuntimeInitClassCCtor(method->klass);
	}

	IL2CPP_FORCE_INLINE void RuntimeInitClassCCtorWithoutInitClass(Il2CppClass* klass)
	{
		if (!IS_CCTOR_FINISH_OR_NO_CCTOR(klass))
		{
			il2cpp_codegen_runtime_class_init(klass);
		}
	}

	IL2CPP_FORCE_INLINE void RuntimeInitClassCCtorWithoutInitClass(const MethodInfo* method)
	{
		RuntimeInitClassCCtorWithoutInitClass(method->klass);
	}

	inline bool IsNeedExpandLocationType(LocationDataType type)
	{
		return type < LocationDataType::U8;
	}

	ArgDesc GetTypeArgDesc(const Il2CppType* type);

	inline LocationDataType GetLocationDataTypeByType(const Il2CppType* type)
	{
		return GetTypeArgDesc(type).type;
	}

	inline void ExpandLocationData2StackDataByType(void* retValue, LocationDataType type)
	{
		switch (type)
		{
		case hybridclr::interpreter::LocationDataType::I1:
			*(int32_t*)retValue = *(int8_t*)retValue;
			break;
		case hybridclr::interpreter::LocationDataType::U1:
			*(int32_t*)retValue = *(uint8_t*)retValue;
			break;
		case hybridclr::interpreter::LocationDataType::I2:
			*(int32_t*)retValue = *(int16_t*)retValue;
			break;
		case hybridclr::interpreter::LocationDataType::U2:
			*(int32_t*)retValue = *(uint16_t*)retValue;
			break;
		default:
			break;
		}
	}

	inline void CopyLocationData2StackDataByType(StackObject* dst, StackObject* src, LocationDataType type)
	{
		switch (type)
		{
		case hybridclr::interpreter::LocationDataType::I1:
			*(int32_t*)dst = *(int8_t*)src;
			break;
		case hybridclr::interpreter::LocationDataType::U1:
			*(int32_t*)dst = *(uint8_t*)src;
			break;
		case hybridclr::interpreter::LocationDataType::I2:
			*(int32_t*)dst = *(int16_t*)src;
			break;
		case hybridclr::interpreter::LocationDataType::U2:
			*(int32_t*)dst = *(uint16_t*)src;
			break;
		default:
			*dst = *src;
			break;
		}
	}

	ArgDesc GetValueTypeArgDescBySize(uint32_t size);

	inline bool IsSimpleStackObjectCopyArg(LocationDataType type)
	{
		return type <= LocationDataType::U8;
	}
	Il2CppObject* TranslateNativeValueToBoxValue(const Il2CppType* type, void* value);

}
}
