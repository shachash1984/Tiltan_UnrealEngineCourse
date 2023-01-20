#include "Missile.h"

Missile::Missile()
{
}

Missile::Missile(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
}
