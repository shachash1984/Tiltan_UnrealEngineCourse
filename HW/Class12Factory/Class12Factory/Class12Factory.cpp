// Class12Factory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Factory.h"
#include "Animation.h"
#include "CrawlingAnimation.h"
#include "IdleAnimation.h"
#include "WalkingAnimation.h"

int main()
{
    std::shared_ptr<CrawlingAnimation> ca = Factory<CrawlingAnimation>().Create();
    CrawlingAnimation crawlAnim = *ca;
    crawlAnim.Play();

    std::shared_ptr<IdleAnimation> ia = Factory<IdleAnimation>().Create();
    IdleAnimation idleAnim = *ia;
    idleAnim.Play();

    std::shared_ptr<WalkingAnimation> wa = Factory<WalkingAnimation>().Create();
    WalkingAnimation walkAnim = *wa;
    walkAnim.Play();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
