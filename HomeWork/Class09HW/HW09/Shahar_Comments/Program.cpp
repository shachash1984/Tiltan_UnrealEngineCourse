#include <iostream>
#include <vector>
#include "SpaceShip.h"
#include "LazerBeam.h"
#include "PlasmaCannon.h"
#include "MissileLauncher.h"

//no override for Shoot on any weapon... -5
int main()
{
	// Create weapons
	LazerBeam LazerBeam("LazerBeam", 10, 50.0f, 2.0f, 100);
	PlasmaCannon plasmaCannon("Plasma Cannon", 20, 100.0f, 5.0f, 50);
	MissileLauncher missileLauncher("Missile Launcher", 30, 200.0f, 10.0f, 25);

	// Create spaceship and add weapons
	SpaceShip spaceship("Enterprise", { &LazerBeam, &plasmaCannon });
	spaceship.AddWeapon(missileLauncher);

	// Shoot all weapons
	spaceship.FireEverythingWeGot();

	return 0;
}