using namespace std;
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    Point p1;

}

class PickUp
{

private:
    Point position;
    string const name;
    int value;

public:
    PickUp()
    {
        name == "Pick";
        value = 0;
        position;
    }

    PickUp(Point p, string n, int v)
    {
        p = position;
        n = name;
        v = value;
    }
    string getString()
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

    Point()
    {
        
    }
};






