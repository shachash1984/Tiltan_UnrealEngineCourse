#include <iostream>
#include "Pickup.h"

// This HW was made with Ron Bandel


int main() {

	Point  p = Point(1, 4, 8);

	std::cout << "This is the Point we created: " << p.ToString() << "\n";

	Pickup pi = Pickup(p, "Speed Boost", 30);

	std::cout << "This is the Pickup we created: " << pi.ToString() << "\n";

	std::cout << "Have a nice day\n";

	return 0;
}