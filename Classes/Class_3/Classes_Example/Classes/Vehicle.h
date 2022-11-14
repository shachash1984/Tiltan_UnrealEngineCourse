#pragma once
#include "Weapon.h"

class Vehicle
{
private:
	float Fuel;
	Weapon Weapon;
public:
	Vehicle();
	void AddFuel(float fuel);
	float GetFuel() const { return Fuel; }
	unsigned int GetAmmo() const { return Weapon.GetAmmo(); }
	string PrintVehicleStatus() const;
	void Shoot();
	void Drive();
};

