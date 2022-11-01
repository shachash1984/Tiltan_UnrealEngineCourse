#include <iostream>
#include <string>
using namespace std;

class Player {
public: 
	string Name;
	int age = 5;
	float Hp = 100;
	float Mana = 30;

	char strength = 0;
	char magic = 0;
	char dexterity = 0;
	char vitality = 0;

	void Stats() {

		Hp += ((int)vitality*5);
		Mana += ((int)magic*10);

		cout << "Your Hero " << Name << " is a " << age << " Year old Champion with "<< Hp << " health and "<< Mana << " Mana.\nstrength = " << (int)strength
			<< "\nmagic = " << (int)magic << "\ndexterity = " << int(dexterity) << "\nvitality = " << int(vitality)<< "\n\n\n";
	}
};

int main()
{
	int AP = 600; // attribute points
	Player player;
	int choice; // Chose to upgrade
	int howMuch; // how many AP chose to spent
	bool SelectingName = true;
	bool SelectingAge = true;
	bool Upgrading = true;

	while (SelectingName) {
		if (cin.fail()) { cin.clear(); cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
		cout << "Choose a Name for your hero.\n";
		getline(cin, player.Name);
		if (player.Name != "") { SelectingName = false; }
	}

	while (SelectingAge) {
		if (cin.fail()) { cin.clear(); cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');}
		cout << "how old is your hero?.\n";
		cin >> player.age;
		if (player.age == 0 || player.age>9999999) { cout << "Not a valid age\n"; }
		else
		{
			SelectingAge = false;
		}
	}

	while (Upgrading) {
		if (cin.fail()) { cin.clear(); cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
		cout << "Upgrade Your Character!\n1. Strength ["<<(int)player.strength<<"]\n2. Magic [" << (int)player.magic <<
			"]\n3. dexterity [" << (int)player.dexterity << "]\n4. Vitality [" << (int)player.vitality << "]\n5. [Finish]\n";
		cin >> choice;

		if (choice < 5 && choice>0) {

			cout << "How many? [You Have " << AP << " Left]\n";
			cin >> howMuch;

			if (howMuch <= AP || howMuch == 0) {

				char* Stat = &player.strength;
				switch (choice)
				{
				case 1:
					Stat = &player.strength; break;
				case 2:
					Stat = &player.magic; break;
				case 3:
					Stat = &player.dexterity; break;
				case 4:
					Stat = &player.vitality; break;
				default:
					break;
				}


				int n = (int)*Stat;
				if (n + howMuch > 127)
				{
					howMuch -= n + howMuch - 127;
					*Stat = 127;
				}
				else
				{
					*Stat += howMuch;
				}
				AP -= howMuch;


			}
			else if (howMuch > AP)
			{
				cout << "You Dont Have Enough\n";
			}
			else {
				cout << "Not an Option\n";
			}
		}
		else if (choice == 5)
		{
			Upgrading = false;
		}
		else { cout << "Not an Option\n"; }
	}

	player.Stats();
}
