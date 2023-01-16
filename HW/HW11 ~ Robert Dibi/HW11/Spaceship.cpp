#include "SpaceShip.h"

SpaceShip::SpaceShip(std::string _name, std::vector<std::unique_ptr<Weapon>> _weapons)
    : name(_name), weapons(std::move(_weapons)) {}

SpaceShip::SpaceShip(const SpaceShip& other)
    :name(other.name)
{
    for (unsigned int i = 0; i < other.weapons.size(); ++i) {
        weapons.push_back(std::make_unique<Weapon>(*other.weapons[i]));
    }
}

SpaceShip& SpaceShip::operator=(const SpaceShip& other)
{
    if (this != &other) {
        name = other.name;
        weapons.clear();
        for (unsigned int i = 0; i < other.weapons.size(); ++i) {
            weapons.push_back(std::make_unique<Weapon>(*other.weapons[i]));
        }
    }
    return *this;
}

SpaceShip::~SpaceShip()
{
    // Destructor
}

void SpaceShip::AddWeapon(std::unique_ptr<Weapon> _weapon)
{
    weapons.push_back(std::move(_weapon));
}

void SpaceShip::Shoot()
{
    if (weapons.size() > 0)
        weapons[0]->Shoot();
}

void SpaceShip::FireEverythingWeGot()
{
    for (unsigned int i = 0; i < weapons.size(); ++i)
        weapons[i]->Shoot();
}