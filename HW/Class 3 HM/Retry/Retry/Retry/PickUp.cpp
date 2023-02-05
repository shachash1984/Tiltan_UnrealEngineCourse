#include "PickUp.h"
using namespace std;
#include <iostream>



PickUp::PickUp() : Position(0, 0, 0), Name("Health"), Value(100) {}
PickUp::PickUp(Point position, string name, int value) : Position(position), Name(name), Value(value) {}

