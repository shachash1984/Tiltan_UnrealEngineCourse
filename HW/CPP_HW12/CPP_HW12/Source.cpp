#include <iostream>
#include <vector>
#include "BaseFactory.h"
#include "IdleAnimation.h"
#include "WalkingAnimation.h"
#include "CrawlingAnimation.h"
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void PrintSumPairs(vector<int> vec, int num)
{
	cout << "Printing all pairs with the sum of: " << num << endl;
	for (size_t i = 0; i < vec.size(); i++)
	{
		for (size_t j = 0; j < vec.size(); j++)
		{
			if (i == j)
			{
				continue;
			}

			if (vec[i] + vec[j] == num)
			{
				cout << vec[i] << ", " << vec[j] << endl;
			}
		}
	}
}

void PrintSumPairsOneLoop(vector<int> vec, int num)
{
	unordered_map<int, int> map;
	cout << "Printing all pairs with the sum of " << num << "with only one loop:" << endl;
	for (size_t i = 0; i < vec.size(); i++)
	{
		int searchedNum = num - vec[i];
		if (map.find(searchedNum) != map.end())
		{
			cout << vec[i] << ", " << searchedNum << endl;
		}
		else
		{
			map[vec[i]] = vec[i];
		}
	}

}

int main()
{
	
	cout << "---- Q1 ----" << endl;
	vector<int> numbers{ -30,0,2,23,25,55,83 };
	cout << endl;
	PrintSumPairs(numbers, 25);
	cout << endl;
	PrintSumPairsOneLoop(numbers, 25);
	cout << endl;
	cout << endl;

	cout << "---- Q2 ----" << endl;
	cout << endl;
	BaseFactory factory;
	shared_ptr<IdleAnimation> idlePTR = factory.Create<IdleAnimation>();
	shared_ptr<WalkingAnimation> walkPTR = factory.Create<WalkingAnimation>();
	shared_ptr<CrawlingAnimation> crawlPTR = factory.Create<CrawlingAnimation>();

	idlePTR->Play();
	walkPTR->Play();
	crawlPTR->Play();
	return 0;
}

