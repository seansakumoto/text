#pragma once

#include"SceneBase.h"

#define TARGET_FREM_RATE (60)
#define DELTA_SECOND (1000000/TARGET_FREM_RATE)

class SceneManager
{
private:
	SceneBase* current_scene;//現在シーン情報

public:
	SceneManager();
	~SceneManager();

	void Initialize();//初期化処理
	void Update();//更新処理
	void Finalize();//終了時処理


private:
	void Draw()const;//描画処理
	void ChangeScene(eSceneType scene_type);//シーン切り替え処理
	SceneBase* CreateScene(eSceneType scene_type);//シーン生成処理
};

