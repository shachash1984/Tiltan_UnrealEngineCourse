#pragma once
#include "Weapon.h"
class RocketLauncher : public Weapon
{
public:
	RocketLauncher();
	~RocketLauncher();
	Weapon* Clone() override;
};

