#pragma once
class IDamageable
{
public:
	IDamageable(unsigned int hp) : Hp(hp) {}
	unsigned int Hp;
	virtual void TakeDamage(unsigned int damageTaken) = 0;
};