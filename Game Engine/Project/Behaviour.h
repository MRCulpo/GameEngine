#pragma once
#include "Object.h"
#include "Extension.h"

using namespace sf;

class Behaviour : public Object
{
public:
	Behaviour();
	~Behaviour();

	virtual void awake()const;
	virtual void start()const;
	virtual void update()const;
	virtual void onEnable()const;
	virtual void onDisable()const;
	virtual void onDelete()const;

	static bool Instanteate(Object* objects);
	static bool Instanteate(Object* objects, Vector2f position);
};

