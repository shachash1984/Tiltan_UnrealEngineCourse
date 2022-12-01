// LiorAvital_HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using std::string;

class Player {

private:
    string _name;
    unsigned int _age;
    float _HP;
    float _Mana;

    unsigned char strength = '0';
    unsigned char magic = '0';
    unsigned char dexterity = '0';
    unsigned char vitality = '0';

    bool RaiseStats(unsigned char stat) {
        return(stat >= '0' && stat <= '9');
    }


public:
    Player(string name, unsigned int age, float HP, float Mana) : _name(name), _age(age), _HP(HP), _Mana(Mana) {};

    void Display() {
        std::cout << "Name: " << _name << "\n" << "Age " << _age << "\n" << "HP: " << _HP << "\n" << "Mana: " << _Mana << "\n";
    };
    void DisplayStats() {
        std::cout << "Strength: " << strength << "\n" << "Magic: " << magic << "\n" << "Dexterity: " << dexterity << "\n" << "Vitality: " << vitality << "\n";
    };



    void DisStats(unsigned int stats) {
        while (stats>0)
        {
            std::cout << "\nChoose Stat to raise : S/M/D/V\n";
            char choice;
            std::cin >> choice;
            switch (choice)
            {
            case 'S':
                if (RaiseStats(strength))
                {
                    stats--;
                    strength++;
                }
                else
                {
                    std::cout << "Already Maxed Choose another stat!";
                }
                break;
            case 'M':
                if (RaiseStats(magic))
                {
                    stats--;
                    magic++;
                }
                else
                {
                    std::cout << "Already Maxed Choose another stat!";
                }
                break;
            case 'D':
                if (RaiseStats(dexterity))
                {
                    stats--;
                    dexterity++;
                }
                else
                {
                    std::cout << "Already Maxed Choose another stat!";
                }
                break;
            case 'V':
                if (RaiseStats(vitality))
                {
                    stats--;
                    vitality++;
                }
                else
                {
                    std::cout << "Already Maxed Choose another stat!";
                }
                break;
            default:
                std::cout << "\nUnrecognized char.\n";

                break;
            }
        }
    }
};

int main()
{
    string name;
    unsigned int age;
    float HP;
    float Mana;

    std::cout << "Write your name!\n";
    std::cin >> name;
    std::cout << "Enter your age!\n";
    std::cin >> age;
    std::cout << "Enter your HP!\n";
    std::cin >> HP;
    std::cout << "Enter your Mana!\n";
    std::cin >> Mana;
    std::cout << "\n";

    Player player = Player(name, age, HP, Mana);

    player.Display();
    player.DisplayStats();
    player.DisStats(8);
    player.DisplayStats();


}





