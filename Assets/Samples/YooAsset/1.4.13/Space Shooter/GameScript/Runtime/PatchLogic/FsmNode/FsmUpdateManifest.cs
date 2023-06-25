using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;
using Cysharp.Threading.Tasks;

/// <summary>
/// 更新资源清单
/// </summary>
public class FsmUpdateManifest : IStateNode
{
	private StateMachine _machine;

	async UniTask IStateNode.OnCreate(StateMachine machine)
	{
		_machine = machine;
	}
	async UniTask IStateNode.OnEnter()
	{
		PatchEventDefine.PatchStatesChange.SendEventMessage("更新资源清单！");
		await UpdateManifest();
	}
	async UniTask IStateNode.OnUpdate()
	{
	}
	async UniTask IStateNode.OnExit()
	{
	}

	async UniTask UpdateManifest()
	{
		bool savePackageVersion = true;
		var package = YooAssets.GetPackage(PublicData.PackageName);
		var operation = package.UpdatePackageManifestAsync(PatchManager.Instance.PackageVersion, savePackageVersion);
		await operation.ToUniTask();

		if(operation.Status == EOperationStatus.Succeed)
		{
			_machine.ChangeState<FsmCreateDownloader>();
		}
		else
		{
			Debug.LogWarning(operation.Error);
			PatchEventDefine.PatchManifestUpdateFailed.SendEventMessage();
		}
	}
}