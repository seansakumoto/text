#include "GameMain.h"
#include "DxLib.h"
#include <math.h>

GameMain::GameMain() 

{

}

GameMain::~GameMain()
{

}

//初期化処理
void GameMain::Initialize()
{


}

//更新処理
eSceneType GameMain::Update()
{
    return GetNowScene();
}

//描画処理
void GameMain::Draw()const
{
  
}


//終了時処理
void GameMain::Finalize()
{
  


}

//現在のシーン情報を取得
eSceneType GameMain::GetNowScene()const
{
    return eSceneType::E_MAIN;
}

