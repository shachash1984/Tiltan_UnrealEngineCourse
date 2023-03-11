#pragma once
#include "Weapon.h"

class Shotgun : public Weapon
{
public:
	Shotgun();
	Shotgun(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~Shotgun() override;

	bool Shoot() override;
};
