#pragma once
#include <string>
#include "Weapon.h"
class LazerBeam : public Weapon
{ // -5 missing destructor (it is implemented but not declared)
public:
	LazerBeam();
	LazerBeam(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
};
