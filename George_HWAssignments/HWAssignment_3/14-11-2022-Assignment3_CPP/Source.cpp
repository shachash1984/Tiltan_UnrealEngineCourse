#include <iostream>
#include "Pickup.h"

using namespace std;

int main()
{
	Pickup p1;
	Pickup p2(10, 20, 5, "Health", 100);

	cout << "Undefined Pickup:\n";
	cout << p1.ToString() << "\n";
	cout << "\nDefined Pickup:\n";
	cout << p2.ToString() << "\n";

	return 0;
}