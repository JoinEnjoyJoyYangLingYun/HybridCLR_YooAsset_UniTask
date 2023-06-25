using UnityEngine;
using UniFramework.Event;
using UniFramework.Singleton;
using YooAsset;
using Cysharp.Threading.Tasks;
using UnityEngine.Networking;
using System.Threading;
using System;
using System.Collections.Generic;
using System.Reflection;
using HybridCLR;
using System.IO;
public class Boot : MonoBehaviour
{
	/// <summary>
	/// 资源系统运行模式
	/// </summary>
	public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;

	void Awake()
	{
		Screen.sleepTimeout = SleepTimeout.NeverSleep; 
		Debug.Log($"资源系统运行模式：{PlayMode}");
#if !UNITY_EDITOR
		if(PlayMode!= EPlayMode.HostPlayMode)
        {
			PlayMode = EPlayMode.HostPlayMode;
			Debug.Log($"检测到真机运行,已切换运行模式至：{PlayMode}");
		}
#endif
		Application.targetFrameRate = 60;
		Application.runInBackground = true;
	}
	async UniTask Start()
	{
		// 初始化事件系统
		UniEvent.Initalize();

		// 初始化单例系统
		UniSingleton.Initialize();

		// 初始化资源系统
		YooAssets.Initialize();
		YooAssets.SetOperationSystemMaxTimeSlice(30);
		// 创建补丁管理器
		UniSingleton.CreateSingleton<PatchManager>();

		// 开始补丁更新流程
		PatchManager.Instance.Run(PlayMode);
	}
}