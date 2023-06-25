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
    /// ��Դϵͳ����ģʽ
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
        //    Debug.Log("�����ȡ�汾����");
        //    await request.SendWebRequest().WithCancellation(cts.Token);
        //}
        //catch (OperationCanceledException ex)
        //{
        //    if (ex.CancellationToken == cts.Token)
        //    {
        //        Debug.Log("��ȡ�汾�ļ�ʧ��!");
        //    }
        //}
        //Debug.Log("��ȡ�汾");
        //var data = request.downloadHandler.text;
        //Debug.Log(data);
        //Version = data;
        // ��ʼ����Դϵͳ
        Debug.Log("��ʼʵ����Yooasset");
        YooAssets.Initialize();
        YooAssets.SetOperationSystemMaxTimeSlice(30);
        // ����Ĭ�ϵ���Դ��
        string packageName = PackageName;
        TestPackage = YooAssets.TryGetPackage(packageName);
        if (TestPackage == null)
        {
            TestPackage = YooAssets.CreatePackage(packageName);
            YooAssets.SetDefaultPackage(TestPackage);
        }
        InitializationOperation initializationOperation = null;
        // ���ø���Դ��ΪĬ�ϵ���Դ��������ʹ��YooAssets��ؼ��ؽӿڼ��ظ���Դ�����ݡ�
        if (PlayMode == EPlayMode.EditorSimulateMode)
        {
            var createParameters = new EditorSimulateModeParameters();
            createParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(packageName);
            initializationOperation = TestPackage.InitializeAsync(createParameters);
        }

        // ��������ģʽ
        if (PlayMode == EPlayMode.OfflinePlayMode)
        {
            var createParameters = new OfflinePlayModeParameters();
            createParameters.DecryptionServices = new GameDecryptionServices();
            initializationOperation = TestPackage.InitializeAsync(createParameters);
        }

        // ��������ģʽ
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
        Debug.Log("Yooasset��ʼ�����");
        if (TestPackage.InitializeStatus != EOperationStatus.Succeed)
        {
            Debug.Log("��Դ������ʧ��");
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
                Debug.Log("����Ԥ����Ϊ��");
            }
            obj.Result.transform.parent = GameObject.Find("Canvas").transform;
            Debug.Log("ִ�з���");
        }
        
    }
    private string GetHostServerURL()
    {
        //string hostServerIP = "http://10.0.2.2"; //��׿ģ������ַ
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
            Debug.Log("��������"+path);
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
            Debug.Log("��������" + path);
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
            Debug.Log($"�����ȸ���Dll:{DllName}");
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
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
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
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(data, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}
