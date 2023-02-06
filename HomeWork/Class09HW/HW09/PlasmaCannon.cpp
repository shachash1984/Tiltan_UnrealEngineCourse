#include "PlasmaCannon.h"

PlasmaCannon::PlasmaCannon() : Weapon()
{
	// Constructor
}

PlasmaCannon::PlasmaCannon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
	// Constructor
}

PlasmaCannon::~PlasmaCannon()
{
	// Destructor
}

bool PlasmaCannon::Shoot()
{
	return false;
}
