#pragma once
#include <string>

enum WeaponType
{
	tPotatoGun,
	tRockets,
	tLaser,
};

class Weapon
{
public:
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, int _hitChance, unsigned int _ammo);
	Weapon(const Weapon& other);
	Weapon& operator=(const Weapon& other);
	virtual ~Weapon();
	virtual bool Shoot();
	WeaponType GetType();

protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	int hitChance;
	unsigned int ammo;

private:
		WeaponType _type;
};