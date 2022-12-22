#include <string>
#include <stack>
#include <iostream>

bool is_balanced(std::string expression)
{
    std::stack<char> braces;

    for (char c : expression)
    {
        if (c == '{' || c == '(' || c == '[')
        {
            braces.push(c);
        }
        else if (c == '}' || c == ')' || c == ']')
        {
            if (braces.empty())
            {
                return false;
            }

            char opening_brace = braces.top();
            if ((c == '}' && opening_brace == '{') ||
                (c == ')' && opening_brace == '(') ||
                (c == ']' && opening_brace == '['))
            {
                braces.pop();
            }
            else
            {
                return false;
            }
        }
    }

    return braces.empty();
}

int main()
{
    std::string expression;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, expression);

    if (is_balanced(expression))
    {
        std::cout << "Balanced" << std::endl;
    }
    else
    {
        std::cout << "Not balanced" << std::endl;
    }

    return 0;
}