#include "GOEngine.h"
#include "GOEngineTime.h"
#include "Application.h"
#include "Extension.h"
#include "Scene.h"

Application* GOEngine::pApp = nullptr;
GOEngine* GOEngine::pGoEngine = nullptr;
GOEngineTime* GOEngine::pGoEngineTime = nullptr;
Scene* GOEngine::pScene = nullptr;

GOEngine::GOEngine()
{
	GOEngine::pGoEngine = this;

	/// Initialization Windows Engine
	Application app(WIDTH, HEIGHT, "Engine");
	GOEngine::pApp = &app;

	/// Initialization Time Engine
	Clock clock;
	Time time;
	GOEngineTime goEngineTime(clock, time);
	GOEngine::pGoEngineTime = &goEngineTime;

	Scene scene;
	GOEngine::pScene = &scene;
	GOEngine::pScene->initializing();

	///UPDATE ENGINE
	GOEngine::pApp->update();
}

GOEngine::~GOEngine()
{
}
