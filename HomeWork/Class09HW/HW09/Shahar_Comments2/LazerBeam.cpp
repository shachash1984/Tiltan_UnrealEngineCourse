#include "LazerBeam.h"

LazerBeam::LazerBeam() : Weapon()
{
	// Constructor
}
LazerBeam::LazerBeam(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	// Constructor
}

//LazerBeam::~LazerBeam()
//{
//	// Destructor
//}

//bool LazerBeam::Shoot() // -2 not declared in LazerBeam.h
//{
//	return false;
//}
