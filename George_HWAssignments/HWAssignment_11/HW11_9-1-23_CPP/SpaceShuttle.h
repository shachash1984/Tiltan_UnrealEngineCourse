#pragma once
#include <memory>
#include <string>
#include "Weapon.h"
#include "ISpaceVehicle.h"

class SpaceShuttle : public ISpaceVehicle {
public:
	SpaceShuttle(std::string _name, Weapon _weapon);
	virtual ~SpaceShuttle();
	void Shoot();

	std::string ToString() {
		return "SpaceShuttle: " + name + " Was Created!\n" + "Equipped Weapon: " + currentWeapon.get()->GetName() + "\n";
	}

private:
	std::string name;
	std::unique_ptr<Weapon> currentWeapon{ nullptr };
};