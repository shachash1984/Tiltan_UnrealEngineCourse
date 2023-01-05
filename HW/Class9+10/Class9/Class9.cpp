// Class9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Spaceship.h"
#include "Weapon.h"
#include "EggBlaster.h"
#include "GunGun.h"
#include "JellyGun.h"

int main()
{
	GunGun* gungun = new GunGun("Gungun", 99, 15, 2, 80, 25);
	JellyGun* slimer = new JellyGun("Slimer", 2, 30, 1, 50, 100);
	EggBlaster* chicken = new EggBlaster("Chick", 20, 20, 4, 30, 40);

	EggBlaster* rooster;

	std::vector<Weapon*> weps;

	Spaceship* spaceship = new Spaceship("Boomka", weps);

	spaceship->AddWeapon(*gungun);
	spaceship->AddWeapon(*slimer);
	spaceship->AddWeapon(*chicken);

	spaceship->FireWeapon();

	spaceship->SwitchWeapon(*slimer);
	spaceship->FireWeapon();

	spaceship->SwitchWeapon(*gungun);
	spaceship->FireWeapon();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
