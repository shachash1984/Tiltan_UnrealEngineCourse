#pragma once
#include <iostream>
#include <vector>

void PrintSumPairs(std::vector<int> vec, int sum)
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

void PrintSumPairsFaster(std::vector<int> vec , int sum)
{
	std::vector<int> temp;
	for (int i = 0; i < vec.size(); i++)
	{
		if (std::find(temp.begin(), temp.end(), sum - vec[i]) != temp.end())
			std::cout << vec[i] << " + " << sum - vec[i] << " = " << sum << std::endl;
		temp.push_back(vec[i]);
	}
}
