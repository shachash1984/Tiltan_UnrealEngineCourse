#include "NPC.h"

#include <iostream>

NPC::NPC()
{
	std::cout << "NPC Constructed" << std::endl;
}

NPC::NPC(std::string _name)
	: name(_name)
{
	std::cout << "NPC: " << name << " Constructed" << std::endl;
}

NPC::~NPC()
{
	std::cout << "NPC: " << name << " Destroyed" << std::endl;
}

NPC::NPC(const NPC& other)
{
	name = other.name;
	std::cout << "NPC: " << name << " Copy Constructed" << std::endl;
}

NPC& NPC::operator=(const NPC& other)
{
	
	std::cout << "NPC: " << name << " is now Assigned and has a new name: " << other.name << std::endl;
	name = other.name;
	return *this;
}
