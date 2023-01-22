#include "factory.h"
#include "animation.h"

int main()
{
    Factory<IdleAnimation> idleFactory;
    auto idleAnim = idleFactory.Create();
    idleAnim->Play();

    Factory<WalkingAnimation> walkFactory;
    auto walkAnim = walkFactory.Create();
    walkAnim->Play();

    Factory<CrawlingAnimation> crawlFactory;
    auto crawlAnim = crawlFactory.Create();
    crawlAnim->Play();

    return 0;
}