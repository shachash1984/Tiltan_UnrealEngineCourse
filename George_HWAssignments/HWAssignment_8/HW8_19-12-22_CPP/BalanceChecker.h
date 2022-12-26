#pragma once
#include <string>

class BalanceChecker 
{
public:
	BalanceChecker();

	bool is_balanced(std::string expression);

	std::string ToString(bool answ);

private:
	std::string expressionWord;

	bool CompleteBracketsCheker(char first, char second);
};
