#include "Scene.h"
#include "Testando.h"

Scene::Scene()
{
}


Scene::~Scene()
{
}

void Scene::initializing()
{
	Testando t1;
}

void Scene::loadScene(EnumScene nameScene)
{
	switch (nameScene)
	{
	case EnumScene::Started:
		break;
	}
}


