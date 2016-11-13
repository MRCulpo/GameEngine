#include <SFML/Graphics.hpp>
#include "Screen.h"
#include "Object.h"
#include <iterator>
#include <list>

using namespace sf;
using namespace std;

#pragma once
class Application
{
public:

	~Application();
	Application();
	Application(int width, int height, String title);

	void update();
	void addObject(Object* obj);
	list<Object>* GetObjects();
	static void create(int width, int height, String title);

public:

	int m_sizeAllocatedObject;

private:

	void UpdateStart();
	void UpdateDraw();

private:

	static Application* app;
	list<Object> *m_objects;
	RenderWindow m_window;
	Event m_event;
	Screen m_screen;
};

