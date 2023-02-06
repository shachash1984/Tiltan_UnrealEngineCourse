#pragma once

class ISpaceVehicle
{
protected:
		virtual void Shoot() = 0;

public:
	virtual ~ISpaceVehicle() = default;
};