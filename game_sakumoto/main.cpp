#include "DxLib.h"
#include"SceneManager.h"

//メイン関数(プログラムはここから始まります)
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrecInstance,
	_In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{

	//例外処理(以上が発生したら、cat ch文に飛ぶ)
	try
	{
		//シーンマネージャー機能の生成
		SceneManager manager;

		//シーンマネジャー機能の初期化処理
		manager.Initialize();

		//シーンマネジャー機能の更新処理
		manager.Update();

		//シーンマネジャー機能の終了時処理
		manager.Finalize();
	}
	catch (const char* err_log)
	{
		//エラー発生内容の出力
		OutputDebugString(err_log);

		//エラー終了を通知
		return -1;
	}

	//正常終了を通知
	return 0;
}