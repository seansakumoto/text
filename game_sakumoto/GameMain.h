#pragma once

#include"SceneBase.h"

class GameMain:public SceneBase
{

public:
	GameMain();
	virtual ~GameMain();	
	virtual void Initialize() override;
	virtual eSceneType Update() override;
	virtual void Draw() const override;
	virtual void Finalize() override;

	virtual eSceneType GetNowScene() const override;

};

