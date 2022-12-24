#include <iostream>
#include <string>
#include<vector>
#include<stack>
#include<map>

using namespace std;

//Real interview question(try not googling the answer)
//* Hint* : think which container best suites this problem
//
//
//Given an expression string exp, write a program to examine whether the pairsand the orders of �{ �, � }�, �(�, �)�, �[�, �]� are correct in the given expression.
//
//Example :
//
//	Input : exp = �[()]{} { [()()] ()}�
//	Output : Balanced
//	Explanation : all the brackets are well - formed
//
//	Input : exp = �[(])�
//	Output : Not Balanced
//	Explanation : 1 and 4 brackets are not balanced because
//	there is a closing �]� before the closing �(�
//
//
//	function signature :
//
//bool is_balanced(std::string expression)
//{
//
//}
static map<char, char> bracketsMap{ {'(', ')'}, {'[', ']'}, {'{', '}'} };

bool GetKey(stack<char> &stackOfChars, char c)
{
	if (bracketsMap.find(stackOfChars.top()) == bracketsMap.end())
	{
		cout << "Value is not in map" << endl;
		return false;
	}
	if (bracketsMap[stackOfChars.top()] == c)
	{
		//the brackets match
	   //need to remove the last brakets from open brackets
		stackOfChars.pop();
		return true;
	}
	return false;
}

bool IsBalanced(string expression)
{

	vector<char> expDismembered(expression.begin(), expression.end());

	vector<char>::iterator it;

	stack<char> openBrackets;

	for (it = expDismembered.begin(); it < expDismembered.end(); ++it)
	{
		if (*it == ' ') // Ignore spaces
		{
			continue;
		}

		if (*it == '(' || *it == '[' || *it == '{')
		{
			openBrackets.push(*it);
		}
		else if (*it == ')' || *it == ']' || *it == '}')
		{
			if (openBrackets.empty()) // in case that a closing bracket is the first char
			{
				return false;
			}

			if (!GetKey(openBrackets, *it)) // Will pop Key if true
			{
				return false;
			}


		}
		else
		{
			cout << "Invalid argument in expression: invalid chars detected" << endl;
			return false;
		}
	}

	if (openBrackets.empty()) // In case there is an open bracket we didnt close
	{
		return true;
	}
	return false;
}

int main()
{
	string expression1 = "[()]{}{[()()]()}";
	string expression2 = "[()]{ {[()()]()}";
	string expression3 = "[(])";
	string expression4 = "[a])";
	bool b = true;


	cout << "The Expression " + expression1 + " is balanced : " + to_string(IsBalanced(expression1)) + "\n" << endl;
	cout << "The Expression " + expression2 + " is balanced : " + to_string(IsBalanced(expression2)) + "\n" << endl;
	cout << "The Expression " + expression3 + " is balanced : " + to_string(IsBalanced(expression3)) + "\n" << endl;
	cout << "The Expression " + expression4 + " is balanced : " + to_string(IsBalanced(expression4)) + "\n" << endl;

	return 0;
}

