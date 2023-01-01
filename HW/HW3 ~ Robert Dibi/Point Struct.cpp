#include <iostream>
#include <string>

using namespace std;
using std::endl;
class Point //-5 Should be separated to header file and source file
{
public:
	int x;
	int y;
	int z;
	Point() //-5 Variables should be initialized in the initialization list
	{
		x = 0;
		y = 0;
		z = 0;
	}

};

class PickUp
{
private:
	Point position;
	string const name;
	int value;

public :
	PickUp() 
	{
		value = 0;
		name:"";

	}
	PickUp(Point position , string name , int value)
	{
		this->position = position;
		this->name > name;
		this->value = value;

	}

	Point GetPosition()
	{
		return position;
	}
	string GetName()
	{
		return name;
	}
	int GetValue()
	{
		return value;
	}

	string ToString()
	{
		return "Pickup: name:" + GetName() + ", position : (" + to_string(GetPosition().x) + " , " + to_string(GetPosition().y) + " , " + to_string(GetPosition().z) + ", value : " + to_string(GetValue());
	}
};

int main() 
{
	return 0;

}
