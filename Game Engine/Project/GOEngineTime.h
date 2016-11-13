#include <SFML/Graphics.hpp>
using namespace sf;
#pragma once
class GOEngineTime
{
public:
	GOEngineTime(Clock clock, Time time);
	~GOEngineTime();

	void update();

	float deltaTime();
	float time();

private:
	Clock m_clock;
	Time m_time;
	float m_timeRunGame;
};

