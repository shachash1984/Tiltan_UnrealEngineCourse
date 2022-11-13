// HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>
#include <string>

int main()
{
	string name;
	int age, points = 300;
	float HP, mana;
	unsigned char strength = 'I', magic = 0, dexterity = 0, vitality = 0;
	
	cout << "Welcome Player! Please enter your name: ";
	cin >> name;
	cout << "Hello " << name << " How old are you ? ";
	cin >> age;
	cout << "\nExcellent! you have 300 points to create your character. \nHow many points would you like to spend on HP? ";
	cin >> HP;
	points = points - HP;
	cout << "You have " << points << " points left to spend. \nHow many points would you like to spend on mana? ";
	cin >> mana;
	points = points - mana;
	cout << "You have " << points << " points left to spend. \nHow many points would you like to spend on strength? ";
	cin >> strength;
	points = points - strength;
	cout << "You have " << points << " points left to spend. \nHow many points would you like to spend on magic? ";
	cin >> magic;
	points = points - magic;
	cout << "You have " << points << " points left to spend. \nHow many points would you like to spend on dexterity? ";
	cin >> dexterity;
	points = points - dexterity;
	cout << "You have " << points << " points left to spend. \nHow many points would you like to spend on vitality? ";
	cin >> vitality;
	points = points - vitality;
	cout << "You have " << points << " points left ";
	cout << "Your character is now complete! \n Here are your stats: \n Name: " << name << "\n Age: " << age << "\n HP : " << HP << "\n Mana : " << mana << "\n Strength : " << strength << "\n Magic : " << magic << "\n Dexterity : " << dexterity << "\n Vitality : " << vitality;
}
