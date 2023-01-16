#include "Weapon.h"

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
