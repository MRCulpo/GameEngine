#include "Behaviour.h"
#include "GOEngine.h"


Behaviour::Behaviour()
{
}


Behaviour::~Behaviour()
{
}

void Behaviour::awake() const
{
}

void Behaviour::start() const
{
}

void Behaviour::update() const
{
}

void Behaviour::onEnable() const
{
}

void Behaviour::onDisable() const
{
}

void Behaviour::onDelete() const
{
}

bool Behaviour::Instanteate(Object* objects)
{
	try
	{
		int id = GOEngine::pApp->m_sizeAllocatedObject++;
		objects->setId(id);
		objects->setActive(true);
		objects->setPosition(0, 0);
		GOEngine::pApp->addObject(objects);

		printf("%d     %d\n", id, GOEngine::pApp->getObjects().size());
		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}
}

bool Behaviour::Instanteate(Object* objects, Vector2f position)
{
	try
	{
		int id = GOEngine::pApp->m_sizeAllocatedObject++;
		objects->setId(id);
		objects->setActive(true);
		objects->setPosition(position.x, position.y);
		GOEngine::pApp->addObject(objects);

		return true;
	}
	catch (const std::exception&)
	{
		return false;
	}
}
