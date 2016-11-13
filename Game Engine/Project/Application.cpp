#include "Application.h"
#include "GOEngine.h"
#include "Object.h"
#include <list>
Application* Application::app = nullptr;

Application::~Application()
{
}

Application::Application()
{
	this->m_window.create(VideoMode(800, 600, 32), "Engine");
	this->m_screen.setScreen(800,600);
}

Application::Application(int width, int height, String title)
{
	this->m_window.create(VideoMode(width, height, 32), title);
	this->m_screen.setScreen(width, height);
}

void Application::update()
{
	while (m_window.isOpen())
	{
		while (m_window.pollEvent(m_event))
		{
			if (m_event.type == Event::Closed)
				m_window.close();
		}

		GOEngine::pGoEngineTime->update();

		m_window.clear();
		this->updateDraw();
		m_window.display();
	}
}

void Application::addObject(Object*  obj)
{
	this->m_objects.push_front(obj);
}


Components Application::getObjects()
{
	return this->m_objects;
}

void Application::updateDraw()
{
	//Draw All Objects
	for (int index = 0; index < GOEngine::pApp->getObjects().size(); index++)
	{
		Object* _obj = get(index);
		printf("%d", _obj->getInstance());
		//m_window.draw(*_obj);
	}
}


Object *Application::get(const list<Object*> &list, int index)
{
	auto it = list.begin();
	for (int i = 0; i< index; i++) {
		++it;
	}
	return (it == list.end()) ? nullptr : *it;
}

void Application::create(int width, int height, String title)
{
	Application application(width, height, title);
	app = &application;
}

