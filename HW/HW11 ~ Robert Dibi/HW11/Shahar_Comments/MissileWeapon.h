#pragma once
#include "Weapon.h"

class MissileWeapon : public Weapon
{
public:
    MissileWeapon();
    MissileWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
    virtual ~MissileWeapon();
    virtual bool Shoot() override;
};
