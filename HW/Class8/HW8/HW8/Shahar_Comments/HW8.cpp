// Class8HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>


int main() //-15 o(n^2) time complexity - if you used a stack, you could solve it with o(n) because for each element you encounter you simply check the stack for its
// counter part and if it is there, you pop it off the stack. If it is not there, you push it on the stack. If the stack is empty at the end, you have a valid string.
{
	std::cout << "Hello! Please enter a string containing pairs of brackets:\n";

	std::string input;
	std::cin >> input;
	bool crash;
	int size = input.size();
	for (size_t i = 0; i <= size / 2; i++)
	{
		for (size_t e = 0; e <= input.size(); e++)
		{
			switch (input[e])
			{
			case '{':
				if (input[e+1] == '}')
				{
					input.erase(e, 2);
				}
				break;

			case '[':
				if (input[e + 1] == ']')
				{
					input.erase(e, 2);
				}
				break;

			case '(':
				if (input[e + 1] == ')')
				{
					input.erase(e, 2);
				}
				break;

			default:
				break;
			}
		}
	}

	if (input.empty())
	{
		std::cout << "Balanced";
	}
	else
	{
		std::cout << "Not Balanced";
	}
}
