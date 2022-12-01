// Unreal_HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using std::string;

class Player
{
private:
    string _name;
    unsigned int _age;
    float _hp;
    float _mana;

    unsigned char strength = '0';
    unsigned char magic = '0';
    unsigned char dexterity = '0';
    unsigned char vitality = '0';


public:
    Player(string name, unsigned int age, float hp, float mana) : _name(name), _age(age), _hp(hp), _mana(mana) {};
    
    void Display()
    {
        std::cout << "Name: " << _name << "\n";
        std::cout << "Age: " << _age << "\n";
        std::cout << "HP: " << _hp << "\n";
        std::cout << "Mana: " << _mana << "\n";
    }

    void DisplayStats()
    {
        std::cout << "Strength: " << strength << "\n";
        std::cout << "Magic: " << magic << "\n";
        std::cout << "Dexterity: " << dexterity << "\n";
        std::cout << "Vitality: " << vitality << "\n";
    }

    bool UsePoints(unsigned char point)
    {
        return(point >= '0' && point <='9');
    }

    void UpgradePoints(unsigned int points)
    {
        while (points > 0)
        {
            std::cout << "Choose Stat to raise : S/M/D/V \n";
            char choice;
            std::cin >> choice;
            switch (choice)
            {
            case 'S':
                if (UsePoints(strength))
                {
                    points--;
                    strength++;
                }
                else
                {
                    std::cout << "Already maxed out, can not upgrade again";
                }
                break;
            case 'M':
                if (UsePoints(magic))
                {
                    points--;
                    magic++;
                }
                else
                {
                    std::cout << "Already maxed out, can not upgrade again";
                }
                break;
            case 'D':
                if (UsePoints(dexterity))
                {
                    points--;
                    dexterity++;
                }
                else
                {
                    std::cout << "Already maxed out, can not upgrade again";
                }
                break;
            case 'V':
                if (UsePoints(vitality))
                {
                    points--;
                    vitality++;
                }
                else
                {
                    std::cout << "Already maxed out, can not upgrade again";
                }
                break;
            default:
                    std::cout << "cant understand this char, use capital";
                break;
            }
        }
    }

};

int main()
{
    string name;
    unsigned int age;
    float hp;
    float mana;
    std::cout << "Write Your Name:\n";
    std::cin >> name;
    std::cout << "Write Your Age:\n";
    std::cin >> age;
    std::cout << "Write Your HP:\n";
    std::cin >> hp;
    std::cout << "Write Your Mana:\n";
    std::cin >> mana;

    Player player = Player(name, age, hp, mana);

    player.Display();
    player.DisplayStats();
    player.UpgradePoints(9);
    player.DisplayStats();
}

