#include "GameMain.h"
#include "DxLib.h"
#include <math.h>

GameMain::GameMain() 

{

}

GameMain::~GameMain()
{

}

//����������
void GameMain::Initialize()
{


}

//�X�V����
eSceneType GameMain::Update()
{
    return GetNowScene();
}

//�`�揈��
void GameMain::Draw()const
{
  
}


//�I��������
void GameMain::Finalize()
{
  


}

//���݂̃V�[�������擾
eSceneType GameMain::GetNowScene()const
{
    return eSceneType::E_MAIN;
}

