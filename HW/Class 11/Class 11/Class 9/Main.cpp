#include <iostream>

#include "Cannon.h"
#include "Gun.h"
#include "Laser.h"
#include "SpaceShip.h"
#include "Weapon.h"
#include "SpaceShuttle.h"
#include "ISpaceVehicle.h"

int main()
{
	//const std::vector<Weapon*> weapons;

	//SpaceShip ship("The Flying Dutchman", weapons);

	//Gun gun("pistol", 10, 100, 1, 100);
	//std::cout << "\n" << std::endl;
	//Cannon cannon("cannon", 100, 1000, 10, 100);
	//std::cout << "\n" << std::endl;
	//Laser laser("laser", 1000, 10000, 100, 100);
	//std::cout << "\n" << std::endl;
	//
	//Weapon* gunPtr = new Gun("pistol", 10, 100, 1, 100);
	//std::cout << "\n" << std::endl;
	//Weapon* cannonPtr = new Cannon("cannon", 100, 1000, 10, 100);
	//std::cout << "\n" << std::endl;
	//Weapon* laserPtr = new Laser("laser", 1000, 10000, 100, 100);
	//std::cout << "\n" << std::endl;

	//ship.AddWeapon(gun);
	//ship.AddWeapon(cannon);
	//ship.AddWeapon(laser);

	//ship.AddWeapon(*gunPtr);
	//ship.AddWeapon(*cannonPtr);
	//ship.AddWeapon(*laserPtr);

	//ship.FireEverythingWeGot();
	//std::cout << "\n" << std::endl;

	//SpaceShip ship_copy(ship);
	//std::cout << "\n" << std::endl;

	//ship.FireEverythingWeGot();
	//std::cout << "\n" << std::endl;

	//Gun gun_copy(gun);
	//gun_copy.Shoot();
	//std::cout << "\n" << std::endl;

	//Cannon cannon_copy(cannon);
	//cannon_copy.Shoot();
	//std::cout << "\n" << std::endl;

	//Laser laser_copy(laser);
	//laser_copy.Shoot();
	//std::cout << "\n\n\n" << std::endl;

	//SpaceShip ship_copy2 = ship;
	//std::cout << "\n" << std::endl;
	//ship_copy2.FireEverythingWeGot();
	//std::cout << "\n" << std::endl;

	//Gun gun_copy2 = gun;
	//gun_copy2.Shoot();
	//std::cout << "\n" << std::endl;

	//Cannon cannon_copy2 = cannon;
	//cannon_copy2.Shoot();
	//std::cout << "\n" << std::endl;

	//Laser laser_copy2 = laser;
	//laser_copy2.Shoot();
	//std::cout << "\n\n\n" << std::endl;

	//SpaceShip ship_copy3("SS Cotopaxi", weapons);
	//std::cout << "\n" << std::endl;
	//ship_copy3 = ship;
	//ship_copy3.FireEverythingWeGot();
	//std::cout << "\n" << std::endl;

	//Gun gun_copy3;
	//gun_copy3 = gun;
	//gun_copy3.Shoot();
	//std::cout << "\n" << std::endl;

	//Cannon cannon_copy3;
	//cannon_copy3 = cannon;
	//cannon_copy3.Shoot();
	//std::cout << "\n" << std::endl;

	//Laser laser_copy3;
	//laser_copy3 = laser;
	//laser_copy3.Shoot();
	//std::cout << "\n\n\n" << std::endl;

	//Weapon* gunPtr_copy = gunPtr;
	//gunPtr_copy->Shoot();
	//std::cout << "\n" << std::endl;

	//Weapon* cannonPtr_copy = cannonPtr;
	//cannonPtr_copy->Shoot();
	//std::cout << "\n" << std::endl;

	//Weapon* laserPtr_copy = laserPtr;
	//laserPtr_copy->Shoot();
	//std::cout << "\n\n\n" << std::endl;

	//delete gunPtr;
	//gunPtr = nullptr;
	//gunPtr_copy = nullptr;

	//delete cannonPtr;
	//cannonPtr = nullptr;
	//cannonPtr_copy = nullptr;

	//delete laserPtr;
	//laserPtr = nullptr;
	//laserPtr_copy = nullptr;

	SpaceShuttle shuttle("Dutchman");
	shuttle.Shoot();		

	return 0;
}