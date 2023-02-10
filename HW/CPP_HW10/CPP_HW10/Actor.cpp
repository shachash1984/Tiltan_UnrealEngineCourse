#include "Actor.h"
#include <string>
#include <iostream>
using namespace std;

// CPP HW 10 was done with Eyal

Actor::Actor(int worldPos) : _worldPos(worldPos)
{
	cout << "Creating Actor" << endl;
}

int Actor::GetWorldPos()
{
	return _worldPos;
}