#include <SFML/Graphics.hpp>
#include "Screen.h"
#include "Object.h"
#include <iterator>
#include <list>

using namespace sf;
using namespace std;

typedef list<Object*> Component;

#pragma once
class Application
{
public:

	~Application();
	Application();
	Application(int width, int height, String title);

	void update();
	void addObject(Object* obj);
	static void create(int width, int height, String title);

public:

	int m_sizeAllocatedObject;

private:

	void UpdateStart();
	void UpdateDraw();

private:

	static Application* app;

	Component *m_objects;
	Component component;

	RenderWindow m_window;
	Event m_event;
	Screen m_screen;
};

