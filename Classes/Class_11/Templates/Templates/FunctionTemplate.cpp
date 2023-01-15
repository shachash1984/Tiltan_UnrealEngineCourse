#include <string>

#include "Math.inl"
#include "Pickup.h"

int main()
{

	int biggerInt = Max<int>(5, 10);
	int evenBiggerInt = Max(100, biggerInt); // we didnt even wrote the type

	std::string	firstString = Max<std::string>("Hello", "World");

	Pickup firstPickup(5);
	Pickup secondPickup(10);

	auto biggestPickup = Max(firstPickup, secondPickup);
	return 0;
}