#pragma once
class Screen
{
public:
	Screen();
	Screen(int width, int height);
	~Screen();

	void setScreen(int width, int height);

	int width();
	int height();

private:

	int m_width;
	int m_height;
};

