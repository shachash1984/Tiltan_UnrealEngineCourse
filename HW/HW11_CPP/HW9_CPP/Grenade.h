#pragma once
#include "Weapon.h"

class Grenade : public Weapon
{
public:
	Grenade();
	Grenade(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~Grenade() override;


	Grenade(const Grenade& other);
	Grenade& operator=(const Grenade& other);

	bool Shoot() override;
};
