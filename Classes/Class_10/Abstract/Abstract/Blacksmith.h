#pragma once
#include "NPC.h"

class Blacksmith : public NPC
{
public:
	Blacksmith();
	Blacksmith(std::string _name);
	~Blacksmith() override;
	void Interact() override;

private:
	float CraftTime;
};
