#pragma once
#include "Extension.h"
#include <string>


using namespace sf;

class Object : public Drawable , public Transformable
{
public: 
	Object();
	~Object();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

	void setActive(bool boolean);
	void setName(std::string name);
	void setTag(std::string tag);
	void setId(int id);

	bool getActive();
	int getInstance()const;
	std::string getName()const;
	std::string getTag()const;

private:
	int m_idInstance;
	bool m_isActive;
	String m_name;
	String m_tag;
};

