#include "Weapon.h"
#include "Spaceship.h"
#include <string>
#include <iostream>

// CPP HW 11, was done with Eyal

Weapon::Weapon() : _name("default"), _damage(1), _range(5), _reloadTime(1), _ammo(15), _hitChance(10)
{
    cout << "Creating Weapon: " << _name << endl;
}

Weapon::Weapon(string name, unsigned int damage, float range, float reloadTime, unsigned int ammo, unsigned int critChance)
    : _name(name), _damage(damage), _range(range), _reloadTime(reloadTime), _ammo(ammo), _hitChance(critChance)
{
    cout << "Creating Weapon: " << _name << endl;
}

Weapon::Weapon(const Weapon& other)
    : _name(other._name), _damage(other._damage), _range(other._range), _reloadTime(other._reloadTime), _ammo(other._ammo), _hitChance(other._hitChance)
{
    cout << "Copying Weapon: " << _name << endl;
}

Weapon& Weapon:: operator =(const Weapon other)
{
    _name = other._name;
    _damage = other._damage;
    _range = other._range;
    _reloadTime = other._reloadTime;
    _ammo = other._ammo;
    _hitChance = other._hitChance;
    cout << "Copying Values of Weapon: " << _name << endl;
    return *this;
}

Weapon::~Weapon()
{
    cout << "Destroing Weapon: " << _name << endl;
}

bool Weapon::Shoot(unsigned int distanceToTarget)
{
    cout << "Shooting: " << _name << endl;

    if (_ammo > 0)
    {
        _ammo--;
        if (distanceToTarget <= _range)
        {
            srand(time(0));
            int random = (rand() % (100 + 1) - 0);
            if (_hitChance > random)
            {
                cout << _name + " hit the target" << endl;
                return true;
            }
            else
            {
                cout << _name + " missed the target" << endl;
            }
        }
        else
        {
            cout << "Target is out of range of " + _name + "!" << endl;
        }
    }
    else
    {
        cout << _name + "is out of ammo" << endl;
    }

    return false;
}
