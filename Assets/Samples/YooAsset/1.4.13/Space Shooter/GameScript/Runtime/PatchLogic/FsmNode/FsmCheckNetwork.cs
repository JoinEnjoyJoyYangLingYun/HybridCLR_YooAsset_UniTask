using Cysharp.Threading.Tasks;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UniFramework.Machine;
using UnityEngine;
using UnityEngine.Networking;

public class FsmCheckNetwork : IStateNode
{
    private StateMachine _machine;

    public async UniTask OnCreate(StateMachine machine)
    {
        _machine = machine;
    }

    public async UniTask OnEnter()
    {
        if (PatchManager.Instance.PlayMode == YooAsset.EPlayMode.EditorSimulateMode)
        {
            _machine.ChangeState<FsmCheckVersion>();
            return;
        }
        bool isHasInternet = false;
        if (Application.internetReachability != NetworkReachability.NotReachable)
        {
            isHasInternet = true;
        }
        UnityWebRequest request = new UnityWebRequest(HttpHelper.HttpHost);
        var cts = new CancellationTokenSource();
        cts.CancelAfterSlim(TimeSpan.FromSeconds(3));
        try
        {
            Debug.Log("发起请求" + HttpHelper.HttpHost);
            await request.SendWebRequest().WithCancellation(cts.Token);
        }
        catch (OperationCanceledException ex)
        {
            if (ex.CancellationToken == cts.Token)
            {
                isHasInternet = false;
                Debug.Log("Timeout!");
            }
        }
        catch (Exception e)
        {
            isHasInternet = false;
            Debug.LogError(e);
        }

        if (request.result != UnityWebRequest.Result.Success)
        {
            isHasInternet = false;
            Debug.Log("链接出错,无法访问" + HttpHelper.HttpHost);
            Debug.Log(request.error);
            request.Dispose();
        }

        if (isHasInternet)
        {
            _machine.ChangeState<FsmCheckVersion>();
        }
        else
        {
            Debug.Log("因网络问题，进入离线加载模式");
            PatchManager.Instance.PlayMode = YooAsset.EPlayMode.OfflinePlayMode;
            _machine.ChangeState<FsmInitialize>();
        }
    }

    public async UniTask OnExit()
    {

    }

    public async UniTask OnUpdate()
    {

    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
}
