#pragma once

class ISpaceVehicle {
public:
	virtual void Shoot() = 0;

	virtual std::string ToString() { return 0; }
};