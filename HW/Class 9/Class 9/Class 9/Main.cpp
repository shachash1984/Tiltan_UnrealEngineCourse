#include <iostream>

#include "Cannon.h"
#include "Gun.h"
#include "Laser.h"
#include "SpaceShip.h"
#include "Weapon.h"

int main()
{
	SpaceShip ship("The Flying Dutchman", std::vector<Weapon*>());

	Gun gun("Pistol", 10, 100, 1, 100);
	Cannon cannon("Cannon", 100, 1000, 10, 100);
	Laser laser("Laser", 1000, 10000, 100, 100);

	ship.AddWeapon(gun);
	ship.AddWeapon(cannon);
	ship.AddWeapon(laser);

	ship.FireEverythingWeGot();

	return 0;
}