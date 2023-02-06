#include <iostream>
#include <array>
#include <stack>
#include <cstring>
#include "Balance.h"

using namespace std;

Balance::Balance()
{
}

bool Balance::is_balanced(std::string expression)
{
    std::stack<char> temp;
    for (int i = 0; i < expression.length(); i++) 
    {
        if (temp.empty()) 
        {
            temp.push(expression[i]);
        }
        else if ((temp.top() == '(' && expression[i] == ')') || (temp.top() == '{' && expression[i] == '}') || (temp.top() == '[' && expression[i] == ']')) 
        {
            temp.pop();
        }
        else 
        {
            temp.push(expression[i]);
        }
    }
    if (temp.empty()) 
    {

        return true;
    }
    return false;
}
