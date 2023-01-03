// HW_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <string>

bool is_balanced(const std::string expression) {
    std::stack<char> stack;
    for (const char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.empty()) {
                return false;
            }
            if (ch == ')' && stack.top() != '(') {
                return false;
            }
            if (ch == '}' && stack.top() != '{') {
                return false;
            }
            if (ch == ']' && stack.top() != '[') {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}

int main() {
    std::string exp = "{[()]}";
    std::cout << is_balanced(exp) << std::endl;  // True

    exp = "{[(])}";
    std::cout << is_balanced(exp) << std::endl;  // False

    exp = "{{[[(())]]}}";
    std::cout << is_balanced(exp) << std::endl;  // True

    exp = "{}() ()[] {()}";
    std::cout << is_balanced(exp) << std::endl;  // True

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
