#include "SpaceShip.h"
#include <iostream>
using std::cout;
using std::endl;

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name), weapons(_weapons), currentWeapon((weapons.size() > 0) ? weapons[0] : nullptr)
{
}

SpaceShip::~SpaceShip()
{
	cout << "SpaceShip " << name << " Destroyed!" << endl;
}

void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
}

void SpaceShip::Shoot()
{
	cout << "Firing: " << currentWeapon->GetName() << " ----- " << endl;
	cout << "Hit:" << ((currentWeapon->Shoot() == true) ? ("True") : ("False")) << endl << endl;
}

void SpaceShip::FireEverythingWeGot()
{
	cout << "-----------------------" << endl;
	cout << "FIRE EVERYTHING WE GOT!" << endl;
	for (size_t i = 0; i < weapons.size(); i++)
	{
		cout << "Firing: " << weapons[i]->GetName() << " ----- " << endl;
		cout << "Hit:" << ((weapons[i]->Shoot() == true) ? ("True") : ("False")) << endl << endl;
	}
	cout << "-----------------------" << endl << endl;
}

void SpaceShip::SetCurrentWeapon(int slot)
{
	if (weapons.size() > slot && slot >= 0)
	{
		currentWeapon = weapons[slot];
		cout << "Weapon Set To -> " << currentWeapon->GetName() << endl;
	}
}
