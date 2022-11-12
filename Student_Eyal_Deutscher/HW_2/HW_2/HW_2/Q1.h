#pragma once
#include <iostream>
class Q1
{

public: bool IsPalindrom(int x)
{
	int number = x;
	int reverseNumber = 0;
	while (number > 0)
	{
		int digit = number % 10;
		number /= 10;
		reverseNumber = (reverseNumber * 10) + digit;

		//std::cout << "number is: " << number << std::endl;
	}
	if (reverseNumber == x)
	{
		return true;
	}
	else return false;
}
};


