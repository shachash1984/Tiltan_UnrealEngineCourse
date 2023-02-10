#pragma once
#include <memory>
#include <iostream>
using namespace std;
template<typename T>
class BaseFactory
{
public:
	BaseFactory();
	virtual shared_ptr<T> Create(string name);
};

//Question 2:
//Factory design pattern
//implement a class template : Factory<T>
//that implements a function :
//std::shared_ptr<T> Create();

