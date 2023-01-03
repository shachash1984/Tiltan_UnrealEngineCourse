#pragma once
#include "Weapon.h"

class SlingShot :public Weapon
{
protected:
	string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
public:
	SlingShot();
	~SlingShot();
};