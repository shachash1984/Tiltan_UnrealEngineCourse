#include "Animation.h"
#include <iostream>

Animation::Animation()
{
	std::cout << "Animation created" << std::endl;
}

Animation::Animation(std::string name)
{
	std::cout << "Animation " << name << " created" << std::endl;
}

Animation::~Animation()
{
	std::cout << "Animation destroyed" << std::endl;
}
