#pragma once
#include <memory>
#include "ISpaceVehicle.h"
#include "weapon.h"

class SpaceShuttle : public ISpaceVehicle
{
public:
    SpaceShuttle(std::string _name, std::unique_ptr<Weapon> _weapon);
    SpaceShuttle(const SpaceShuttle& other);
    SpaceShuttle& operator=(const SpaceShuttle& other);
    ~SpaceShuttle();
    void AddWeapon(std::unique_ptr<Weapon> _weapon) override;
    void Shoot() override;
    void FireEverythingWeGot() override;

private:
    std::string name;
    std::unique_ptr<Weapon> weapon;
};