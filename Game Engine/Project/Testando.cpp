#include "Testando.h"
#include <iostream>

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
}

void Testando::start()
{
	shape.setRadius(50);
	shape.setPosition(50, 50);
	shape.setFillColor(Color::Blue);
	std::cout << "Passei no start deste objeto"<< std::endl;
}

void Testando::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	Object::draw(target, states);
	target.draw(shape, states);
}
