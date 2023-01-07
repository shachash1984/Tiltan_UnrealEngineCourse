#include "Blacksmith.h"
#include <iostream>

Blacksmith::Blacksmith()
	: NPC()
	, CraftTime(0.0f)
{
	std::cout << "Blacksmith Constructed" << std::endl;
}

Blacksmith::Blacksmith(std::string _name)
	: NPC(_name)
	, CraftTime(2.0f)
{
	std::cout << "Blacksmith: " << name << " Constructed" << std::endl;
}

Blacksmith::~Blacksmith()
{
	std::cout << "Blacksmith: " << name << " Destroyed" << std::endl;
}

void Blacksmith::Interact()
{
	std::cout << name << " :\nHello there," << " I can make you something, but it will take time... around:  " << CraftTime << " hours" << std::endl;
}
