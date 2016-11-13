#pragma once
#include "Behaviour.h"

class Testando : public Behaviour
{
public:
	Testando();
	~Testando();

	void awake();
	void start();
	void draw(sf::RenderTarget& target, sf::RenderStates states);

private:

	CircleShape shape;
};

