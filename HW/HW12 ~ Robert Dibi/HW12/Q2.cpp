#include <iostream>
#include <memory>

template <typename T>
class Factory {
public:
    std::shared_ptr<T> Create() {
        return std::make_shared<T>();
    }
};

class Animation {
public:
    virtual void Play() = 0;
};

class IdleAnimation : public Animation {
public:
    void Play() override {
        std::cout << "Idle" << std::endl;
    }
};

class WalkingAnimation : public Animation {
public:
    void Play() override {
        std::cout << "Walk" << std::endl;
    }
};

class CrawlingAnimation : public Animation {
public:
    void Play() override {
        std::cout << "Crawl" << std::endl;
    }
};

int main() {
    Factory<IdleAnimation> idle_factory;
    std::shared_ptr<IdleAnimation> idle_ptr = idle_factory.Create();
    idle_ptr->Play();

    Factory<WalkingAnimation> walk_factory;
    std::shared_ptr<WalkingAnimation> walk_ptr = walk_factory.Create();
    walk_ptr->Play();

    Factory<CrawlingAnimation> crawl_factory;
    std::shared_ptr<CrawlingAnimation> crawl_ptr = crawl_factory.Create();
    crawl_ptr->Play();

    return 0;
}