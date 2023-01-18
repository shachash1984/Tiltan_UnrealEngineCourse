#include "EggBlaster.h"


EggBlaster::EggBlaster(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo) :
	Weapon(_name, _damage, _range, _reloadTime, _hitChance, _ammo)
{
}

EggBlaster::EggBlaster() : Weapon("EggBlaster", 20, 20, 2, 60, 20)
{
}

