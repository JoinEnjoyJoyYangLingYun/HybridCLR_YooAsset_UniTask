using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniFramework.Event;
using UniFramework.Machine;
using UniFramework.Singleton;
using Cysharp.Threading.Tasks;

public class GameManager : SingletonInstance<GameManager>, ISingleton
{
	private bool _isRun = false;
	private EventGroup _eventGroup = new EventGroup();
	private StateMachine _machine;

	async UniTask ISingleton.OnCreate(object createParam)
	{
	}
	async UniTask ISingleton.OnDestroy()
	{
		_eventGroup.RemoveAllListener();
	}
	async UniTask ISingleton.OnUpdate()
	{
		if (_machine != null)
			_machine.Update();
	}

	public void Run()
	{
        if (_isRun == false)
        {
            _isRun = true;

            // 注册监听事件
            _eventGroup.AddListener<SceneEventDefine.ChangeToHomeScene>(OnHandleEventMessage);
            _eventGroup.AddListener<SceneEventDefine.ChangeToBattleScene>(OnHandleEventMessage);

            Debug.Log("开启游戏流程...");
            _machine = new StateMachine(this);
            _machine.AddNode<FsmInitGame>();
            _machine.AddNode<FsmLunchHotUpdate>();
            _machine.Run<FsmInitGame>();
        }
        else
        {
            Debug.LogWarning("补丁更新已经正在进行中!");
        }

    }

	/// <summary>
	/// 接收事件
	/// </summary>
	private void OnHandleEventMessage(IEventMessage message)
	{
		if(message is SceneEventDefine.ChangeToHomeScene)
		{
			_machine.ChangeState<FsmLunchHotUpdate>();
		}
		else if(message is SceneEventDefine.ChangeToBattleScene)
		{
		}
	}
}