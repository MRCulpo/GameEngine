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

	virtual void awake()const;
	virtual void start()const;
	virtual void update()const;
	virtual void onEnable()const;
	virtual void onDisable()const;
	virtual void onDelete()const;

	void setStarted(bool boolean);
	void setActive(bool boolean);
	void setName(std::string name);
	void setTag(std::string tag);
	void setId(int id);

	bool getActive();
	bool getStarted();
	int getInstance()const;
	std::string getName()const;
	std::string getTag()const;

private:
	bool m_started = false;
	int m_idInstance;
	bool m_isActive;
	String m_name;
	String m_tag;
};

