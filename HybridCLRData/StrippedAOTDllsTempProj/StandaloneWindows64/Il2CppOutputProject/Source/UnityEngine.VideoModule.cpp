#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral702CAC6E5B2A0B5052071E4FF4BD80AFF05EA14C;
IL2CPP_EXTERN_C const RuntimeMethod* VideoPlayer_set_controlledAudioTrackCount_m5B9EAFA1178F1AB06E7C5EE9E53011C4C86CF8AD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD0D1DCFACB6310AA1821892BA557534E78B6AF00 
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Video.VideoClip
struct VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Experimental.Video.VideoClipPlayable
struct VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462  : public MulticastDelegate_t
{
};

// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411  : public MulticastDelegate_t
{
};

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8  : public MulticastDelegate_t
{
};

// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E  : public MulticastDelegate_t
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

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___frameReady_11;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// UnityEngine.Video.VideoClip

// UnityEngine.Video.VideoClip

// UnityEngine.Experimental.Video.VideoClipPlayable

// UnityEngine.Experimental.Video.VideoClipPlayable

// System.ArgumentException

// System.ArgumentException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.RenderTexture

// UnityEngine.RenderTexture

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Video.VideoPlayer/ErrorEventHandler

// UnityEngine.Video.VideoPlayer/ErrorEventHandler

// UnityEngine.Video.VideoPlayer/EventHandler

// UnityEngine.Video.VideoPlayer/EventHandler

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler

// UnityEngine.Video.VideoPlayer/TimeEventHandler

// UnityEngine.Video.VideoPlayer/TimeEventHandler

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Video.VideoPlayer

// UnityEngine.Video.VideoPlayer

// UnityEngine.AudioSource

// UnityEngine.AudioSource
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Video.VideoPlayer::GetControlledAudioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_GetControlledAudioTrackCount_m637055B53DAC8178FA540AB70294DAC090B035EC (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) ;
// System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_controlledAudioTrackMaxCount_mC53CBFD61E4B2DBAA3B296E0FC990064ECC69DA5 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer::SetControlledAudioTrackCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetControlledAudioTrackCount_m548AAC0F8B93551FCF9B7037F7E5A1CC079CCEC5 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_inline (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_inline (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_inline (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Experimental.Video.VideoClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Experimental.Video.VideoClipPlayable::Equals(UnityEngine.Experimental.Video.VideoClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E (VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* __this, VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = VideoClipPlayable_GetHandle_m1D990903234220E9FE756F2DA895650EBDC1415D((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E_AdjustorThunk (RuntimeObject* __this, VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1 ___0_other, const RuntimeMethod* method)
{
	VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VideoClipPlayable_t2AAA6B40D35759730C170CA3124BC2499B50A0F1*>(__this + _offset);
	bool _returnValue;
	_returnValue = VideoClipPlayable_Equals_mDBA2CCE1368B628829B065EA8DEDE84512B2723E(_thisAdjusted, ___0_other, method);
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
// System.Void UnityEngine.Video.VideoClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoClip__ctor_m0D5152E4073E1D970B8A947BC16309696AAF084A (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
		return;
	}
}
// System.String UnityEngine.Video.VideoClip::get_originalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoClip_get_originalPath_mD6216825039DFE12FB0849259B4FE4C5B83DCA03 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*VideoClip_get_originalPath_mD6216825039DFE12FB0849259B4FE4C5B83DCA03_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_originalPath_mD6216825039DFE12FB0849259B4FE4C5B83DCA03_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_originalPath_mD6216825039DFE12FB0849259B4FE4C5B83DCA03_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_originalPath()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt64 UnityEngine.Video.VideoClip::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoClip_get_frameCount_m53E5E8AFB0F9BC2F1E0D0DED42DE4FBAE755FEC8 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef uint64_t (*VideoClip_get_frameCount_m53E5E8AFB0F9BC2F1E0D0DED42DE4FBAE755FEC8_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_frameCount_m53E5E8AFB0F9BC2F1E0D0DED42DE4FBAE755FEC8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameCount_m53E5E8AFB0F9BC2F1E0D0DED42DE4FBAE755FEC8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameCount()");
	uint64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoClip::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_frameRate_m62DBC3E4000A1E8E90F9B6DA3083A567B2F706E2 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef double (*VideoClip_get_frameRate_m62DBC3E4000A1E8E90F9B6DA3083A567B2F706E2_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_frameRate_m62DBC3E4000A1E8E90F9B6DA3083A567B2F706E2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameRate_m62DBC3E4000A1E8E90F9B6DA3083A567B2F706E2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameRate()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef double (*VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_length_m3A5628F24610F06D4F1E7FBC700722B77942121D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_length()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_width_mC4F4AB7B71F65B0086F2DD9BFFA6789B50A94DAD (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoClip_get_width_mC4F4AB7B71F65B0086F2DD9BFFA6789B50A94DAD_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_width_mC4F4AB7B71F65B0086F2DD9BFFA6789B50A94DAD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_width_mC4F4AB7B71F65B0086F2DD9BFFA6789B50A94DAD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_width()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_height_m425279B19CB8EB25DD480DC888DFB7B7108788B4 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoClip_get_height_m425279B19CB8EB25DD480DC888DFB7B7108788B4_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_height_m425279B19CB8EB25DD480DC888DFB7B7108788B4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_height_m425279B19CB8EB25DD480DC888DFB7B7108788B4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_height()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_pixelAspectRatioNumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_pixelAspectRatioNumerator_m24C872B9B515CB99C74C75BEDAFE1CF6B212B328 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoClip_get_pixelAspectRatioNumerator_m24C872B9B515CB99C74C75BEDAFE1CF6B212B328_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_pixelAspectRatioNumerator_m24C872B9B515CB99C74C75BEDAFE1CF6B212B328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_pixelAspectRatioNumerator_m24C872B9B515CB99C74C75BEDAFE1CF6B212B328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_pixelAspectRatioNumerator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_pixelAspectRatioDenominator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_get_pixelAspectRatioDenominator_m35B1E4367C1DAF7CA687EF65754A82EE834B4D37 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoClip_get_pixelAspectRatioDenominator_m35B1E4367C1DAF7CA687EF65754A82EE834B4D37_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_pixelAspectRatioDenominator_m35B1E4367C1DAF7CA687EF65754A82EE834B4D37_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_pixelAspectRatioDenominator_m35B1E4367C1DAF7CA687EF65754A82EE834B4D37_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_pixelAspectRatioDenominator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoClip::get_sRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoClip_get_sRGB_m35B67292E328C2F5AE005F8752BA327E90B487C6 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoClip_get_sRGB_m35B67292E328C2F5AE005F8752BA327E90B487C6_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_sRGB_m35B67292E328C2F5AE005F8752BA327E90B487C6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_sRGB_m35B67292E328C2F5AE005F8752BA327E90B487C6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_sRGB()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoClip::get_audioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoClip_get_audioTrackCount_m82FDC10DC7CD36046EF0B6098DE29B375F85A39B (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, const RuntimeMethod* method) 
{
	typedef uint16_t (*VideoClip_get_audioTrackCount_m82FDC10DC7CD36046EF0B6098DE29B375F85A39B_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoClip_get_audioTrackCount_m82FDC10DC7CD36046EF0B6098DE29B375F85A39B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_audioTrackCount_m82FDC10DC7CD36046EF0B6098DE29B375F85A39B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_audioTrackCount()");
	uint16_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoClip::GetAudioChannelCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoClip_GetAudioChannelCount_mE4ABD3522FCE088861E40DBF483D90BC0C85532A (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, uint16_t ___0_audioTrackIdx, const RuntimeMethod* method) 
{
	typedef uint16_t (*VideoClip_GetAudioChannelCount_mE4ABD3522FCE088861E40DBF483D90BC0C85532A_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*, uint16_t);
	static VideoClip_GetAudioChannelCount_mE4ABD3522FCE088861E40DBF483D90BC0C85532A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_GetAudioChannelCount_mE4ABD3522FCE088861E40DBF483D90BC0C85532A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::GetAudioChannelCount(System.UInt16)");
	uint16_t icallRetVal = _il2cpp_icall_func(__this, ___0_audioTrackIdx);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::GetAudioSampleRate(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoClip_GetAudioSampleRate_m164193FDC70486F033AB74EEC9C790C8B581A796 (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, uint16_t ___0_audioTrackIdx, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoClip_GetAudioSampleRate_m164193FDC70486F033AB74EEC9C790C8B581A796_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*, uint16_t);
	static VideoClip_GetAudioSampleRate_m164193FDC70486F033AB74EEC9C790C8B581A796_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_GetAudioSampleRate_m164193FDC70486F033AB74EEC9C790C8B581A796_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::GetAudioSampleRate(System.UInt16)");
	uint32_t icallRetVal = _il2cpp_icall_func(__this, ___0_audioTrackIdx);
	return icallRetVal;
}
// System.String UnityEngine.Video.VideoClip::GetAudioLanguage(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoClip_GetAudioLanguage_m76B57EDDFD5428A5595A5AAA102800B8888D40DD (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* __this, uint16_t ___0_audioTrackIdx, const RuntimeMethod* method) 
{
	typedef String_t* (*VideoClip_GetAudioLanguage_m76B57EDDFD5428A5595A5AAA102800B8888D40DD_ftn) (VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*, uint16_t);
	static VideoClip_GetAudioLanguage_m76B57EDDFD5428A5595A5AAA102800B8888D40DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_GetAudioLanguage_m76B57EDDFD5428A5595A5AAA102800B8888D40DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::GetAudioLanguage(System.UInt16)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_audioTrackIdx);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Video.VideoSource UnityEngine.Video.VideoPlayer::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_source_m5FE349AB354EC3D72E5BBA8549D53AAEBB42C444 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*VideoPlayer_get_source_m5FE349AB354EC3D72E5BBA8549D53AAEBB42C444_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_source_m5FE349AB354EC3D72E5BBA8549D53AAEBB42C444_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_source_m5FE349AB354EC3D72E5BBA8549D53AAEBB42C444_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_source()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int32_t);
	static VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_source_m31B8A16AF9B6FE58D5DCF549614BE6B53DE53052_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_source(UnityEngine.Video.VideoSource)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.String UnityEngine.Video.VideoPlayer::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_url_mEE83E6049A25789C1B5678B20D9B7400270A1E40_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_url()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*);
	static VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_url_m02AC2BB229F9441257D62F9ACFD96D09F51B4F14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_url(System.String)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* (*VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_clip_m08BCE17C4E685C87151B418AA3CE88294F6A96E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_clip()");
	VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, VideoClip_t603AD809C228739D932819710E70326FE7A9ADDE*);
	static VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_clip_m85C09C15E184E9AAE117C1A534D8AC25175C8DC9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Video.VideoRenderMode UnityEngine.Video.VideoPlayer::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_renderMode_m0B65B5B6D1ED8F0F00DA0725F8E97DCD8FE75C6E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*VideoPlayer_get_renderMode_m0B65B5B6D1ED8F0F00DA0725F8E97DCD8FE75C6E_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_renderMode_m0B65B5B6D1ED8F0F00DA0725F8E97DCD8FE75C6E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_renderMode_m0B65B5B6D1ED8F0F00DA0725F8E97DCD8FE75C6E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_renderMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int32_t);
	static VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_renderMode_m22880E02710AF2C055E27CDE2C96EAC8BA4CEFC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Camera UnityEngine.Video.VideoPlayer::get_targetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* VideoPlayer_get_targetCamera_m1E660EDFC75020508245D84F7959C68DE7E0B70F (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*VideoPlayer_get_targetCamera_m1E660EDFC75020508245D84F7959C68DE7E0B70F_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_targetCamera_m1E660EDFC75020508245D84F7959C68DE7E0B70F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCamera_m1E660EDFC75020508245D84F7959C68DE7E0B70F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCamera()");
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCamera_m0B4C68A63EC585A69A87F9EA26DBD5FEF92E3A79 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_targetCamera_m0B4C68A63EC585A69A87F9EA26DBD5FEF92E3A79_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*);
	static VideoPlayer_set_targetCamera_m0B4C68A63EC585A69A87F9EA26DBD5FEF92E3A79_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCamera_m0B4C68A63EC585A69A87F9EA26DBD5FEF92E3A79_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCamera(UnityEngine.Camera)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.RenderTexture UnityEngine.Video.VideoPlayer::get_targetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* VideoPlayer_get_targetTexture_m1022F791F3DD8FB6BE47E73C2DB25A5B4E768F8D (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* (*VideoPlayer_get_targetTexture_m1022F791F3DD8FB6BE47E73C2DB25A5B4E768F8D_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_targetTexture_m1022F791F3DD8FB6BE47E73C2DB25A5B4E768F8D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetTexture_m1022F791F3DD8FB6BE47E73C2DB25A5B4E768F8D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetTexture()");
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetTexture_mCFEE8D0342A11CD20CF51A3C467BA745BEB49E02 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_targetTexture_mCFEE8D0342A11CD20CF51A3C467BA745BEB49E02_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*);
	static VideoPlayer_set_targetTexture_mCFEE8D0342A11CD20CF51A3C467BA745BEB49E02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetTexture_mCFEE8D0342A11CD20CF51A3C467BA745BEB49E02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetTexture(UnityEngine.RenderTexture)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Renderer UnityEngine.Video.VideoPlayer::get_targetMaterialRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* VideoPlayer_get_targetMaterialRenderer_m58038137DCFFC358F3CA138F0B9BA6CD5A18642E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*VideoPlayer_get_targetMaterialRenderer_m58038137DCFFC358F3CA138F0B9BA6CD5A18642E_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_targetMaterialRenderer_m58038137DCFFC358F3CA138F0B9BA6CD5A18642E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetMaterialRenderer_m58038137DCFFC358F3CA138F0B9BA6CD5A18642E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetMaterialRenderer()");
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetMaterialRenderer(UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetMaterialRenderer_m3616C05D50241F4B5EDBAA55A588A75460801695 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_targetMaterialRenderer_m3616C05D50241F4B5EDBAA55A588A75460801695_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*);
	static VideoPlayer_set_targetMaterialRenderer_m3616C05D50241F4B5EDBAA55A588A75460801695_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetMaterialRenderer_m3616C05D50241F4B5EDBAA55A588A75460801695_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetMaterialRenderer(UnityEngine.Renderer)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.String UnityEngine.Video.VideoPlayer::get_targetMaterialProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_get_targetMaterialProperty_m0F6B6E42E1C37F76136A149FA233A6E9679F2114 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*VideoPlayer_get_targetMaterialProperty_m0F6B6E42E1C37F76136A149FA233A6E9679F2114_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_targetMaterialProperty_m0F6B6E42E1C37F76136A149FA233A6E9679F2114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetMaterialProperty_m0F6B6E42E1C37F76136A149FA233A6E9679F2114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetMaterialProperty()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetMaterialProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetMaterialProperty_m6BB3A64DC8CEDA697FA8A641729FF23EBC76E879 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_targetMaterialProperty_m6BB3A64DC8CEDA697FA8A641729FF23EBC76E879_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*);
	static VideoPlayer_set_targetMaterialProperty_m6BB3A64DC8CEDA697FA8A641729FF23EBC76E879_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetMaterialProperty_m6BB3A64DC8CEDA697FA8A641729FF23EBC76E879_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetMaterialProperty(System.String)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Video.VideoAspectRatio UnityEngine.Video.VideoPlayer::get_aspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_aspectRatio_mD9F49BCD1476FE992BDADCB241EF69562F65A249 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*VideoPlayer_get_aspectRatio_mD9F49BCD1476FE992BDADCB241EF69562F65A249_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_aspectRatio_mD9F49BCD1476FE992BDADCB241EF69562F65A249_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_aspectRatio_mD9F49BCD1476FE992BDADCB241EF69562F65A249_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_aspectRatio()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int32_t);
	static VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_aspectRatio_m4EDDA786C5B90040119F15FB0AC9150321B44AAE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Video.VideoPlayer::get_targetCameraAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_targetCameraAlpha_m9B70157D47A032E38EFED765969E79CE40B61B71 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef float (*VideoPlayer_get_targetCameraAlpha_m9B70157D47A032E38EFED765969E79CE40B61B71_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_targetCameraAlpha_m9B70157D47A032E38EFED765969E79CE40B61B71_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCameraAlpha_m9B70157D47A032E38EFED765969E79CE40B61B71_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCameraAlpha()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCameraAlpha_m1A2D5501FDFF2C7328573D31BE39EA67CA1D2491 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_targetCameraAlpha_m1A2D5501FDFF2C7328573D31BE39EA67CA1D2491_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, float);
	static VideoPlayer_set_targetCameraAlpha_m1A2D5501FDFF2C7328573D31BE39EA67CA1D2491_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCameraAlpha_m1A2D5501FDFF2C7328573D31BE39EA67CA1D2491_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCameraAlpha(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Video.Video3DLayout UnityEngine.Video.VideoPlayer::get_targetCamera3DLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_targetCamera3DLayout_mF4E6DFCF1E9E461E5BFF9A19BB2589333F06A1BA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*VideoPlayer_get_targetCamera3DLayout_mF4E6DFCF1E9E461E5BFF9A19BB2589333F06A1BA_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_targetCamera3DLayout_mF4E6DFCF1E9E461E5BFF9A19BB2589333F06A1BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_targetCamera3DLayout_mF4E6DFCF1E9E461E5BFF9A19BB2589333F06A1BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_targetCamera3DLayout()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_targetCamera3DLayout(UnityEngine.Video.Video3DLayout)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_targetCamera3DLayout_m4D61477F3F20F98AC1E72A66A511D7C5C2E88B10 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_targetCamera3DLayout_m4D61477F3F20F98AC1E72A66A511D7C5C2E88B10_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int32_t);
	static VideoPlayer_set_targetCamera3DLayout_m4D61477F3F20F98AC1E72A66A511D7C5C2E88B10_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_targetCamera3DLayout_m4D61477F3F20F98AC1E72A66A511D7C5C2E88B10_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_targetCamera3DLayout(UnityEngine.Video.Video3DLayout)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* (*VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_texture_m1BA7033FEB30FEC507A4605FDD5C4B78BB81C379_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_texture()");
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Prepare_mC0EF4CC2E5A6B7C04F9F810DD9406A6146BEE6EA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Prepare()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPrepared_mF2F3AD27BE0FD06695EE9DEE762B68F431E15767_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPrepared()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_waitForFirstFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_waitForFirstFrame_m140A0691E2689A37B167B8C47A5A9EBBA38B711B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_waitForFirstFrame_m140A0691E2689A37B167B8C47A5A9EBBA38B711B_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_waitForFirstFrame_m140A0691E2689A37B167B8C47A5A9EBBA38B711B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_waitForFirstFrame_m140A0691E2689A37B167B8C47A5A9EBBA38B711B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_waitForFirstFrame()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_waitForFirstFrame_m43D97D5C3971060018A9BF5D04B9CEDDBA1056AA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_waitForFirstFrame_m43D97D5C3971060018A9BF5D04B9CEDDBA1056AA_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, bool);
	static VideoPlayer_set_waitForFirstFrame_m43D97D5C3971060018A9BF5D04B9CEDDBA1056AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_waitForFirstFrame_m43D97D5C3971060018A9BF5D04B9CEDDBA1056AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_waitForFirstFrame(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_playOnAwake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_playOnAwake_m0BB4406F24AE9E15C9C8400D9732D80642213EC3 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_playOnAwake_m0BB4406F24AE9E15C9C8400D9732D80642213EC3_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_playOnAwake_m0BB4406F24AE9E15C9C8400D9732D80642213EC3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_playOnAwake_m0BB4406F24AE9E15C9C8400D9732D80642213EC3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_playOnAwake()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, bool);
	static VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_playOnAwake_m658E574E0109125AD1754D61FE81DD7BB02411A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_playOnAwake(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Play_m8E99607F39F1D214BDD704F3E130DD2418787ACE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Play()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Pause_m1975BF6BEE27064602EEB8191C963888CF5B226E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Pause()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_Stop_m1F2DE73183E042998140A56FF69432A200430BF1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPlaying_mC4CCA87F909A3A14209D632D16D7C8FC34F01520_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPlaying()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPaused_m249D087974D905D874171AE89664A06F70AC9426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPaused()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetTime_m93AFBD45BF1379FCC1703FFC0A0A5F3413B13D62 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_canSetTime_m93AFBD45BF1379FCC1703FFC0A0A5F3413B13D62_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_canSetTime_m93AFBD45BF1379FCC1703FFC0A0A5F3413B13D62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetTime_m93AFBD45BF1379FCC1703FFC0A0A5F3413B13D62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetTime()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoPlayer::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef double (*VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_time_mEDEA9BEF22122704F3EC6F4F521A9F2DC4C0CF48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_time()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, double ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double);
	static VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_time_m011A5EC42BF4C5DE301346942998F2E889DB9056_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_time(System.Double)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VideoPlayer_get_frame_m57EC801B265F40B3D4AB73BE1F1C42EB6B77988A (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int64_t (*VideoPlayer_get_frame_m57EC801B265F40B3D4AB73BE1F1C42EB6B77988A_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_frame_m57EC801B265F40B3D4AB73BE1F1C42EB6B77988A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frame_m57EC801B265F40B3D4AB73BE1F1C42EB6B77988A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frame()");
	int64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_frame(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_frame_mDD1CBF9BD07C3720DC8B1798CE434BAD5B75803B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_frame_mDD1CBF9BD07C3720DC8B1798CE434BAD5B75803B_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t);
	static VideoPlayer_set_frame_mDD1CBF9BD07C3720DC8B1798CE434BAD5B75803B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_frame_mDD1CBF9BD07C3720DC8B1798CE434BAD5B75803B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_frame(System.Int64)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Double UnityEngine.Video.VideoPlayer::get_clockTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_clockTime_m3FBFBD787D3A0E0F8BEF9F893D90260313DFD83A (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef double (*VideoPlayer_get_clockTime_m3FBFBD787D3A0E0F8BEF9F893D90260313DFD83A_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_clockTime_m3FBFBD787D3A0E0F8BEF9F893D90260313DFD83A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_clockTime_m3FBFBD787D3A0E0F8BEF9F893D90260313DFD83A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_clockTime()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canStep_m0CD17D951D28FBB3EAB2D746ABCE057F8AA76124 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_canStep_m0CD17D951D28FBB3EAB2D746ABCE057F8AA76124_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_canStep_m0CD17D951D28FBB3EAB2D746ABCE057F8AA76124_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canStep_m0CD17D951D28FBB3EAB2D746ABCE057F8AA76124_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canStep()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::StepForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_StepForward_m33AD97E2C078C7BF769C73BA2432DBD05EE2EA1D (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_StepForward_m33AD97E2C078C7BF769C73BA2432DBD05EE2EA1D_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_StepForward_m33AD97E2C078C7BF769C73BA2432DBD05EE2EA1D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_StepForward_m33AD97E2C078C7BF769C73BA2432DBD05EE2EA1D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::StepForward()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetPlaybackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetPlaybackSpeed_m1AE1749D4C49C49684106039D46C8460835F2A53 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_canSetPlaybackSpeed_m1AE1749D4C49C49684106039D46C8460835F2A53_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_canSetPlaybackSpeed_m1AE1749D4C49C49684106039D46C8460835F2A53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetPlaybackSpeed_m1AE1749D4C49C49684106039D46C8460835F2A53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetPlaybackSpeed()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Video.VideoPlayer::get_playbackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_playbackSpeed_mCCEAB0BF39D7B9ACC17A67C376E8AFEE4AAB54CB (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef float (*VideoPlayer_get_playbackSpeed_mCCEAB0BF39D7B9ACC17A67C376E8AFEE4AAB54CB_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_playbackSpeed_mCCEAB0BF39D7B9ACC17A67C376E8AFEE4AAB54CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_playbackSpeed_mCCEAB0BF39D7B9ACC17A67C376E8AFEE4AAB54CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_playbackSpeed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playbackSpeed_mD57C135A94C988D209390B879D84464A13CB91FD (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_playbackSpeed_mD57C135A94C988D209390B879D84464A13CB91FD_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, float);
	static VideoPlayer_set_playbackSpeed_mD57C135A94C988D209390B879D84464A13CB91FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_playbackSpeed_mD57C135A94C988D209390B879D84464A13CB91FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isLooping_m9E4671C5136760DDD572FFF425B48B56DC7C3B8B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_isLooping_m9E4671C5136760DDD572FFF425B48B56DC7C3B8B_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_isLooping_m9E4671C5136760DDD572FFF425B48B56DC7C3B8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isLooping_m9E4671C5136760DDD572FFF425B48B56DC7C3B8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isLooping()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, bool);
	static VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_isLooping_m37563E7D24110FDBBBB4E48EA90E639BE778264E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetTimeSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetTimeSource_m88F0763CBC22EC1484A16A7AF61CB3BA6178F2EB (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_canSetTimeSource_m88F0763CBC22EC1484A16A7AF61CB3BA6178F2EB_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_canSetTimeSource_m88F0763CBC22EC1484A16A7AF61CB3BA6178F2EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetTimeSource_m88F0763CBC22EC1484A16A7AF61CB3BA6178F2EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetTimeSource()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Video.VideoTimeSource UnityEngine.Video.VideoPlayer::get_timeSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_timeSource_mF7617364CDCACD7466E6C16139E38C4E07F83171 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*VideoPlayer_get_timeSource_mF7617364CDCACD7466E6C16139E38C4E07F83171_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_timeSource_mF7617364CDCACD7466E6C16139E38C4E07F83171_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_timeSource_mF7617364CDCACD7466E6C16139E38C4E07F83171_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_timeSource()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_timeSource(UnityEngine.Video.VideoTimeSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_timeSource_mCD127C85C49C8645618959D28C8DB6A23E5ABF6C (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_timeSource_mCD127C85C49C8645618959D28C8DB6A23E5ABF6C_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int32_t);
	static VideoPlayer_set_timeSource_mCD127C85C49C8645618959D28C8DB6A23E5ABF6C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_timeSource_mCD127C85C49C8645618959D28C8DB6A23E5ABF6C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_timeSource(UnityEngine.Video.VideoTimeSource)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.Video.VideoTimeReference UnityEngine.Video.VideoPlayer::get_timeReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_timeReference_m4CF54B68EECDD8C0B830DF7976B058C3415DA4AF (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*VideoPlayer_get_timeReference_m4CF54B68EECDD8C0B830DF7976B058C3415DA4AF_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_timeReference_m4CF54B68EECDD8C0B830DF7976B058C3415DA4AF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_timeReference_m4CF54B68EECDD8C0B830DF7976B058C3415DA4AF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_timeReference()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_timeReference(UnityEngine.Video.VideoTimeReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_timeReference_mFA6BE31876562F4B2B2008ECCE9A54B225D2E623 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_timeReference_mFA6BE31876562F4B2B2008ECCE9A54B225D2E623_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int32_t);
	static VideoPlayer_set_timeReference_mFA6BE31876562F4B2B2008ECCE9A54B225D2E623_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_timeReference_mFA6BE31876562F4B2B2008ECCE9A54B225D2E623_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_timeReference(UnityEngine.Video.VideoTimeReference)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Double UnityEngine.Video.VideoPlayer::get_externalReferenceTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_externalReferenceTime_m9A393C66E346ECE745957DF8042316687F347B46 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef double (*VideoPlayer_get_externalReferenceTime_m9A393C66E346ECE745957DF8042316687F347B46_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_externalReferenceTime_m9A393C66E346ECE745957DF8042316687F347B46_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_externalReferenceTime_m9A393C66E346ECE745957DF8042316687F347B46_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_externalReferenceTime()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_externalReferenceTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_externalReferenceTime_m400FAEB8D782B595250162AFE10DA0E635AB08F2 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, double ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_externalReferenceTime_m400FAEB8D782B595250162AFE10DA0E635AB08F2_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double);
	static VideoPlayer_set_externalReferenceTime_m400FAEB8D782B595250162AFE10DA0E635AB08F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_externalReferenceTime_m400FAEB8D782B595250162AFE10DA0E635AB08F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_externalReferenceTime(System.Double)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetSkipOnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetSkipOnDrop_mB49ACD180488093073E3D3DB23C0A488B1E2E437 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_canSetSkipOnDrop_mB49ACD180488093073E3D3DB23C0A488B1E2E437_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_canSetSkipOnDrop_mB49ACD180488093073E3D3DB23C0A488B1E2E437_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetSkipOnDrop_mB49ACD180488093073E3D3DB23C0A488B1E2E437_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetSkipOnDrop()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_skipOnDrop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_skipOnDrop_m212D6DB4DBC55E74EDEFEE99A6A04E17B2D5DCC3 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_skipOnDrop_m212D6DB4DBC55E74EDEFEE99A6A04E17B2D5DCC3_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_skipOnDrop_m212D6DB4DBC55E74EDEFEE99A6A04E17B2D5DCC3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_skipOnDrop_m212D6DB4DBC55E74EDEFEE99A6A04E17B2D5DCC3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_skipOnDrop()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_skipOnDrop_m3AF58ACDD78E0331942DA2C82075EE09D824B6B9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_skipOnDrop_m3AF58ACDD78E0331942DA2C82075EE09D824B6B9_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, bool);
	static VideoPlayer_set_skipOnDrop_m3AF58ACDD78E0331942DA2C82075EE09D824B6B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_skipOnDrop_m3AF58ACDD78E0331942DA2C82075EE09D824B6B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t VideoPlayer_get_frameCount_m23BB0591824D2B1F554775F63D950429C27142F7 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef uint64_t (*VideoPlayer_get_frameCount_m23BB0591824D2B1F554775F63D950429C27142F7_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_frameCount_m23BB0591824D2B1F554775F63D950429C27142F7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameCount_m23BB0591824D2B1F554775F63D950429C27142F7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameCount()");
	uint64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Video.VideoPlayer::get_frameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_frameRate_mA86678C60358E02358BA4D999841A3552FC78FDE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef float (*VideoPlayer_get_frameRate_mA86678C60358E02358BA4D999841A3552FC78FDE_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_frameRate_mA86678C60358E02358BA4D999841A3552FC78FDE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameRate_mA86678C60358E02358BA4D999841A3552FC78FDE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameRate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Double UnityEngine.Video.VideoPlayer::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef double (*VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_length_mA0D8C06DB63C48CF5100068387CF0AFC2A0F093E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_length()");
	double icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_width_m7072FA6D715254FA6D46C1BC5E7F5F02940FF9A1 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoPlayer_get_width_m7072FA6D715254FA6D46C1BC5E7F5F02940FF9A1_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_width_m7072FA6D715254FA6D46C1BC5E7F5F02940FF9A1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_width_m7072FA6D715254FA6D46C1BC5E7F5F02940FF9A1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_width()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_height_mF12683FC77C7922EC95964AE792A43E8748AC60F (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoPlayer_get_height_mF12683FC77C7922EC95964AE792A43E8748AC60F_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_height_mF12683FC77C7922EC95964AE792A43E8748AC60F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_height_mF12683FC77C7922EC95964AE792A43E8748AC60F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_height()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_pixelAspectRatioNumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_pixelAspectRatioNumerator_m3A598B15AC3026423630663F9DB1F6D44D831205 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoPlayer_get_pixelAspectRatioNumerator_m3A598B15AC3026423630663F9DB1F6D44D831205_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_pixelAspectRatioNumerator_m3A598B15AC3026423630663F9DB1F6D44D831205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_pixelAspectRatioNumerator_m3A598B15AC3026423630663F9DB1F6D44D831205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_pixelAspectRatioNumerator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::get_pixelAspectRatioDenominator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_get_pixelAspectRatioDenominator_mFD303992F4DAA00C7DB09EC7CCFE83B190C1BFB4 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoPlayer_get_pixelAspectRatioDenominator_mFD303992F4DAA00C7DB09EC7CCFE83B190C1BFB4_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_pixelAspectRatioDenominator_mFD303992F4DAA00C7DB09EC7CCFE83B190C1BFB4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_pixelAspectRatioDenominator_mFD303992F4DAA00C7DB09EC7CCFE83B190C1BFB4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_pixelAspectRatioDenominator()");
	uint32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_audioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_audioTrackCount_m9CFD91CB1912D807F24C991EB458EC37CB91A1DA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef uint16_t (*VideoPlayer_get_audioTrackCount_m9CFD91CB1912D807F24C991EB458EC37CB91A1DA_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_audioTrackCount_m9CFD91CB1912D807F24C991EB458EC37CB91A1DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_audioTrackCount_m9CFD91CB1912D807F24C991EB458EC37CB91A1DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_audioTrackCount()");
	uint16_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Video.VideoPlayer::GetAudioLanguageCode(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoPlayer_GetAudioLanguageCode_mEA347328928E12E93AB0C188E71FB64ED74DE703 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, const RuntimeMethod* method) 
{
	typedef String_t* (*VideoPlayer_GetAudioLanguageCode_mEA347328928E12E93AB0C188E71FB64ED74DE703_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_GetAudioLanguageCode_mEA347328928E12E93AB0C188E71FB64ED74DE703_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetAudioLanguageCode_mEA347328928E12E93AB0C188E71FB64ED74DE703_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetAudioLanguageCode(System.UInt16)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_trackIndex);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::GetAudioChannelCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_GetAudioChannelCount_mF0C207D88EE44AEAB6A6FA0D10FD3C5E1DE4A1D8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, const RuntimeMethod* method) 
{
	typedef uint16_t (*VideoPlayer_GetAudioChannelCount_mF0C207D88EE44AEAB6A6FA0D10FD3C5E1DE4A1D8_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_GetAudioChannelCount_mF0C207D88EE44AEAB6A6FA0D10FD3C5E1DE4A1D8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetAudioChannelCount_mF0C207D88EE44AEAB6A6FA0D10FD3C5E1DE4A1D8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetAudioChannelCount(System.UInt16)");
	uint16_t icallRetVal = _il2cpp_icall_func(__this, ___0_trackIndex);
	return icallRetVal;
}
// System.UInt32 UnityEngine.Video.VideoPlayer::GetAudioSampleRate(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t VideoPlayer_GetAudioSampleRate_mBCBEE2EEBD1D44479BC92B5FEF858EE61DD9E1E0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, const RuntimeMethod* method) 
{
	typedef uint32_t (*VideoPlayer_GetAudioSampleRate_mBCBEE2EEBD1D44479BC92B5FEF858EE61DD9E1E0_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_GetAudioSampleRate_mBCBEE2EEBD1D44479BC92B5FEF858EE61DD9E1E0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetAudioSampleRate_mBCBEE2EEBD1D44479BC92B5FEF858EE61DD9E1E0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetAudioSampleRate(System.UInt16)");
	uint32_t icallRetVal = _il2cpp_icall_func(__this, ___0_trackIndex);
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_controlledAudioTrackMaxCount_mC53CBFD61E4B2DBAA3B296E0FC990064ECC69DA5 (const RuntimeMethod* method) 
{
	typedef uint16_t (*VideoPlayer_get_controlledAudioTrackMaxCount_mC53CBFD61E4B2DBAA3B296E0FC990064ECC69DA5_ftn) ();
	static VideoPlayer_get_controlledAudioTrackMaxCount_mC53CBFD61E4B2DBAA3B296E0FC990064ECC69DA5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_controlledAudioTrackMaxCount_mC53CBFD61E4B2DBAA3B296E0FC990064ECC69DA5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_controlledAudioTrackMaxCount()");
	uint16_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.UInt16 UnityEngine.Video.VideoPlayer::get_controlledAudioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_get_controlledAudioTrackCount_m7D0887B6AFEBCC16925024A63D0D25E4B2060448 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		uint16_t L_0;
		L_0 = VideoPlayer_GetControlledAudioTrackCount_m637055B53DAC8178FA540AB70294DAC090B035EC(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		uint16_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::set_controlledAudioTrackCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_controlledAudioTrackCount_m5B9EAFA1178F1AB06E7C5EE9E53011C4C86CF8AD (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		uint16_t L_0;
		L_0 = VideoPlayer_get_controlledAudioTrackMaxCount_mC53CBFD61E4B2DBAA3B296E0FC990064ECC69DA5(NULL);
		V_0 = L_0;
		uint16_t L_1 = ___0_value;
		int32_t L_2 = V_0;
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral702CAC6E5B2A0B5052071E4FF4BD80AFF05EA14C)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VideoPlayer_set_controlledAudioTrackCount_m5B9EAFA1178F1AB06E7C5EE9E53011C4C86CF8AD_RuntimeMethod_var)));
	}

IL_002a:
	{
		uint16_t L_9 = ___0_value;
		VideoPlayer_SetControlledAudioTrackCount_m548AAC0F8B93551FCF9B7037F7E5A1CC079CCEC5(__this, L_9, NULL);
		return;
	}
}
// System.UInt16 UnityEngine.Video.VideoPlayer::GetControlledAudioTrackCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t VideoPlayer_GetControlledAudioTrackCount_m637055B53DAC8178FA540AB70294DAC090B035EC (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef uint16_t (*VideoPlayer_GetControlledAudioTrackCount_m637055B53DAC8178FA540AB70294DAC090B035EC_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_GetControlledAudioTrackCount_m637055B53DAC8178FA540AB70294DAC090B035EC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetControlledAudioTrackCount_m637055B53DAC8178FA540AB70294DAC090B035EC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetControlledAudioTrackCount()");
	uint16_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetControlledAudioTrackCount(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetControlledAudioTrackCount_m548AAC0F8B93551FCF9B7037F7E5A1CC079CCEC5 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_SetControlledAudioTrackCount_m548AAC0F8B93551FCF9B7037F7E5A1CC079CCEC5_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_SetControlledAudioTrackCount_m548AAC0F8B93551FCF9B7037F7E5A1CC079CCEC5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetControlledAudioTrackCount_m548AAC0F8B93551FCF9B7037F7E5A1CC079CCEC5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetControlledAudioTrackCount(System.UInt16)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_EnableAudioTrack_mD7FE1C20A0B3FD59AF0FD634A7868FC8335D76BB (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, bool ___1_enabled, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_EnableAudioTrack_mD7FE1C20A0B3FD59AF0FD634A7868FC8335D76BB_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t, bool);
	static VideoPlayer_EnableAudioTrack_mD7FE1C20A0B3FD59AF0FD634A7868FC8335D76BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_EnableAudioTrack_mD7FE1C20A0B3FD59AF0FD634A7868FC8335D76BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::EnableAudioTrack(System.UInt16,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_trackIndex, ___1_enabled);
}
// System.Boolean UnityEngine.Video.VideoPlayer::IsAudioTrackEnabled(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_IsAudioTrackEnabled_m47283ED7403FB90E85EE6FA0F3D06C1DD1619A13 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_IsAudioTrackEnabled_m47283ED7403FB90E85EE6FA0F3D06C1DD1619A13_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_IsAudioTrackEnabled_m47283ED7403FB90E85EE6FA0F3D06C1DD1619A13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_IsAudioTrackEnabled_m47283ED7403FB90E85EE6FA0F3D06C1DD1619A13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::IsAudioTrackEnabled(System.UInt16)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_trackIndex);
	return icallRetVal;
}
// UnityEngine.Video.VideoAudioOutputMode UnityEngine.Video.VideoPlayer::get_audioOutputMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VideoPlayer_get_audioOutputMode_m22644BE075B145626BD48015E5948CAF4486B60E (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*VideoPlayer_get_audioOutputMode_m22644BE075B145626BD48015E5948CAF4486B60E_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_audioOutputMode_m22644BE075B145626BD48015E5948CAF4486B60E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_audioOutputMode_m22644BE075B145626BD48015E5948CAF4486B60E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_audioOutputMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int32_t);
	static VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_audioOutputMode_mB6388A630434913121DD37D2E48CF66E81BF8574_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_canSetDirectAudioVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canSetDirectAudioVolume_m42D5F68E9D376FDC2C80F52BDB594726E16362BC (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_canSetDirectAudioVolume_m42D5F68E9D376FDC2C80F52BDB594726E16362BC_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_canSetDirectAudioVolume_m42D5F68E9D376FDC2C80F52BDB594726E16362BC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_canSetDirectAudioVolume_m42D5F68E9D376FDC2C80F52BDB594726E16362BC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_canSetDirectAudioVolume()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Video.VideoPlayer::GetDirectAudioVolume(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_GetDirectAudioVolume_m32C42477953984C6A5408DB9CA0A6CFF9912E1DA (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, const RuntimeMethod* method) 
{
	typedef float (*VideoPlayer_GetDirectAudioVolume_m32C42477953984C6A5408DB9CA0A6CFF9912E1DA_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_GetDirectAudioVolume_m32C42477953984C6A5408DB9CA0A6CFF9912E1DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetDirectAudioVolume_m32C42477953984C6A5408DB9CA0A6CFF9912E1DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetDirectAudioVolume(System.UInt16)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_trackIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, float ___1_volume, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t, float);
	static VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetDirectAudioVolume_m77236AFF5D3EB228B22C41B4A31C3C5DC72A8BE8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetDirectAudioVolume(System.UInt16,System.Single)");
	_il2cpp_icall_func(__this, ___0_trackIndex, ___1_volume);
}
// System.Boolean UnityEngine.Video.VideoPlayer::GetDirectAudioMute(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_GetDirectAudioMute_m5567DCDDF04BCD78DAB57990EC6F95D1E669DFD0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_GetDirectAudioMute_m5567DCDDF04BCD78DAB57990EC6F95D1E669DFD0_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_GetDirectAudioMute_m5567DCDDF04BCD78DAB57990EC6F95D1E669DFD0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetDirectAudioMute_m5567DCDDF04BCD78DAB57990EC6F95D1E669DFD0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetDirectAudioMute(System.UInt16)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_trackIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetDirectAudioMute(System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetDirectAudioMute_mA22511B44579744FD391D6EF2DC5C75A3AF97E8A (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, bool ___1_mute, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_SetDirectAudioMute_mA22511B44579744FD391D6EF2DC5C75A3AF97E8A_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t, bool);
	static VideoPlayer_SetDirectAudioMute_mA22511B44579744FD391D6EF2DC5C75A3AF97E8A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetDirectAudioMute_mA22511B44579744FD391D6EF2DC5C75A3AF97E8A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetDirectAudioMute(System.UInt16,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_trackIndex, ___1_mute);
}
// UnityEngine.AudioSource UnityEngine.Video.VideoPlayer::GetTargetAudioSource(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* VideoPlayer_GetTargetAudioSource_m882BE559DD6C3D04BC5D2BDA3F61E199D7C3EBD2 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, const RuntimeMethod* method) 
{
	typedef AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*VideoPlayer_GetTargetAudioSource_m882BE559DD6C3D04BC5D2BDA3F61E199D7C3EBD2_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t);
	static VideoPlayer_GetTargetAudioSource_m882BE559DD6C3D04BC5D2BDA3F61E199D7C3EBD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_GetTargetAudioSource_m882BE559DD6C3D04BC5D2BDA3F61E199D7C3EBD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::GetTargetAudioSource(System.UInt16)");
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* icallRetVal = _il2cpp_icall_func(__this, ___0_trackIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, uint16_t ___0_trackIndex, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___1_source, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, uint16_t, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_SetTargetAudioSource_m07A0CF8814A1A2972347A9123D1088A16E736CA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::SetTargetAudioSource(System.UInt16,UnityEngine.AudioSource)");
	_il2cpp_icall_func(__this, ___0_trackIndex, ___1_source);
}
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_prepareCompleted_m4DB8843A3E3E3CFF7E361E70EA51983AF457183B (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___prepareCompleted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___prepareCompleted_4);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_prepareCompleted_mDA77FE81F97195666D407DBB5689F8289A0513DF (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___prepareCompleted_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___prepareCompleted_4);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m384F2CD1412D92561E7A489C05D1F78A7EC931DD (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___loopPointReached_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___loopPointReached_5);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_loopPointReached_mF8DD445E1CE55B1F4F1AB40ED11DBCA8892930C6 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___loopPointReached_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___loopPointReached_5);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_started(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_started_m6CE7943E721F775D734462A8CAB8B61519FAA08F (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___started_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___started_6);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_started(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_started_m1CFF6E499642737A44F18EE9D29DADAABA52E906 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___started_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___started_6);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_frameDropped(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_frameDropped_m25B25C5116E12B905B1D4D8F97E918206BD29C25 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___frameDropped_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___frameDropped_7);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_frameDropped(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_frameDropped_m8F5E433D91869FFB7E643C612E09D5FB19E5D3B9 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___frameDropped_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___frameDropped_7);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_errorReceived(UnityEngine.Video.VideoPlayer/ErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_errorReceived_mDB5EB3E78A571249C101BF6A7CB394A8AF7C0B6A (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* V_0 = NULL;
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* V_1 = NULL;
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* V_2 = NULL;
	{
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_0 = __this->___errorReceived_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_2 = V_1;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)CastclassSealed((RuntimeObject*)L_4, ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462_il2cpp_TypeInfo_var));
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462** L_5 = (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462**)(&__this->___errorReceived_8);
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_6 = V_2;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_7 = V_1;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_8;
		L_8 = InterlockedCompareExchangeImpl<ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*>(L_5, L_6, L_7);
		V_0 = L_8;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_9 = V_0;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)L_9) == ((RuntimeObject*)(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_errorReceived(UnityEngine.Video.VideoPlayer/ErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_errorReceived_m419AC4C19034B872B7DB82B59B4E61302213FA2A (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* V_0 = NULL;
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* V_1 = NULL;
	ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* V_2 = NULL;
	{
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_0 = __this->___errorReceived_8;
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_2 = V_1;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)CastclassSealed((RuntimeObject*)L_4, ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462_il2cpp_TypeInfo_var));
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462** L_5 = (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462**)(&__this->___errorReceived_8);
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_6 = V_2;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_7 = V_1;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_8;
		L_8 = InterlockedCompareExchangeImpl<ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*>(L_5, L_6, L_7);
		V_0 = L_8;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_9 = V_0;
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_10 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)L_9) == ((RuntimeObject*)(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_seekCompleted_m9D3C4EE17B93B83E4D806420003DD66B4AF23C0C (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___seekCompleted_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___seekCompleted_9);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_seekCompleted_m9D9A46A6041E3B09C3546F20F05B7BE30A3B73C8 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_0 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_1 = NULL;
	EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* V_2 = NULL;
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_0 = __this->___seekCompleted_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = V_0;
		V_1 = L_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_2 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)CastclassSealed((RuntimeObject*)L_4, EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411_il2cpp_TypeInfo_var));
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411** L_5 = (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411**)(&__this->___seekCompleted_9);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_6 = V_2;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_7 = V_1;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_9 = V_0;
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_9) == ((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_clockResyncOccurred(UnityEngine.Video.VideoPlayer/TimeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_clockResyncOccurred_m36C7F41F586D5BEA72B624920418EC237EB61A4F (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* V_0 = NULL;
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* V_1 = NULL;
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* V_2 = NULL;
	{
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_0 = __this->___clockResyncOccurred_10;
		V_0 = L_0;
	}

IL_0007:
	{
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_1 = V_0;
		V_1 = L_1;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_2 = V_1;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)CastclassSealed((RuntimeObject*)L_4, TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E_il2cpp_TypeInfo_var));
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E** L_5 = (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E**)(&__this->___clockResyncOccurred_10);
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_6 = V_2;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_7 = V_1;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_9 = V_0;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)L_9) == ((RuntimeObject*)(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_clockResyncOccurred(UnityEngine.Video.VideoPlayer/TimeEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_clockResyncOccurred_m2C1839586C69C24C9B8E5085CF1A98DDC5AF7074 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* V_0 = NULL;
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* V_1 = NULL;
	TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* V_2 = NULL;
	{
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_0 = __this->___clockResyncOccurred_10;
		V_0 = L_0;
	}

IL_0007:
	{
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_1 = V_0;
		V_1 = L_1;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_2 = V_1;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)CastclassSealed((RuntimeObject*)L_4, TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E_il2cpp_TypeInfo_var));
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E** L_5 = (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E**)(&__this->___clockResyncOccurred_10);
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_6 = V_2;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_7 = V_1;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_8;
		L_8 = InterlockedCompareExchangeImpl<TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*>(L_5, L_6, L_7);
		V_0 = L_8;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_9 = V_0;
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_10 = V_1;
		if ((!(((RuntimeObject*)(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)L_9) == ((RuntimeObject*)(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_sendFrameReadyEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_sendFrameReadyEvents_m248F4B727D2674717F6F77F7FADF76C1940EFC38 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	typedef bool (*VideoPlayer_get_sendFrameReadyEvents_m248F4B727D2674717F6F77F7FADF76C1940EFC38_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*);
	static VideoPlayer_get_sendFrameReadyEvents_m248F4B727D2674717F6F77F7FADF76C1940EFC38_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_sendFrameReadyEvents_m248F4B727D2674717F6F77F7FADF76C1940EFC38_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_sendFrameReadyEvents()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_sendFrameReadyEvents_m21BA78E2E7F3E69B74DE740327F4798374DE7FE3 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*VideoPlayer_set_sendFrameReadyEvents_m21BA78E2E7F3E69B74DE740327F4798374DE7FE3_ftn) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, bool);
	static VideoPlayer_set_sendFrameReadyEvents_m21BA78E2E7F3E69B74DE740327F4798374DE7FE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_set_sendFrameReadyEvents_m21BA78E2E7F3E69B74DE740327F4798374DE7FE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Video.VideoPlayer::add_frameReady(UnityEngine.Video.VideoPlayer/FrameReadyEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_frameReady_m8408E7B2AB88FFF43E260EFF139579C2146741CE (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* V_0 = NULL;
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* V_1 = NULL;
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* V_2 = NULL;
	{
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_0 = __this->___frameReady_11;
		V_0 = L_0;
	}

IL_0007:
	{
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_1 = V_0;
		V_1 = L_1;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_2 = V_1;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)CastclassSealed((RuntimeObject*)L_4, FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8_il2cpp_TypeInfo_var));
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8** L_5 = (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8**)(&__this->___frameReady_11);
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_6 = V_2;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_7 = V_1;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_8;
		L_8 = InterlockedCompareExchangeImpl<FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*>(L_5, L_6, L_7);
		V_0 = L_8;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_9 = V_0;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)L_9) == ((RuntimeObject*)(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_frameReady(UnityEngine.Video.VideoPlayer/FrameReadyEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_remove_frameReady_mE7D5C9E4A9D8D34EC6186B570348B54EFEF7FE32 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* V_0 = NULL;
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* V_1 = NULL;
	FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* V_2 = NULL;
	{
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_0 = __this->___frameReady_11;
		V_0 = L_0;
	}

IL_0007:
	{
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_1 = V_0;
		V_1 = L_1;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_2 = V_1;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)CastclassSealed((RuntimeObject*)L_4, FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8_il2cpp_TypeInfo_var));
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8** L_5 = (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8**)(&__this->___frameReady_11);
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_6 = V_2;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_7 = V_1;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_8;
		L_8 = InterlockedCompareExchangeImpl<FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*>(L_5, L_6, L_7);
		V_0 = L_8;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_9 = V_0;
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_10 = V_1;
		if ((!(((RuntimeObject*)(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)L_9) == ((RuntimeObject*)(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokePrepareCompletedCallback_Internal_mF483B141E9AF0B553FF87B32A0EE54E40BE21EFD (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___prepareCompleted_4;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___prepareCompleted_4;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		NullCheck(L_4);
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameReadyCallback_Internal_mF5F02FE6BBEA70C62108F3FD836E1B378CB9F5E7 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_1 = L_0->___frameReady_11;
		V_0 = (bool)((!(((RuntimeObject*)(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* L_4 = L_3->___frameReady_11;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		int64_t L_6 = ___1_frameIdx;
		NullCheck(L_4);
		FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_inline(L_4, L_5, L_6, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeLoopPointReachedCallback_Internal_m090FD00BB12721EB3CEB337E30687D5DE6B1EBD6 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___loopPointReached_5;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___loopPointReached_5;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		NullCheck(L_4);
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeStartedCallback_Internal_mBDD186C95E57DD264CD0957FA46D9F65728C67EF (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___started_6;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___started_6;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		NullCheck(L_4);
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeFrameDroppedCallback_Internal_m6E6B6353404AF76AB16D1433B8553659B0744DC0 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___frameDropped_7;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___frameDropped_7;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		NullCheck(L_4);
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeErrorReceivedCallback_Internal_m91E59ED70189824AB2C5D0AEB47742130EE98574 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_errorStr, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_1 = L_0->___errorReceived_8;
		V_0 = (bool)((!(((RuntimeObject*)(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* L_4 = L_3->___errorReceived_8;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		String_t* L_6 = ___1_errorStr;
		NullCheck(L_4);
		ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_inline(L_4, L_5, L_6, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeSeekCompletedCallback_Internal_m62AEB9826ACE95B88CC60220375C1C7EF5EEEE1F (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_1 = L_0->___seekCompleted_9;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* L_4 = L_3->___seekCompleted_9;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		NullCheck(L_4);
		EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline(L_4, L_5, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m743B8421E9538761141364EBDCEBC673BA58D8C6 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_0 = ___0_source;
		NullCheck(L_0);
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_1 = L_0->___clockResyncOccurred_10;
		V_0 = (bool)((!(((RuntimeObject*)(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_3 = ___0_source;
		NullCheck(L_3);
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* L_4 = L_3->___clockResyncOccurred_10;
		VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* L_5 = ___0_source;
		double L_6 = ___1_seconds;
		NullCheck(L_4);
		TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_inline(L_4, L_5, L_6, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer__ctor_m309536693DD1F20C0D1E6ABBF5FC48858746C6B6 (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* __this, const RuntimeMethod* method) 
{
	{
		Behaviour__ctor_m00422B6EFEA829BCB116D715E74F1EAD2CB6F4F8(__this, NULL);
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
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_Multicast(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* currentDelegate = reinterpret_cast<EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenInst(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	NullCheck(___0_source);
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, method);
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStatic(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, method);
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStaticInvoker(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	InvokerActionInvoker1< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source);
}
void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_ClosedStaticInvoker(EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mFCF62E0BB29DD3D2B2F1306BD8657E374CF60903 (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15 (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_Multicast(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* currentDelegate = reinterpret_cast<ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, ___1_message, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenInst(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	NullCheck(___0_source);
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_message, method);
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStatic(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_message, method);
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStaticInvoker(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker2< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source, ___1_message);
}
void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_ClosedStaticInvoker(ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source, ___1_message);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler__ctor_m78073CD72C64AAFAF54A01702919A847185F4C58 (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5 (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_Multicast(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* currentDelegate = reinterpret_cast<FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, ___1_frameIdx, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenInst(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	NullCheck(___0_source);
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_frameIdx, method);
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStatic(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_frameIdx, method);
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStaticInvoker(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	InvokerActionInvoker2< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source, ___1_frameIdx);
}
void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_ClosedStaticInvoker(FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source, ___1_frameIdx);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler__ctor_mD875F736BCA2A2128427AB0546B5081ED3B22D56 (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235 (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_frameIdx, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_Multicast(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* currentDelegate = reinterpret_cast<TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_source, ___1_seconds, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenInst(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	NullCheck(___0_source);
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_seconds, method);
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStatic(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_source, ___1_seconds, method);
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStaticInvoker(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	InvokerActionInvoker2< VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_source, ___1_seconds);
}
void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_ClosedStaticInvoker(TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_source, ___1_seconds);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler__ctor_m7BF78A616C8FF71B3A7CA62B1A03446A5C581309 (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_Multicast;
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_seconds, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m8A3288B6DF1FE2699A58EA22D0B830BB20E94E15_inline (EventHandler_tE1FA51515FC895E3A02E317912FBDCDCF390A411* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FrameReadyEventHandler_Invoke_m73FF71F81A620194421226D8A98C64FB82E7B235_inline (FrameReadyEventHandler_tDEDADF060B051C2953122274EBF3896AF48735E8* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, int64_t ___1_frameIdx, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, int64_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_frameIdx, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorEventHandler_Invoke_m0601D855B85F5053A0A10A0166A8CE469D4672C5_inline (ErrorEventHandler_t6DD292ED79129AF67D909EDA603DA9DC5C762462* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_message, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeEventHandler_Invoke_m2327761543815FB7181FFF73E87FC5EC0F84349D_inline (TimeEventHandler_t8F77A92148F1A0F37AE8DE9CA7E25D90D001DC1E* __this, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3* ___0_source, double ___1_seconds, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, VideoPlayer_t48EA4A8117B822BC59590150DED9AD46C62F65D3*, double, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_source, ___1_seconds, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
