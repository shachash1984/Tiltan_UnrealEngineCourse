#pragma once
class IDamageable
{
public:
	unsigned int Hp;
	virtual void TakeDamage(unsigned int damageTaken) = 0;
};

