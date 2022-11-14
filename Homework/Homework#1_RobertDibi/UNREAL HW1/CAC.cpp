#include <iostream>
using namespace std;

int main()
{
	std::cout << "What Is Your Name?";
		string name;
		cin >> name;

		cout << "How Old Are You>";

		unsigned int age;
		cin >> age;

		cout << "How Much HP Do You Have?";
		float HP;
		cin >> HP;

		cout << "How Much MANA Do You Have?";
		float MP;
		cin >> MP;

		cout << "Your Name Is : " << name << "\n";
		cout << "Your Age Is : " << age << "\n";
		cout << "Your Health Is : " << HP << "\n";
		cout << "Your Mana Is : " << MP << "\n";
		
		return 0;
			
}