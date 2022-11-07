#include <iostream>

// HW1 SOLUTION BY SHAY SEDAKA

std::string _name;
unsigned int _age;
float _hp;
float _mana;


//Making these unsigned char made no sense what so ever, so I made them int.

unsigned int _strength;
unsigned int _magic;
unsigned int _dexterity;
unsigned int _vitality;

//Function Headers

void PrintString(std::string text);
void ReadStrength(int remainingPoints);
void ReadMagic(int remainingPoints);
void ReadDexterity(int remainingPoints);
void ReadVitality(int remainingPoints);

void PrintString(std::string text)
{
	std::cout << text;
}

void ReadStrength(int remainingPoints)
{
	std::cout << "How many on Strength? (" << remainingPoints << " remaining)\n";
	std::cin >> _strength;

	if ((int)_strength > remainingPoints)
	{
		PrintString("Not enough points... try again.\n");
		ReadStrength(remainingPoints);
	}
}

void ReadMagic(int remainingPoints)
{
	std::cout << "How many on Magic? (" << remainingPoints << " remaining)\n";
	std::cin >> _magic;

	if ((int)_magic > remainingPoints)
	{
		PrintString("Not enough points... try again.\n");
		ReadMagic(remainingPoints);
	}
}

void ReadDexterity(int remainingPoints)
{
	std::cout << "How many on Dexterity? (" << remainingPoints << " remaining)\n";
	std::cin >> _dexterity;

	if ((int)_dexterity > remainingPoints)
	{
		PrintString("Not enough points... try again.\n");
		ReadDexterity(remainingPoints);
	}
}

void ReadVitality(int remainingPoints)
{
	std::cout << "How many on Vitality? (" << remainingPoints << " remaining)\n";
	std::cin >> _vitality;

	if ((int)_vitality > remainingPoints)
	{
		PrintString("Not enough points... try again.\n");
		ReadVitality(remainingPoints);
	}
}

void ReadPlayer(int pointsToSpend)
{
	PrintString("Hello traveler, please give us this information about you:\n\n");
	PrintString("What is your name?");
	std::cin >> _name;
	PrintString("What is your age?");
	std::cin >> _age;
	PrintString("How many health points?");
	std::cin >> _hp;
	PrintString("How many mana points?");
	std::cin >> _mana;

	int remainingPoints = pointsToSpend;
	std::cout << "\n\nGood,good... you have " << remainingPoints << " to spend on attributes. Spend wisely...\n\n";

	ReadStrength(remainingPoints);

	remainingPoints -= _strength;

	ReadMagic(remainingPoints);

	remainingPoints -= _magic;

	ReadDexterity(remainingPoints);

	remainingPoints -= _dexterity;

	ReadVitality(remainingPoints);

	remainingPoints -= _vitality;


}

void PrintPlayer()
{
	std::cout << "\n\n\nPlayer: [" << _name << " | " << _age << " | " << _hp << " | " << _mana << "]\n";
	std::cout << "STR: " << _strength << "\n";
	std::cout << "MAG: " << _magic << "\n";
	std::cout << "DEX: " << _dexterity << "\n";
	std::cout << "VIT: " << _vitality << "\n";
}

int main()
{
	ReadPlayer(600);
	PrintPlayer();

	return 0;

}
