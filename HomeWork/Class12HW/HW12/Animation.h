#pragma once

#include <iostream>
#include <memory>

class IdleAnimation
{
public:
    void Play() { std::cout << "Idle\n"; }
};

class WalkingAnimation
{
public:
    void Play() { std::cout << "Walk\n"; }
};

class CrawlingAnimation
{
public:
    void Play() { std::cout << "Crawl\n"; }
};