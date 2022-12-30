#pragma once
#include "Spaceship.h"
#include "Weapon.h"
#include <vector>

//Spaceship::Spaceship(string name, vector<Weapon*> weapons)
//{
//	_name = name;
//
//	for (size_t i = 0; i < weapons.size(); i++)
//	{
//		AddWeapon(*weapons[i]);
//	}
//}

Spaceship::~Spaceship()
{
	/*for (size_t i = 0; i < _weapons.size(); i++)
	{
		delete _weapons[i];
	}*/
}

//void Spaceship::AddWeapon(Weapon& weapon)
//{
//	_weapons.push_back(&weapon);
//}
