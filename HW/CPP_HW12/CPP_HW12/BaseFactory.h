#pragma once
#include <memory>

using namespace std;

template <typename T>
class BaseFactory
{
public:
	BaseFactory();
	shared_ptr<T> Create();
};

//Question 2:
//Factory design pattern
//implement a class template : Factory<T>
//that implements a function :
//std::shared_ptr<T> Create();

//create 3 classes:
//IdleAnimation
//WalkingAnimation
//CrawlingAnimation
//
//all animation classes have a void Play() method which print the animation name("Idle", "Walk"...)
//
//
//In main, Create instances of these classes using the Factory template class
//Call the Play() method on each instance
//
//** Bonus : make the animation classes derive from a base animation class
//
//** Life Bonus : Read the book "Game programming patterns" by Robert Nystrom

