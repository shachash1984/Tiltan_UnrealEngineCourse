#include <iostream>
#include <vector>
#include "SpaceShip.h"
#include "LazerBeam.h"
#include "PlasmaCannon.h"
#include "MissileLauncher.h"
#include "SpaceShuttle.h"

int main()
{
    //creating weapons
    std::unique_ptr<Weapon> laser = std::make_unique<LazerBeam>("Laser Gun", 30, 20.0, 2.0, 100);
    std::unique_ptr<Weapon> missile = std::make_unique<MissileLauncher>("Missile Launcher", 50, 30.0, 3.0, 10);
    std::unique_ptr<Weapon> plasma = std::make_unique<PlasmaCannon>("Plasma Cannon", 100, 40.0, 4.0, 5);

    //creating spaceship
    std::vector<std::unique_ptr<Weapon>> weapons;
    weapons.push_back(std::move(laser));
    weapons.push_back(std::move(missile));
    weapons.push_back(std::move(plasma));
    SpaceShip spaceship("USS Enterprise", std::move(weapons));

    spaceship.Shoot();
    spaceship.FireEverythingWeGot();

    //creating space shuttle
    std::unique_ptr<Weapon> laser2 = std::make_unique<LazerBeam>("Laser Gun", 30, 20.0, 2.0, 100);
    SpaceShuttle spaceShuttle("Shuttle1", std::move(laser2));
    spaceShuttle.Shoot();
    spaceShuttle.FireEverythingWeGot();

    return 0;
}