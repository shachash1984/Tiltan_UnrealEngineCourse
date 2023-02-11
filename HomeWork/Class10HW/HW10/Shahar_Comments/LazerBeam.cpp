#include "LazerBeam.h"

LazerBeam::LazerBeam() : Weapon()
{
	// Constructor
}
LazerBeam::LazerBeam(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	// Constructor
}

//LazerBeam::~LazerBeam() //-2 you are implementing but not decalraing these two...your code didnt compile
//{
//	// Destructor
//}
//
//bool LazerBeam::Shoot()
//{
//	return false;
//}
