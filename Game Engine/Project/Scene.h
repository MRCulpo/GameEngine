#pragma once
#include <string>
#include "Behaviour.h"

class Scene : public Behaviour
{

enum EnumScene { Started, Menu, Cena1 };

public:
	Scene();
	~Scene();

	void initializing();
	void loadScene(EnumScene nameScene);
};

