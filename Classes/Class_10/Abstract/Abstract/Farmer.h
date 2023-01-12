#pragma once
#include "NPC.h"

class Farmer : public NPC
{
public:
	Farmer();
	Farmer(std::string _name);
	~Farmer() override;
	void Interact() override;

	Farmer(const Farmer& other);
	Farmer& operator=(const Farmer& other);

private:
	int goldAmount;
};
