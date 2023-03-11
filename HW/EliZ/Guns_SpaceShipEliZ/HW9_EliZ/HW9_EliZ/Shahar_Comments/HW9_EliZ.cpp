// HW9_EliZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// -15 why is everything in the same file?
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

class Weapon
{
public:
	// Constructor
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	// Destructor
	virtual ~Weapon();

	// Virtual function to be implemented by derived classes
	virtual bool Shoot();

	// Function to print the weapon's members and their values
	void Print() const;
protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
};

// Constructor
Weapon::Weapon()
	: name(""), damage(0), range(0.0f), reloadTime(0.0f), ammo(0)
{
}

// Parameterized constructor
Weapon::Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
	: name(_name), damage(_damage), range(_range), reloadTime(_reloadTime), ammo(_ammo)
{
}

// Destructor
Weapon::~Weapon()
{
}

// Virtual function to be implemented by derived classes
bool Weapon::Shoot() // -10 not printing anything
{
	return false;
}

// Function to print the weapon's members and their values
void Weapon::Print() const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Damage: " << damage << std::endl;
	std::cout << "Range: " << range << std::endl;
	std::cout << "Reload Time: " << reloadTime << std::endl;
	std::cout << "Ammo: " << ammo << std::endl;
}

#include <string> // -10 why is this here? when you already included it

// Concrete class derived from Weapon
class Pistol : public Weapon
{
public:
	// Constructor
	Pistol();
	Pistol(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	// Destructor
	virtual ~Pistol();

	// Overrides the virtual Shoot function of the base class
	virtual bool Shoot() override;
};

// Constructor
Pistol::Pistol()
	: Weapon()
{
}

// Parameterized constructor
Pistol::Pistol(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
}

// Destructor
Pistol::~Pistol()
{
}

// Overrides the virtual Shoot function of the base class
bool Pistol::Shoot()
{
	// Decrement ammo by 1
	ammo--;
	// Print the weapon's members and their values
	Print();

	// Return true if there is a hit
	return true;
}

// Concrete class derived from Weapon
class SniperRifle : public Weapon
{
public:
	// Constructor
	SniperRifle();
	SniperRifle(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	// Destructor
	virtual ~SniperRifle();

	// Overrides the virtual Shoot function of the base class
	virtual bool Shoot() override;
};

// Constructor
SniperRifle::SniperRifle()
	: Weapon()
{
}

// Parameterized constructor
SniperRifle::SniperRifle(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
	: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
}

// Destructor
SniperRifle::~SniperRifle()
{
}

// Overrides the virtual Shoot function of the base class
bool SniperRifle::Shoot()
{
	// Decrement ammo by 1
	ammo--;
	// Print the weapon's members and their values
	Print();

	// Return true if there is a hit
	return true;
}
// Concrete class derived from Weapon
class Laser : public Weapon
{
public:
	// Constructor
	Laser();
	Laser(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	// Destructor
	virtual ~Laser();

	// Overrides the virtual Shoot function of the base class
	virtual bool Shoot() override;
	};

// Constructor
Laser::Laser()
: Weapon()
{
}

// Parameterized constructor
Laser::Laser(std::string _name, unsigned int _damage, float _range, float _reloadTime ,unsigned int _ammo)
: Weapon(_name, _damage, _range, _reloadTime, _ammo)
{
}

// Destructor
Laser::~Laser()
{
}

// Overrides the virtual Shoot function of the base class
bool Laser::Shoot()
{
	// Decrement ammo by 1
	ammo--;

	// Print the weapon's members and their values
	Print();

	// Return true if there is a hit
	return true;
}

//SPACESHIT
class Weapon;

class SpaceShip
{
public:
	// Constructor
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
	// Destructor
	~SpaceShip();

	// Function to add a weapon to the weapons vector
	void AddWeapon(Weapon& _weapon);

	// Function to call the Shoot function of the current weapon
	void Shoot();

	// Function to loop through all weapons and call their Shoot function
	void FireEverythingWeGot();
private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};

// Constructor
SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
	: name(_name), weapons(_weapons), currentWeapon(nullptr)
{
}

// Destructor
SpaceShip::~SpaceShip()
{
	// Delete all weapons in the weapons vector
	for (auto weapon : weapons)
	{
		delete weapon;
		weapon = nullptr;
	}
}

// Function to add a weapon to the weapons vector
void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
}

// Function to call the Shoot function of the current weapon
void SpaceShip::Shoot()
{
	if (currentWeapon != nullptr)
	{
		currentWeapon->Shoot();
	}
}

// Function to loop through all weapons and call their Shoot function
void SpaceShip::FireEverythingWeGot()
{
	for (auto weapon : weapons)
	{
		weapon->Shoot();
	}
}
int main()
{
	// Create weapons
	Pistol pistol("Pistol", 20, 10.0f, 1.0f, 6);
	SniperRifle sniperRifle("Sniper Rifle", 50, 100.0f, 3.0f, 10);
	Laser laser("Laser", 40, 20.0f, 0.5f, 20);
	// Create a vector of pointers to the weapons
	std::vector<Weapon*> weapons = { &pistol, &sniperRifle, &laser };

	// Create a spaceship with the weapons vector
	SpaceShip spaceship("Spaceship", weapons);

	// Shoot all weapons
	spaceship.FireEverythingWeGot();

	return 0;

}