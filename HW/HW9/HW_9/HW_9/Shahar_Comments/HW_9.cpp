#include <iostream>
#include "SpaceShip.h"
#include "Bazooka.h"
#include "ThrowKnife.h"
#include "Banana.h"

int main()
{
    std::vector<Weapon*> weapons{new Bazooka(), new ThrowKnife() , new Banana() }; // -10 memory leaks you are not deleting these weapons or the spaceship anywhere
    SpaceShip* spaceShip = new SpaceShip("Binki's", weapons);

    spaceShip->FireEverythingWeGot();
}