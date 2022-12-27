// SpaceShip Homework 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LaserGun.h"
#include "RocketLauncher.h"
#include "PlasmaRifle.h"
#include "Spaceship.h"

int main()
{
    PlasmaRifle plasma;
    LaserGun laser;
    RocketLauncher rocket;

    std::vector<Weapon*> weapons = { &laser, &plasma };
    SpaceShip spaceship("The Dragon 5", weapons);
    spaceship.AddWeapon(rocket);

    //plasma.Shoot();
    //laser.Shoot();
    //rocket.Shoot();

    spaceship.Shoot();
    spaceship.ChangeWeapon(true);
    spaceship.Shoot();
    spaceship.ChangeWeapon(true);
    spaceship.Shoot();
    spaceship.ChangeWeapon(true);
    spaceship.Shoot();
    spaceship.ChangeWeapon(false);
    spaceship.Shoot();
}
