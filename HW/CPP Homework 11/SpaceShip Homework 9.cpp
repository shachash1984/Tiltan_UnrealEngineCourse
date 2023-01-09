// SpaceShip Homework 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LaserGun.h"
#include "RocketLauncher.h"
#include "PlasmaRifle.h"
#include "Spaceship.h"
#include "SpaceShuttle.h"

int main()
{
    /*PlasmaRifle plasma;
    LaserGun laser;
    RocketLauncher rocket;

    std::vector<Weapon*> weapons = { &laser, &plasma };
    SpaceShip spaceship("The Dragon 5", weapons);
    spaceship.AddWeapon(rocket);*/

    PlasmaRifle* plasma = new PlasmaRifle();
    LaserGun* laser = new LaserGun();
    RocketLauncher* rocket = new RocketLauncher();

    std::vector<Weapon*> weapons = { laser, plasma };
    SpaceShip* spaceship = new SpaceShip("The Dragon 5", weapons);
    spaceship->AddWeapon(*rocket);

    SpaceShip* spaceship2 = new SpaceShip(*spaceship);

    SpaceShuttle* spaceShuttle = new SpaceShuttle("The Drake 7", std::make_unique<LaserGun>());

    //Test Spaceship operator
    SpaceShip spaceship3(*spaceship);
    SpaceShip spaceship4(*spaceship);
    spaceship4 = spaceship3;

    //Test Weapon operator
    PlasmaRifle pew1;
    PlasmaRifle pew2;
    pew2 = pew1;

#pragma region before bonus
    //plasma.Shoot();
    //laser.Shoot();
    //rocket.Shoot();
#pragma endregion

    std::cout << "\nNEW\n";
    spaceShuttle->Shoot();
    spaceShuttle->ReplaceWeapon(std::make_unique<RocketLauncher>());
    spaceShuttle->Shoot();
    delete spaceShuttle;

    std::cout << "\nOLD\n";
    spaceship->Shoot();
    spaceship->ChangeWeapon(true);
    spaceship->Shoot();
    spaceship->ChangeWeapon(true);
    spaceship->Shoot();
    //spaceship->Shoot();
    //spaceship->ChangeWeapon(false);
    //spaceship->Shoot();
    //spaceship->SwitchToRandom(); //Bonus 
    //spaceship->Shoot();
    //spaceship2->SwitchToRandom();
    delete spaceship;
    spaceship2->Shoot();
    spaceship2->ChangeWeapon(true);
    spaceship2->Shoot();
    spaceship2->ChangeWeapon(true);
    spaceship2->Shoot();

    //std::cout << plasma << "\n";
    //std::cout << laser << "\n";
    //std::cout << rocket << "\n";

    delete spaceship2;
    std::cout << "END";
}
