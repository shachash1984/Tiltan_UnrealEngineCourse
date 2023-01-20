#pragma once
#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(const Weapon& other);
	Weapon& operator=(const Weapon& other);
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~Weapon();
	virtual bool Shoot();

	std::string ToString() {
		return "Weapon:" + name + " Damage:" + std::to_string(damage)
			+ " Range:" + std::to_string(range) + " ReloadTime:" + std::to_string(reloadTime)
			+ " Ammo:" + std::to_string(ammo) + "/" + std::to_string(maxAmmo) + "\n";
	}

	std::string GetName() { return name; }

protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
	unsigned int maxAmmo;
};
