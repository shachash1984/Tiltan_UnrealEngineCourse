#include <iostream>
#include <string>

struct Point //-5 needs to be in its own header
{
    int x, y, z;

    Point() : x(0), y(0), z(0) {}
};

class Pickup //-5 needs to be in its own header, and the implementation in its own cpp file
{
private:
    Point position;
    std::string const name;
    int value;

public:
    Pickup() : name(""), value(0) {}
    Pickup(std::string name, Point position, int value)
        : name(name), position(position), value(value) {}

    std::string getName() const { return name; }
    Point getPosition() const { return position; }
    int getValue() const { return value; }

    std::string toString() const
    {
        return "Pickup: name: " + name + ", position: (" + std::to_string(position.x) + ", "
            + std::to_string(position.y) + ", " + std::to_string(position.z) + "), value: "
            + std::to_string(value);
    }
};

int main()
{
    Pickup pickup;
    std::cout << pickup.toString() << std::endl;

    return 0;
}
