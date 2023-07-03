#include <iostream>
#include "Plane.h"
#include "MP5.h"
#include "ThrowKnife.h"
#include "Sword.h"

int main()
{
    std::vector<Weapon*> weapons{ new Sword(), new ThrowKnife() , new MP5() };
    Plane* spaceShip = new Plane("Shmoel", weapons);

    spaceShip->FireStuff(); //-10 memory leak - 3 weapons and spaceship
}