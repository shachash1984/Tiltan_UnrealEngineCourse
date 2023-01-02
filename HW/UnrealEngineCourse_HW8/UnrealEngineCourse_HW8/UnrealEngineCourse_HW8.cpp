#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_balanced(const string exp)
{
	stack<char> stack;

	for (const char ch : exp)
	{
		if (ch == '(' || ch == '{' || ch == '[')
			stack.push(ch);
		else if (ch == ')' || ch == '}' || ch == ']')
		{
			if (stack.empty()) 
				return false;

			if (ch == ')' && stack.top() != '(')
				return false;

			if (ch == '}' && stack.top() != '{')
				return false;

			if (ch == ']' && stack.top() != '[')
				return false;

			stack.pop();
		}
	}

	return stack.empty();
}


int main()
{
	string exp = "{[()]()}";
	cout << is_balanced(exp) << endl;  // True

	exp = "{[(])}";
	cout << is_balanced(exp) << endl;  // False

	exp = "{{[[[]((){})]]}}";
	cout << is_balanced(exp) << endl;  // True
}