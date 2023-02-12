#include "CrawlingAnimation.h"

#include <iostream>

CrawlingAnimation::CrawlingAnimation()
{
	std::cout << "CrawlingAnimation created" << std::endl;
}

CrawlingAnimation::~CrawlingAnimation()
{
	std::cout << "CrawlingAnimation destroyed" << std::endl;
}

void CrawlingAnimation::Play()
{
	std::cout << "CrawlingAnimation playing" << std::endl;
}
