#include <iostream>

using namespace std;

int main()
{
	// define starting fields on runtime
#pragma region Initial Fields
	int _getInput;
	string _name;
	unsigned int _age;
	float _health, _mana;
	unsigned char _strength, _magic, _dexterity, _vitality;
#pragma endregion

	// write runtime code
#pragma region Run
	cout << "Press 'Enter' to continue\n";
	cout << "Welcome to the all new CPP character creator!\n";
	cout << "With our program you will be able to Create a Character for absolutly no reason what so ever! \n";
	cout << "Enjoy (; \n";
	_getInput = getchar();
	cout << "Enter desired +name and +age in that order please:\n";
	cin >> _name;
	cin >> _age;
	_getInput = getchar();
	cout << "                         v--------Those should be in singles-------v\n";
	cout << "Next set +health, +mana, +strength, +magic, +dexterity and +vitality in that order please:\n";
	cin >> _health;
	cin >> _mana;
	cin >> _strength;
	cin >> _magic;
	cin >> _dexterity;
	cin >> _vitality;
	_getInput = getchar();
	cout << "Name: " << _name <<"\n";
	cout << "Health Points: " << _health <<"\n";
	cout << "Mana Points: " << _mana <<"\n";
	cout << "Strength: " << _strength <<"\n";
	cout << "Magic: " << _magic <<"\n";
	cout << "Dexterity: " << _dexterity <<"\n";
	cout << "Vitality: " << _vitality <<"\n";
#pragma endregion

	// write code to execute right after Run code and will lead to closing the program
#pragma region End
	_getInput = getchar();
	return 0;
#pragma endregion
}