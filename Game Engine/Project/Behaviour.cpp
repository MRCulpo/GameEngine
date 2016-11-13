#include "Behaviour.h"
#include "GOEngine.h"


Behaviour::Behaviour()
{
	
}


Behaviour::~Behaviour()
{
}


bool Behaviour::Instanteate(Object* objects)
{
	try
	{
		int id = GOEngine::pApp->m_sizeAllocatedObject++;
		objects->setId(id);
		objects->setName("Objeto " + std::to_string(id));
		objects->setActive(true);
		GOEngine::pApp->addObject(objects);

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
