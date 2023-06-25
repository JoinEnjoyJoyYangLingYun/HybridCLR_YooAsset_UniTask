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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>
struct Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniFramework.Machine.IStateNode>
struct KeyCollection_t7446DA214EEDCDDD78E10637213F84B424A55722;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniFramework.Machine.IStateNode>
struct ValueCollection_t848A2506AA911BE8EA02107EA009498E02C0F9E4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniFramework.Machine.IStateNode>[]
struct EntryU5BU5D_tE4669E93BA28AB820A91B0A7CAFFC2EA32445190;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UniFramework.Machine.IStateNode
struct IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UniFramework.Machine.StateMachine
struct StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17;
IL2CPP_EXTERN_C String_t* _stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98;
IL2CPP_EXTERN_C String_t* _stringLiteralEF2F1849B5D7CE6EB4F6B3EC5A3CDFC34AEC955B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m38C3DCA25DF7B2EE14F94572C6A98108CAADFEA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3FB3EA89662E56871D68F14C4978267C88B0518D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB8313544D5542D2D2F994090905B8A397FE0A463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_AddNode_m45D05458E13FFEBD2789B9F4E557F967951D78E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_ChangeState_m62DE49311ADABBCDBAF8EB4B96657576368C21EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StateMachine_Run_m133C15833904C92AE963ACBBE0AEF453DDCBEED3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA098C8D74F8E403F407713131E6F6956B186262A 
{
};

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>
struct Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE4669E93BA28AB820A91B0A7CAFFC2EA32445190* ____entries_1;
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
	KeyCollection_t7446DA214EEDCDDD78E10637213F84B424A55722* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t848A2506AA911BE8EA02107EA009498E02C0F9E4* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UniFramework.Machine.StateMachine
struct StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode> UniFramework.Machine.StateMachine::_nodes
	Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* ____nodes_0;
	// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::_curNode
	RuntimeObject* ____curNode_1;
	// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::_preNode
	RuntimeObject* ____preNode_2;
	// System.Object UniFramework.Machine.StateMachine::<Owner>k__BackingField
	RuntimeObject* ___U3COwnerU3Ek__BackingField_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UniFramework.Machine.UniLogger
struct UniLogger_t08B796EEBB67AD9A8DBF4913D940BFB99A85FAD0  : public RuntimeObject
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>

// System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>

// UniFramework.Machine.StateMachine

// UniFramework.Machine.StateMachine

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UniFramework.Machine.UniLogger

// UniFramework.Machine.UniLogger

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTask

// System.Void

// System.Void

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

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

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;

// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693 (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mF225F49F6BE54C39563CECD7C693F0AE4F0530E8_gshared)(__this, ___0_capacity, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::set_Owner(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachine_set_Owner_mDAE8EE7AB5BE3B2D6FE1755C9C79CC431561C316_inline (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::Run(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m133C15833904C92AE963ACBBE0AEF453DDCBEED3 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, String_t* ___0_entryNode, const RuntimeMethod* method) ;
// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::TryGetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_TryGetNode_mE559CD63A7B23C07D6CAF7D27BEBE66ED216B4D0 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, String_t* ___0_nodeName, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3FB3EA89662E56871D68F14C4978267C88B0518D (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::Add(TKey,TValue)
inline void Dictionary_2_Add_m38C3DCA25DF7B2EE14F94572C6A98108CAADFEA5 (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UniFramework.Machine.UniLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Error_mDE47C13D69BF7D8D4B8A66A962653C797C63A975 (String_t* ___0_info, const RuntimeMethod* method) ;
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_m62DE49311ADABBCDBAF8EB4B96657576368C21EB (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, String_t* ___0_nodeName, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniFramework.Machine.IStateNode>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB8313544D5542D2D2F994090905B8A397FE0A463 (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* __this, String_t* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491*, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
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
// System.Void UniFramework.Machine.StateMachine::set_Owner(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_set_Owner_mDAE8EE7AB5BE3B2D6FE1755C9C79CC431561C316 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3COwnerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object UniFramework.Machine.StateMachine::get_Owner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_get_Owner_m49E4A33B3B6AAD014D9C1D295DB805A7F5B7FC01 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = __this->___U3COwnerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String UniFramework.Machine.StateMachine::get_CurrentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateMachine_get_CurrentNode_m6CB25CAA3215C7793482228A23FE8669CF3E4B46 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _curNode != null ? _curNode.GetType().FullName : string.Empty; }
		RuntimeObject* L_0 = __this->____curNode_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____curNode_1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, L_3);
		return L_4;
	}
}
// System.String UniFramework.Machine.StateMachine::get_PreviousNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StateMachine_get_PreviousNode_m9E3A042D06D99B0E58B6C61B475672871FF2D3B2 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _preNode != null ? _preNode.GetType().FullName : string.Empty; }
		RuntimeObject* L_0 = __this->____preNode_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		RuntimeObject* L_2 = __this->____preNode_2;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, L_3);
		return L_4;
	}
}
// System.Void UniFramework.Machine.StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_m2D93BAFBFD22CD4CDDBC50BAED152913618E342D (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, IStateNode> _nodes = new Dictionary<string, IStateNode>(100);
		Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* L_0 = (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491*)il2cpp_codegen_object_new(Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693(L_0, ((int32_t)100), Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693_RuntimeMethod_var);
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		// private StateMachine() { }
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private StateMachine() { }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine__ctor_m8CA8B8EF27230E0CFAF3D1C99872F8EC5BCE3156 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, RuntimeObject* ___0_owner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, IStateNode> _nodes = new Dictionary<string, IStateNode>(100);
		Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* L_0 = (Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491*)il2cpp_codegen_object_new(Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693(L_0, ((int32_t)100), Dictionary_2__ctor_m3CA523E16A4B832DACE9E6A9D2F8D7D9C9B3B693_RuntimeMethod_var);
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		// public StateMachine(System.Object owner)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Owner = owner;
		RuntimeObject* L_1 = ___0_owner;
		StateMachine_set_Owner_mDAE8EE7AB5BE3B2D6FE1755C9C79CC431561C316_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Update_mB79A151493EFB3619B3A2F25A894798EAD1D5F2D (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_curNode != null)
		RuntimeObject* L_0 = __this->____curNode_1;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _curNode.OnUpdate();
		RuntimeObject* L_1 = __this->____curNode_1;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(2 /* Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnUpdate() */, IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var, L_1);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Run(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_mB4A68B1717C52940D30CBC9F0DADFA3436434DE1 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, Type_t* ___0_entryNode, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var nodeName = entryNode.FullName;
		Type_t* L_0 = ___0_entryNode;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, L_0);
		V_0 = L_1;
		// Run(nodeName);
		String_t* L_2 = V_0;
		StateMachine_Run_m133C15833904C92AE963ACBBE0AEF453DDCBEED3(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::Run(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_Run_m133C15833904C92AE963ACBBE0AEF453DDCBEED3 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, String_t* ___0_entryNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _curNode = TryGetNode(entryNode);
		String_t* L_0 = ___0_entryNode;
		RuntimeObject* L_1;
		L_1 = StateMachine_TryGetNode_mE559CD63A7B23C07D6CAF7D27BEBE66ED216B4D0(__this, L_0, NULL);
		__this->____curNode_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curNode_1), (void*)L_1);
		// _preNode = _curNode;
		RuntimeObject* L_2 = __this->____curNode_1;
		__this->____preNode_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preNode_2), (void*)L_2);
		// if (_curNode == null)
		RuntimeObject* L_3 = __this->____curNode_1;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception($"Not found entry node: {entryNode }");
		String_t* L_4 = ___0_entryNode;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF2F1849B5D7CE6EB4F6B3EC5A3CDFC34AEC955B)), L_4, NULL);
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_Run_m133C15833904C92AE963ACBBE0AEF453DDCBEED3_RuntimeMethod_var)));
	}

IL_0032:
	{
		// _curNode.OnEnter();
		RuntimeObject* L_7 = __this->____curNode_1;
		NullCheck(L_7);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_8;
		L_8 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnEnter() */, IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var, L_7);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::AddNode(UniFramework.Machine.IStateNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_AddNode_m45D05458E13FFEBD2789B9F4E557F967951D78E2 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, RuntimeObject* ___0_stateNode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m38C3DCA25DF7B2EE14F94572C6A98108CAADFEA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3FB3EA89662E56871D68F14C4978267C88B0518D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (stateNode == null)
		RuntimeObject* L_0 = ___0_stateNode;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_AddNode_m45D05458E13FFEBD2789B9F4E557F967951D78E2_RuntimeMethod_var)));
	}

IL_0009:
	{
		// var nodeType = stateNode.GetType();
		RuntimeObject* L_2 = ___0_stateNode;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		// var nodeName = nodeType.FullName;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, L_3);
		V_0 = L_4;
		// if (_nodes.ContainsKey(nodeName) == false)
		Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* L_5 = __this->____nodes_0;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m3FB3EA89662E56871D68F14C4978267C88B0518D(L_5, L_6, Dictionary_2_ContainsKey_m3FB3EA89662E56871D68F14C4978267C88B0518D_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		// stateNode.OnCreate(this);
		RuntimeObject* L_8 = ___0_stateNode;
		NullCheck(L_8);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_9;
		L_9 = InterfaceFuncInvoker1< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270, StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnCreate(UniFramework.Machine.StateMachine) */, IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var, L_8, __this);
		// _nodes.Add(nodeName, stateNode);
		Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* L_10 = __this->____nodes_0;
		String_t* L_11 = V_0;
		RuntimeObject* L_12 = ___0_stateNode;
		NullCheck(L_10);
		Dictionary_2_Add_m38C3DCA25DF7B2EE14F94572C6A98108CAADFEA5(L_10, L_11, L_12, Dictionary_2_Add_m38C3DCA25DF7B2EE14F94572C6A98108CAADFEA5_RuntimeMethod_var);
		return;
	}

IL_0039:
	{
		// UniLogger.Error($"State node already existed : {nodeName}");
		String_t* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1763AF784DFA180734BCF2EEE1C8509BEF694D17, L_13, NULL);
		UniLogger_Error_mDE47C13D69BF7D8D4B8A66A962653C797C63A975(L_14, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_mAAB5B4FE9C454ACEE0FF74E04323A5C11BF614C8 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, Type_t* ___0_nodeType, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var nodeName = nodeType.FullName;
		Type_t* L_0 = ___0_nodeType;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(34 /* System.String System.Type::get_FullName() */, L_0);
		V_0 = L_1;
		// ChangeState(nodeName);
		String_t* L_2 = V_0;
		StateMachine_ChangeState_m62DE49311ADABBCDBAF8EB4B96657576368C21EB(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.StateMachine::ChangeState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachine_ChangeState_m62DE49311ADABBCDBAF8EB4B96657576368C21EB (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, String_t* ___0_nodeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (string.IsNullOrEmpty(nodeName))
		String_t* L_0 = ___0_nodeName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException();
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StateMachine_ChangeState_m62DE49311ADABBCDBAF8EB4B96657576368C21EB_RuntimeMethod_var)));
	}

IL_000e:
	{
		// IStateNode node = TryGetNode(nodeName);
		String_t* L_3 = ___0_nodeName;
		RuntimeObject* L_4;
		L_4 = StateMachine_TryGetNode_mE559CD63A7B23C07D6CAF7D27BEBE66ED216B4D0(__this, L_3, NULL);
		V_0 = L_4;
		// if (node == null)
		RuntimeObject* L_5 = V_0;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// UniLogger.Error($"Can not found state node : {nodeName}");
		String_t* L_6 = ___0_nodeName;
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral69CFE45B6CFF55DDCB69FDECB194F9C42DAE4E98, L_6, NULL);
		UniLogger_Error_mDE47C13D69BF7D8D4B8A66A962653C797C63A975(L_7, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// _preNode = _curNode;
		RuntimeObject* L_8 = __this->____curNode_1;
		__this->____preNode_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preNode_2), (void*)L_8);
		// _curNode.OnExit();
		RuntimeObject* L_9 = __this->____curNode_1;
		NullCheck(L_9);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_10;
		L_10 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(3 /* Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnExit() */, IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var, L_9);
		// _curNode = node;
		RuntimeObject* L_11 = V_0;
		__this->____curNode_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____curNode_1), (void*)L_11);
		// _curNode.OnEnter();
		RuntimeObject* L_12 = __this->____curNode_1;
		NullCheck(L_12);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_13;
		L_13 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnEnter() */, IStateNode_t6E199D177A02EA546F611986BE5CFC526F8AB23E_il2cpp_TypeInfo_var, L_12);
		// }
		return;
	}
}
// UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::TryGetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateMachine_TryGetNode_mE559CD63A7B23C07D6CAF7D27BEBE66ED216B4D0 (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, String_t* ___0_nodeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB8313544D5542D2D2F994090905B8A397FE0A463_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// _nodes.TryGetValue(nodeName, out IStateNode result);
		Dictionary_2_tEA0C399A84EC1CB005352B0559B2A29A8917F491* L_0 = __this->____nodes_0;
		String_t* L_1 = ___0_nodeName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mB8313544D5542D2D2F994090905B8A397FE0A463(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mB8313544D5542D2D2F994090905B8A397FE0A463_RuntimeMethod_var);
		// return result;
		RuntimeObject* L_3 = V_0;
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
// System.Void UniFramework.Machine.UniLogger::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Log_mD05349C36E68D353D1AAC518BE7BBD5862BA8B8D (String_t* ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.Log(info);
		String_t* L_0 = ___0_info;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.UniLogger::Warning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Warning_m73AC00811B49F98A238C94C98BB26E0D66E77C1B (String_t* ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogWarning(info);
		String_t* L_0 = ___0_info;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_0, NULL);
		// }
		return;
	}
}
// System.Void UniFramework.Machine.UniLogger::Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniLogger_Error_mDE47C13D69BF7D8D4B8A66A962653C797C63A975 (String_t* ___0_info, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Debug.LogError(info);
		String_t* L_0 = ___0_info;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_0, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StateMachine_set_Owner_mDAE8EE7AB5BE3B2D6FE1755C9C79CC431561C316_inline (StateMachine_t48362F901B000A1CCA8FCA41BC063172F2426D9C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public System.Object Owner { private set; get; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3COwnerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COwnerU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
