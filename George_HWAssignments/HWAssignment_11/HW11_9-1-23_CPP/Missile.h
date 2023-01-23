#pragma once
#include "Weapon.h"

class Missile : public Weapon
{
public:
	Missile();
	Missile(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
};