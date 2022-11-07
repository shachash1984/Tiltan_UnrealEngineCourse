#include <iostream>
#include <ostream>
using namespace std;


int main()
{
	int attributePoints = 10;

	string name;
	unsigned int i = 0;
	float hp = 100;
	float mana = 50;

	unsigned char strength = 0;
	unsigned char magic = 0;
	unsigned char dexterity = 0;
	unsigned char vitality = 0;

	cout << "Write Your Name Traveler" << endl;
	cin >> name;

	cout << "What is your age sir: " << name << endl;
	cin >> i;

	cout << "You start with " << hp << " HP ";
	cout << "and with " << mana << " MANA\n" << endl;

	cout << "Press Enter to Continue" << endl;
	cin.ignore();

	cout << "You have " << attributePoints << " attribute points, use them wisely\n" << endl;

	while (attributePoints > 0)
	{
		cout << "Press 1 to add to Strength\n Press 2 to add to Magic\n";
		cout << "Press 3 to add to Dexterity\n Press 4 to add to Vitality\n" << endl;

		cout << "Strength: " << (int)strength << endl;
		cout << "Magic: " << (int)magic << endl;
		cout << "Dexterity: " << (int)dexterity << endl;
		cout << "Vitality: " << (int)vitality << endl;

		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
			strength += 1;
			attributePoints--;
			break;
		case 2:
			magic += 1;
			attributePoints--;
			break;
		case 3:
			dexterity += 1;
			attributePoints--;
			break;
		case 4:
			vitality += 1;
			attributePoints--;
			break;
		default:

			cout << "Please Choose a valid option" << endl;
			break;
		}
		system("CLS");
	}

	cout << "Strength: " << (int)strength << endl;
	cout << "Magic: " << (int)magic << endl;
	cout << "Dexterity: " << (int)dexterity << endl;
	cout << "Vitality: " << (int)vitality << endl;

	cout << "Thank you for assigning your points\n" << endl;

	cout << "Press Enter to close the program" << endl;
	cin.ignore();
}
