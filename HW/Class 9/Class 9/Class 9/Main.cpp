#include <iostream>

#include "Cannon.h"
#include "Gun.h"
#include "Laser.h"
#include "SpaceShip.h"
#include "Weapon.h"

int main()
{
	SpaceShip ship("The Flying Dutchman", std::vector<Weapon*>());

	Gun gun("pistol", 10, 100, 1, 100);
	Cannon cannon("cannon", 100, 1000, 10, 100);
	Laser laser("laser", 1000, 10000, 100, 100);

	//Weapon* gun = new Gun("pistol", 10, 100, 1, 100);
	//Weapon* cannon = new Cannon("cannon", 100, 1000, 10, 100);
	//Weapon* laser = new Laser("laser", 1000, 10000, 100, 100);

	ship.AddWeapon(gun);
	ship.AddWeapon(cannon);
	ship.AddWeapon(laser);

	ship.FireEverythingWeGot();

	//delete gun;
	//delete cannon;
	//delete laser;

	return 0;
}