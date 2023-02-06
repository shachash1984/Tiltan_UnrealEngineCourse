#pragma once // -5 you need to add this so the compiler knows that this header file has already been included
#include <iostream>
#include <string>
#include <vector>

class Weapon
{
public:
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~Weapon();
	virtual bool Shoot();


	Weapon(const Weapon& other);
	Weapon& operator=(const Weapon& other);

protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
};
