#include "spaceshuttle.h"

SpaceShuttle::SpaceShuttle(std::string _name, std::unique_ptr<Weapon> _weapon)
    : name(_name), weapon(std::move(_weapon)) {}

SpaceShuttle::SpaceShuttle(const SpaceShuttle& other)
    :name(other.name), weapon(std::make_unique<Weapon>(*other.weapon)) {}

SpaceShuttle& SpaceShuttle::operator=(const SpaceShuttle& other)
{
    if (this != &other) {
        name = other.name;
        weapon = std::make_unique<Weapon>(*other.weapon);
    }
    return *this;
}

SpaceShuttle::~SpaceShuttle() {}

void SpaceShuttle::AddWeapon(std::unique_ptr<Weapon> _weapon)
{
    weapon = std::move(_weapon);
}

void SpaceShuttle::Shoot()
{
    weapon->Shoot();
}

void SpaceShuttle::FireEverythingWeGot()
{
    weapon->Shoot();
}