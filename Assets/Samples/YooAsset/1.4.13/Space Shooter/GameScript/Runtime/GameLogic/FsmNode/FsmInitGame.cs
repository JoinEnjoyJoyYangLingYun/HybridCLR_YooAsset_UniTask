using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Pooling;
using UniFramework.Window;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;
using Cysharp.Threading.Tasks;
using System;

internal class FsmInitGame : IStateNode
{
	private StateMachine _machine;

	async UniTask IStateNode.OnCreate(StateMachine machine)
	{
		_machine = machine;
	}
	async UniTask IStateNode.OnEnter()
	{
		await Prepare();
	}
	async UniTask IStateNode.OnUpdate()
	{
	}
	async UniTask IStateNode.OnExit()
	{
	}

	private async UniTask Prepare()
	{
		//var handle = YooAssets.LoadAssetAsync<GameObject>("UICanvas");
		//yield return handle;
		//var canvas = handle.InstantiateSync();
		//var desktop = canvas.transform.Find("Desktop").gameObject;
		//GameObject.DontDestroyOnLoad(canvas);

		// 初始化窗口系统
		//UniWindow.Initalize(desktop);

		// 初始化对象池系统
		UniPooling.Initalize();

		_machine.ChangeState<FsmLunchHotUpdate>();
	}
}