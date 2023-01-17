#include "Question1.h"

void Question1::PrintSumPairs1(std::vector<int> vec, int num)
{
	for (size_t i = 0; i < vec.capacity(); i++)
	{
		for (size_t j = i; j < vec.capacity(); j++)
		{
			if (i != j) 
			{
				if (vec[i] + vec[j] == num)
				{
					std::cout << vec[i] << "+" << vec[j] << "=" << num << "\n";
				}
			}
		}
	}
}

void Question1::PrintSumPairs2(std::vector<int> vec, int num)
{
	float n = vec.capacity();
	float count = n * (n + 1) / 2;

	int i = 0;
	int j = 0;
	for (size_t x = 0; x < count; x++)
	{
		if (i != j)
		{
			if (vec[j] + vec[i] == num)
			{
				std::cout << vec[i] << "+" << vec[j] << "=" << num << "\n";
			}
		}

		j++;
		if (j == n) 
		{
			i++;
			j = i;			
		}
	}
}

//n*(n+1)/2