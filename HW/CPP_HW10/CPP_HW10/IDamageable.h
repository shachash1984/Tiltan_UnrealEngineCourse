#pragma once

// CPP HW 10 was done with Eyal

class IDamageable
{
public:
	unsigned int HP;
	virtual void TakeDamage(unsigned int damageReceived) = 0;

	IDamageable(unsigned int _HP) : HP(_HP)
	{

	}

};

