#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnCreate(UniFramework.Machine.StateMachine)
// 0x00000002 Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnEnter()
// 0x00000003 Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnUpdate()
// 0x00000004 Cysharp.Threading.Tasks.UniTask UniFramework.Machine.IStateNode::OnExit()
// 0x00000005 System.Void UniFramework.Machine.StateMachine::set_Owner(System.Object)
extern void StateMachine_set_Owner_mDAE8EE7AB5BE3B2D6FE1755C9C79CC431561C316 (void);
// 0x00000006 System.Object UniFramework.Machine.StateMachine::get_Owner()
extern void StateMachine_get_Owner_m49E4A33B3B6AAD014D9C1D295DB805A7F5B7FC01 (void);
// 0x00000007 System.String UniFramework.Machine.StateMachine::get_CurrentNode()
extern void StateMachine_get_CurrentNode_m6CB25CAA3215C7793482228A23FE8669CF3E4B46 (void);
// 0x00000008 System.String UniFramework.Machine.StateMachine::get_PreviousNode()
extern void StateMachine_get_PreviousNode_m9E3A042D06D99B0E58B6C61B475672871FF2D3B2 (void);
// 0x00000009 System.Void UniFramework.Machine.StateMachine::.ctor()
extern void StateMachine__ctor_m2D93BAFBFD22CD4CDDBC50BAED152913618E342D (void);
// 0x0000000A System.Void UniFramework.Machine.StateMachine::.ctor(System.Object)
extern void StateMachine__ctor_m8CA8B8EF27230E0CFAF3D1C99872F8EC5BCE3156 (void);
// 0x0000000B System.Void UniFramework.Machine.StateMachine::Update()
extern void StateMachine_Update_mB79A151493EFB3619B3A2F25A894798EAD1D5F2D (void);
// 0x0000000C System.Void UniFramework.Machine.StateMachine::Run()
// 0x0000000D System.Void UniFramework.Machine.StateMachine::Run(System.Type)
extern void StateMachine_Run_mB4A68B1717C52940D30CBC9F0DADFA3436434DE1 (void);
// 0x0000000E System.Void UniFramework.Machine.StateMachine::Run(System.String)
extern void StateMachine_Run_m133C15833904C92AE963ACBBE0AEF453DDCBEED3 (void);
// 0x0000000F System.Void UniFramework.Machine.StateMachine::AddNode()
// 0x00000010 System.Void UniFramework.Machine.StateMachine::AddNode(UniFramework.Machine.IStateNode)
extern void StateMachine_AddNode_m45D05458E13FFEBD2789B9F4E557F967951D78E2 (void);
// 0x00000011 System.Void UniFramework.Machine.StateMachine::ChangeState()
// 0x00000012 System.Void UniFramework.Machine.StateMachine::ChangeState(System.Type)
extern void StateMachine_ChangeState_mAAB5B4FE9C454ACEE0FF74E04323A5C11BF614C8 (void);
// 0x00000013 System.Void UniFramework.Machine.StateMachine::ChangeState(System.String)
extern void StateMachine_ChangeState_m62DE49311ADABBCDBAF8EB4B96657576368C21EB (void);
// 0x00000014 UniFramework.Machine.IStateNode UniFramework.Machine.StateMachine::TryGetNode(System.String)
extern void StateMachine_TryGetNode_mE559CD63A7B23C07D6CAF7D27BEBE66ED216B4D0 (void);
// 0x00000015 System.Void UniFramework.Machine.UniLogger::Log(System.String)
extern void UniLogger_Log_mD05349C36E68D353D1AAC518BE7BBD5862BA8B8D (void);
// 0x00000016 System.Void UniFramework.Machine.UniLogger::Warning(System.String)
extern void UniLogger_Warning_m73AC00811B49F98A238C94C98BB26E0D66E77C1B (void);
// 0x00000017 System.Void UniFramework.Machine.UniLogger::Error(System.String)
extern void UniLogger_Error_mDE47C13D69BF7D8D4B8A66A962653C797C63A975 (void);
static Il2CppMethodPointer s_methodPointers[23] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	StateMachine_set_Owner_mDAE8EE7AB5BE3B2D6FE1755C9C79CC431561C316,
	StateMachine_get_Owner_m49E4A33B3B6AAD014D9C1D295DB805A7F5B7FC01,
	StateMachine_get_CurrentNode_m6CB25CAA3215C7793482228A23FE8669CF3E4B46,
	StateMachine_get_PreviousNode_m9E3A042D06D99B0E58B6C61B475672871FF2D3B2,
	StateMachine__ctor_m2D93BAFBFD22CD4CDDBC50BAED152913618E342D,
	StateMachine__ctor_m8CA8B8EF27230E0CFAF3D1C99872F8EC5BCE3156,
	StateMachine_Update_mB79A151493EFB3619B3A2F25A894798EAD1D5F2D,
	NULL,
	StateMachine_Run_mB4A68B1717C52940D30CBC9F0DADFA3436434DE1,
	StateMachine_Run_m133C15833904C92AE963ACBBE0AEF453DDCBEED3,
	NULL,
	StateMachine_AddNode_m45D05458E13FFEBD2789B9F4E557F967951D78E2,
	NULL,
	StateMachine_ChangeState_mAAB5B4FE9C454ACEE0FF74E04323A5C11BF614C8,
	StateMachine_ChangeState_m62DE49311ADABBCDBAF8EB4B96657576368C21EB,
	StateMachine_TryGetNode_mE559CD63A7B23C07D6CAF7D27BEBE66ED216B4D0,
	UniLogger_Log_mD05349C36E68D353D1AAC518BE7BBD5862BA8B8D,
	UniLogger_Warning_m73AC00811B49F98A238C94C98BB26E0D66E77C1B,
	UniLogger_Error_mDE47C13D69BF7D8D4B8A66A962653C797C63A975,
};
static const int32_t s_InvokerIndices[23] = 
{
	0,
	0,
	0,
	0,
	7387,
	9151,
	9151,
	9151,
	9275,
	7387,
	9275,
	0,
	7387,
	7387,
	0,
	7387,
	0,
	7387,
	7387,
	6599,
	12519,
	12519,
	12519,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x0600000C, { 0, 1 } },
	{ 0x0600000F, { 1, 1 } },
	{ 0x06000011, { 2, 1 } },
};
extern const uint32_t g_rgctx_TNode_t38345ABF613B2B1D1B1739643061A003B799BBCA;
extern const uint32_t g_rgctx_TNode_tEEAD80CC780CE8ABBC1C95BFD17104777438A13B;
extern const uint32_t g_rgctx_TNode_t3A169A3F5F7B717AB1EE6AC9867E313A64802669;
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TNode_t38345ABF613B2B1D1B1739643061A003B799BBCA },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TNode_tEEAD80CC780CE8ABBC1C95BFD17104777438A13B },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TNode_t3A169A3F5F7B717AB1EE6AC9867E313A64802669 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UniMachine_CodeGenModule;
const Il2CppCodeGenModule g_UniMachine_CodeGenModule = 
{
	"UniMachine.dll",
	23,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
