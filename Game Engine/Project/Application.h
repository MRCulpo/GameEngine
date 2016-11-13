#include <SFML/Graphics.hpp>
#include "Screen.h"
#include "Object.h"
#include <iterator>
#include <list>

using namespace sf;
using namespace std;

#pragma once
typedef list<Object> Components;
class Application
{
public:

	~Application();
	Application();
	Application(int width, int height, String title);

	void update();
	void addObject(Object* obj);
	Object* get(const list<Object*> &list,int index);
	Components getObjects();
	static void create(int width, int height, String title);

public:

	int m_sizeAllocatedObject;

private:

	void updateDraw();

private:

	static Application* app;
	Components m_objects;
	RenderWindow m_window;
	Event m_event;
	Screen m_screen;
};

