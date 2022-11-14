#pragma once
#include <string>
using std::string;

struct Weapon
{
private:
	float Damage;
	string Name;
	unsigned int Ammo;

public:
	Weapon(float damage, string name, unsigned int ammo);
	string GetName() { return Name; }
	void Shoot();
	unsigned GetAmmo() const { return Ammo; }
};
