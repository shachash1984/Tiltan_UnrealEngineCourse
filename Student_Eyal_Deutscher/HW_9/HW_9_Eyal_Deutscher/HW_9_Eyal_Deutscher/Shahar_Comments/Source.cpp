#include <iostream>
#include <string>
#include "Weapon.h"
#include "Spaceship.h"
#include <vector>
using namespace std;

int main()
{
	cout << "Here We Go" << endl;

	Weapon w1("LaserWeapon",5,10,0.3,100,80); //-25 you needed to create 3 classes deriving from Weapon
	Weapon w2("Missile",30,5,3,3,50);
	vector<Weapon*> weapons1;
	weapons1.push_back(&w1);
	weapons1.push_back(&w2);

	vector<Weapon*> weapons2;
	weapons2.push_back(&w2);
	weapons2.push_back(&w1);

	Spaceship ssr1(0, "SSR1", weapons1,50);
	Spaceship blackMamba(8, "Black Mamba", weapons2, 100); 
	auto rangeToTarget = blackMamba.GetWorldPos() - ssr1.GetWorldPos();
	rangeToTarget = abs(rangeToTarget);
	ssr1.FireAllWeapons(rangeToTarget);
	return 0;
}
