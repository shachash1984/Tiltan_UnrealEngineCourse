#include <iostream>
#include <stdlib.h>

using namespace std;

string name;
int age;
float hp = 10;
float mana = 10;

int totalUnassaignedAP = 6;
int strength = 4;
int dexterity = 4;
int constitution = 4;
int intelligence = 4;

// Not sure why inputing a string / char into an int causes the program to loop infinitely

void AssaignStats()
{
	int choice;

	cout << "\nChoose a stat to assaign points to:\n";
	cout << "1) Strength [" << strength << "]\n";
	cout << "2) Dexterity [" << dexterity << "]\n";
	cout << "3) Constitution [" << constitution << "]\n";
	cout << "4) Intelligence [" << intelligence << "]\n";
	

	cin >> choice;

	switch (choice)
	{
	case 1:
		strength++;
		totalUnassaignedAP--;
		break;

	case 2:
		dexterity++;
		totalUnassaignedAP--;
		break;

	case 3:
		constitution++;
		totalUnassaignedAP--;
		break;

	case 4:
		intelligence++;
		totalUnassaignedAP--;
		break;

	default:
		cout << "Invalid input!\n";
		break;
	}
}

void PresentNewCharacterInfo()
{
	cout << "\n---------- Character's Info ---------- \n\n";
	
	cout << "Character's Name: " << name << "\n";
	cout << "Character's Age: " << age << "\n";
	cout << "Character's HP: " << hp << "\n";
	cout << "Character's Mana: " << mana << "\n";

	cout << "Strength: " << strength << "\n";
	cout << "Dexterity: " << dexterity << "\n";
	cout << "Constitution: " << constitution << "\n";
	cout << "Intelligence: " << intelligence << "\n";

	cout << "\n-------------------------------------- \n\n";
}

int main()
{
	cout << "Enter Character's name:\n";
	cin >> name;

	cout << "Enter Character's age:\n";
	cin >> age;

	while (totalUnassaignedAP > 0)
	{
		AssaignStats();
	}

	PresentNewCharacterInfo();

	return 0;

}

