#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	// General Player Variables
	string name;
	int age;
	float hp;
	float mp;

	// Player Attributes
	int vitality = 0;
	int magic = 0;
	int strength = 0;
	int dexterity = 0;
	int attributePoints = 20;

	// Assigning Variables
	cout << "Please Assign the Following!\n";
	cout << "Name: ";
	cin >> name;
	cout << "Age: ";
	cin >> age;
	cout << "Health: ";
	cin >> hp;
	cout << "Mana: ";
	cin >> mp;
	cout << "\n";

	// Assigning Attributes
	while (attributePoints > 0)
	{
		cout << "Vitality:" << vitality << " Magic:" << magic << " Strength:" << strength << " Dexterity:" << dexterity;
		cout << "\nYou Have " << attributePoints << " Attribute Points, Please Distribute Them!\n";
		cout << "Press the Num of the Attribute You Want\n";
		cout << "1.Vitality 2.Magic 3.Strength 4.Dexterity\n";

		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			vitality++;
			attributePoints--;
			break;
		case 2:
			magic++;
			attributePoints--;
			break;
		case 3:
			strength++;
			attributePoints--;
			break;
		case 4:
			dexterity++;
			attributePoints--;
			break;
		default:
			break;
		}
		system("CLS");
	}


	// Display Player Stats
	cout << "            Player Stats";
	cout << "\n----------------------------------------";
	cout << "\nName:" << name << " Age:" << age << " HP:" << hp << " MP:" << mp;
	cout << "\nVitality:" << vitality << " Magic:" << magic << " Strength:" << strength << " Dexterity:" << dexterity;
	cout << "\n----------------------------------------\n";

	return 0;
}