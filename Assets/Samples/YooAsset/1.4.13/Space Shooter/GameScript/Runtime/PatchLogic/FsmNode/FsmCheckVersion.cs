using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UniFramework.Machine;
using UnityEngine;
using UnityEngine.Networking;
using YooAsset;

public class FsmCheckVersion : IStateNode
{
    private StateMachine _machine;

    public async UniTask OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public async UniTask OnEnter()
    {
        await CheckVersion();
        _machine.ChangeState<FsmInitialize>();
    }

    async UniTask CheckVersion()
    {
        if (PatchManager.Instance.PlayMode != EPlayMode.HostPlayMode)
        {
            Debug.Log("编辑器模拟运行，无需请求版本文件");
            return;
        }
        UnityWebRequest request = new UnityWebRequest($"{HttpHelper.HttpHost}VERSION.txt");
        DownloadHandlerBuffer dH = new DownloadHandlerBuffer();
        request.downloadHandler = dH;
        var cts = new CancellationTokenSource();
        cts.CancelAfterSlim(TimeSpan.FromSeconds(3));
        try
        {
            Debug.Log("发起获取版本请求");
            await request.SendWebRequest().WithCancellation(cts.Token);
        }
        catch (OperationCanceledException ex)
        {
            if (ex.CancellationToken == cts.Token)
            {
                Debug.Log("获取版本文件失败!");
            }
        }
        Debug.Log("读取版本");
        var data = request.downloadHandler.text;
        Debug.Log(data);
        PublicData.Version = data;
    }
    public async UniTask OnExit()
    {
        
    }

    public async UniTask OnUpdate()
    {
        
    }
}
