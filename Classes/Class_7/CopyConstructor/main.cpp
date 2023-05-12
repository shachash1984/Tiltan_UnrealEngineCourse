#include <iostream>

#include "Pickup.h"
#include "Model3D.h"

int main()
{
	Pickup p1("Ammo", 30, new Model3D());
	Pickup p2("Health", 10, new Model3D());

	Pickup p3(p2);

	std::cout << "p1's model: " << p1.GetModel() << std::endl;
	std::cout << "p2's model: " << p2.GetModel() << std::endl;
	std::cout << "p3's model: " << p3.GetModel() << std::endl;


	getchar();
	return 0;
}