#pragma once
#include <string>

struct Achievement
{
	Achievement(unsigned int _id, std::string _desc);
	~Achievement();
	unsigned int id;
	std::string description;
};
