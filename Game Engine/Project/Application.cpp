#include "Application.h"
#include "GOEngine.h"
#include "Object.h"
#include <list>
#include <iostream>
#include "Testando.h"

Application* Application::app = nullptr;

Application::~Application()
{
}

Application::Application()
{
	this->m_window.create(VideoMode(800, 600, 32), "Engine");
	this->m_screen.setScreen(800, 600);

	list<Object> myObject;
	m_objects = &myObject;
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
		//this->UpdateStart();
		//this->UpdateDraw();
		m_window.display();
	}
}

void Application::addObject(Object* obj)
{
	m_objects->push_front(*obj);
}


list<Object>* Application::GetObjects()
{
	return m_objects;
}

void Application::UpdateStart()
{
	for (std::list<Object>::iterator it = m_objects->begin(); it != m_objects->end(); ++it)
	{
		if (it->getStarted() == false)
		{
			it->start();
			it->setStarted(true);
		}
	}

}

void Application::UpdateDraw()
{
	std::list<Object>::const_iterator it;

	for (it = m_objects->begin(); it != m_objects->end(); ++it)
	{
		m_window.draw(*it);
	}
}

void Application::create(int width, int height, String title)
{
	Application application(width, height, title);
	app = &application;
}

