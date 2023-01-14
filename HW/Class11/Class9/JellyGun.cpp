#include "JellyGun.h"

JellyGun::JellyGun(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo) :
	Weapon(_name, _damage, _range, _reloadTime, _hitChance, _ammo)
{
}

JellyGun::JellyGun() : Weapon("JellyGun", 10, 50, 1, 70, 50)
{
}
