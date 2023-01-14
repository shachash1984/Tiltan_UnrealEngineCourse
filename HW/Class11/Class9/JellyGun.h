#pragma once
#include "Weapon.h"
class JellyGun : public Weapon
{
public:
	JellyGun(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo);
	JellyGun();
};

