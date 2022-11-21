#include <iostream>
#include <string>
using namespace std;

struct Point {
	int x;
	int y;
	int z;
	Point();
};

class Pickup {
	Point position;
	string const name;
	int value;
public:
	Pickup();
	Pickup(Point position, string name, int value);

	Point GetPosition();
	string GetName();
	int GetValue();
	string ToString();
};


int main()
{
	Point point;
	point.x = 16;
	point.y = 17;
	point.z = 1;
	Pickup pickup(point,"lola",12);
	Pickup pick;
	cout << pickup.ToString();
	cout << pick.ToString();
}

 Point::Point() : x(0), y(0), z(0) {};

 Pickup::Pickup() : name(""), value(0) {};

 Pickup::Pickup(Point position, string name, int value) : name(name), value(value)
 {
	 this->position.x = position.x;
	 this->position.y = position.y;
	 this->position.z = position.z;
 };

 Point Pickup::GetPosition() { return position; };

 string Pickup::GetName() { return name; };

 int Pickup::GetValue() { return value; };

 string Pickup::ToString() 
 {
	 string xx = to_string(position.x);
	 string yy = to_string(position.y);
	 string zz = to_string(position.z);
	 string val = to_string(value);
	 return "Pickup: " + name + ":Health, position:(" + xx + "," + yy + "," + zz + "), value: " + val + "\n";
 }
 
