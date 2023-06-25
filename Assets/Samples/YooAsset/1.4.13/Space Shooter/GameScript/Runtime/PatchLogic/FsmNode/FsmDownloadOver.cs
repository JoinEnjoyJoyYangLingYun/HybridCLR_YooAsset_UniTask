using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using Cysharp.Threading.Tasks;

/// <summary>
/// 下载完毕
/// </summary>
internal class FsmDownloadOver : IStateNode
{
	private StateMachine _machine;

	async UniTask IStateNode.OnCreate(StateMachine machine)
	{
		_machine = machine;
	}
	async UniTask IStateNode.OnEnter()
	{
		_machine.ChangeState<FsmLoadHotUpdateDll>();
	}
	async UniTask IStateNode.OnUpdate()
	{
	}
	async UniTask IStateNode.OnExit()
	{
	}
}