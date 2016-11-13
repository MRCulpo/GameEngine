#include "Extension.h"
#include "Object.h"

Object::Object()
{
}


Object::~Object()
{
}

void Object::draw(RenderTarget & target, RenderStates states) const
{
	if(this->m_isActive)
		states.transform *= getTransform();
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
