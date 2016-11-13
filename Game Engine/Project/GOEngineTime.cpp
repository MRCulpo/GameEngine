#include "GOEngineTime.h"


GOEngineTime::GOEngineTime(Clock clock, Time time)
{
	this->m_clock = clock;
	this->m_time = time;
	this->m_timeRunGame = 0.f;
}

GOEngineTime::~GOEngineTime()
{
}

void GOEngineTime::update()
{
	this->m_time = this->m_clock.restart();
	this->m_timeRunGame += deltaTime();
}

float GOEngineTime::deltaTime()
{
	return m_time.asSeconds();
}

float GOEngineTime::time()
{
	return this->m_timeRunGame;
}
