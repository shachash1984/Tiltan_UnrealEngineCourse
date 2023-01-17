// CPP Homework 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "IdleAnimation.h"
#include "WalkingAnimation.h"
#include "CrawlingAnimation.h"
#include "Factory.h"
#include "Question1.h"

int main()
{
    std::vector<int> vec = { 5,2,4,9,10,1,13 };
    Question1 question1;
    std::cout << "Question 1:\n";
    std::cout << "\npart 1:\n";
    question1.PrintSumPairs1(vec, 14);
    std::cout << "\npart 2:\n";
    question1.PrintSumPairs2(vec, 14);

    std::cout << "\n\n\nQuestion 2:\n\n";

    Factory<IdleAnimation> idleFactory;
    auto idleAnim = idleFactory.Create();
    idleAnim->Play();
    
    Factory<WalkingAnimation> walkFactory;
    auto walkAnim = walkFactory.Create();
    walkAnim->Play();

    Factory<CrawlingAnimation> crawlFactory;
    auto crawlAnim = crawlFactory.Create();
    crawlAnim->Play();
    
}


