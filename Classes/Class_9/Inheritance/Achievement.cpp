#include "Achievement.h"

#include <iostream>

Achievement::Achievement(unsigned int _id, std::string _desc)
	: id(_id)
	, description(_desc)
{
	std::cout << "Achievement: " << description << " Created!" << std::endl;
}

Achievement::~Achievement()
{
	std::cout << "Achievement: " << description << " Destroyed!" << std::endl;
}
