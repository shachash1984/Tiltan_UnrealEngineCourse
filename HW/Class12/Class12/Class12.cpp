// Class12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

void PrintSumPairs(std::vector<int> vec, int num)
{
	for (size_t i = 0; i < vec.size() - 1; i++)
	{
		for (size_t y = i + 1 ; y < vec.size(); y++)
		{
			if (vec[i] + vec[y] == num)
			{
				std::cout << "\n" << std::to_string(vec[i]) << ", " << std::to_string(vec[y]);
			}
		}
	}
}

void PrintSumPairsOn(std::vector<int> vec, int num)
{
	
}


int main()
{
	std::vector<int> vec;
	int vecS;
	int sum;

	std::cout << "Enter wanted sum: ";
	std::cin >> sum;

	std::cout << "\nEnter vector size: ";
    std::cin >> vecS;

	int tempNum;
	for (size_t i = 0; i < vecS; i++)
	{
		std::cout << "\nEnter an int to the vector: ";
		std::cin >> tempNum;

		vec.push_back(tempNum);
	}

	PrintSumPairs(vec, sum);

}

