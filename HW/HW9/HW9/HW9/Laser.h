#pragma once
#include "Weapon.h"

class Laser : Weapon
{
public:
	Laser();
	Laser(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo);
};