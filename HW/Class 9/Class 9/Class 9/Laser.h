#pragma once
#include "Weapon.h"


class Laser : public Weapon
{
public:
	Laser();
	Laser(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~Laser() override;

	Laser(const Laser& other);
	Laser& operator=(const Laser& other);

	bool Shoot() override;
};