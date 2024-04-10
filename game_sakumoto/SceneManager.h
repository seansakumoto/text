#pragma once

#include"SceneBase.h"

#define TARGET_FREM_RATE (60)
#define DELTA_SECOND (1000000/TARGET_FREM_RATE)

class SceneManager
{
private:
	SceneBase* current_scene;//���݃V�[�����

public:
	SceneManager();
	~SceneManager();

	void Initialize();//����������
	void Update();//�X�V����
	void Finalize();//�I��������


private:
	void Draw()const;//�`�揈��
	void ChangeScene(eSceneType scene_type);//�V�[���؂�ւ�����
	SceneBase* CreateScene(eSceneType scene_type);//�V�[����������
};

