#include <iostream>
#include "Pickup.h"
using namespace std;

int main() {

	Point  point = Point(52, 33, 29);

	std::cout << "Created Point: " << point.ToString() << endl;

	Pickup pickup = Pickup(point, "Health Boost", 30);

	std::cout << "Created Pickup: " << pickup.ToString() << endl;

	return 0;
}