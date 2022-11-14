#include <iostream>
#include "Vehicle.h"
using std::cout;
using std::endl;

int main()
{
	Vehicle v1;
	cout << "Initial status: " << endl;
	cout << v1.PrintVehicleStatus() <<"\n\n" << endl;

	v1.AddFuel(15.0f);
	cout << "After refueling: " << endl;
	cout << v1.PrintVehicleStatus() <<"\n\n" << endl;

	cout << "Shooting... " << endl;
	unsigned int const ammo = v1.GetAmmo();
	for (int i = 0; i < ammo; i++) // What is the problem here?
	{
		v1.Shoot();
	}

	cout << "\nAfter shooting: " << endl;
	cout << v1.PrintVehicleStatus() <<"\n\n" << endl;

	cout << "Driving... " << endl;
	float distance = 10.0f;
	while (distance > 0.0f) // What is the problem here?
	{
		v1.Drive();
		distance -= 1.0f;
	}
	

	cout << "\nAfter driving: " << endl;
	cout << v1.PrintVehicleStatus() <<"\n\n" << endl;

	getchar();
}