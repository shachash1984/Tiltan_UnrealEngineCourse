// HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>
#include <string>

int main()
{
	string _name;
	int _input, _age, _points = 300;
	float _HP, _mana;
	unsigned char _strength, _magic, _dexterity, _vitality;
	
	cout << "Welcome Player! Please enter your name: ";
	cin >> _name;
	cout << "Hello " << _name << " How old are you ? ";
	cin >> _age;
	cout << "\nExcellent! you have 300 points to create your character. \nHow many points would you like to spend on HP? ";
	cin >> _HP;
	_points = _points - _HP;
	cout << "You have " << _points << " points left to spend. \nHow many points would you like to spend on mana? ";
	cin >> _mana;
	_points = _points - _mana;
	cout << "You have " << _points << " points left to spend. \nHow many points would you like to spend on strength? ";
	_input = getchar();
	cin >> _strength;
	_points = _points - _strength;
	cout << "You have " << _points << " points left to spend. \nHow many points would you like to spend on magic? ";
	cin >> _magic;
	_points = _points - _magic;
	cout << "You have " << _points << " points left to spend. \nHow many points would you like to spend on dexterity? ";
	cin >> _dexterity;
	_points = _points - _dexterity;
	cout << "You have " << _points << " points left to spend. \nHow many points would you like to spend on vitality? ";
	cin >> _vitality;
	_points = _points - _vitality;
	cout << "You have " << _points << " points left ";
	cout << "Your character is now complete! \n Here are your stats: \n Name: " << _name << "\n Age: " << _age << "\n HP : " << _HP << "\n Mana : " << _mana << "\n Strength : " << _strength << "\n Magic : " << _magic << "\n Dexterity : " << _dexterity << "\n Vitality : " << _vitality;
}
