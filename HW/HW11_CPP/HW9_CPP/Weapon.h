#pragma once
#include <string>


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
