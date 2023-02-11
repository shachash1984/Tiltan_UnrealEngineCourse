#include "MissileLauncher.h"

MissileLauncher::MissileLauncher() : Weapon()
{
	// Constructor
}

MissileLauncher::MissileLauncher(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	// Constructor
}

//MissileLauncher::~MissileLauncher()
//{
//	// Destructor
//}

//bool MissileLauncher::Shoot()
//{
//	return false;
//}
