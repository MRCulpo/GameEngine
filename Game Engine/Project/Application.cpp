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
		this->UpdateStart();
		this->UpdateDraw();
		m_window.display();

		system("pause");
	}
}

void Application::addObject(Object* obj)
{

	m_objects = &component;
	cout << "Endereço de memoria : " << obj << endl;
	cout << "Nome de memoria : " << obj->getName() << endl;
	cout << endl;
	m_objects->push_front(obj);
}

void Application::UpdateStart()
{
	for (Component::iterator it = m_objects->begin(); it != m_objects->end(); ++it)
	{
		if(!(*it)->getStarted())
		{
			(*it)->start();
			(*it)->setStarted(true);
		}
	}
}

void Application::UpdateDraw()
{
	for (Component::iterator it = m_objects->begin(); it != m_objects->end(); ++it)
	{
		cout << "Endereço de memoria : " << (*it) << endl;
		cout << "Nome de memoria : " << (*it)->getName() << endl;
		//(*it)->setName("Troquei de Nome");
		//m_window.draw((*it));
	}
}

void Application::create(int width, int height, String title)
{
	Application application(width, height, title);
	app = &application;
}

