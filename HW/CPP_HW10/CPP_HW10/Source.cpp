#include <iostream>
#include <string>
#include "Weapon.h"
#include "LaserCanon.h"
#include "Rocket.h"
#include "BulletTurret.h"
#include "Spaceship.h"
#include <vector>
using namespace std;

// CPP HW 10 was done with Eyal

int main()
{


    LaserCanon* lasCanon = new LaserCanon();
    Rocket* rocket = new Rocket();
    BulletTurret* turret = new BulletTurret();

    vector<Weapon*> weapons1;
    weapons1.push_back(lasCanon);
    weapons1.push_back(rocket);
    weapons1.push_back(turret);

    LaserCanon* lasCanon2 = new LaserCanon();
    Rocket* rocket2 = new Rocket();
    BulletTurret* turret2 = new BulletTurret();

    vector<Weapon*> weapons2;
    weapons2.push_back(lasCanon2);
    weapons2.push_back(rocket2);
    weapons2.push_back(turret2);

    Spaceship XWING (3, "X-WING", weapons1, 50);
    Spaceship TIE_FIGHTER(8, "TIE FIGHTER", weapons2, 100);
    int rangeToTarget = TIE_FIGHTER.GetWorldPos() - XWING.GetWorldPos();
    rangeToTarget = abs(rangeToTarget);
    XWING.FireAllWeapons(rangeToTarget);

	return 0;
}