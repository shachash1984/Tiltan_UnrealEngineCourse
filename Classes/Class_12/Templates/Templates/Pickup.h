#pragma once

class Pickup
{
public:
	Pickup(int val);
	bool operator<(Pickup const& other) const;

	int value{0};

	
};

