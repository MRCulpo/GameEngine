#pragma once
#include "Object.h"
#include "Extension.h"
#include <iostream>

using namespace sf;

class Behaviour : public Object
{
public:
	Behaviour();
	~Behaviour();

	static bool Instanteate(Object* objects);
	static bool Instanteate(Object* objects, Vector2f position);
};

