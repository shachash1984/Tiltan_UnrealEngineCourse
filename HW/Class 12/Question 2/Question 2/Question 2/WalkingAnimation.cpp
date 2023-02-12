#include "WalkingAnimation.h"

#include <iostream>

WalkingAnimation::WalkingAnimation()
{
	std::cout << "WalkingAnimation created" << std::endl;
}

WalkingAnimation::~WalkingAnimation()
{
	std::cout << "WalkingAnimation destroyed" << std::endl;
}

void WalkingAnimation::Play()
{
	std::cout << "WalkingAnimation playing" << std::endl;
}
