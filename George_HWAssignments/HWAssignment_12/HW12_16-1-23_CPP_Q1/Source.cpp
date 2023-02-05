#include <iostream>
#include <vector>
#include "SumPairs.h"
using std::cout;
using std::endl;

int main()
{
	std::vector<int> vec = { 5,1,4,5,6,2,10,0 };
	int num = 10;

	SumPairs sp;
	sp.PrintSumPairsLong(vec, num);
	sp.PrintSumPairs(vec, num);

	return 0;
}