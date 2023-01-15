#include "Pickup.h"

Pickup::Pickup(int val)
	: value(val)
{
}

bool Pickup::operator<(Pickup const& other) const
{
	return value < other.value;
}


