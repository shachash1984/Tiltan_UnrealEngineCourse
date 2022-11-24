/*write code for creating a player - 80%
receive as input:
name : string
age : unsigned int
hp: float
mana: float

strength : unsigned char
magic : unsigned char 
dexterity : unsigned char 
vitality : unsigned char 


write logic for distribution of a limited number of allowed attributes: 20%
for example: 
the player has 600 attribute points and needs to decide on which aspects to invest them*/

#include <iostream>
#include <string>


int main()
{
    std::string name;
    unsigned int age;
    float hp = 0;
    float mana = 0;
    
    int attpoints = 600;
    int attnum = 0;
    int p2add = 0;
    unsigned char strength = 0;
    unsigned char magic = 0;
    unsigned char dexterity = 0;
    unsigned char vitality = 0;

    std::cout << "enter your character's name: ";
    std::cin >> name;
    std::cout << "enter your character's age: ";
    std::cin >> age;
    std::cout << "enter your character's max health points: ";
    std::cin >> hp;
    std::cout << "enter your character's mana: ";
    std::cin >> mana;

    std::cout << "great! \n\nnow spend all your attribute points on the next four attributes \nstrength\nmagic\ndexterity\nand vitality";
    std::wcout << "\nyou can only spend 255 points on each attribute!!!";
    while (attpoints > 0)
    {
        std::cout << "\nyour current attribute points: " + std::to_string(attpoints);
        std::cout << "\non which attribute would you like to spend points? \nenter:\n\"1\" for strength \n\"2\" for magic \n\"3\" for dexterity \n\"4\" for vitality\n";
        std::cin >> attnum;
        if (attnum < 0 || 4 < attnum)
        {
            std::cout << "invalid number\n";
            continue;
        }
        std::cout << "how many points would you like to add to this attribute?\n";
        std::cin >> p2add;
        if (p2add > 255 || attpoints - p2add < 0)
        {
            std::cout << "invalid number\n";
            continue;
        }

        switch ((attnum))
        {
        case 1:
            if (strength + p2add > 255)
            {
                std::cout << "invalid number\n";
                break;
            }
            strength += p2add;
            attpoints -= p2add;
            std::cout << std::to_string(p2add) + "points added to strength\n";
            std::cout << "current strength: " + std::to_string(strength) + "\n";
            break;
        case 2:
            if (magic + p2add > 255)
            {
                std::cout << "invalid number\n";
                break;
            }
            magic += p2add;
            attpoints -= p2add;
            std::cout << std::to_string(p2add) + "points added to magic\n";
            std::cout << "current magic: " + std::to_string(magic) + "\n";
            break;
        case 3:
            if (dexterity + p2add > 255)
            {
                std::cout << "invalid number\n";
                break;
            }
            dexterity += p2add;
            attpoints -= p2add;
            std::cout << p2add + "points added to dexterity\n";
            std::cout << "current dexterity: " + std::to_string(dexterity) + "\n";
            break;
        case 4:
            if (vitality + p2add > 255)
            {
                std::cout << "invalid number\n";
                break;
            }
            vitality += p2add;
            attpoints -= p2add;
            std::cout << p2add + "points added to vitality\n";
            std::cout << "current vitality: " + std::to_string(vitality) + "\n";
            break;
        default:
            std::cout << "the attribute you chose doesn't exists\n";
            break;
        }
    }

    std::cout << "\n\n\nthese are your character's overall stats:";
    std::cout << "\nname: " + name;
    std::cout << "\nage: " + std::to_string(age);
    std::cout << "\nmax health: " + std::to_string(hp);
    std::cout << "\nmana: " + std::to_string(mana);
    std::cout << "\nstrength: " + std::to_string(strength);
    std::cout << "\nmagic: " + std::to_string(magic);
    std::cout << "\ndexterity: " + std::to_string(dexterity);
    std::cout << "\nvitality: " + std::to_string(vitality);

}




