#include "SpaceShuttle.h"

SpaceShuttle::SpaceShuttle(Weapon uniqueWeapon) : _uniqueWeapon(make_unique<Weapon>(uniqueWeapon))
{
}

void SpaceShuttle::Shoot(unsigned int distanceToTarget, int weaponNumber)
{
	cout << "SpaceShuttle is shooting unique weapon!" << endl;
	_uniqueWeapon->Shoot(distanceToTarget);
}
