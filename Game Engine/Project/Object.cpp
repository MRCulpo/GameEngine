#include "Extension.h"
#include "Object.h"
#include "GOEngine.h"

Object::Object()
{
	this->m_started = false;
}


Object::~Object()
{
}

void Object::draw(RenderTarget & target, RenderStates states) const
{
	if(this->m_isActive)
		states.transform *= getTransform();
}

void Object::awake() const
{
}

void Object::start() const
{
}

void Object::update() const
{
}

void Object::onEnable() const
{
}

void Object::onDisable() const
{
}

void Object::onDelete() const
{
}

void Object::setStarted(bool boolean)
{
	this->m_started = boolean;
}

void Object::setActive(bool boolean)
{
	this->m_isActive = boolean;
}

void Object::setName(std::string name)
{
	this->m_name = name;
}

void Object::setTag(std::string tag)
{
	this->m_tag = tag;

}

void Object::setId(int id)
{
	this->m_idInstance = id;
}

bool Object::getActive()
{
	return this->m_isActive;
}

bool Object::getStarted()
{
	return this->m_started;
}

int Object::getInstance() const
{
	return this->m_idInstance;
}

std::string Object::getName() const
{
	return this->m_name;
}

std::string Object::getTag() const
{
	return this->m_tag;
}
