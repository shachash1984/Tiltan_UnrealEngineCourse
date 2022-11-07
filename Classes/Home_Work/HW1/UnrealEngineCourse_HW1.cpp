#include <iostream>

using namespace std;

int strength = 4, magic = 4, dexterity = 4, vitality = 4, availableAP = 6;
float age, hP = 100, mana = 50;
string name;

void ViewCharStats()
{
	cout << "\n          Character Sheet\n";
	cout << "--------------------------------------\n";
	cout << name << " [lvl" << age << "]\n";
	cout << "AP: " << availableAP << "\n";
	cout << "HP: " << hP << "\n";
	cout << "Mana: " << mana << "\n";

	cout << "Dexterity: " << dexterity << "\n";
	cout << "Strength: " << strength << "\n";
	cout << "Vitality: " << vitality << "\n";
	cout << "Magic: " << magic << "\n";
	cout << "--------------------------------------\n\n";
}

void AssignAP()
{
	int _pickedAttribute;

	cout << "Available AP [" << availableAP << "]\n";
	cout << "Choose a stat to assaign points to:\n";
	cout << "1) Magic [" << magic << "]\n";
	cout << "2) Vitality [" << vitality << "]\n";
	cout << "3) Strength [" << strength << "]\n";
	cout << "4) Dexterity [" << dexterity << "]\n";

	cin >> _pickedAttribute;

	switch (_pickedAttribute)
	{
	case 1:
		magic++;
		availableAP--;
		break;
	case 2:
		vitality++;
		availableAP--;
		break;
	case 3:
		strength++;
		availableAP--;
		break;
	case 4:
		dexterity++;
		availableAP--;
		break;
	default:
		break;
	}
}

int main()
{
	cout << "Enter Characters' name:\n";
	cin >> name;

	cout << "Enter Characters' age:\n";
	cin >> age;

	cout << "\nBase Character created:\n";
	ViewCharStats();

	cout << "Assign attiribute points:\n";
	while (availableAP != 0)
	{
		AssignAP();
	}

	ViewCharStats();

	int pressToFinish;
	cin >> pressToFinish;
}