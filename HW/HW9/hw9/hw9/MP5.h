#pragma once
#include "Weapon.h"
#include "string"

class MP5 : public Weapon
{
protected:
	std::string _name;
	unsigned int _damage;
	float _range;
	float _reloadTime;
	unsigned int _ammo;
public:
	MP5();
	~MP5();
};

