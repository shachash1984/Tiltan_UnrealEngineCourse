#pragma once
#include "Weapon.h"

class PlasmaWeapon : public Weapon
{
public:
    PlasmaWeapon();
    PlasmaWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
    virtual ~PlasmaWeapon();
    virtual bool Shoot() override;
};
