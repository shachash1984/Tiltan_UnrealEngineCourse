#pragma once
#include <string>
#include <vector>
#include <random>
#include "Weapon.h"
#include "Weapon.h"

class SpaceShip
{
	public:
		SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
		~SpaceShip();
		void AddWeapon(Weapon& _weapon);
		void ChangeWeapon(bool Forward);
		void SwitchToRandom();
		void Shoot();

	private:
		std::string name;
		std::vector<Weapon*> weapons;
		Weapon* currentWeapon;
		int currentItemSlot;
};

