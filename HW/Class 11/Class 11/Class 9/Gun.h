#pragma once

#pragma once
#include "Weapon.h"


class Gun : public Weapon
{
public:
	Gun();
	Gun(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	~Gun() override;

	Gun(const Gun& other);
	Gun& operator=(const Gun& other);

	bool Shoot() override;
};
