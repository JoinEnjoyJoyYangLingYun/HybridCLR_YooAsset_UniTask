using Cysharp.Threading.Tasks;
using HybridCLR;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UniFramework.Machine;
using UniFramework.Singleton;
using UnityEngine;
using YooAsset;
using Newtonsoft.Json;
public class FsmLoadHotUpdateDll : IStateNode
{
    private StateMachine _machine;

    async UniTask IStateNode.OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    async UniTask IStateNode.OnEnter()
    {
        // 创建游戏管理器
        UniSingleton.CreateSingleton<HotUpdateManager>();
        await LoadMetadataForAOTAssemblies();
        await LoadHotUpdateAssemblies();
        _machine.ChangeState<FsmClearCache>();
    }

    async UniTask IStateNode.OnExit()
    {

    }

    async UniTask IStateNode.OnUpdate()
    {
;
    }

    async UniTask LoadHotUpdateAssemblies()
    {
        var package = YooAssets.TryGetPackage(PublicData.PackageName);
        if (package == null)
        {
            Debug.Log("包获取失败");
        }
        var handle = package.LoadRawFileAsync("HotUpdateDLLList");
        await handle.ToUniTask();
        var data = handle.GetRawFileText();
        var dllNames = JsonConvert.DeserializeObject<List<string>>(data);
        foreach (var DllName in dllNames)
        {
            var dataHandle = package.LoadRawFileAsync(DllName);
            await dataHandle.ToUniTask();
            if (dataHandle.Status != EOperationStatus.Succeed)
            {
                Debug.Log("资源加载失败" + DllName);
                return;
            }
            var dllData = dataHandle.GetRawFileData();
            if (dllData == null)
            {
                Debug.Log("获取Dll数据失败");
                return;
            }
            Assembly assembly = Assembly.Load(dllData);
            HotUpdateManager.Instance.HotUpdateAssemblies.Add(DllName, assembly);
            Debug.Log(assembly.GetTypes());
            Debug.Log($"加载热更新Dll:{DllName}");
        }
    }
    public async UniTask LoadMetadataForAOTAssemblies()
    {
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        var package = YooAssets.TryGetPackage(PublicData.PackageName);
        if (package == null)
        {
            Debug.Log("包获取失败");
        }
        var handle = package.LoadRawFileAsync("AOTDLLList");
        await handle.ToUniTask();
        var data = handle.GetRawFileText();
        var dllNames = JsonConvert.DeserializeObject<List<string>>(data);
        foreach (var name in dllNames)
        {
            var dataHandle = package.LoadRawFileAsync(name);
            await dataHandle.ToUniTask();
            var dllData = dataHandle.GetRawFileData();
            if (data == null)
            {
                continue;
            }
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllData, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{name}. mode:{mode} ret:{err}");
        }
    }
}
