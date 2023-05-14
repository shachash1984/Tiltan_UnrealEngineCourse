#include <iostream>
#include "SpaceShip.h"
#include "Bazooka.h"
#include "ThrowKnife.h"
#include "Banana.h"

int main()
{
    std::vector<Weapon*> weapons{new Bazooka(), new ThrowKnife() , new Banana() };
    SpaceShip* spaceShip = new SpaceShip("Binki's", weapons);

    spaceShip->FireEverythingWeGot();
}