#include <iostream>

using namespace std;


// Palindrome Checker
bool isPalindrome(int numToCheck)
{
	int tempX = numToCheck;
	int reversedNum = 0;
	int remainderNum;

	// Reversing Number (Learned How From: "https://www.programiz.com/cpp-programming/examples/reverse-number") // Nice!
	while (tempX != 0)
	{
		remainderNum = tempX % 10;
		reversedNum = reversedNum * 10 + remainderNum;
		tempX /= 10;
	}

	// Checking Palindrome
	if (numToCheck < 0) // If Number Was Negative
	{
		cout << "The Number Reveresd Is: " << reversedNum*-1 << "-\n";
		return false;
	}
	else
	{
		cout << "The Number Reveresd Is: " << reversedNum << "\n";
		if (numToCheck == reversedNum)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}


// Main Method
int main()
{
	int x;
	bool isRunning = true;

	while (isRunning)
	{
		// Asking For Input
		cout << "What Number Do You Want To Check If Palindrome?\n";
		cout << "Number Should Be Between(Including) -231 and 231!\n";
		cout << "x: ";
		cin >> x;

		// Constraints
		while (!(x >= -231 && x <= 231))
		{
			system("CLS");
			cout << "Number Should Be Between(Including) -231 and 231!\n";
			cout << "What Number Do You Want To Check If Palindrome?\n";
			cout << "x: ";
			cin >> x;
		}

		// Checking For Palindrome
		if (isPalindrome(x))
		{
			cout << "True! Your Number Is A Palindrome!\n";
		}
		else
		{
			cout << "False.. Your Number Is NOT A Palindrome!\n";
		}

		// Quit or Retry
		string answ;
		cout << "\nTry Another Number?(y/n): ";
		cin >> answ;
		if (answ == "N" || answ == "n")
		{
			isRunning = false;
			system("CLS");
			cout << "Thank You For Testing My Homework!\n";
		}
		else
		{
			system("CLS");
		}
	}
}

