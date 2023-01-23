#include "SpaceShuttle.h"
#include <iostream>
using std::cout;
using std::endl;

SpaceShuttle::SpaceShuttle(std::string _name, Weapon _weapon)
	: name(_name)
{
	currentWeapon = std::make_unique<Weapon>(_weapon);
	cout << ToString() << endl;
}

SpaceShuttle::~SpaceShuttle()
{
	cout << "SpaceShuttle " << name << " Destroyed!" << endl;
}

void SpaceShuttle::Shoot()
{
	cout << "Firing: " << currentWeapon->GetName() << " ----- " << endl;
	cout << "Hit:" << ((currentWeapon->Shoot() == true) ? ("True") : ("False")) << endl << endl;
}
