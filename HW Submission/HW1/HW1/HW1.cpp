// HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;

#include <iostream>
#include <string>

int main()
{
	string name;
	int age, points = 100;
	float HP, mana;
	unsigned char strength, magic, dexterity, vitality;
	
	cout << "Welcome Player! Please enter your name: ";
	cin >> name;
	cout << "Hello " << name << " How old are you ? ";
	cin >> age;
	cout << "Excellent! you have 100 points to create your character. \n How many points would you like to spend on HP?";
	cin >> HP;
	points = points - HP;
	cout << "You have " << points << " points left";
	cout << "How many points would you like to spend on mana? ";
	cin >> mana;
	points = points - mana;
	cout << "You have " << points << " points left";
	
}
