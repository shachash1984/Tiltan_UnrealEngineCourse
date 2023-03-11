#include <iostream>

#include "Sniper.h"
#include "Shotgun.h"
#include "Grenade.h"
#include "SpaceShip.h"
#include "Weapon.h"

int main()
{
	const std::vector<Weapon*> weapons;

	Spaceship ship("The Black Pearl", weapons);

	Shotgun shotgun("shotgun", 45, 10, 5, 55);
	std::cout << "\n" << std::endl;
	Sniper sniper("sniper", 150, 500, 15, 20);
	std::cout << "\n" << std::endl;
	Grenade grenade("grenade", 100, 5, 3, 2);
	std::cout << "\n" << std::endl;

	Weapon* shotgunPtr = new Shotgun("shotgun", 45, 10, 5, 55);
	std::cout << "\n" << std::endl;
	Weapon* sniperPtr = new Sniper("sniper", 150, 500, 15, 20);
	std::cout << "\n" << std::endl;
	Weapon* grenadePtr = new Grenade("grenade", 100, 5, 3, 2);
	std::cout << "\n" << std::endl;

	ship.AddWeapon(shotgun);
	ship.AddWeapon(sniper);
	ship.AddWeapon(grenade);

	ship.AddWeapon(*shotgunPtr);
	ship.AddWeapon(*sniperPtr);
	ship.AddWeapon(*grenadePtr);

	ship.FireEverythingWeGot();
	std::cout << "\n" << std::endl;

	delete shotgunPtr; // -5 notice that you are also deleting current weapon in space ship destructor this could cause a crash
	shotgunPtr = nullptr;

	delete sniperPtr;
	sniperPtr = nullptr;

	delete grenadePtr;
	grenadePtr = nullptr;

}