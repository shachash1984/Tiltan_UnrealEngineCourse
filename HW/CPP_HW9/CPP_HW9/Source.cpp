
#include <iostream>
#include <string>
#include "Weapon.h"
#include "Spaceship.h"
#include <vector>
using namespace std;

// CPP HW 9 + 10, was done with Eyal

int main()
{


    Weapon lasCanon ("Las Canon", 5, 10, 0.3, 100, 80);
    Weapon rocket("Rocket", 30, 4, 3, 3, 50);
    vector<Weapon*> weapons1;
    weapons1.push_back(&rocket);
    weapons1.push_back(&lasCanon);

    vector<Weapon*> weapons2;
    weapons2.push_back(&lasCanon);
    weapons2.push_back(&rocket);

    Spaceship XWING (3, "X-WING", weapons1, 50);
    Spaceship TIE_FIGHTER(8, "TIE FIGHTER", weapons2, 100);
    int rangeToTarget = TIE_FIGHTER.GetWorldPos() - XWING.GetWorldPos();
    rangeToTarget = abs(rangeToTarget);
    XWING.FireAllWeapons(rangeToTarget);

	return 0;
}