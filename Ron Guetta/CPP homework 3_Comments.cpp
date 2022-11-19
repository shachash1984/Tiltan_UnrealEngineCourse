#include <iostream>
#include <string>
using namespace std;

// You didn't separate the header and the implementation -5 pts

struct Point {
	int x;
	int y;
	int z;
	//Point() {}; //you didn't initialize the variables... -5 pts
	Point() : x(0), y(0), z(0) {}; //this is the wanted default ctor
};

class Pickup {
	Point position;
	string const name;
	int value;
public:
	//Pickup() : name("") { position.x = 0; position.y = 0, position.z = 0, value = 0; }; //you are supposed to initialize the variables and not assign them (value) -5 pts
	Pickup() : name(""), value(0) {}; //this is the wanted default ctor, Point is initialized by its own default ctor

	/*Pickup(Point position, string Name, int value) : name(Name) // you are supposed to initialize the variables and not assign them (value)
	{
		this->position = position;
		this->value = value;
	}*/

	Pickup(Point position, string name, int value) : name(name), value(value)  //this is the wanted ctor
	{
		this->position.x = position.x;
		this->position.y = position.y;
		this->position.z = position.z;
	};

	Point GetPosition() { return position; };
	string GetName() { return name; };
	int GetValue() { return value; };
	string ToString() { 
		string xx = to_string(position.x);
		string yy = to_string(position.y);
		string zz = to_string(position.z);
		string val = to_string(value);
		return "Pickup: " + name + ":Health, position:(" +xx+","+yy+","+zz+"), value: "+ val+"\n"; } // Great!
};


//int main()
//{
//	Point point;
//	point.x = 16;
//	point.y = 17;
//	point.z = 1;
//	Pickup pickup(point,"lola",12);
//	Pickup pick;
//	cout << pickup.ToString();
//	cout << pick.ToString();
//}
