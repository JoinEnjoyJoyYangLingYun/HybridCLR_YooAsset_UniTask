using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Window;
using UniFramework.Singleton;
using YooAsset;
using Cysharp.Threading.Tasks;
using System;

internal class FsmLunchHotUpdate : IStateNode
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
		UniWindow.CloseWindow<UIHomeWindow>();
	}

	async UniTask Prepare()
	{
		
		var package = YooAssets.GetPackage(PublicData.PackageName);
		var loadHandle = package.LoadAssetAsync<GameObject>("HotUpdateLuncher");
		await loadHandle.ToUniTask();
		if(loadHandle.Status== EOperationStatus.Succeed)
        {
			var instantiateHandle = loadHandle.InstantiateAsync();
			await instantiateHandle.ToUniTask();
			var obj = instantiateHandle.Result;
			GameObject.DontDestroyOnLoad(obj);
			Debug.Log("加载热更新预制体完成");
		}
		package.UnloadUnusedAssets();
	}
}