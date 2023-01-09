#include <iostream>
#include <string>
#include <vector>

class Weapon
{
public:
	Weapon();
	Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~Weapon();
	virtual bool Shoot(); 

	
	Weapon(const Weapon& other);
	Weapon& operator=(const Weapon& other);

protected:
	std::string name;
	unsigned int damage;
	float range;
	float reloadTime;
	unsigned int ammo;
};

Weapon::Weapon()
{
	name = "Unnamed Weapon";
	damage = 0;
	range = 0.0f;
	reloadTime = 0.0f;
	ammo = 0;
}

Weapon::Weapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo)
{
	name = _name;
	damage = _damage;
	range = _range;
	reloadTime = _reloadTime;
	ammo = _ammo;
}

Weapon::~Weapon()
{
	std::cout << "Deleting weapon " << name << std::endl;
}

bool Weapon::Shoot()
{
	std::cout << "Firing weapon " << name << " with damage " << damage << ", range " << range << ", reload time " << reloadTime << " and " << ammo << " ammo" << std::endl;
	return true;
}


Weapon::Weapon(const Weapon& other)
{
	name = other.name;
	damage = other.damage;
	range = other.range;
	reloadTime = other.reloadTime;
	ammo = other.ammo;
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this != &other)
	{
		name = other.name;
		damage = other.damage;
		range = other.range;
		reloadTime = other.reloadTime;
		ammo = other.ammo;
	}
	return *this;
}

class LaserWeapon : public Weapon
{
public:
	LaserWeapon();
	LaserWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~LaserWeapon();
	virtual bool Shoot() override;

	LaserWeapon(const LaserWeapon& other);
	LaserWeapon& operator=(const LaserWeapon& other);
};

LaserWeapon::LaserWeapon() : Weapon()
{

}

LaserWeapon::LaserWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{

};

class PlasmaWeapon : public Weapon
{
public:
	PlasmaWeapon();
	PlasmaWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~PlasmaWeapon();
	virtual bool Shoot() override;
};

PlasmaWeapon::PlasmaWeapon() : Weapon()
{

}

PlasmaWeapon::PlasmaWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{

}

PlasmaWeapon::~PlasmaWeapon()
{

}

bool PlasmaWeapon::Shoot()
{
	std::cout << "Firing plasma weapon " << name << " with damage " << damage << ", range " << range << ", reload time " << reloadTime << " and " << ammo << " ammo" << std::endl;
	return true;
}

class MissileWeapon : public Weapon
{
public:
	MissileWeapon();
	MissileWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo);
	virtual ~MissileWeapon();
	virtual bool Shoot() override;
};

MissileWeapon::MissileWeapon() : Weapon()
{

}

MissileWeapon::MissileWeapon(std::string _name, unsigned int _damage, float _range, float _reloadTime, unsigned int _ammo) : Weapon(_name, _damage, _range, _reloadTime, _ammo)
{

}

MissileWeapon::~MissileWeapon()
{

}

bool MissileWeapon::Shoot()
{
	std::cout << "Firing missile weapon " << name << " with damage " << damage << ", range " << range << ", reload time " << reloadTime << " and " << ammo << " ammo" << std::endl;
	return true;
}

class SpaceShip
{
public:
	SpaceShip(std::string _name, std::vector<Weapon*> _weapons);
	~SpaceShip();
	void AddWeapon(Weapon& _weapon);
	void Shoot(); 
	void FireEverythingWeGot();

private:
	std::string name;
	std::vector<Weapon*> weapons;
	Weapon* currentWeapon;
};

SpaceShip::SpaceShip(std::string _name, std::vector<Weapon*> _weapons)
{
	name = _name;
	weapons = _weapons;
	if (!weapons.empty())
	{
		currentWeapon = weapons[0];
	}
}

SpaceShip::~SpaceShip()
{
	for (unsigned int i = 0; i < weapons.size(); i++)
	{
		delete weapons[i];
	}
	std::cout << "Deleting spaceship " << name << std::endl;
}

void SpaceShip::AddWeapon(Weapon& _weapon)
{
	weapons.push_back(&_weapon);
}

void SpaceShip::Shoot()
{
	if (currentWeapon)
	{
		currentWeapon->Shoot();
	}
}

void SpaceShip::FireEverythingWeGot()
{
	for (unsigned int i = 0; i < weapons.size(); i++)
	{
		weapons[i]->Shoot();
	}
}

int main()
{
	LaserWeapon laser1("Laser Cannon", 50, 100.0f, 2.0f, 10);
	PlasmaWeapon plasma1("Plasma Cannon", 75, 150.0f, 3.0f, 5);
	MissileWeapon missile1("Missile Launcher", 100, 300.0f, 1.0f, 5);
};
