#pragma once
#include <string>
#include "Weapon.h"

class MissileLauncher : public Weapon
{
public:
	MissileLauncher();
	MissileLauncher(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~MissileLauncher();
};