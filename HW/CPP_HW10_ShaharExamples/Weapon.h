#pragma once
#include <iostream>
#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	Weapon(const Weapon& other);
	virtual ~Weapon();
	virtual bool Shoot();
	virtual Weapon* Clone();

protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
};

