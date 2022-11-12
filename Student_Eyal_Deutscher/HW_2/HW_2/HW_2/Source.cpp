#include <iostream>
#include "Q1.h"
#include "Q2.h"
#include "EnemyEnum.h"
using namespace std;

void WaitForKey()
{
	cout << "Press any key to continue" << endl;
	cin.ignore();
	cin.ignore();
}
void callQ1()
{
	int num;
	cout << "Write a number";
	cin >> num;
	Q1 palindrom;
	bool check = palindrom.IsPalindrom(num);
	cout << "The number inserted: " << num << " Is a palindrom: " << check << endl;
	WaitForKey();
}
void callQ2()
{
	Q2 romanLetters;
	romanLetters.SetLettersValue();
	cout << "Insert A Roman Number Value"<<endl;
	string s;
	cin >> s;
	cout << "Value is:" << romanLetters.romanToInt(s)<<endl;
	WaitForKey();
}
void GetEnemyEnum()
{
	EnemyEnum enemyEnum;
	cout << "What Enemy Stats would you like to get?" << endl;
	int tempInt=0;
	cout << "0 = Golem" << endl;
	cout << "1 = Dwarf" << endl;
	cout << "2 = Vampire" << endl;
	cout << "3 = Potato" << endl;
	cin >> tempInt;
	EnemyEnum::EnemiesEnum enemiesEnum;
	enemiesEnum = static_cast<EnemyEnum::EnemiesEnum>(tempInt);
	cout << *(enemyEnum.GetEnemyStats(enemiesEnum)) << endl;

	WaitForKey();
}
void ShowOptions()
{
	cout << "What Question do you like to see?" << endl;
	cout << "0 = Exit" << endl;
	cout << "1 = Q1" << endl;
	cout << "2 = Q2" << endl;
	cout << "3 = Enemy Enum" << endl;
}
int main()
{
	int questionNum = 0;
	ShowOptions();
	cin >> questionNum;


	while (questionNum != 0)
	{
		if (questionNum == 0)
		{
		}
		else if (questionNum == 1)
		{
			callQ1();
		}
		else if (questionNum == 2)
		{
			callQ2();
		}
		else if (questionNum == 3)
		{
			GetEnemyEnum();
		}
		system("CLS");
		ShowOptions();
		cin >> questionNum;
	}
}
