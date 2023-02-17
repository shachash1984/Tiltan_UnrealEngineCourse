#pragma once
class ISpaceVehicle
{
	virtual void Shoot(unsigned int distanceToTarget, int weaponNumber = 0) = 0;
};

