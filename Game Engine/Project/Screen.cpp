#include "Screen.h"

Screen::Screen()
{
	this->m_width = 0;
	this->m_height = 0;
}

Screen::Screen(int width, int height)
{
	this->m_width = width;
	this->m_height = height;
}

Screen::~Screen()
{
}

void Screen::setScreen(int width, int height)
{
	this->m_width = width;
	this->m_height = height;
}

int Screen::width()
{
	return this->m_width;
}

int Screen::height()
{
	return this->m_height;
}
