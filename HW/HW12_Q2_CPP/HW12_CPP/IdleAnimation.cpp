#include "IdleAnimation.h"
#include <iostream>

IdleAnimation::IdleAnimation()
{
	std::cout << "IdleAnimation created" << std::endl;
}

IdleAnimation::~IdleAnimation()
{
	std::cout << "IdleAnimation destroyed" << std::endl;
}

void IdleAnimation::Play()
{
	std::cout << "IdleAnimation playing" << std::endl;
}
