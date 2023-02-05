#include <iostream>
#include "IdleAnimation.h"
#include "WalkingAnimation.h"
#include "CrawlingAnimation.h"
#include "Factory.h"

int main()
{
	Factory<IdleAnimation> idle_factory;
	Factory<WalkingAnimation> walking_factory;
	Factory<CrawlingAnimation> crawling_factory;

	auto idle = idle_factory.Create();
	auto walk = walking_factory.Create();
	auto crawl = crawling_factory.Create();

	idle->Play();
	walk->Play();
	crawl->Play();

	return 0;
}