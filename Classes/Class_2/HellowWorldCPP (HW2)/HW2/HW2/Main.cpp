#include <iostream>
#include <string> 
#include <cctype>

using namespace std;

int userInput = 0;
int userInputQ1 = 0;
string userInputQ2 = "";

bool isPalindrome(int x)
{
	string num = to_string(x);

	for (int i = 0; i < num.length() / 2; i++)
	{
		if (num[i] != num[num.length() - i - 1]) {
			cout << "false, the given number is not a palindrome";
			return false;
		}
		else {
			cout << "true, the given number is a palindrome";
		}
	}

	return true;
}

int GetValue(char r)
{
	if (r == 'I')
		return 1;
	if (r == 'V')
		return 5;
	if (r == 'X')
		return 10;
	if (r == 'L')
		return 50;
	if (r == 'C')
		return 100;
	if (r == 'D')
		return 500;
	if (r == 'M')
		return 1000;

	return -1;
}

int romanToInt(string s)
{
	// Initialize result
	int value = 0;

	// Traverse given input
	for (int i = 0; i < s.length(); i++) {
		// Getting value of symbol s[i]
		int s1 = GetValue(s[i]);

		if (i + 1 < s.length()) {
			// Getting value of symbol s[i+1]
			int s2 = GetValue(s[i + 1]);

			// Comparing both values
			if (s1 >= s2) {
				// Value of current symbol
				// is greater or equal to
				// the next symbol
				value = value + s1;
			}
			else {
				// Value of current symbol is
				// less than the next symbol
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
				cout << "Number is not between -231 and 231";
				return 0;
			}
			isPalindrome(userInputQ1);
			break;
		case 2:
			cout << "Choose a roman number and find out it's value:\n";
			cin >> userInputQ2;
			if (userInputQ2.length() < 1 || userInputQ2.length() > 15) {
				cout << "number too long or too short";
				return 0;
			}
			romanToInt(userInputQ2);
			break;
		default:
			cout << "Must choose input '1' or '2'";
			break;
	}
	
	char getInput = getchar();
	return 0;
}