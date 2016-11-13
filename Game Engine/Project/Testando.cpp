#include "Testando.h"


Testando::Testando()
{
	awake();
}


Testando::~Testando()
{
}

void Testando::awake()
{
	Instanteate(this);
	this->shape.setRadius(40.f);
	this->shape.setPosition(0, 0);
	this->shape.setFillColor(Color::Blue);
}

void Testando::start()
{
}

void Testando::draw(sf::RenderTarget & target, sf::RenderStates states)
{
	Object::draw(target, states);
	target.draw(this->shape, states);
}
