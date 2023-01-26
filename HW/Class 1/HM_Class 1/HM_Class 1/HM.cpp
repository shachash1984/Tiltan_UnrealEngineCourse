#include <iostream>

using namespace std;

string name;
unsigned int age;
float hp;
float mana;

int main()
{
	cout << "Please enter  your name: \n";
	cin >> name;

	cout << "Please enter  your age: \n";
	cin >> age;

	hp = 100;
	mana = 100;

	cout << "Hi " << name << " you are " << age << " years old and you have " << hp << " hp and " << mana << " mana";

	char end;
	cin >> end;
	return 0;
}