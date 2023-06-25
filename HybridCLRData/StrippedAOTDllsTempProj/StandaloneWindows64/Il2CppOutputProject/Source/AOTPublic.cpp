#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Byte[]>
struct IStateMachineRunnerPromise_1_t28DB56A59D7B08F313CFD668BAD55049F098EC19;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>
struct IStateMachineRunnerPromise_1_tDE5A582A56CD943C240DEE90935B51C23578A18B;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Byte[]>
struct IUniTaskSource_1_t035AD3D32FDF620415DD15FB63224FA4E49AD786;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_tDC639FD163E4613AFE1D3F2749CA5B177DC702F5;
// Cysharp.Threading.Tasks.IUniTaskSource`1<UnityEngine.Networking.UnityWebRequest>
struct IUniTaskSource_1_t17108CF297CAFF57D1879E0847B46FD7DBE5C640;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Exception
struct Exception_t;
// HttpHelper
struct HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// PublicData
struct PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSourceExtensions_tB006EB622CCA90EB9FE048B0367D9DEEEBF2634A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral66D6E1E33113FFF3538DBE5D75C9F4FC0E1782CB;
IL2CPP_EXTERN_C String_t* _stringLiteral7183E9F4930D5AE6C743F3B7C494261926C3A343;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD159C3D7F4D6D6F5C894061300DC61F9604327;
IL2CPP_EXTERN_C String_t* _stringLiteralA189B1265BA35069EB12F6B26E42A341F94C1C7A;
IL2CPP_EXTERN_C String_t* _stringLiteralA81D78AA1DD2B29EE4675818FCFC423AA98B404A;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_mE14589D0C56FA8CD06B9AC87D32BB79ADC793D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_mE03715D654CDCFE92E874E5EBD043643661FEB5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m6DACC5B196FFA0580F2F83E4A8BEDF75F78CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mFCBC6CA000A16437D97B31DB75769FD560F3EA10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_mEEF2DD5708BDB48F822034EAB2325133169359C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m9996B509EE05610C833E8E7F5A791B7C38744572_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9B3CC866998A4CCD271131110C9983C4BB147098 
{
};

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
{
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

// HttpHelper
struct HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5  : public RuntimeObject
{
};

// PublicData
struct PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E  : public RuntimeObject
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

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>
struct AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___result_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>
struct AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	RuntimeObject* ___result_2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Byte[]>
struct UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<UnityEngine.Networking.UnityWebRequest>
struct UniTask_1_tDD90D8F672EE93370E006E57605DC306EE2ED82F 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.Networking.UnityWebRequest>
struct Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tDD90D8F672EE93370E006E57605DC306EE2ED82F ___task_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// HttpHelper/<Request>d__1
struct U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79 
{
	// System.Int32 HttpHelper/<Request>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]> HttpHelper/<Request>d__1::<>t__builder
	AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 ___U3CU3Et__builder_1;
	// System.String HttpHelper/<Request>d__1::path
	String_t* ___path_2;
	// UnityEngine.Networking.UnityWebRequest HttpHelper/<Request>d__1::<request>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CrequestU3E5__2_3;
	// System.Threading.CancellationTokenSource HttpHelper/<Request>d__1::<cts>5__3
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___U3CctsU3E5__3_4;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.Networking.UnityWebRequest> HttpHelper/<Request>d__1::<>u__1
	Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D ___U3CU3Eu__1_5;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// <Module>

// <Module>

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// Cysharp.Threading.Tasks.AwaiterActions

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// System.Threading.CancellationTokenSource

// HttpHelper
struct HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5_StaticFields
{
	// System.String HttpHelper::HttpHost
	String_t* ___HttpHost_0;
};

// HttpHelper

// PublicData
struct PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_StaticFields
{
	// System.String PublicData::Version
	String_t* ___Version_0;
	// System.String PublicData::PackageName
	String_t* ___PackageName_1;
};

// PublicData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>

// Cysharp.Threading.Tasks.UniTask`1<System.Byte[]>

// Cysharp.Threading.Tasks.UniTask`1<System.Byte[]>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// Cysharp.Threading.Tasks.UniTask`1<UnityEngine.Networking.UnityWebRequest>

// Cysharp.Threading.Tasks.UniTask`1<UnityEngine.Networking.UnityWebRequest>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.Networking.UnityWebRequest>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.Networking.UnityWebRequest>

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// HttpHelper/<Request>d__1

// HttpHelper/<Request>d__1

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action

// System.Action

// System.OperationCanceledException

// System.OperationCanceledException
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


// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF AsyncUniTaskMethodBuilder_1_Create_m52C639DF67F73453007FA68B265675DECDD5BFF3_gshared_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::Start<HttpHelper/<Request>d__1>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m97AC68BC7E405AFC4A22B0AD9589B9219055E521_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>,HttpHelper/<Request>d__1>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m36004DB297AB0CAA640B0E90AB0DB587F46F952C_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___0_awaiter, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* ___1_stateMachine, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetResult(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetStateMachine_m8A43AF59E5FC7FC4CA56454D17EC7F00FDD57916_gshared (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::Create()
inline AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 AsyncUniTaskMethodBuilder_1_Create_mE03715D654CDCFE92E874E5EBD043643661FEB5E_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_m52C639DF67F73453007FA68B265675DECDD5BFF3_gshared_inline)(method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::Start<HttpHelper/<Request>d__1>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m6DACC5B196FFA0580F2F83E4A8BEDF75F78CFC50_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m97AC68BC7E405AFC4A22B0AD9589B9219055E521_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::get_Task()
inline UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mBCA80EFFB8AF50480F0093BC8CB34EDB4337A5FB (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F (double ___0_value, const RuntimeMethod* method) ;
// System.IDisposable Cysharp.Threading.Tasks.CancellationTokenSourceExtensions::CancelAfterSlim(System.Threading.CancellationTokenSource,System.TimeSpan,Cysharp.Threading.Tasks.DelayType,Cysharp.Threading.Tasks.PlayerLoopTiming)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CancellationTokenSourceExtensions_CancelAfterSlim_m7FCDA5FA59E973A1754BEFF206736E10BBD58663 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___0_cts, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_delayTimeSpan, int32_t ___2_delayType, int32_t ___3_delayTiming, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4 (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<UnityEngine.Networking.UnityWebRequest> Cysharp.Threading.Tasks.UnityAsyncExtensions::WithCancellation(UnityEngine.Networking.UnityWebRequestAsyncOperation,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDD90D8F672EE93370E006E57605DC306EE2ED82F UnityAsyncExtensions_WithCancellation_m64371919D7F4428DF8B06230F745FAAE766A405D (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* ___0_asyncOperation, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<UnityEngine.Networking.UnityWebRequest>::GetAwaiter()
inline Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D UniTask_1_GetAwaiter_m9996B509EE05610C833E8E7F5A791B7C38744572_inline (UniTask_1_tDD90D8F672EE93370E006E57605DC306EE2ED82F* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D (*) (UniTask_1_tDD90D8F672EE93370E006E57605DC306EE2ED82F*, const RuntimeMethod*))UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.Networking.UnityWebRequest>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_mEEF2DD5708BDB48F822034EAB2325133169359C2_inline (Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D*, const RuntimeMethod*))Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.Networking.UnityWebRequest>,HttpHelper/<Request>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_mE14589D0C56FA8CD06B9AC87D32BB79ADC793D10_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D* ___0_awaiter, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D*, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m36004DB297AB0CAA640B0E90AB0DB587F46F952C_gshared_inline)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<UnityEngine.Networking.UnityWebRequest>::GetResult()
inline UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* Awaiter_GetResult_mFCBC6CA000A16437D97B31DB75769FD560F3EA10_inline (Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D* __this, const RuntimeMethod* method)
{
	return ((  UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* (*) (Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D*, const RuntimeMethod*))Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline)(__this, method);
}
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::op_Equality(System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_op_Equality_mE6D5B49C5476274AD7729F0EED838A77535E961D (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_left, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_right, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline)(__this, ___0_exception, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::SetResult(T)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_inline (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline)(__this, ___0_result, method);
}
// System.Void HttpHelper/<Request>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__1_MoveNext_m6EBED45DA5474A91C3B2FCE1E2EF29A551F7B5ED (U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Byte[]>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5 (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_m8A43AF59E5FC7FC4CA56454D17EC7F00FDD57916_gshared)(__this, ___0_stateMachine, method);
}
// System.Void HttpHelper/<Request>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__1_SetStateMachine_m1F58DCD8E718A00F139BE80D7F6E084C7FA7505B (U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline)(__this, ___0_task, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*, const RuntimeMethod*))UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_gshared_inline)(__this, ___0_continuation, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
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
// Cysharp.Threading.Tasks.UniTask`1<System.Byte[]> HttpHelper::Request(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E HttpHelper_Request_mCECE008B8599D7D14464C25F0163712160BB6AF9 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_mE03715D654CDCFE92E874E5EBD043643661FEB5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m6DACC5B196FFA0580F2F83E4A8BEDF75F78CFC50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_mE03715D654CDCFE92E874E5EBD043643661FEB5E_inline(AsyncUniTaskMethodBuilder_1_Create_mE03715D654CDCFE92E874E5EBD043643661FEB5E_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___result_2), (void*)NULL);
		#endif
		String_t* L_1 = ___0_path;
		(&V_0)->___path_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___path_2), (void*)L_1);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_2 = (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m6DACC5B196FFA0580F2F83E4A8BEDF75F78CFC50_inline(L_2, (&V_0), AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m6DACC5B196FFA0580F2F83E4A8BEDF75F78CFC50_RuntimeMethod_var);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_3 = (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_1_tBDB8A014EEEDD8F396F2243ECDB8E6F90292D05E L_4;
		L_4 = AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_inline(L_3, AsyncUniTaskMethodBuilder_1_get_Task_m140F8BCA30A696421CF8CD36AE7A43379E4C910A_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void HttpHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpHelper__ctor_mDE6EA349285B969C3CD33114BE47F58A8F2411A1 (HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void HttpHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpHelper__cctor_m6C98659C970A793E4F6271BE125C98F55227FF70 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7183E9F4930D5AE6C743F3B7C494261926C3A343);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string HttpHost = "http://192.168.0.107:8888/";
		((HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5_StaticFields*)il2cpp_codegen_static_fields_for(HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5_il2cpp_TypeInfo_var))->___HttpHost_0 = _stringLiteral7183E9F4930D5AE6C743F3B7C494261926C3A343;
		Il2CppCodeGenWriteBarrier((void**)(&((HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5_StaticFields*)il2cpp_codegen_static_fields_for(HttpHelper_tD878F4AD68BF5BA8B61A42D29606B2D90EE610F5_il2cpp_TypeInfo_var))->___HttpHost_0), (void*)_stringLiteral7183E9F4930D5AE6C743F3B7C494261926C3A343);
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
// System.Void HttpHelper/<Request>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__1_MoveNext_m6EBED45DA5474A91C3B2FCE1E2EF29A551F7B5ED (U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_mE14589D0C56FA8CD06B9AC87D32BB79ADC793D10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mFCBC6CA000A16437D97B31DB75769FD560F3EA10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_mEEF2DD5708BDB48F822034EAB2325133169359C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSourceExtensions_tB006EB622CCA90EB9FE048B0367D9DEEEBF2634A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m9996B509EE05610C833E8E7F5A791B7C38744572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA81D78AA1DD2B29EE4675818FCFC423AA98B404A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* V_2 = NULL;
	Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D V_3;
	memset((&V_3), 0, sizeof(V_3));
	UniTask_1_tDD90D8F672EE93370E006E57605DC306EE2ED82F V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0054_1;
			}
		}
		{
			// UnityWebRequest request = new UnityWebRequest(path);
			String_t* L_2 = __this->___path_2;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			UnityWebRequest__ctor_mBCA80EFFB8AF50480F0093BC8CB34EDB4337A5FB(L_3, L_2, NULL);
			__this->___U3CrequestU3E5__2_3 = L_3;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_3), (void*)L_3);
			// DownloadHandlerBuffer dH = new DownloadHandlerBuffer();
			DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_4 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_4, NULL);
			V_2 = L_4;
			// request.downloadHandler = dH;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___U3CrequestU3E5__2_3;
			DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_6 = V_2;
			NullCheck(L_5);
			UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_5, L_6, NULL);
			// var cts = new CancellationTokenSource();
			CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_7 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)il2cpp_codegen_object_new(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			CancellationTokenSource__ctor_m2ADB5D13368A9D364C20BB6039EC6DE858735E2C(L_7, NULL);
			__this->___U3CctsU3E5__3_4 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CctsU3E5__3_4), (void*)L_7);
			// cts.CancelAfterSlim(TimeSpan.FromSeconds(3));
			CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_8 = __this->___U3CctsU3E5__3_4;
			il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_9;
			L_9 = TimeSpan_FromSeconds_m4401B50C0CA831134068595C6AF2F1CA92AAF80F((3.0), NULL);
			il2cpp_codegen_runtime_class_init_inline(CancellationTokenSourceExtensions_tB006EB622CCA90EB9FE048B0367D9DEEEBF2634A_il2cpp_TypeInfo_var);
			RuntimeObject* L_10;
			L_10 = CancellationTokenSourceExtensions_CancelAfterSlim_m7FCDA5FA59E973A1754BEFF206736E10BBD58663(L_8, L_9, 0, 8, NULL);
		}

IL_0054_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_11 = V_0;
				if (!L_11)
				{
					goto IL_00be_2;
				}
			}
			{
				// Debug.Log("????" + path);
				String_t* L_12 = __this->___path_2;
				String_t* L_13;
				L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA81D78AA1DD2B29EE4675818FCFC423AA98B404A, L_12, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
				// await request.SendWebRequest().WithCancellation(cts.Token);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = __this->___U3CrequestU3E5__2_3;
				NullCheck(L_14);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_15;
				L_15 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_14, NULL);
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_16 = __this->___U3CctsU3E5__3_4;
				NullCheck(L_16);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_17;
				L_17 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_16, NULL);
				UniTask_1_tDD90D8F672EE93370E006E57605DC306EE2ED82F L_18;
				L_18 = UnityAsyncExtensions_WithCancellation_m64371919D7F4428DF8B06230F745FAAE766A405D(L_15, L_17, NULL);
				V_4 = L_18;
				Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D L_19;
				L_19 = UniTask_1_GetAwaiter_m9996B509EE05610C833E8E7F5A791B7C38744572_inline((&V_4), UniTask_1_GetAwaiter_m9996B509EE05610C833E8E7F5A791B7C38744572_RuntimeMethod_var);
				V_3 = L_19;
				bool L_20;
				L_20 = Awaiter_get_IsCompleted_mEEF2DD5708BDB48F822034EAB2325133169359C2_inline((&V_3), Awaiter_get_IsCompleted_mEEF2DD5708BDB48F822034EAB2325133169359C2_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_00da_2;
				}
			}
			{
				int32_t L_21 = 0;
				V_0 = L_21;
				__this->___U3CU3E1__state_0 = L_21;
				Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D L_22 = V_3;
				__this->___U3CU3Eu__1_5 = L_22;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_5))->___task_0))->___source_0), (void*)NULL);
				#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_5))->___task_0))->___result_1), (void*)NULL);
				#endif
				AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_23 = (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*)(&__this->___U3CU3Et__builder_1);
				AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_mE14589D0C56FA8CD06B9AC87D32BB79ADC793D10_inline(L_23, (&V_3), __this, AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_mE14589D0C56FA8CD06B9AC87D32BB79ADC793D10_RuntimeMethod_var);
				goto IL_018b;
			}

IL_00be_2:
			{
				Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D L_24 = __this->___U3CU3Eu__1_5;
				V_3 = L_24;
				Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D* L_25 = (Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D*)(&__this->___U3CU3Eu__1_5);
				il2cpp_codegen_initobj(L_25, sizeof(Awaiter_t633DB11EC8B2DB2BA5CAC012043A882AB78F1E9D));
				int32_t L_26 = (-1);
				V_0 = L_26;
				__this->___U3CU3E1__state_0 = L_26;
			}

IL_00da_2:
			{
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27;
				L_27 = Awaiter_GetResult_mFCBC6CA000A16437D97B31DB75769FD560F3EA10_inline((&V_3), Awaiter_GetResult_mFCBC6CA000A16437D97B31DB75769FD560F3EA10_RuntimeMethod_var);
				// }
				goto IL_0107_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_00e4_1;
			}
			throw e;
		}

CATCH_00e4_1:
		{// begin catch(System.OperationCanceledException)
			{
				// if (ex.CancellationToken == cts.Token)
				NullCheck(((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IL2CPP_GET_ACTIVE_EXCEPTION(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)));
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_28;
				L_28 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IL2CPP_GET_ACTIVE_EXCEPTION(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)), NULL);
				CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_29 = __this->___U3CctsU3E5__3_4;
				NullCheck(L_29);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_30;
				L_30 = CancellationTokenSource_get_Token_m0FEC575DDDA2947476EE5D9B8F8AC887A4EEE3C4(L_29, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var)));
				bool L_31;
				L_31 = CancellationToken_op_Equality_mE6D5B49C5476274AD7729F0EED838A77535E961D(L_28, L_30, NULL);
				if (!L_31)
				{
					goto IL_0105_1;
				}
			}
			{
				// Debug.Log("Timeout!");
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8BD159C3D7F4D6D6F5C894061300DC61F9604327)), NULL);
			}

IL_0105_1:
			{
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0107_1;
			}
		}// end catch (depth: 2)

IL_0107_1:
		{
			// if (request.result != UnityWebRequest.Result.Success)
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_32 = __this->___U3CrequestU3E5__2_3;
			NullCheck(L_32);
			int32_t L_33;
			L_33 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_32, NULL);
			if ((((int32_t)L_33) == ((int32_t)1)))
			{
				goto IL_0124_1;
			}
		}
		{
			// request.Dispose();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_34 = __this->___U3CrequestU3E5__2_3;
			NullCheck(L_34);
			UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_34, NULL);
			// return null;
			V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
			goto IL_0169;
		}

IL_0124_1:
		{
			// var data = request.downloadHandler.data;
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_35 = __this->___U3CrequestU3E5__2_3;
			NullCheck(L_35);
			DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_36;
			L_36 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_35, NULL);
			NullCheck(L_36);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
			L_37 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_36, NULL);
			// request.Dispose();
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_38 = __this->___U3CrequestU3E5__2_3;
			NullCheck(L_38);
			UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_38, NULL);
			// return data;
			V_1 = L_37;
			goto IL_0169;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0142;
		}
		throw e;
	}

CATCH_0142:
	{// begin catch(System.Exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CctsU3E5__3_4 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CctsU3E5__3_4), (void*)(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_39 = (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_40 = V_5;
		AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_inline(L_39, L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8525ECDCFAB87F58D740D2A2BBEA6E6A9267FC3B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018b;
	}// end catch (depth: 1)

IL_0169:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
		__this->___U3CctsU3E5__3_4 = (CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CctsU3E5__3_4), (void*)(CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*)NULL);
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_41 = (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*)(&__this->___U3CU3Et__builder_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_inline(L_41, L_42, AsyncUniTaskMethodBuilder_1_SetResult_m497EB16ADC44BEC440211068641BAFA59C93E475_RuntimeMethod_var);
	}

IL_018b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestU3Ed__1_MoveNext_m6EBED45DA5474A91C3B2FCE1E2EF29A551F7B5ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79*>(__this + _offset);
	U3CRequestU3Ed__1_MoveNext_m6EBED45DA5474A91C3B2FCE1E2EF29A551F7B5ED(_thisAdjusted, method);
}
// System.Void HttpHelper/<Request>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRequestU3Ed__1_SetStateMachine_m1F58DCD8E718A00F139BE80D7F6E084C7FA7505B (U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635* L_0 = (AsyncUniTaskMethodBuilder_1_t67EAFCD8EAD9FE9C5BD8CD0BBAACCCF1945CF635*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5(L_0, L_1, AsyncUniTaskMethodBuilder_1_SetStateMachine_mBA6D27CD94A8ECC1AA34A6092EAC458750D45FD5_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRequestU3Ed__1_SetStateMachine_m1F58DCD8E718A00F139BE80D7F6E084C7FA7505B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79*>(__this + _offset);
	U3CRequestU3Ed__1_SetStateMachine_m1F58DCD8E718A00F139BE80D7F6E084C7FA7505B(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PublicData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicData__ctor_mE47F3D3062B589735B8C5B8ED9729DA09F08B839 (PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void PublicData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicData__cctor_m2D4735A7D1EFE712C7312BD024E061C290892CDF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66D6E1E33113FFF3538DBE5D75C9F4FC0E1782CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA189B1265BA35069EB12F6B26E42A341F94C1C7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Version = "v1.0.0";
		((PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_StaticFields*)il2cpp_codegen_static_fields_for(PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_il2cpp_TypeInfo_var))->___Version_0 = _stringLiteralA189B1265BA35069EB12F6B26E42A341F94C1C7A;
		Il2CppCodeGenWriteBarrier((void**)(&((PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_StaticFields*)il2cpp_codegen_static_fields_for(PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_il2cpp_TypeInfo_var))->___Version_0), (void*)_stringLiteralA189B1265BA35069EB12F6B26E42A341F94C1C7A);
		// public static string PackageName = "TestPackage";
		((PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_StaticFields*)il2cpp_codegen_static_fields_for(PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_il2cpp_TypeInfo_var))->___PackageName_1 = _stringLiteral66D6E1E33113FFF3538DBE5D75C9F4FC0E1782CB;
		Il2CppCodeGenWriteBarrier((void**)(&((PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_StaticFields*)il2cpp_codegen_static_fields_for(PublicData_tE48A4A18D64263590479824C040FB1B1C948AD6E_il2cpp_TypeInfo_var))->___PackageName_1), (void*)_stringLiteral66D6E1E33113FFF3538DBE5D75C9F4FC0E1782CB);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF AsyncUniTaskMethodBuilder_1_Create_m52C639DF67F73453007FA68B265675DECDD5BFF3_gshared_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF));
		AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m97AC68BC7E405AFC4A22B0AD9589B9219055E521_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* L_0 = ___0_stateMachine;
		U3CRequestU3Ed__1_MoveNext_m6EBED45DA5474A91C3B2FCE1E2EF29A551F7B5ED(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 AsyncUniTaskMethodBuilder_1_get_Task_mE4E6D276C3ACA66E64925FE38BB3AC7749E0C793_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::get_Task() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException<T>(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_5;
		L_5 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_5;
	}

IL_0028:
	{
		// return UniTask.FromResult(result);
		RuntimeObject* L_6 = __this->___result_2;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_7;
		L_7 = ((  UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 UniTask_1_GetAwaiter_m8F3FFCADC2A1177E31B359D162E7784C30F8DC5E_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m64CB466F8C142312263397E37C6298E842139126_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101_TisU3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79_m36004DB297AB0CAA640B0E90AB0DB587F46F952C_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* ___0_awaiter, U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* ___1_stateMachine, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79* L_1 = ___1_stateMachine;
		RuntimeObject** L_2 = (RuntimeObject**)(&__this->___runnerPromise_0);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (U3CRequestU3Ed__1_tC9FABC48311B4EDB8965E6CC137E6699BBB65C79*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* L_3 = ___0_awaiter;
		RuntimeObject* L_4 = __this->___runnerPromise_0;
		NullCheck(L_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
		L_5 = InterfaceFuncInvoker0< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::get_MoveNext() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_4);
		Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_inline(L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Awaiter_GetResult_mD47D2D1B93A9A867CBEDAC2D7033F31DBCE10C3B_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_3 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_4 = L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_6 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_7 = L_6->___token_2;
		NullCheck(L_5);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m8F65BBE4BCD00BC5CC3C50B468EDCB3AABCB09A7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___0_exception;
		__this->___ex_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ex_1), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_2);
		InterfaceActionInvoker1< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::SetException(System.Exception) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_m9E784ED4CDCCF8F431EFFD0EF46AEB02E48CABE7_gshared_inline (AsyncUniTaskMethodBuilder_1_tFC09635241966209A887C377AE6C642AC59B4DEF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// this.result = result;
		RuntimeObject* L_1 = ___0_result;
		__this->___result_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___result_2), (void*)L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_2 = __this->___runnerPromise_0;
		RuntimeObject* L_3 = ___0_result;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Object>::SetResult(T) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_mA4F4E868662E0BD80C0BB0E125DEC5A22CEE886E_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = ___0_task;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440 L_1 = (*(UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___result_1), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mA5CFB18FB86A0F36F682D8E814F9A25CE84D87C5_gshared_inline (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = __this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m1CCB04A74D166784C6CDEFAA8AA67879A0CCE793_gshared_inline (Awaiter_t0767B80BBE72D416CD4F41DA0FB54CD61AFEB101* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_0 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_continuation;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_continuation;
		UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440* L_7 = (UniTask_1_tB1B04E29E602E879F73EEA52804796621BBFE440*)(&__this->___task_0);
		int16_t L_8 = L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
