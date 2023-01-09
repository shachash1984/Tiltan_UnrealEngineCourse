#pragma once
#include <string>
#include <vector>
#include <random>
#include "Weapon.h"
#include "ISpaceVehicle.h"

class SpaceShip : public ISpaceVehicle
{
	public:
		SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
		SpaceShip(const SpaceShip& other);
		SpaceShip& operator= (const SpaceShip& other);
		~SpaceShip();
		void AddWeapon(Weapon& _weapon);
		void ChangeWeapon(bool Forward);
		void SwitchToRandom();
		void Shoot() override;

	private:
		std::string name;
		std::vector<Weapon*> weapons;
		Weapon* currentWeapon;
		int currentItemSlot;
};

