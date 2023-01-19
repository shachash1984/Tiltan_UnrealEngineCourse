#pragma once
#include <memory>

template <class T>
class Factory
{
public:
	std::shared_ptr<T> Create() 
	{
		return std::make_shared<T>();
	};
	
};

