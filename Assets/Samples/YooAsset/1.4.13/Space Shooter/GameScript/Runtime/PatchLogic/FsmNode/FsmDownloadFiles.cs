using System.Collections;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Singleton;
using YooAsset;
using Cysharp.Threading.Tasks;

/// <summary>
/// 下载更新文件
/// </summary>
public class FsmDownloadFiles : IStateNode
{
	private StateMachine _machine;

	async UniTask IStateNode.OnCreate(StateMachine machine)
	{
		_machine = machine;
	}
	async UniTask IStateNode.OnEnter()
	{
		PatchEventDefine.PatchStatesChange.SendEventMessage("开始下载补丁文件！");
		await BeginDownload();
	}
	async UniTask IStateNode.OnUpdate()
	{
	}
	async UniTask IStateNode.OnExit()
	{
	}

	async UniTask BeginDownload()
	{
		var downloader = PatchManager.Instance.Downloader;

		// 注册下载回调
		downloader.OnDownloadErrorCallback = PatchEventDefine.WebFileDownloadFailed.SendEventMessage;
		downloader.OnDownloadProgressCallback = PatchEventDefine.DownloadProgressUpdate.SendEventMessage;
		downloader.BeginDownload();
		await downloader.ToUniTask();

		// 检测下载结果
		if (downloader.Status != EOperationStatus.Succeed)
			return;

		_machine.ChangeState<FsmLoadHotUpdateDll>();
	}
}