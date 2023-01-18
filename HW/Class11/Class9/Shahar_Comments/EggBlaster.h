#pragma once
#include "Weapon.h"
class EggBlaster : public Weapon
{
public:
	EggBlaster(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo);
	EggBlaster();
};

