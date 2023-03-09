#pragma once
#include "Weapon.h"

class SlingShot :public Weapon
{
protected: // -10 you already have these members
	string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
public:
	SlingShot();
	~SlingShot();
};