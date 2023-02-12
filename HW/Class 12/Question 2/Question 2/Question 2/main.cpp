#include <iostream>
#include <vector>
#include "CrawlingAnimation.h"
#include "IdleAnimation.h"
#include "WalkingAnimation.h"
#include "Factory.h"

int main()
{

	Factory<IdleAnimation> idle;
	idle.Create()->Play();
	std::cout << "\n" << std::endl;

	Factory<WalkingAnimation> walking;
	walking.Create()->Play();
	std::cout << "\n" << std::endl;

	Factory<CrawlingAnimation> crawling;
	crawling.Create()->Play();
	std::cout << "\n" << std::endl;

}