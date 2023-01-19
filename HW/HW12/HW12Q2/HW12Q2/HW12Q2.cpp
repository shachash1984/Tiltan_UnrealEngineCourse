#include <iostream>
#include "Factory.h"
#include "IdleAnimation.h"
#include "WalkingAnimation.h"
#include "CrawlingAnimation.h"

int main()
{
    Factory<IdleAnimation> idleFactory;
    auto idle = idleFactory.Create();
    idle->Play();

    Factory<WalkingAnimation> walkFactory;
    auto walk = walkFactory.Create();
    walk->Play();

    Factory<CrawlingAnimation> crawlFactory;
    auto crawl = crawlFactory.Create();
    crawl->Play();

    return 0;
}