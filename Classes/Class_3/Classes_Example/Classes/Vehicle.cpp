#include <iostream>
#include "Vehicle.h"

using std::cout;
using std::endl;

Vehicle::Vehicle() : Fuel(0.0f), Weapon(100.0f, "Laser Canon", 5)
{

}

void Vehicle::AddFuel(float fuel)
{
	Fuel += fuel;
}

string Vehicle::PrintVehicleStatus() const
{
	return "Fuel: " + std::to_string(Fuel) + " Ammo: " + std::to_string(Weapon.GetAmmo());
}

void Vehicle::Shoot()
{
	Weapon.Shoot();
}

void Vehicle::Drive()
{
	if (Fuel > 0.0f)
	{
		cout << "Vroom!" << endl;
		Fuel -= 1.5f;
	}
	else
	{
		cout << "It Won't start!" << endl;
		Fuel = 0.0f;
	}
}
