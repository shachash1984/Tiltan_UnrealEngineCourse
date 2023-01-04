using namespace std;
#include <iostream>

// -10 Won't compile, main doesnt know whats point because it is underneath it
int main()
{
    std::cout << "Hello World!\n"; // -10 didnt create a pickup
    Point p1;

}

// -5 this should be in  separate files (Pickup.h and Pickup.cpp)
class PickUp
{

private:
    Point position;
    string const name; // good use of const
    int value;

public:
    PickUp()
    {
		name == "Pick"; // -10 == is for comparison, = is for assignment
        value = 0;
        position;
    }

    PickUp(Point p, string n, int v)
    {
        p = position;
        n = name;
        v = value;
    }
    string getString() // -2 should be getName()
    {
        return name;
    }

    int GetValue()
    {
        return value;
    }
    Point GetPoint()
    {
        return position;
    }

    string ToString()
    {
        return "Pickup: name:Health, position : (10, -5, 0), value : 100";
    }
};

struct Point
{
    int x;
    int y;
    int z;

    Point() // -5 the values are not initialized
    {
        
    }
};






