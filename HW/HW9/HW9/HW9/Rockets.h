#pragma once
#include "Weapon.h"

class Rockets : Weapon
{
public:
	Rockets();
	Rockets(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo);
};