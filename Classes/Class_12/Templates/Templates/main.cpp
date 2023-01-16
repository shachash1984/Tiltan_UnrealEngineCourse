#include <string>

#include "Math.inl"
#include "Pickup.h"
#include "Achievement.h"

int main()
{

	int biggerInt = Max<int>(5, 10);
	int evenBiggerInt = Max(100, biggerInt); // we didnt even wrote the type

	std::string	firstString = Max<std::string>("Hello", "World");

	Pickup firstPickup(5);
	Pickup secondPickup(10);

	auto biggestPickup = Max<Pickup>(firstPickup, secondPickup);




	Achievement<int> scoreAchievement(0);
	scoreAchievement += 10;

	//Pickup p0(0);
	//Achievement<Pickup> pickupAchievement(p0);
	Achievement<Pickup> pickupAchievement(0);

	Pickup p1(10);
	Pickup p2(20);

	pickupAchievement += p1;
	pickupAchievement += p2;

	return 0;
}