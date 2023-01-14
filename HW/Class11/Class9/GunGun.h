#pragma once
#include "Weapon.h"
class GunGun : public Weapon
{
public:
	GunGun(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo);
	GunGun();
};

