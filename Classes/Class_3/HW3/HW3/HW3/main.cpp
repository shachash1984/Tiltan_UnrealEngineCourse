#include <iostream>
#include "Pickup.h"

using std::cout;

int main()
{
	Point point = Point();
	Pickup pickup = Pickup(point, "Health", 100);
	cout << pickup.ToString();
	char c = getchar();
}