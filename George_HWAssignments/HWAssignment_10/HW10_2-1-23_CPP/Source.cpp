#include <iostream>
#include <vector>
#include "SpaceShip.h"
#include "Laser.h"
#include "Ion.h"
#include "Missile.h"
using std::cout;
using std::endl;

int main()
{
	Laser wp1 = Laser("LaserCanon", 10, 100, 1, 50);
	Ion wp2 = Ion("IonGun", 25, 50, 1, 10);
	Missile wp3 = Missile("MissileLauncher", 50, 25, 1, 4);
	Missile wp4 = wp3;

	std::vector<Weapon*> elWeapons{ &wp1 ,&wp2 ,&wp3, &wp4 };

	SpaceShip sp = SpaceShip("GeoShip", elWeapons);

	sp.SetCurrentWeapon(0);
	sp.Shoot();

	sp.SetCurrentWeapon(1);
	sp.Shoot();

	sp.SetCurrentWeapon(2);
	sp.Shoot();	
	
	sp.SetCurrentWeapon(3);
	sp.Shoot();

	sp.FireEverythingWeGot();
	sp.FireEverythingWeGot();



	return 0;
}