#include <iostream>
#include <vector>
#include "SpaceShip.h"

int main()
{
	// Create weapons
	Weapon weapon1("Laser", 10, 50.0f, 2.0f, 100);
	Weapon weapon2("Plasma Cannon", 20, 100.0f, 5.0f, 50);
	Weapon weapon3("Missile Launcher", 30, 200.0f, 10.0f, 25);

	// Create spaceship and add weapons
	SpaceShip spaceship("Enterprise", { &weapon1, &weapon2 });
	spaceship.AddWeapon(weapon3);

	// Shoot all weapons
	spaceship.FireEverythingWeGot();

	return 0;
}