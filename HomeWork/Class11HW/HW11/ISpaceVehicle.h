#pragma once

#include <memory>
#include "Weapon.h"

class ISpaceVehicle
{
public:
    ISpaceVehicle() {}
    virtual ~ISpaceVehicle() {}
    virtual void Shoot() = 0;
    virtual void FireEverythingWeGot() = 0;
    virtual void AddWeapon(std::unique_ptr<Weapon> _weapon) = 0;
};