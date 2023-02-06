#pragma once
#include "Weapon.h"

class MissleWeapon : public Weapon
{
public:
    MissleWeapon();
    MissleWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
    virtual ~MissleWeapon(); 
    virtual bool Shoot() override;
};
