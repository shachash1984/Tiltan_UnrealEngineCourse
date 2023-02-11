#include <iostream>

#include "Cannon.h"
#include "Gun.h"
#include "Laser.h"
#include "SpaceShip.h"
#include "Weapon.h"

int main()
{
	const std::vector<Weapon*> weapons;

	SpaceShip ship("The Flying Dutchman", weapons);

	Gun gun("pistol", 10, 100, 1, 100);
	std::cout << "\n" << std::endl;
	Cannon cannon("cannon", 100, 1000, 10, 100);
	std::cout << "\n" << std::endl;
	Laser laser("laser", 1000, 10000, 100, 100);
	std::cout << "\n" << std::endl;
	
	Weapon* gunPtr = new Gun("pistol", 10, 100, 1, 100);
	std::cout << "\n" << std::endl;
	Weapon* cannonPtr = new Cannon("cannon", 100, 1000, 10, 100);
	std::cout << "\n" << std::endl;
	Weapon* laserPtr = new Laser("laser", 1000, 10000, 100, 100);
	std::cout << "\n" << std::endl;

	ship.AddWeapon(gun);
	ship.AddWeapon(cannon);
	ship.AddWeapon(laser);

	ship.AddWeapon(*gunPtr);
	ship.AddWeapon(*cannonPtr);
	ship.AddWeapon(*laserPtr);

	ship.FireEverythingWeGot();
	std::cout << "\n" << std::endl;

	delete gunPtr;
	gunPtr = nullptr;

	delete cannonPtr;
	cannonPtr = nullptr;

	delete laserPtr;
	laserPtr = nullptr;

	return 0;
}