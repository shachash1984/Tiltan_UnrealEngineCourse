#pragma once
#include "Weapon.h"
class LaserGun : public Weapon
{
public:
	LaserGun();
	~LaserGun();
	Weapon* Clone() override;
};

