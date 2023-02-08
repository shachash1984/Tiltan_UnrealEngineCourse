#pragma once

#pragma once
#include "Weapon.h"


class Cannon : public Weapon
{
public:
	Cannon();
	Cannon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~Cannon() override;
	bool Shoot() override;
};
