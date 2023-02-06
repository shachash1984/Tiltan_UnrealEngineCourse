#include <stack>
#include <string> // - 5 didn't include string
#include <unordered_map>

bool is_balanced(std::string expression) {
    std::stack<char> stk;
    std::unordered_map<char, char> brackets = { {'}', '{'}, {']', '['}, {')', '('} };

    for (char c : expression) {
        if (c == '{' || c == '[' || c == '(') {
            stk.push(c);
        }
        else if (c == '}' || c == ']' || c == ')') {
            if (stk.empty() || stk.top() != brackets[c]) {
                return false;
            }
            else {
                stk.pop();
            }
        }
    }

    return stk.empty();
}

