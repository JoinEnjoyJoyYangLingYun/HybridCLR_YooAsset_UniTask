using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.Playables;
using System.Reflection;
using System;
using HybridCLR.Editor.Commands;
using HybridCLR.Editor;
using UnityEditorInternal;
using System.IO;
using Cysharp.Threading.Tasks;
using YooAsset.Editor;
using YooAsset;
using Newtonsoft.Json;
using System.Xml;

public class BuildHelper
{
    /// <summary>
    /// ����Ŀ¼·����Assets��һ��
    /// </summary>
    public static string ProjectPath = Application.dataPath.Replace("Assets", "");

    public static string DllPath = string.Format("{0}/HybridCLRData/HotUpdateDlls/Android/", ProjectPath);

    public static string PackageExportPath = string.Format("{0}/BuildPacakage/", ProjectPath);

    public static string HotUpdateAssetsPath = string.Format("{0}/HotUpdateAssets/", Application.dataPath);

    public static string HotUpdateDllPath = string.Format("{0}HotUpdateDll/", HotUpdateAssetsPath);
    /// <summary>
    /// �汾�ļ���
    /// </summary>
    public static string VersionFileName = "/VERSION.txt";

    /// <summary>
    /// �ȸ������õ�Group���ƣ����������ȸ���dll���λ��
    /// </summary>
    public static string HotFixDllGroupName = "HotUpdateDll";

    public static string AOTDLLGroupName = "AOT";
    // Start is called before the first frame update
    static string[] GetBuildScenes()
    {
        List<string> names = new List<string>();
        foreach (EditorBuildSettingsScene e in EditorBuildSettings.scenes)
        {
            if (e == null)
                continue;
            if (e.enabled)
                names.Add(e.path);
        }
        return names.ToArray();
    }

    [MenuItem("���Ϲ���/��APK��")]
    public static void BuildAPK()
    {
        //������AOT�ļ����ٽ��д������ȷ���������ÿⶼ������,��������HybridCLR���޸Ĺ������ߣ��Զ�ִ��һ��GenerateALL
        PrebuildCommand.GenerateAll();

        BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
        buildPlayerOptions.scenes = GetBuildScenes();

        var versionString = File.ReadAllText(Application.streamingAssetsPath + VersionFileName);

        var buildPath = $"{PackageExportPath}{PlayerSettings.productName}_{versionString}_{DateTime.Now.ToString("yyyy_M_d_HH_mm_s")}";
        var buildTarget = EditorUserBuildSettings.activeBuildTarget;

        switch (buildTarget)
        {
            case BuildTarget.Android:
                buildPath = buildPath + ".apk";
                break;
        }
        buildPlayerOptions.locationPathName = buildPath;
        buildPlayerOptions.target = buildTarget;
        buildPlayerOptions.options = BuildOptions.None;
        //ִ�д�� �������֣����·��
        BuildPipeline.BuildPlayer(buildPlayerOptions);

        EditorUtility.ClearProgressBar();
    }
    [MenuItem("���Ϲ���/���ʼAB��")]
    public static void BuildOriginAssetBundle()
    {
        #region ��ȡ��Դ�汾
        CreateVersionFile();
        var versionString = File.ReadAllText(Application.streamingAssetsPath + VersionFileName);
        //var versionStringArray = versionString.Split(".");
        //var version = int.Parse(String.Join("", versionStringArray));

        #endregion

        #region ���DLL��������,�����ȸ����ļ�����ΪRawFile���
        GenerateAOTDllListFile();
        BuildAndCopyHotUpdateDll();
        #endregion

        #region 
        //version++;
        string defaultOutputRoot = AssetBundleBuilderHelper.GetDefaultOutputRoot();
        BuildParameters buildParameters = new BuildParameters();
        buildParameters.OutputRoot = defaultOutputRoot;
        buildParameters.BuildTarget = EditorUserBuildSettings.activeBuildTarget;
        buildParameters.BuildPipeline = AssetBundleBuilderSettingData.Setting.BuildPipeline;
        buildParameters.BuildMode = EBuildMode.ForceRebuild;
        buildParameters.PackageName = AssetBundleBuilderSettingData.Setting.BuildPackage;

        //versionString = version + "";
        //var length = versionString.Length * 2 - 1;
        //for (int i = 1; i < length; i += 2)
        //{
        //    versionString = versionString.Insert(i, ".");
        //}

        buildParameters.PackageVersion = versionString;
        buildParameters.VerifyBuildingResult = true;
        buildParameters.ShareAssetPackRule = new DefaultShareAssetPackRule();
        var esct = GetEncryptionServicesClassTypes();
        buildParameters.EncryptionServices = (IEncryptionServices)Activator.CreateInstance(esct[0]);
        buildParameters.CompressOption = AssetBundleBuilderSettingData.Setting.CompressOption;
        buildParameters.OutputNameStyle = AssetBundleBuilderSettingData.Setting.OutputNameStyle;
        buildParameters.CopyBuildinFileOption = AssetBundleBuilderSettingData.Setting.CopyBuildinFileOption;
        buildParameters.CopyBuildinFileTags = AssetBundleBuilderSettingData.Setting.CopyBuildinFileTags;
        if (AssetBundleBuilderSettingData.Setting.BuildPipeline == EBuildPipeline.BuiltinBuildPipeline)
        {
            buildParameters.SBPParameters = new BuildParameters.SBPBuildParameters();
            buildParameters.SBPParameters.WriteLinkXML = true;
        }

        var builder = new AssetBundleBuilder();
        var buildResult = builder.Run(buildParameters);
        if (buildResult.Success)
        {
            File.WriteAllText(Application.streamingAssetsPath + VersionFileName, versionString);
            Debug.Log("��ʼAB������");
            EditorUtility.RevealInFinder(buildResult.OutputPackageDirectory);
        }
        #endregion
    }
    [MenuItem("���Ϲ���/������AB��")]
    public static void BuildIncreasinglyAssetBundle()
    {
        #region ��ȡ��Դ�汾
        var versionString = File.ReadAllText(Application.streamingAssetsPath + VersionFileName);
        var versionStringArray = versionString.Split(".");
        var version = int.Parse(String.Join("", versionStringArray));

        #endregion

        #region ���DLL��������,�����ȸ����ļ�����ΪRawFile���
        //GenerateAOTDllListFile();
        BuildAndCopyHotUpdateDll();
        #endregion

        #region 
        version++;
        string defaultOutputRoot = AssetBundleBuilderHelper.GetDefaultOutputRoot();
        BuildParameters buildParameters = new BuildParameters();
        buildParameters.OutputRoot = defaultOutputRoot;
        buildParameters.BuildTarget = EditorUserBuildSettings.activeBuildTarget;
        buildParameters.BuildPipeline = AssetBundleBuilderSettingData.Setting.BuildPipeline;
        buildParameters.BuildMode = EBuildMode.IncrementalBuild;
        buildParameters.PackageName = AssetBundleBuilderSettingData.Setting.BuildPackage;

        versionString = version + "";
        var length = versionString.Length * 2 - 1;
        for (int i = 1; i < length; i += 2)
        {
            versionString = versionString.Insert(i, ".");
        }

        buildParameters.PackageVersion = versionString;
        buildParameters.VerifyBuildingResult = true;
        buildParameters.ShareAssetPackRule = new DefaultShareAssetPackRule();
        var esct = GetEncryptionServicesClassTypes();
        buildParameters.EncryptionServices = (IEncryptionServices)Activator.CreateInstance(esct[0]);
        buildParameters.CompressOption = AssetBundleBuilderSettingData.Setting.CompressOption;
        buildParameters.OutputNameStyle = AssetBundleBuilderSettingData.Setting.OutputNameStyle;
        buildParameters.CopyBuildinFileOption = AssetBundleBuilderSettingData.Setting.CopyBuildinFileOption;
        buildParameters.CopyBuildinFileTags = AssetBundleBuilderSettingData.Setting.CopyBuildinFileTags;

        if (AssetBundleBuilderSettingData.Setting.BuildPipeline == EBuildPipeline.ScriptableBuildPipeline)
        {
            buildParameters.SBPParameters = new BuildParameters.SBPBuildParameters();
            buildParameters.SBPParameters.WriteLinkXML = true;
        }

        var builder = new AssetBundleBuilder();
        var buildResult = builder.Run(buildParameters);
        if (buildResult.Success)
        {
            File.WriteAllText(Application.streamingAssetsPath + VersionFileName, versionString);
            Debug.Log("����AB������");
            EditorUtility.RevealInFinder(buildResult.OutputPackageDirectory);
        }
        #endregion
    }
    [MenuItem("���Ϲ���/����AOT�����ļ������ƽ��ļ���")]
    public static void GenerateAOTDllListFile()
    {
        //������AOT�ļ����ٽ��д������ȷ���������ÿⶼ������
        PrebuildCommand.GenerateAll();

        List<string> dllNames = new List<string>();

        var setting = HybridCLRSettings.LoadOrCreate();
        SerializedObject _serializedObject;
        _serializedObject = new SerializedObject(setting);
        var patchAOTAssemblies = _serializedObject.FindProperty("patchAOTAssemblies");

        foreach (SerializedProperty sp in patchAOTAssemblies)
        {
            dllNames.Add(sp.stringValue + ".dll");
        }

        var json = JsonConvert.SerializeObject(dllNames);
        var path = "";

        foreach (var package in AssetBundleCollectorSettingData.Setting.Packages)
        {
            foreach (var group in package.Groups)
            {
                if (group.GroupName == AOTDLLGroupName)
                {
                    foreach (var collector in group.Collectors)
                    {
                        path = collector.CollectPath;
                    }
                }
            }
        }

        var dllExportPath = SettingsUtil.GetAssembliesPostIl2CppStripDir(EditorUserBuildSettings.activeBuildTarget);

        Dictionary<string, byte[]> dllDatas = new Dictionary<string, byte[]>();

        foreach (var dllName in dllNames)
        {
            var dllPath = dllExportPath + "/" + dllName;
            if (!File.Exists(dllPath))
            {
                Debug.Log($"{dllName}������");
                continue;
            }
            var dllData = File.ReadAllBytes(dllPath);
            dllDatas.Add(dllName, dllData);
        }

        foreach (var dllName in dllDatas.Keys)
        {
            var dllPath = path + "/" + dllName + ".bytes";
            File.WriteAllBytes(dllPath, dllDatas[dllName]);
        }

        File.WriteAllText($"{path}/AOTDLLList.txt", json);
        AssetDatabase.Refresh();
        Debug.Log("AOT�����ļ��������");
    }
    [MenuItem("���Ϲ���/�����ȸ���Dll�����ƽ��ļ���")]
    public static void BuildAndCopyHotUpdateDll()
    {
        List<string> dllNames = new List<string>();
        var setting = HybridCLRSettings.LoadOrCreate();
        SerializedObject _serializedObject;
        _serializedObject = new SerializedObject(setting);
        var _hotUpdateAssemblyDefinitions = _serializedObject.FindProperty("hotUpdateAssemblyDefinitions");
        var _hotUpdateAssemblies = _serializedObject.FindProperty("hotUpdateAssemblies");


        foreach (SerializedProperty sp in _hotUpdateAssemblyDefinitions)
        {
            AssemblyDefinitionAsset ada = (AssemblyDefinitionAsset)sp.objectReferenceValue;
            dllNames.Add(ada.name + ".dll");
        }
        foreach (SerializedProperty sp in _hotUpdateAssemblies)
        {
            dllNames.Add(sp.stringValue + ".dll");
        }
        CompileDllCommand.CompileDllActiveBuildTarget();

        var dllExportPath = SettingsUtil.GetHotUpdateDllsOutputDirByTarget(EditorUserBuildSettings.activeBuildTarget);

        Dictionary<string, byte[]> dllDatas = new Dictionary<string, byte[]>();
        foreach (var dllName in dllNames)
        {
            var dllPath = dllExportPath + "/" + dllName;
            if (!File.Exists(dllPath))
            {
                Debug.Log($"{dllName}������");
                continue;
            }
            var dllData = File.ReadAllBytes(dllPath);
            dllDatas.Add(dllName, dllData);
        }

        foreach (var package in AssetBundleCollectorSettingData.Setting.Packages)
        {
            foreach (var group in package.Groups)
            {
                if (group.GroupName == HotFixDllGroupName)
                {
                    foreach (var collector in group.Collectors)
                    {
                        HotUpdateDllPath = collector.CollectPath;
                    }
                }
            }
        }
        var json = JsonConvert.SerializeObject(dllNames);
        File.WriteAllText($"{HotUpdateDllPath}/HotUpdateDLLList.txt", json);
        foreach (var dllName in dllDatas.Keys)
        {
            var dllPath = HotUpdateDllPath + "/" + dllName + ".bytes";
            File.WriteAllBytes(dllPath, dllDatas[dllName]);
        }
        AssetDatabase.Refresh();
        Debug.Log("�����ȸ���Dll�ɹ�");
    }
    private static List<Type> GetEncryptionServicesClassTypes()
    {
        return EditorTools.GetAssignableTypes(typeof(IEncryptionServices));
    }

    //[MenuItem("���Ϲ���/ɾ������ɳ���ļ���")]
    public static void DeleteSandBoxDirectory()
    {
        var path = $"{ProjectPath}/SandBox";
        if (Directory.Exists(path))
        {
            Directory.Delete(path, true);
        }
        Debug.Log("ɳ���ļ���ɾ���ɹ�");
    }
    [MenuItem("���Ϲ���/ɾ������AB�����ݲ����´����汾�ļ�")]
    public static void DeleteAssetBundlesDataAndVersionFile()
    {
        DeleteSandBoxDirectory();
        CreateVersionFile();
    }

    [MenuItem("���Ϲ���/�����汾�ļ�")]
    public static void CreateVersionFile()
    {
        string version = "1.0.0";
        File.WriteAllText(Application.streamingAssetsPath + VersionFileName, version);
        Debug.Log("�����汾�ļ���ɣ���ǰ�汾Ϊ:" + version);
    }

    [MenuItem("���Ϲ���/��ȫ�ȸ���Ԥ��������")]
    public static void SupplementPrefabDependent()
    {
        EditorUtility.DisplayProgressBar("Progress", "Find Class...", 0);
        string[] dirs = { "Assets/HotUpdateAssets" };
        var asstIds = AssetDatabase.FindAssets("t:Prefab", dirs);
        var count = 0;
        Dictionary<string, List<string>> increasinglyAssemblyDic = new Dictionary<string, List<string>>();
        //��������Ԥ����
        for (int i = 0; i < asstIds.Length; i++)
        {
            string path = AssetDatabase.GUIDToAssetPath(asstIds[i]);
            var pfb = AssetDatabase.LoadAssetAtPath<GameObject>(path);

            var coms = pfb.GetComponentsInChildren<Component>();
            //����Ԥ�����������
            foreach (var com in coms)
            {
                var type = com.GetType();
                var Fields = type.GetFields();
                string typeName = type.FullName;
                var assemblyName = type.Assembly.GetName();
                if (typeName.StartsWith("UnityEngine") || typeName.StartsWith("TMPro"))
                {
                    if (!increasinglyAssemblyDic.ContainsKey(assemblyName.Name))
                    {
                        increasinglyAssemblyDic.Add(assemblyName.Name, new List<string>());
                    }
                    if (!increasinglyAssemblyDic[assemblyName.Name].Contains(typeName))
                    {
                        increasinglyAssemblyDic[assemblyName.Name].Add(typeName);
                    }
                    var properties = type.GetProperties();
                    //��ȡ��������ԣ����������Unity�������ٻ�ȡһ������
                    foreach (var propertyInfo in properties)
                    {
                        var propertyInfoAssemblyName = propertyInfo.PropertyType.Assembly.GetName().Name;
                        var propertyInfoTypeName = propertyInfo.PropertyType.FullName;
                        if (typeName.StartsWith("UnityEngine") || typeName.StartsWith("TMPro"))
                        {
                            if (!increasinglyAssemblyDic.ContainsKey(propertyInfoAssemblyName))
                            {
                                increasinglyAssemblyDic.Add(propertyInfoAssemblyName, new List<string>());
                            }
                            if (!increasinglyAssemblyDic[propertyInfoAssemblyName].Contains(propertyInfoTypeName))
                            {
                                increasinglyAssemblyDic[propertyInfoAssemblyName].Add(propertyInfoTypeName);
                            }
                        }
                        if (propertyInfo.PropertyType.BaseType == typeof(UnityEngine.Object))
                        {
                            //Ϊ��ȷ���󲿷��඼����ȡ����ֱ�ӻ�ȡ�����������
                            foreach (var property in propertyInfo.PropertyType.GetProperties())
                            {
                                var propertyType = property.PropertyType.GetType();
                                if (property.PropertyType.IsArray)
                                {
                                    propertyType = property.PropertyType.GetElementType();
                                }
                                propertyInfoAssemblyName = propertyType.Assembly.GetName().Name;
                                propertyInfoTypeName = propertyType.FullName;
                                if (typeName.StartsWith("UnityEngine") || typeName.StartsWith("TMPro"))
                                {
                                    if (!increasinglyAssemblyDic.ContainsKey(propertyInfoAssemblyName))
                                    {
                                        increasinglyAssemblyDic.Add(propertyInfoAssemblyName, new List<string>());
                                    }
                                    if (!increasinglyAssemblyDic[propertyInfoAssemblyName].Contains(propertyInfoTypeName))
                                    {
                                        increasinglyAssemblyDic[propertyInfoAssemblyName].Add(propertyInfoTypeName);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            count++;
            EditorUtility.DisplayProgressBar("Find Class", pfb.name, count / (float)asstIds.Length);
        }
        
        EditorUtility.DisplayProgressBar("Progress", "ReadLink.xml", 0);
        string filePath = @$"{Application.dataPath}\HybridCLRData\Generated\link.xml";

        var data = File.ReadAllText(filePath);

        XmlDocument xml = new XmlDocument();
        xml.LoadXml(data);
        XmlNode linker = xml.SelectSingleNode(xml.DocumentElement.Name);
        XmlNodeList assemblyList = linker.ChildNodes;

        Dictionary<string, List<string>> assemblyDic = new Dictionary<string, List<string>>();
        count = 0;
        foreach (var typeListItem in assemblyList)
        {
            var typeListElement = (XmlElement)typeListItem;
            var assemblyNmae = typeListElement.GetAttribute("fullname");
            if (!assemblyDic.ContainsKey(assemblyNmae))
            {
                assemblyDic.Add(assemblyNmae, new List<string>());
            }
            var typeListNodeList = (XmlNode)typeListItem;
            foreach (var typeItem in typeListNodeList.ChildNodes)
            {
                var typeElement = (XmlElement)typeItem;
                var typeName = typeElement.GetAttribute("fullname");
                if (!assemblyDic[assemblyNmae].Contains(typeName))
                {
                    assemblyDic[assemblyNmae].Add(typeName);
                }
                count++;
                EditorUtility.DisplayProgressBar("Find Class", typeName, count / (float)typeListNodeList.ChildNodes.Count);
            }
        }

        foreach (var assemblyName in increasinglyAssemblyDic.Keys)
        {
            if (!assemblyDic.ContainsKey(assemblyName))
            {
                var assemblyNode = xml.CreateElement(linker.FirstChild.Name);
                assemblyNode.SetAttribute("fullname", assemblyName);
                assemblyDic.Add(assemblyName, increasinglyAssemblyDic[assemblyName]);
                foreach (var typeName in increasinglyAssemblyDic[assemblyName])
                {
                    var typeNode = xml.CreateElement(linker.FirstChild.FirstChild.Name);
                    typeNode.SetAttribute("fullname", typeName);
                    typeNode.SetAttribute("preserve", "all");
                    assemblyNode.AppendChild(typeNode);
                }
                linker.AppendChild(assemblyNode);
                continue;
            }
            foreach (var typeName in increasinglyAssemblyDic[assemblyName])
            {
                if (!assemblyDic[assemblyName].Contains(typeName))
                {
                    var typeNode = xml.CreateElement(linker.FirstChild.FirstChild.Name);
                    typeNode.SetAttribute("fullname", typeName);
                    typeNode.SetAttribute("preserve", "all");
                    //assemblyNode.AppendChild(typeNode);
                    foreach (XmlElement assemblyElement in assemblyList)
                    {
                        if (assemblyElement.GetAttribute("fullname") == assemblyName)
                        {
                            assemblyElement.AppendChild(typeNode);
                        }
                    }
                }
            }
        }
        xml.Save($"{Application.dataPath}/link.xml");
        EditorUtility.ClearProgressBar();
        AssetDatabase.Refresh();
    }

    public static void GetUnityAssembly(object[] objects,ref Dictionary<string, List<string>> dic)
    {
        foreach (var obj in objects)
        {
            var type = obj.GetType();
            string typeName = type.FullName;
            var assemblyName = type.Assembly.GetName();
            if (typeName.StartsWith("UnityEngine") || typeName.StartsWith("TMPro"))
            {
                if (!dic.ContainsKey(assemblyName.Name))
                {
                    dic.Add(assemblyName.Name, new List<string>());
                }
                if (!dic[assemblyName.Name].Contains(typeName))
                {
                    dic[assemblyName.Name].Add(typeName);
                }
            }
        }
    }
    //[MenuItem("���Ϲ���/��ȡXML����")]
    public static void ReadXML()
    {
        string filePath = @$"{Application.dataPath}\HybridCLRData\Generated\link.xml";
        var data = File.ReadAllText(filePath);
        XmlDocument xml = new XmlDocument();
        xml.LoadXml(data);
        XmlNode linker = xml.SelectSingleNode(xml.DocumentElement.Name);
        XmlNodeList assemblyList = linker.ChildNodes;
        Debug.Log(linker.FirstChild.Name);
        //var testElement = xml.CreateElement(linker.FirstChild.Name);
        //testElement.SetAttribute("fullname", "test");
        //var subTestElement = xml.CreateElement(linker.FirstChild.FirstChild.Name);
        //subTestElement.SetAttribute("fullname", "subtest");
        //subTestElement.SetAttribute("preserve", "all");
        //testElement.AppendChild(subTestElement);
        //linker.AppendChild(testElement);
        foreach (var typeListItem in assemblyList)
        {
            var typeListElement = (XmlElement)typeListItem;
            Debug.Log(typeListElement.Name);
            Debug.Log($"{typeListElement.GetAttribute("fullname")} Assembly");
            var typeListNodeList = (XmlNode)typeListItem;
            foreach (var typeItem in typeListNodeList.ChildNodes)
            {
                var typeElement = (XmlElement)typeItem;
                Debug.Log($"{typeElement.GetAttribute("fullname")} Type");
            }
        }
        var testElement = xml.CreateElement(linker.FirstChild.Name);
        testElement.SetAttribute("fullname", "test");
        var subTestElement = xml.CreateElement(linker.FirstChild.FirstChild.Name);
        subTestElement.SetAttribute("fullname", "subtest");
        subTestElement.SetAttribute("preserve", "all");
        testElement.AppendChild(subTestElement);
        linker.FirstChild.AppendChild(testElement);
        xml.Save($"{Application.dataPath}/Test.xml");
        AssetDatabase.Refresh();
    }
    //[MenuItem("���Ϲ���/��ȡԤ�������")]
    public static void ReadPrefabs()
    {
        EditorUtility.DisplayProgressBar("Progress", "Find Class...", 0);
        string[] dirs = { "Assets/HotUpdateAssets" };
        var asstIds = AssetDatabase.FindAssets("t:Prefab", dirs);
        int count = 0;
        List<string> classList = new List<string>();
        Dictionary<string, List<string>> assemblyDic = new Dictionary<string, List<string>>();
        for (int i = 0; i < asstIds.Length; i++)
        {
            string path = AssetDatabase.GUIDToAssetPath(asstIds[i]);
            var pfb = AssetDatabase.LoadAssetAtPath<GameObject>(path);

            var coms = pfb.GetComponentsInChildren<Component>();
            foreach (var com in coms)
            {
                var type = com.GetType();
                var assemblyName = type.Assembly.GetName();
                var properties = type.GetProperties();
                foreach (var propertyInfo in properties)
                {
                    if (propertyInfo.PropertyType.BaseType == typeof(UnityEngine.Object))
                    {
                        Debug.Log(propertyInfo.PropertyType);
                        foreach (var testype in propertyInfo.PropertyType.GetProperties())
                        {
                            Debug.Log(testype.PropertyType);
                            if (testype.PropertyType.IsArray)
                            {
                                Debug.Log(testype.PropertyType.GetElementType());
                                Debug.Log(testype.PropertyType.GetElementType().BaseType.Name);
                            }
                        }
                    }
                }

                string typeName = type.FullName;
                if ((typeName.StartsWith("UnityEngine") || typeName.StartsWith("TMPro")))
                {
                    if (!assemblyDic.ContainsKey(assemblyName.Name))
                    {
                        assemblyDic.Add(assemblyName.Name, new List<string>());
                    }
                    if (!assemblyDic[assemblyName.Name].Contains(typeName))
                    {
                        assemblyDic[assemblyName.Name].Add(typeName);
                    }
                }
            }
            count++;
            EditorUtility.DisplayProgressBar("Find Class", pfb.name, count / (float)asstIds.Length);
        }
        for (int i = 0; i < classList.Count; i++)
        {
            classList[i] = string.Format("<type fullname=\"{0}\" preserve=\"all\"/>", classList[i]);
        }
        EditorUtility.ClearProgressBar();
        Debug.Log("��ɶ�ȡԤ����");
    }
}