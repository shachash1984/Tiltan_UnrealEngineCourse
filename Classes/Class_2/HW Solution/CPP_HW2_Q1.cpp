#include <iostream>

using namespace std;

// I did this HW with Ron Bandel

bool isPalindrome(int x)
{
	if (x < 0)
	{
		return false;
	}

	int numberToModify = x;
	int lastDigit = 0;
	int reversedNumber = 0;

	while (numberToModify != 0)
	{
		lastDigit = numberToModify % 10;
		reversedNumber = (reversedNumber * 10) + lastDigit;
		numberToModify = numberToModify / 10;
	}

	if (reversedNumber == x)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{

	cout << isPalindrome(121) << "\n";
	cout << isPalindrome(-121) << "\n";
	cout << isPalindrome(10) << "\n";
	cout << isPalindrome(1234321) << "\n";

}