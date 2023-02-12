#pragma once
#include <string>

class Animation
{
public:
	Animation();
	Animation(std::string name);
	virtual ~Animation();
	virtual void Play() = 0;

protected:
	std::string name;
};
