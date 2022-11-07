#include <iostream>
#include <string> 
#include <cctype>

using namespace std;

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
	switch (tolower(letter))
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
			cout << "Some letters are not a roman number\n";
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

int main()
{
	cout << "Please choose task [1/2]:\n";
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
		default:
			cout << "Must choose input '1' or '2'\n";
			break;
	}
	
	char getInput = getchar();
	return 0;
}