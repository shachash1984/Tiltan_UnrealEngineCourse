#include <iostream>
#include <string>
// -15 why is everything on the same file
struct Point
{
    int x, y, z;

    Point() : x(0), y(0), z(0) {}
    Point(int x, int y, int z) : x(x), y(y), z(z) {}
};

class Pickup
{
private:
    Point position;
    std::string const name;
    int value;

public:
    Pickup() : position(), name(""), value(0) {}
    Pickup(const std::string& name, int x, int y, int z, int value)
        : position(x, y, z), name(name), value(value) {}

    int GetX() const { return position.x; }
    int GetY() const { return position.y; }
    int GetZ() const { return position.z; }
    std::string GetName() const { return name; }
    int GetValue() const { return value; }

    std::string ToString() const
    {
        return "Pickup: name: " + name + ", position:(" + std::to_string(position.x) + ", " + std::to_string(position.y) + ", " + std::to_string(position.z) + "), value: " + std::to_string(value);
    }
};

int main()
{
    Pickup p("Health", 10, -5, 0, 100);
    std::cout << p.ToString() << std::endl;

    return 0;
}



// Homework Was done with Lior Avital.