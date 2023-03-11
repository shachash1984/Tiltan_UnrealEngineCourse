#pragma once
#include <iostream>
#include <vector>

void PrintSumPairs(std::vector<int> vec, int sum) // -50 - did not implement the o(n) solution
{
	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = i + 1; j < vec.size(); j++)
		{
			if (vec[i] + vec[j] == sum)
				std::cout << vec[i] << " + " << vec[j] << " = " << sum << std::endl;
		}
	}
}
