
using Cysharp.Threading.Tasks;

namespace UniFramework.Machine
{
	public interface IStateNode
	{
		UniTask OnCreate(StateMachine machine);
		UniTask OnEnter();
		UniTask OnUpdate();
		UniTask OnExit();
	}
}