#include "SpaceShip.h"

#include "LaserGun.h"
#include "PlasmaRifle.h"
#include "RocketLauncher.h"

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name)
	, weapons(_weapons)
	, currentWeapon(nullptr)
	, currentItemSlot(0)
{
	if (weapons.size() > 0) { currentWeapon = weapons[0]; }
}

//first solution to the issue is not to copy the weapons.
//The weapons are created outside of the spaceship class so it doesn't have ownership over them.
//It is completely fine to decide that a copy constructor doesn't copy everything and each space ship should get its weapons from an outside source.
//This is the simplest solution and the one I would recommend.

//SpaceShip::SpaceShip(const SpaceShip& other)
//	: name(other.name)
//	, currentWeapon(nullptr)
//	, currentItemSlot(-1) //better than zero because zero is a valid index and this spaceship doesn't have weapons
//{
//	
//}

//second solution to the issue is to create a "virtual Weapon* Clone()" function
//in the base class and override it in the derived classes
//(I added it in the Weapon.h file and for every derived class' header file for example)

//SpaceShip::SpaceShip(const SpaceShip& other)
//	: name(other.name)
//	, currentItemSlot(other.currentItemSlot)
//{
//	for (size_t i = 0; i < other.weapons.size(); i++)
//	{
//		AddWeapon(*other.weapons[i]->Clone()); 
//		//std::cout << weapons[i] << "\n";
//	}
//	currentWeapon = weapons[currentItemSlot];
//}

//Third solution is to use dynamic cast like I taught you in class.
//This is NOT recommended as it misses the point of polymorphism
//and will only solve this specific case.

SpaceShip::SpaceShip(const SpaceShip& other)
	: name(other.name)
	, currentItemSlot(other.currentItemSlot)
{
	for (size_t i = 0; i < other.weapons.size(); i++)
	{
		LaserGun* pLasergun = dynamic_cast<LaserGun*>(other.weapons[i]);
		if (pLasergun)
		{
			AddWeapon(*new LaserGun(*pLasergun));
			continue;
		}
		RocketLauncher* pRocketLauncher = dynamic_cast<RocketLauncher*>(other.weapons[i]);
		if (pRocketLauncher)
		{
			AddWeapon(*new RocketLauncher(*pRocketLauncher));
			continue;
		}
		PlasmaRifle* pPlasmaRifle = dynamic_cast<PlasmaRifle*>(other.weapons[i]);
		if (pPlasmaRifle)
		{
			AddWeapon(*new PlasmaRifle(*pPlasmaRifle));
			continue;
		}

		AddWeapon(*new Weapon(*other.weapons[i]));
		//std::cout << weapons[i] << "\n";
	}
	currentWeapon = weapons[currentItemSlot];
}



SpaceShip::~SpaceShip()
{
	std::cout << "\nSpaceship Destroyed\n";
	for (size_t i = 0; i < weapons.size(); i++)
	{
		delete weapons[i];
	}
	weapons.clear();
}
void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
	if (currentWeapon == nullptr) { currentWeapon = weapons[0]; }
}
void SpaceShip::ChangeWeapon(bool Forward)
{
	if (weapons.size() > 1) 
	{
		if (Forward)
		{
			if (currentItemSlot < weapons.size() - 1)
			{
				currentItemSlot++;
			}
			else
			{
				currentItemSlot = 0;
			}
		}
		else
		{
			if (0 < currentItemSlot)
			{
				currentItemSlot--;
			}
			else
			{
				currentItemSlot = weapons.size()-1;
			}
		}
		currentWeapon = weapons[currentItemSlot];
	}
}
void SpaceShip::SwitchToRandom()
{
	if (weapons.size() > 1)
	{
		std::random_device rd;  // Seed the random number generator
		std::mt19937 mt(rd());  // Initialize the generator with a seed
		std::uniform_int_distribution<int> dist(0, weapons.size() - 1);  // Set the range
		int randomNumber = dist(mt);
		currentWeapon = weapons[randomNumber];
	}
}
void SpaceShip::Shoot()
{
	//Need to check if the current weapon is null
	currentWeapon->Shoot();
}
;
