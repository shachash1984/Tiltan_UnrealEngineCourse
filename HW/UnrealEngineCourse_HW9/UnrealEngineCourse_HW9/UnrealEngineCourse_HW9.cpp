#include "BaseballBat.h"
#include "SlingShot.h"
#include "SpaceShip.h"
#include "Shiv.h"

int main()
{
	vector<Weapon*> weaponList{ new SlingShot(),new Shiv,new BaseballBat()};

	SpaceShip* peaShooter2000 = new SpaceShip("Nimbus2000", weaponList);

	peaShooter2000->FireEverythingWeGot();
}