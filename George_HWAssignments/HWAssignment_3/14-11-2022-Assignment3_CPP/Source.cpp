#include <iostream>
#include "Pickup.cpp"

using namespace std;

int main()
{
	Pickup p1;
	Pickup p2(10, 20, 5, "Health", 100);

	cout << "Undefined Pickup:\n";
	cout << p1.toString() << "\n";
	cout << "\nDefined Pickup:\n";
	cout << p2.toString() << "\n";

	return 0;
}