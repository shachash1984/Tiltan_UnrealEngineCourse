#include "BalanceChecker.h"
#include <iostream>
#include <list>
using std::cout;
using std::endl;

BalanceChecker::BalanceChecker()
{
}

bool BalanceChecker::is_balanced(std::string expression)
{
	expressionWord = expression;
	std::list<char> explst;

	for (size_t i = 0; i < expression.size(); i++)
	{
		if (explst.empty())
		{
			explst.push_front(expression[i]);
		}
		else if (CompleteBracketsCheker(explst.front(), expression[i]))
		{
			explst.pop_front();
		}
		else 
		{
			explst.push_front(expression[i]);
		}
	}

	if (explst.empty()) 
	{
		return true;
	}
	return false;
}

std::string BalanceChecker::ToString(bool answ)
{
	std::string temp;
	if (answ)
	{
		temp = expressionWord + " Is Balanced";
	}
	else
	{
		temp = expressionWord + " Is Not Balanced";
	}
	return temp;
}

bool BalanceChecker::CompleteBracketsCheker(char first, char second)
{
	if ((first == '(' && second == ')') || (first == '{' && second == '}') || (first == '[' && second == ']'))
	{
		return true;
	}
	return false;
}
