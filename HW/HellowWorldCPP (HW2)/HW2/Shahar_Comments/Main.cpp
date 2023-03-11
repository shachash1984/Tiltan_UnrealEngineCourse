#include <iostream>
#include <string> 
#include <cctype>

using namespace std;

enum enemyType {
	Ghost = 0, Ghoul = 1, Zombie = 2, Creeper = 3
};

int userInput = 0;
int userInputQ1 = 0;
string userInputQ2 = "";

bool isPalindrome(int x)
{
	// store int in string
	string num = to_string(x);

	// loop through half of the num
	for (int i = 0; i < num.length() / 2; i++)
	{
		// compare between the current number and the mirrored number
		if (num[i] != num[num.length() - 1 - i]) {
			cout << "false, the given number is not a palindrome";
			return false;
		}
		else {
			cout << "true, the given number is a palindrome";
		}
	}

	return true;
}
int GetRomanLetterValue(char letter)
{
	switch (tolower(letter)) // Nice use of tolower()! +2 pts (bonus)
	{
		case 'i':
			return 1;
			break;
		case 'v':
			return 5;
			break;
		case 'x':
			return 10;
			break;
		case 'l':
			return 50;
			break;
		case 'c':
			return 100;
			break;
		case 'd':
			return 500;
			break;
		case 'm':
			return 1000;
			break;
		
		default:
			cout << "Some letters are not a roman number\n"; //I think you forgot to add a return statement here or at the end of the function -5 pts
			break;
	}
}
int romanToInt(string s)
{
	int value = 0;

	// loop through string
	for (int i = 0; i < s.length(); i++) {
		int s1 = GetRomanLetterValue(s[i]);

		// check if not last letter
		if (i + 1 < s.length()) {
			int s2 = GetRomanLetterValue(s[i + 1]);

			// check if previous letter is bigger
			if (s1 >= s2) {
				value = value + s1;
			}
			else {
				value = value + s2 - s1;
				i++;
			}
		}
		else {
			value = value + s1;
		}
	}

	cout << value;
	return value;
}
int* SetEnemyStats(enemyType enemy) {
	int stats[4] = { 0, 0, 0, 0 };

	switch (enemy)
	{
		case Ghost:
			for (int stat : stats) {
				stat = 1;
				cout << stat << ", ";
			}
			return stats;
		case Ghoul:
			for (int stat : stats) {
				stat = 2;
				cout << stat << ", ";
			}
			return stats;
		case Zombie:
			for (int stat : stats) {
				stat = 3;
				cout << stat << ", ";
			}
			return stats;
		case Creeper:
			for (int stat : stats) {
				stat = 4;
				cout << stat << ", ";
			}
			return stats;
		default:
			for (int stat : stats)
				stat = 0;
			return stats;
	}

	
}
int main() // -10 not in separated files
{
	cout << "Please choose task [1/2/3]:\n";
	cin >> userInput;
	switch (userInput)
	{
		case 1:
			cout << "Choose a number between -231 and 231 and find out if it's a palindrome:\n";
			cin >> userInputQ1;
			if (userInputQ1 < -231 || userInputQ1 > 231) {
				cout << "Number is not between -231 and 231\n";
				return 0;
			}
			isPalindrome(userInputQ1);
			break;
		case 2:
			cout << "Choose a roman number and find out it's value:\n";
			cin >> userInputQ2;
			if (userInputQ2.length() < 1 || userInputQ2.length() > 15) {
				cout << "number too long or too short\n";
				return 0;
			}
			romanToInt(userInputQ2);
			break;
		case 3:
			cout << "Choose enemy [0 = Ghost, 1 = Ghoul, 2 =  Zombie, 3 = Creeper]:\n";
			int userInputQ3;
			cin >> userInputQ3;
			enemyType enemy;
			enemy = static_cast<enemyType>(userInputQ3);
			SetEnemyStats(enemy);
			break;
		default:
			cout << "Input must be between 0 and 3 \n";
			break;
	}
	
	char getInput = getchar();
	return 0;
}