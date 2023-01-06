#include "Actor.h"
#include <iostream>
#include <string>
using namespace std;
Actor::Actor(int worldPos) :_worldPos(worldPos)
{
	cout << "Creating Actor" << endl;
}
int Actor:: GetWorldPos()
{
	return _worldPos;
}

