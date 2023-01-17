#pragma once
#include <string>
#include "Weapon.h"
class LazerBeam : public Weapon
{
public:
	LazerBeam();
	LazerBeam(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~LazerBeam(); //-5 no override for destructor
};
