
using Cysharp.Threading.Tasks;

namespace UniFramework.Singleton
{
	public interface ISingleton
	{
		/// <summary>
		/// 创建单例
		/// </summary>
		UniTask OnCreate(System.Object createParam);

		/// <summary>
		/// 更新单例
		/// </summary>
		UniTask OnUpdate();

		/// <summary>
		/// 销毁单例
		/// </summary>
		UniTask OnDestroy();
	}
}