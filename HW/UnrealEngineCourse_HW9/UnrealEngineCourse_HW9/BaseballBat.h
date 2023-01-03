#pragma once
#include "Weapon.h"

class BaseballBat : public Weapon
{
protected:
	string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
public:
	BaseballBat();
	~BaseballBat();
};