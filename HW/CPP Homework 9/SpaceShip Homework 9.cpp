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

#pragma region before bonus
    //plasma.Shoot();
    //laser.Shoot();
    //rocket.Shoot();
#pragma endregion

    spaceship.Shoot();
    spaceship.ChangeWeapon(true);
    spaceship.Shoot();
    spaceship.ChangeWeapon(true);
    spaceship.Shoot();
    spaceship.ChangeWeapon(true);
    spaceship.Shoot();
    spaceship.ChangeWeapon(false);
    spaceship.Shoot();
    spaceship.SwitchToRandom(); //Bonus 
    spaceship.Shoot();
}
