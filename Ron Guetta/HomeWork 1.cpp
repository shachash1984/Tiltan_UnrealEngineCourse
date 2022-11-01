#include <iostream>
#include <string>
using namespace std;

class Player {
public: 
	string Name;
	int Age = 5;
	float Hp = 100;
	float Mana = 30;

	char Strength = 0;
	char Magic = 0;
	char Dexterity = 0;
	char Vitality = 0;

	void Stats() {

		Hp += ((int)Vitality*5);
		Mana += ((int)Magic*10);

		cout << "Your Hero " << Name << " is a " << Age << " Year old Champion with "<< Hp << " health and "<< Mana << " Mana.\nstrength = " << (int)Strength
			<< "\nmagic = " << (int)Magic << "\ndexterity = " << int(Dexterity) << "\nvitality = " << int(Vitality)<< "\n\n\n";
	}
};

int main()
{
	int _attributePoints = 600; // attribute points
	Player _player;
	int _choice; // Chose to upgrade
	int _howMuch; // how many AP chose to spent
	bool _selectingName = true;
	bool _selectingAge = true;
	bool _upgrading = true;

	while (_selectingName) {
		if (cin.fail()) { cin.clear(); cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
		cout << "Choose a Name for your hero.\n";
		getline(cin, _player.Name);
		if (_player.Name != "") { _selectingName = false; }
	}

	while (_selectingAge) {
		if (cin.fail()) { cin.clear(); cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');}
		cout << "how old is your hero?.\n";
		cin >> _player.Age;
		if (_player.Age == 0 || _player.Age>9999999) { cout << "Not a valid age\n"; }
		else
		{
			_selectingAge = false;
		}
	}

	while (_upgrading) {
		if (cin.fail()) { cin.clear(); cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }
		cout << "Upgrade Your Character!\n1. Strength ["<<(int)_player.Strength<<"]\n2. Magic [" << (int)_player.Magic <<
			"]\n3. dexterity [" << (int)_player.Dexterity << "]\n4. Vitality [" << (int)_player.Vitality << "]\n5. [Finish]\n";
		cin >> _choice;

		if (_choice < 5 && _choice>0) {

			cout << "How many? [You Have " << _attributePoints << " Left]\n";
			cin >> _howMuch;

			if (_howMuch <= _attributePoints || _howMuch == 0) {

				char* Stat = &_player.Strength;
				switch (_choice)
				{
				case 1:
					Stat = &_player.Strength; break;
				case 2:
					Stat = &_player.Magic; break;
				case 3:
					Stat = &_player.Dexterity; break;
				case 4:
					Stat = &_player.Vitality; break;
				default:
					break;
				}


				int n = (int)*Stat;
				if (n + _howMuch > 127)
				{
					_howMuch -= n + _howMuch - 127;
					*Stat = 127;
				}
				else
				{
					*Stat += _howMuch;
				}
				_attributePoints -= _howMuch;


			}
			else if (_howMuch > _attributePoints)
			{
				cout << "You Dont Have Enough\n";
			}
			else {
				cout << "Not an Option\n";
			}
		}
		else if (_choice == 5)
		{
			_upgrading = false;
		}
		else { cout << "Not an Option\n"; }
	}

	_player.Stats();
}
