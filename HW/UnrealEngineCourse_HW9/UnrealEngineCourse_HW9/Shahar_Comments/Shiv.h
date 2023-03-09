#pragma once
#include "Weapon.h"

class Shiv :public Weapon
{
protected:
	string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
public:
	Shiv();
	~Shiv();
};