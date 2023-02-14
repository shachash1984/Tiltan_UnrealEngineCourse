#pragma once
#include <memory>
#include "Weapon.h"
#include <iostream>
#include "ISpaceVehicle.h"

using namespace std;

class SpaceShuttle : public ISpaceVehicle
{
private:
	unique_ptr<Weapon> _uniqueWeapon; // Will be deleted when SpaceShuttle is destroyed
public:
	SpaceShuttle(Weapon uniqueWeapon);
	void Shoot(unsigned int distanceToTarget, int weaponNumber = 0) override;
};

