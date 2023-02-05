#include "SumPairs.h"

void SumPairs::PrintSumPairsLong(std::vector<int> vec, int num)
{
	cout << "Printing Sum Pairs O(n^2):" << endl;

	for (size_t a = 0; a < vec.size(); a++)
	{
		for (size_t b = 0; b < vec.size(); b++)
		{
			if (a != b)
			{
				if (vec[a] + vec[b] == num)
				{
					cout << vec[a] << "+" << vec[b] << "=" << vec[a] + vec[b] << endl;
				}
			}
		}
	}

	cout << endl;
}

void SumPairs::PrintSumPairs(std::vector<int> vec, int num)
{
	cout << "Printing Sum Pairs O(n):" << endl;

	std::unordered_set<int> complement_set;

	for (int val : vec)
	{
		if (complement_set.count(num - val))
		{
			cout << val << "+" << num - val << "=" << num << endl;
		}
		complement_set.insert(val);
	}

	cout << endl;
}
