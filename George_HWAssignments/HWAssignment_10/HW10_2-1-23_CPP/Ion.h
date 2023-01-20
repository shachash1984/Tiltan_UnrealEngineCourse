#pragma once
#include "Weapon.h"

class Ion : public Weapon
{
public:
	Ion();
	Ion(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
};