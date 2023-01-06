#pragma once
#include "Actor.h"
#include <string>
#include <iostream>
using namespace std;

Actor::Actor(int worldPos) : _worldPos(worldPos)
{
	cout << "Creating Actor" << endl;
}

int Actor::GetWorldPos()
{
	return _worldPos;
}