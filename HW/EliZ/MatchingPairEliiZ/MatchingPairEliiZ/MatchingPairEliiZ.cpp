// MatchingPairEliiZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stack>

bool isMatchingPair(char opening, char closing)
{
  if (opening == '(' && closing == ')') return true;
  else if (opening == '{' && closing == '}') return true;
  else if (opening == '[' && closing == ']') return true;
  return false;
}

bool arePairsMatching(std::string exp)
{
  std::stack<char> stack;

  for (int i = 0; i < exp.length(); i++)
  {
    if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
      stack.push(exp[i]);
    else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
    {
      if (stack.empty() || !isMatchingPair(stack.top(), exp[i]))
        return false;
      else
        stack.pop();
    }
  }

  return stack.empty();
}

int main()
{
  std::string exp;
  std::cout << "Enter an expression: ";
  std::cin >> exp;

  if (arePairsMatching(exp))
    std::cout << "The brackets in the expression are correctly matched." << std::endl;
  else
    std::cout << "The brackets in the expression are not correctly matched." << std::endl;

  return 0;
}