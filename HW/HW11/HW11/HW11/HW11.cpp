#include <iostream>
#include <vector>
#include "SpaceShip.h"
#include "Weapon.h"
#include "Laser.h"
#include "PotatoGun.h"
#include "Rockets.h"
#include "SpaceShuttle.h"

int main()
{
	Rockets* rocket = new Rockets("Rocket Launcher", 100, 1000, 5, 80, 10);
	Laser* laser = new Laser("Laser", 50, 500, 2, 70, 20);
	PotatoGun* potato = new PotatoGun("Potato Gun", 10, 100, 1, 100, 100);

	std::vector<Weapon*> weapons;

	SpaceShip* spaceship = new SpaceShip("Spaceship", weapons);
	spaceship->AddWeapon(*rocket);
	spaceship->AddWeapon(*laser);
	spaceship->AddWeapon(*potato);

	spaceship->ShootAll();

	delete spaceship;

	SpaceShuttle shuttle;
}