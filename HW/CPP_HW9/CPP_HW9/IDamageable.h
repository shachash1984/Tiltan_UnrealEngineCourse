#pragma once
class IDamageable
{
public:
	unsigned int HP;
	virtual void TakeDamage(unsigned int damageReceived) = 0;

	IDamageable(unsigned int _HP) : HP(_HP)
	{

	}

};

