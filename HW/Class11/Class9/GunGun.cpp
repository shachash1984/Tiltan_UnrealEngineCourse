#include "GunGun.h"
GunGun::GunGun(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo) : 
	Weapon(_name, _damage, _range, _reloadTime, _hitChance, _ammo)
{
}

GunGun::GunGun() : Weapon("GunGun", 40, 10, 1, 70, 10)
{
}

