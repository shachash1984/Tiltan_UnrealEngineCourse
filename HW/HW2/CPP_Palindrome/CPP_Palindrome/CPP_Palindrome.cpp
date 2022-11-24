// CPP_Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <iostream>

bool isPalindrome(int x)
{
	int y = 0;
	int z = x;
	while (x > 0)
	{
		y = y * 10 + x % 10;
		x = x / 10;
	}
	if (y == z)
	{
		cout << "\nThe number is a palindrome\n";
		return true;
	}
	else
	{
		cout << "\nThe number isn't a palindrome\n";
		return false;
	}
}

int main()
{
	int x;
	
	while (true)
	{
		cout << "Please input a number between -231 and 230 to check if it is a palindrome: ";
		cin >> x;
		if (x >= -231 && x <= 230)
		{
			isPalindrome(x);
			break;
		}
		else
		{
			cout << "\nThe number is not between -231 and 230. Please try again.\n\n";
		}
	}
}