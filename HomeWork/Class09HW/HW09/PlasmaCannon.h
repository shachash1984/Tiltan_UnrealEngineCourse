#pragma once
#include <string>
#include "Weapon.h"

class PlasmaCannon : public Weapon
{
public:
	PlasmaCannon();
	PlasmaCannon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
};