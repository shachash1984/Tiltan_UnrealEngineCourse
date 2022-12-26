#include <iostream>
#include "BalanceChecker.h"
using std::cout;
using std::endl;

int main() 
{
	BalanceChecker bc;

	cout << bc.ToString(bc.is_balanced("[()]{}{[()()]()}")) << endl;

	cout << bc.ToString(bc.is_balanced("[(])")) << endl;

	cout << bc.ToString(bc.is_balanced("[{{}}]()")) << endl;

	cout << bc.ToString(bc.is_balanced("[{{}}](){{(")) << endl;
}