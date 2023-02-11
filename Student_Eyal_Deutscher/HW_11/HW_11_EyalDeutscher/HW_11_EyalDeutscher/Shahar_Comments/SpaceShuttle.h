#pragma once
#include "Weapon.h";
#include "ISpaceVehicle.h"
#include <memory>
#include <iostream>
using namespace std;
class SpaceShuttle:public ISpaceVehicle
{
private:
	unique_ptr<Weapon> _uniqueWeapon;//will be deleted when out of scope because of smart pointer
public:
	SpaceShuttle(Weapon uniqueWeapon);
	void Shoot(unsigned int distanceToTarget, unsigned int WeaponIndex = 0) override;
};

