#include "MissleWeapon.h" //-10 This file was empty, so I added the missing code 

MissleWeapon::MissleWeapon()
{
}

MissleWeapon::MissleWeapon(std::string _name, unsigned _damage, float _range, float _reloadTime, unsigned _ammo)
{
}

MissleWeapon::~MissleWeapon()
{
}

bool MissleWeapon::Shoot()
{
	return Weapon::Shoot();
}
