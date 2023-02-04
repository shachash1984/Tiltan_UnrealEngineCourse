#pragma once
#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo);
	virtual ~Weapon();
	virtual bool Shoot();
	
protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	int hitChance;
	unsigned int ammo;
};