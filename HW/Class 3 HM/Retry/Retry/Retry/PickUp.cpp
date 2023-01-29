#include "PickUp.h"
using namespace std;
#include <iostream>



PickUp::PickUp() {}
PickUp::PickUp(Point position, string name, int value) : Position(position), Name(name), Value(value) {}