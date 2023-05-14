#pragma once
class Sword
{
};

#pragma once
#include "Weapon.h"
#include "string"

class Sword : public Weapon
{
protected:
	std::string _name;
	unsigned int _damage;
	float _range;
	float _reloadTime;
	unsigned int _ammo;
public:
	Sword();
	~Sword();
};

