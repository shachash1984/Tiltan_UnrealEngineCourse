#pragma once
#include <memory>
#include <iostream>
using namespace std;
class BaseFactory
{
public:
	BaseFactory()
	{
	}

	template<typename T>
	shared_ptr<T> Create()
	{
		return make_shared<T>();
	}
};

//Question 2:
//Factory design pattern
//implement a class template : Factory<T>
//that implements a function :
//std::shared_ptr<T> Create();

