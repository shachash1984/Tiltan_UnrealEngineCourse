/*CPP:

1.
In Visual Studio 
create a "Point" struct
public data members:
int x
int y
int z

public ctor:
default constructor that will initialize members to zeros

2.
create a "Pickup" class

private data members:
Point position;
string const name;
int value;

public Methods:
Create a default constructor that initializes the members to default values
Create a second constructor that takes 3 arguments and assigns them to its members

Create Getter methods for all members
Create a ToString method that returns a string in the form: "Pickup: name:Health, position:(10, -5, 0), value: 100"


**********/

#include <iostream>

struct Point {

    int x;
    int y;
    int z;

    Point() {
        x = 0;
        y = 0;
        z = 0;
    }

    void Set(int X, int Y, int Z) {
        x = X;
        y = Y;
        z = Z;
    }
};

class Pickup {
    Point position;
    std::string const name;
    int value;

public:
    Pickup() : name("def") {
        position.Set(0, 0, 0);
        value = 0;
    }

    Pickup(Point _position, std::string const _name, int _value) : name(_name) {
        position = _position;
        value = _value;
    }

    Point GetPos() {
        return position;
    }

    std::string GetName() {
        return name;
    }

    int GetValue() {
        return value;
    }

    void ToString() {
        std::cout << "Pickup: " + name + "\nPosition: (" << position.x << " ," << position.y << " ," << position.z << ")\nValue: "<< value;
    }
};

int main()
{
    std::string poop = "Poop";
    Point pos;
    pos.Set(14, 3, 66);

    Pickup Glock = Pickup(pos, poop, 55);

    Glock.ToString();
}
