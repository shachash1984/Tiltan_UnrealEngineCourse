#include <iostream>
#include <string>
using namespace std;

struct Point {
	int x;
	int y;
	int z;
	Point() {};
};

class Pickup {
	Point position;
	string const name;
	int value;
public:
	Pickup() : name("") { position.x = 0; position.y = 0, position.z = 0, value = 0; };
	Pickup(Point position, string Name, int value) : name(Name)
	{
		this->position = position;
		this->value = value;
	}
	Point GetPosition() { return position; };
	string GetName() { return name; };
	int GetValue() { return value; };
	string ToString() { 
		string xx = to_string(position.x);
		string yy = to_string(position.y);
		string zz = to_string(position.z);
		string val = to_string(value);
		return "Pickup: " + name + ":Health, position:(" +xx+","+yy+","+zz+"), value: "+ val+"\n"; }
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
