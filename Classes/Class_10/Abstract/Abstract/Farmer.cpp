#include "Farmer.h"

#include <iostream>

Farmer::Farmer() : NPC(), goldAmount(0)
{
	std::cout << "Farmer Constructed" << std::endl;
}

Farmer::Farmer(std::string _name)
	: NPC(_name)
	, goldAmount(10)
{
	std::cout << "Farmer: " << name << " Constructed" << std::endl;
}

Farmer::~Farmer()
{
	std::cout << "Farmer: " << name << " Destroyed" << std::endl;
}

void Farmer::Interact()
{
	std::cout << name << " :\nHowdy stranger!" << " Selling anything for " << goldAmount << " gold?" << std::endl;
}

Farmer::Farmer(const Farmer& other)
	:NPC(other)
{
	goldAmount = other.goldAmount;
	std::cout << "Farmer: " << name << " Copy Constructed" << std::endl;
}

Farmer& Farmer::operator=(const Farmer& other)
{
	
	std::cout << "Farmer: " << name << " is now Assigned and has a new name: " << other.name << std::endl;
	name = other.name;
	goldAmount = other.goldAmount;
	return *this;
}
