#include "Application.h"
#include "GOEngineTime.h"
#include "Scene.h"

#pragma once
class GOEngine
{
public:
	GOEngine();
	~GOEngine();

	static Application* pApp;
	static GOEngine* pGoEngine;
	static GOEngineTime * pGoEngineTime;
	static Scene* pScene;
};

