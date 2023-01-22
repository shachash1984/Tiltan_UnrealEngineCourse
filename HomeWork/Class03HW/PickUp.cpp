#include <iostream>
#include <string>
#include "PickUp.h"

using namespace std;
PickUp::PickUp() :name("nizar"), value(0) {
	
} 

PickUp::PickUp(Point pos, string name, int value) {
	position = pos;
	this->name == name;
	this->value = value;
}

Point PickUp::GetPosition() {
	return position;
}
string PickUp::GetName() {
	return name;
}
int PickUp::GetValue() {
	return value;
}

string PickUp::ToString() {
	return "Pickup: name: " + GetName() + " position: (" + to_string(GetPosition().x) + "," + to_string(GetPosition().y) + "," + to_string(GetPosition().z) + "), value : " + to_string(GetValue());
}