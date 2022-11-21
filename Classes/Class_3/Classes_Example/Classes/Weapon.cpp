#include "Weapon.h"
#include <iostream>
using std::cout;
using std::endl;

Weapon::Weapon(float damage, string name, unsigned int ammo) : Damage(damage), Name(name), Ammo(ammo)
{

}

void Weapon::Shoot()
{
	if (Ammo > 0)
	{
		cout << Name << "Fired! " << Damage << " damage!" << endl;
		Ammo--;
	}
	else
	{
		cout << "Click!" << endl;
	}
}
