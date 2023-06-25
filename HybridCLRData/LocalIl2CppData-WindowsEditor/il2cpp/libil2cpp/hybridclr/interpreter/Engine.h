#pragma once

#include <stack>

#include "../CommonDef.h"

#include "gc/GarbageCollector.h"
#include "vm/Exception.h"
#include "vm/StackTrace.h"

#include "../metadata/MetadataUtil.h"
#include "../Config.h"

#include "InterpreterDefs.h"
#include "MemoryUtil.h"
#include "MethodBridge.h"


//#if DEBUG
//#define PUSH_STACK_FRAME(method) do { \
//	Il2CppStackFrameInfo stackFrameInfo = { method, (uintptr_t)method->methodPointer }; \
//	il2cpp::vm::StackTrace::PushFrame(stackFrameInfo); \
//} while(0)
//
//#define POP_STACK_FRAME() do { il2cpp::vm::StackTrace::PopFrame(); } while(0)
//
//#else 
#define PUSH_STACK_FRAME(method)
#define POP_STACK_FRAME() 
//#endif

namespace hybridclr
{
namespace interpreter
{

	class MachineState
	{
	public:
		MachineState()
		{
			Config& hc = Config::GetIns();
			_stackSize = -1;
			_stackBase = nullptr;
			_stackTopIdx = 0;

			_frameBase = nullptr;
			_frameCount = -1;
			_frameTopIdx = 0;

			_exceptionFlowBase = nullptr;
			_exceptionFlowCount = -1;
			_exceptionFlowTopIdx = 0;
		}

		~MachineState()
		{
			if (_stackBase)
			{
				il2cpp::gc::GarbageCollector::FreeFixed(_stackBase);
			}
			if (_frameBase)
			{
				IL2CPP_FREE(_frameBase);
			}
			if (_exceptionFlowBase)
			{
				IL2CPP_FREE(_exceptionFlowBase);
			}
		}

		StackObject* AllocArgments(int32_t argCount)
		{
			return AllocStackSlot(argCount);
		}

		StackObject* GetStackBasePtr() const
		{
			return _stackBase;
		}

		int32_t GetStackTop() const
		{
			return _stackTopIdx;
		}

		StackObject* AllocStackSlot(int32_t slotNum)
		{
			if (_stackTopIdx + slotNum > _stackSize)
			{
				if (!_stackBase)
				{
					InitEvalStack();
				}
				if (_stackTopIdx + slotNum > _stackSize)
				{
					il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetStackOverflowException("AllocStackSlot"));
				}
			}
			StackObject* dataPtr = _stackBase + _stackTopIdx;
			_stackTopIdx += slotNum;
#if DEBUG
			std::memset(dataPtr, 0xEA, slotNum * sizeof(StackObject));
#endif
			return dataPtr;
		}

		void SetStackTop(int32_t oldTop)
		{
			_stackTopIdx = oldTop;
		}

		uint32_t GetFrameTopIdx() const
		{
			return _frameTopIdx;
		}

		InterpFrame* PushFrame()
		{
			if (_frameTopIdx >= _frameCount)
			{
				if (!_frameBase)
				{
					InitFrames();
				}
				else
				{
					il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetStackOverflowException("AllocFrame"));
				}
			}
			return _frameBase + _frameTopIdx++;
		}

		void PopFrame()
		{
			IL2CPP_ASSERT(_frameTopIdx > 0);
			--_frameTopIdx;
		}

		void PopFrameN(int32_t count)
		{
			IL2CPP_ASSERT(count > 0 && _frameTopIdx >= count);
			_frameTopIdx -= count;
		}

		InterpFrame* GetTopFrame() const
		{
			if (_frameTopIdx > 0)
			{
				return _frameBase + _frameTopIdx - 1;
			}
			else
			{
				return nullptr;
			}
		}

		ExceptionFlowInfo* AllocExceptionFlow(int32_t count)
		{
			if (_exceptionFlowTopIdx + count >= _exceptionFlowCount)
			{
				if (!_exceptionFlowBase)
				{
					InitExceptionFlows();
				}
				if (_exceptionFlowTopIdx + count >= _exceptionFlowCount)
				{
					il2cpp::vm::Exception::Raise(il2cpp::vm::Exception::GetExecutionEngineException("AllocExceptionFlowZero"));
				}
			}
			ExceptionFlowInfo* efi = _exceptionFlowBase + _exceptionFlowTopIdx;
			_exceptionFlowTopIdx += count;
			return efi;
		}

		uint32_t GetExceptionFlowTopIdx() const
		{
			return _exceptionFlowTopIdx;
		}

		void SetExceptionFlowTopIdx(uint32_t exTopIdx)
		{
			_exceptionFlowTopIdx = exTopIdx;
		}

		void SetExceptionFlowTop(ExceptionFlowInfo* top)
		{
			_exceptionFlowTopIdx = (int32_t)(top - _exceptionFlowBase);
			IL2CPP_ASSERT(_exceptionFlowTopIdx >= 0 && _exceptionFlowTopIdx <= _exceptionFlowCount);
		}

		void PushExecutingImage(const Il2CppImage* image)
		{
			_executingImageStack.push(image);
		}

		void PopExecutingImage()
		{
			_executingImageStack.pop();
		}

		const Il2CppImage* GetTopExecutingImage() const
		{
			if (_executingImageStack.empty())
			{
				return nullptr;
			}
			else
			{
				return _executingImageStack.top();
			}
		}

		void CollectFrames(il2cpp::vm::StackFrames* stackFrames)
		{
			for (int32_t i = 0; i < _frameTopIdx; i++)
			{
				InterpFrame* frame = _frameBase + i;
				const MethodInfo* method = frame->method->method;
				Il2CppStackFrameInfo stackFrameInfo = {
					method
#if HYBRIDCLR_UNITY_2020_OR_NEW
					, (uintptr_t)method->methodPointer
#endif
				};
				stackFrames->push_back(stackFrameInfo);
			}
		}

	private:


		void InitEvalStack()
		{
			Config& hc = Config::GetIns();
			_stackSize = (int32_t)hc.GetInterpreterThreadObjectStackSize();
			_stackBase = (StackObject*)il2cpp::gc::GarbageCollector::AllocateFixed(hc.GetInterpreterThreadObjectStackSize() * sizeof(StackObject), nullptr);
			std::memset(_stackBase, 0, _stackSize * sizeof(StackObject));
			_stackTopIdx = 0;
		}

		void InitFrames()
		{
			Config& hc = Config::GetIns();
			_frameBase = (InterpFrame*)IL2CPP_CALLOC(hc.GetInterpreterThreadFrameStackSize(), sizeof(InterpFrame));
			_frameCount = (int32_t)hc.GetInterpreterThreadFrameStackSize();
			_frameTopIdx = 0;
		}

		void InitExceptionFlows()
		{
			Config& hc = Config::GetIns();
			_exceptionFlowBase = (ExceptionFlowInfo*)IL2CPP_CALLOC(hc.GetInterpreterThreadExceptionFlowSize(), sizeof(ExceptionFlowInfo));
			_exceptionFlowCount = (int32_t)hc.GetInterpreterThreadExceptionFlowSize();
			_exceptionFlowTopIdx = 0;
		}

		StackObject* _stackBase;
		int32_t _stackSize;
		int32_t _stackTopIdx;

		InterpFrame* _frameBase;
		int32_t _frameTopIdx;
		int32_t _frameCount;

		ExceptionFlowInfo* _exceptionFlowBase;
		int32_t _exceptionFlowTopIdx;
		int32_t _exceptionFlowCount;


		std::stack<const Il2CppImage*> _executingImageStack;
	};

	class ExecutingInterpImageScope
	{
	public:
		ExecutingInterpImageScope(MachineState& state, const Il2CppImage* image) : _state(state)
		{
			_state.PushExecutingImage(image);
		}

		~ExecutingInterpImageScope()
		{
			_state.PopExecutingImage();
		}
		
	private:
		MachineState& _state;
	};

	class InterpFrameGroup
	{
	public:
		InterpFrameGroup(MachineState& ms) : _machineState(ms), _stackBaseIdx(ms.GetStackTop()), _frameBaseIdx(ms.GetFrameTopIdx())
		{

		}

		void CleanUpFrames()
		{
			IL2CPP_ASSERT(_machineState.GetFrameTopIdx() >= _frameBaseIdx);
			uint32_t n = _machineState.GetFrameTopIdx() - _frameBaseIdx;
			if (n > 0)
			{
				for (uint32_t i = 0; i < n; i++)
				{
					LeaveFrame();
				}
			}
		}

		InterpFrame* EnterFrameFromInterpreter(const InterpMethodInfo* imi, StackObject* argBase)
		{
#if IL2CPP_ENABLE_PROFILER
			il2cpp_codegen_profiler_method_enter(imi->method);
#endif
			int32_t oldStackTop = _machineState.GetStackTop();
			StackObject* stackBasePtr = _machineState.AllocStackSlot(imi->maxStackSize - imi->argStackObjectSize);
			InterpFrame* newFrame = _machineState.PushFrame();
			*newFrame = { imi, argBase, oldStackTop, nullptr, nullptr, nullptr, 0, 0 };
			PUSH_STACK_FRAME(imi->method);
			return newFrame;
		}


		InterpFrame* EnterFrameFromNative(const InterpMethodInfo* imi, StackObject* argBase)
		{
#if IL2CPP_ENABLE_PROFILER
			il2cpp_codegen_profiler_method_enter(imi->method);
#endif
			int32_t oldStackTop = _machineState.GetStackTop();
			StackObject* stackBasePtr = _machineState.AllocStackSlot(imi->maxStackSize);
			InterpFrame* newFrame = _machineState.PushFrame();
			*newFrame = { imi, stackBasePtr, oldStackTop, nullptr, nullptr, nullptr, 0, 0 };

			// if not prepare arg stack. copy from args
			if (imi->args)
			{
				IL2CPP_ASSERT(imi->argCount == metadata::GetActualArgumentNum(imi->method));
				if (imi->isTrivialCopyArgs)
				{
					CopyStackObject(stackBasePtr, argBase, imi->argStackObjectSize);
				}
				else
				{
					CopyArgs(stackBasePtr, argBase, imi->args, imi->argCount, imi->argStackObjectSize);
				}
			}
			PUSH_STACK_FRAME(imi->method);
			return newFrame;
		}

		InterpFrame* LeaveFrame()
		{
			IL2CPP_ASSERT(_machineState.GetFrameTopIdx() > _frameBaseIdx);
			POP_STACK_FRAME();
			InterpFrame* frame = _machineState.GetTopFrame();
#if IL2CPP_ENABLE_PROFILER
			il2cpp_codegen_profiler_method_exit(frame->method->method);
#endif
			if (frame->exFlowBase)
			{
				_machineState.SetExceptionFlowTop(frame->exFlowBase);
			}
			_machineState.PopFrame();
			_machineState.SetStackTop(frame->oldStackTop);
			return _machineState.GetFrameTopIdx() > _frameBaseIdx ? _machineState.GetTopFrame() : nullptr;
		}

		void* AllocLoc(size_t size)
		{
			uint32_t soNum = (uint32_t)((size + sizeof(StackObject) - 1) / sizeof(StackObject));
			//void* data = _machineState.AllocStackSlot(soNum);
			//std::memset(data, 0, soNum * 8);
			void* data = IL2CPP_MALLOC_ZERO(size);
			return data;
 		}

		size_t GetFrameCount() const { return _machineState.GetFrameTopIdx() - _frameBaseIdx; }
	private:
		MachineState& _machineState;
		int32_t _stackBaseIdx;
		uint32_t _frameBaseIdx;
	};

	class StackObjectAllocScope
	{
	private:
		MachineState& _state;
		const int32_t _originStackTop;
		const int32_t _count;
		StackObject* _data;
	public:
		StackObjectAllocScope(MachineState& state, int32_t count) : _state(state), _count(count), _originStackTop(_state.GetStackTop())
		{
			_data = state.AllocStackSlot(count);
		}

		~StackObjectAllocScope()
		{
			IL2CPP_ASSERT(_state.GetStackTop() > _originStackTop);
			_state.SetStackTop(_originStackTop);
		}

		StackObject* GetData() const { return _data; }
	};
}
}