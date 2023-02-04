#include "Rockets.h"

Rockets::Rockets()
{
}

Rockets::Rockets(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _hitChance, _ammo)
{
}