#pragma once
#include <string>
#include <iostream>

class Animation
{
public:
	Animation();
	~Animation();
	Animation(Animation& other);
	Animation& operator=(const Animation& other);

	void Play();

protected:
	std::string _name;
};

