#include <iostream>
#include <string>
#include "Weapon.h"
#include "LaserWeapon.h"
#include "Spaceship.h"
#include "Blasters.h"
#include "MissileLauncher.h"
#include <vector>
using namespace std;

int main()
{
	cout << "Here We Go" << endl;

	LaserWeapon* lw1 = new LaserWeapon();
	Blasters* blaster = new Blasters();
	MissileLauncher* launcher = new MissileLauncher();
	vector<Weapon*> weapons1;
	weapons1.push_back(lw1);
	weapons1.push_back(blaster);
	weapons1.push_back(launcher);

	vector<Weapon*> weapons2;
	weapons2.push_back(launcher);
	weapons2.push_back(lw1);
	weapons2.push_back(blaster);

	Spaceship ssr1(0, "SSR1", weapons1,50);
	Spaceship blackMamba(8, "Black Mamba", weapons2, 100);
	auto rangeToTarget = blackMamba.GetWorldPos() - ssr1.GetWorldPos();
	rangeToTarget = abs(rangeToTarget);
	ssr1.FireAllWeapons(rangeToTarget);
	return 0;
}
