#include<iostream>
#include<string>
#include <vector>
#include <stack>
#include <map>
using namespace std;

static map<char, char> bracketsMap{ {'(',')'},{ '[',']'},{'{','}'} };
bool GetKey(stack<char> &stackOfChars,char c)
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
	vector<char> charVector(expression.begin(), expression.end());
	vector<char>::iterator charIterator;
	stack<char> openBrackets;

	//vector<char> closingBrackets;
	for (charIterator = charVector.begin(); charIterator < charVector.end(); ++charIterator)
	{
		if (*charIterator == ' ')
		{
		continue;
		}//igone any spacing

		if (*charIterator == '(' || *charIterator == '{' || *charIterator == '[')
			//we have open brackets
		{
			//add the brackets to our vecotr
			openBrackets.push(*charIterator);
		}
		else if (*charIterator == ')' || *charIterator == '}' || *charIterator == ']')
		{
			if (openBrackets.empty())
			{
				//there are no open brackets at the moment
				return false;
			}
			if (!GetKey(openBrackets, *charIterator))//will pop key if true
			{
				//if we could not find the key
				return false;
			}
		}
		else
		{
			cout << "Invalid argument" << endl;
			return false;
		}
	}
	if (openBrackets.empty())
	{
		return true;//in case there are open brackets in stack
	}

	return false;
}
int main()
{
	string exp1("[()]{} { [()()] ()}");
	string exp2("[()]{  { [()()] ()}");

	cout << "Expression 1 is balanced: " + to_string(IsBalanced(exp1)) << endl;
	cout << "Expression 2 is balanced: " + to_string(IsBalanced(exp2)) << endl;
	return 0;
}