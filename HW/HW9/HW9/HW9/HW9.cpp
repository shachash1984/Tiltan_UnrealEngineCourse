#include <iostream>
#include <vector>
#include "SpaceShip.h"
#include "Weapon.h"
#include "Laser.h"
#include "PotatoGun.h"
#include "Rockets.h"

int main()
{
	Rockets* rocket = new Rockets("Rocket Launcher", 100, 1000, 5, 100, 10);
	Laser* laser = new Laser("Laser", 50, 500, 2, 100, 20);
	PotatoGun* potato = new PotatoGun("Potato Gun", 10, 100, 1, 100, 100);

	std::vector<Weapon*> weapons;

	SpaceShip* spaceship = new SpaceShip("Spaceship", weapons);
}