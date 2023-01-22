#include <iostream>
#include <string>

using namespace std;
using std::endl;

class Point
{
public:
	int x;
	int y;
	int z;
	Point() : x(0), y(0), z(0) {}
};

class PickUp {
private:
	Point position;
	string const name;
	int value;

public:
	Pickup() : name("nizar"), value(0) {}
	PickUp(Point pos, string name, int value) {
		position = pos;
		this->name == name;
		this->value = value;
	}

	Point GetPosition() {
		return position;
	}
	string GetName() {
		return name;
	}
	int GetValue() {
		return value;
	}

	string ToString() {
		return "Pickup: name: " + GetName() + " position: (" + to_string(GetPosition().x) + "," + to_string(GetPosition().y) + "," + to_string(GetPosition().z) + "), value : " + to_string(GetValue());
	}
};
int main() {
	return 0;
}