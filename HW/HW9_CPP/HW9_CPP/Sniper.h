#pragma once
#include "Weapon.h"

class Sniper : public Weapon
{
public:
	Sniper();
	Sniper(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~Sniper() override;

	bool Shoot() override;
};
