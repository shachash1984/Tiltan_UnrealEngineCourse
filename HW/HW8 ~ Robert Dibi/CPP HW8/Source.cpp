#include <iostream>
#include "Balance.h"

using namespace std;

int main() 
{
	cout << "Type barackets \n";
	string str;
	cin >> str;
	Balance blnc;
	if (blnc.is_balanced(str))
	{
		cout << "The string is Balanced" << endl;
	}
	else
	{
		cout << "The string is NOT Balanced" << endl;
	}
}