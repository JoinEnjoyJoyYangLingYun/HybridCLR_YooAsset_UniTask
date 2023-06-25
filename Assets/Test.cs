using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Reflection;
using System;
using UnityEngine.UI;
using HybridCLR;
using System.Runtime;
using UnityEngine.Networking;
using Cysharp.Threading.Tasks;
using System.Threading;
using System.Linq;
using YooAsset;
using static FsmInitialize;

public class Test : MonoBehaviour
{
    /// <summary>
    /// 资源系统运行模式
    /// </summary>
    public EPlayMode PlayMode = EPlayMode.EditorSimulateMode;

    public ResourcePackage TestPackage;

    public static string PackageName = "TestPackage";
    public static string Version="V1.0";
    public static string HttpHost = "http://192.168.5.6:8888/";
    public static Dictionary<string, Assembly> HotUpdateAssemblies;
    // Start is called before the first frame update
    async UniTaskVoid Start()
    {
        HotUpdateAssemblies = new Dictionary<string, Assembly>();
        //var data = await Request("http://192.168.0.148:8888/VERSION.txt");
        Version = await RequestText($"{HttpHost}VERSION.txt");
        //UnityWebRequest request = new UnityWebRequest("http://192.168.0.148:8888/VERSION.txt");
        //DownloadHandlerBuffer dH = new DownloadHandlerBuffer();
        //request.downloadHandler = dH;
        //var cts = new CancellationTokenSource();
        //cts.CancelAfterSlim(TimeSpan.FromSeconds(3));
        //try
        //{
        //    Debug.Log("发起获取版本请求");
        //    await request.SendWebRequest().WithCancellation(cts.Token);
        //}
        //catch (OperationCanceledException ex)
        //{
        //    if (ex.CancellationToken == cts.Token)
        //    {
        //        Debug.Log("获取版本文件失败!");
        //    }
        //}
        //Debug.Log("读取版本");
        //var data = request.downloadHandler.text;
        //Debug.Log(data);
        //Version = data;
        // 初始化资源系统
        Debug.Log("开始实例化Yooasset");
        YooAssets.Initialize();
        YooAssets.SetOperationSystemMaxTimeSlice(30);
        // 创建默认的资源包
        string packageName = PackageName;
        TestPackage = YooAssets.TryGetPackage(packageName);
        if (TestPackage == null)
        {
            TestPackage = YooAssets.CreatePackage(packageName);
            YooAssets.SetDefaultPackage(TestPackage);
        }
        InitializationOperation initializationOperation = null;
        // 设置该资源包为默认的资源包，可以使用YooAssets相关加载接口加载该资源包内容。
        if (PlayMode == EPlayMode.EditorSimulateMode)
        {
            var createParameters = new EditorSimulateModeParameters();
            createParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(packageName);
            initializationOperation = TestPackage.InitializeAsync(createParameters);
        }

        // 单机运行模式
        if (PlayMode == EPlayMode.OfflinePlayMode)
        {
            var createParameters = new OfflinePlayModeParameters();
            createParameters.DecryptionServices = new GameDecryptionServices();
            initializationOperation = TestPackage.InitializeAsync(createParameters);
        }

        // 联机运行模式
        if (PlayMode == EPlayMode.HostPlayMode)
        {
            var createParameters = new HostPlayModeParameters();
            createParameters.DecryptionServices = new GameDecryptionServices();
            createParameters.QueryServices = new GameQueryServices();
            createParameters.DefaultHostServer = GetHostServerURL();
            createParameters.FallbackHostServer = GetHostServerURL();
            initializationOperation = TestPackage.InitializeAsync(createParameters);
        }
        await initializationOperation.ToUniTask();
        Debug.Log("Yooasset初始化完成");
        if (TestPackage.InitializeStatus != EOperationStatus.Succeed)
        {
            Debug.Log("资源包加载失败");
            return;
        }
        await LoadMetadataForAOTAssemblies();
        await LoadHotUpdateAssemblies();
        //Assembly _hotupdateass = null;
        //var data = await Request("http://192.168.0.148:8888/HotFixDemo.dll");
        //if (data == null)
        //{
        //    data = await Request("http://192.168.5.6:8088/HotFixDemo.dll");
        //}
        //_hotupdateass = Assembly.Load(data);
        //if (_hotupdateass == null)
        //{
        //    return;
        //}

        //Type entrytype = _hotupdateass.GetType("HotFixTest");
        //entrytype.GetMethod("ToDebug").Invoke(null, null);
        AssetOperationHandle handle = TestPackage.LoadAssetAsync<GameObject>("ImagePrefab");
        await handle.ToUniTask();
        if (handle.Status == EOperationStatus.Succeed)
        {
            var obj = handle.InstantiateAsync();
            await obj.ToUniTask();
            if (obj.Result == null)
            {
                Debug.Log("加载预制体为空");
            }
            obj.Result.transform.parent = GameObject.Find("Canvas").transform;
            Debug.Log("执行方法");
        }
        
    }
    private string GetHostServerURL()
    {
        //string hostServerIP = "http://10.0.2.2"; //安卓模拟器地址
        string hostServerIP = HttpHost;
        string gameVersion = Version;

#if UNITY_EDITOR
        if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.Android)
            return $"{hostServerIP}/CDN/Android/{TestPackage.PackageName}/{gameVersion}";
        else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.iOS)
            return $"{hostServerIP}/CDN/IPhone/{TestPackage.PackageName}/{gameVersion}";
        else if (UnityEditor.EditorUserBuildSettings.activeBuildTarget == UnityEditor.BuildTarget.WebGL)
            return $"{hostServerIP}/CDN/WebGL/{TestPackage.PackageName}/{gameVersion}";
        else
            return $"{hostServerIP}/CDN/PC/{TestPackage.PackageName}/{gameVersion}";
#else
		if (Application.platform == RuntimePlatform.Android)
			return $"{hostServerIP}/CDN/Android/{gameVersion}";
		else if (Application.platform == RuntimePlatform.IPhonePlayer)
			return $"{hostServerIP}/CDN/IPhone/{gameVersion}";
		else if (Application.platform == RuntimePlatform.WebGLPlayer)
			return $"{hostServerIP}/CDN/WebGL/{gameVersion}";
		else
			return $"{hostServerIP}/CDN/PC/{gameVersion}";
#endif
    }
    async UniTask<byte[]> Request(string path)
    {
        UnityWebRequest request = new UnityWebRequest(path);
        DownloadHandlerBuffer dH = new DownloadHandlerBuffer();
        request.downloadHandler = dH;
        var cts = new CancellationTokenSource();
        cts.CancelAfterSlim(TimeSpan.FromSeconds(3));
        try
        {
            Debug.Log("发起请求"+path);
            await request.SendWebRequest().WithCancellation(cts.Token);
        }
        catch (OperationCanceledException ex)
        {
            if (ex.CancellationToken == cts.Token)
            {
                Debug.Log("Timeout!");
            }
        }
        if(request.result != UnityWebRequest.Result.Success)
        {
            request.Dispose();
            return null;
        }
        var data = request.downloadHandler.data;
        request.Dispose();
        return data;
    }
    async UniTask<string> RequestText(string path)
    {
        UnityWebRequest request = new UnityWebRequest(path);
        DownloadHandlerBuffer dH = new DownloadHandlerBuffer();
        request.downloadHandler = dH;
        var cts = new CancellationTokenSource();
        cts.CancelAfterSlim(TimeSpan.FromSeconds(3));
        try
        {
            Debug.Log("发起请求" + path);
            await request.SendWebRequest().WithCancellation(cts.Token);
        }
        catch (OperationCanceledException ex)
        {
            if (ex.CancellationToken == cts.Token)
            {
                Debug.Log("Timeout!");
            }
        }
        if (request.result != UnityWebRequest.Result.Success)
        {
            request.Dispose();
            return null;
        }
        var data = request.downloadHandler.text;
        request.Dispose();
        return data;
    }
    // Update is called once per frame
    void Update()
    {

    }
    async UniTask LoadHotUpdateAssemblies()
    {
        List<string> DllNames = new List<string>()
        {
            "HotUpdate.dll"
        };
        foreach (var DllName in DllNames)
        {
            var handle = TestPackage.LoadRawFileAsync(DllName);
            await handle.ToUniTask();
            var data = handle.GetRawFileData();
            Assembly assembly = Assembly.Load(data);
            HotUpdateAssemblies.Add(DllName, assembly);
            Debug.Log($"加载热更新Dll:{DllName}");
        }
    }
    public async UniTask LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
            "System.Runtime.dll",
            "UniTask.dll"
        };
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            var handle = TestPackage.LoadRawFileAsync(aotDllName);
            await handle.ToUniTask();
            var data = handle.GetRawFileData();
            if (data == null)
            {
                continue;
            }
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(data, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}
