#include "SpaceShip.h"

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name)
	, weapons(_weapons)
	, currentWeapon(nullptr)
	, currentItemSlot(0)
{
	if (weapons.size() > 0) { currentWeapon = weapons[0]; }
}
SpaceShip::SpaceShip(const SpaceShip& other)
	: name(other.name)
	, currentItemSlot(other.currentItemSlot)
{
	for (size_t i = 0; i < other.weapons.size(); i++)
	{
		AddWeapon(*other.weapons[i]->Clone());
		//std::cout << weapons[i] << "\n";
	}
	currentWeapon = weapons[currentItemSlot];
}
SpaceShip& SpaceShip::operator=(const SpaceShip& other)
{
	if (this == &other) return *this; // check for self-assignment
	
	// delete the current weapons
	for (size_t i = 0; i < weapons.size(); i++)
	{
		delete weapons[i];
	}
	// clear the vector of weapons
	weapons.clear();

	// copy the name and current item slot from the other spaceship
	name = other.name;
	currentItemSlot = other.currentItemSlot;
	std::cout << "Spaceship Operator Worked!\n\n";
	// copy the weapons from the other spaceship
	for (size_t i = 0; i < other.weapons.size(); i++)
	{
		AddWeapon(*other.weapons[i]->Clone());
	}
	currentWeapon = weapons[currentItemSlot];
	
	return *this;
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
	currentWeapon->Shoot();
}
;
