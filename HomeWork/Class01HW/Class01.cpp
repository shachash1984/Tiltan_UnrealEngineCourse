#include <iostream>

using namespace std;

int main() 
{
	cout << "please insert the following attributes:\n";
	cout << "Name: ";
	string name;
	cin >> name;
	cout << "Age: ";
	unsigned int age;
	cin >> age;
	cout << "HP: ";
	float HP;
	cin >> HP;
	cout << "Mana: ";
	float Mana;
	cin >> Mana;

	cout << "\nPlayer attributes: \n" << "Name: " << name << "\nAge: " << age << "\nHP: " << HP << "\nMana: " << Mana;
}