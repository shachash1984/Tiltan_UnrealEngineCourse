#include <iostream>
#include <stack>
using namespace std;

bool is_balanced(string expression)
{
    stack<char> temp;
    for (int i = 0; i < expression.length(); i++) {
        if (temp.empty()) {

            temp.push(expression[i]);
        }
        else if ((temp.top() == '(' && expression[i] == ')')
            || (temp.top() == '{' && expression[i] == '}')
            || (temp.top() == '[' && expression[i] == ']')) {

            temp.pop();
        }
        else {
            temp.push(expression[i]);
        }
    }
    if (temp.empty()) {

        return true;
    }
    return false;
}

int main()
{
    string expbalance = "{()}[]";
    string expnotbalance = "{)(}[]";

    if (is_balanced(expbalance))
        cout << "Balanced \n \n";
    else
        cout << "Not Balanced";

    if (is_balanced(expnotbalance))
        cout << "Balanced \n \n";
    else
        cout << "Not Balanced  \n \n";
    return 0;
}
