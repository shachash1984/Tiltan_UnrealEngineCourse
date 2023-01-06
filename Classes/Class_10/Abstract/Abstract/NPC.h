#pragma once
#include <string>

class NPC
{
public:
	NPC();
	NPC(std::string _name);
	virtual ~NPC();
	virtual void Interact() = 0;

	NPC(const NPC& other);
	NPC& operator=(const NPC& other);

protected:
	std::string name;
};
