#include "Question1.h"
#include <algorithm>

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

//void Question1::PrintSumPairs2(std::vector<int> vec, int num)
//{
//	float n = vec.capacity();
//	float count = n * (n + 1) / 2;
//
//	int i = 0;
//	int j = 0;
//	for (size_t x = 0; x < count; x++)
//	{
//		if (i != j)
//		{
//			if (vec[j] + vec[i] == num)
//			{
//				std::cout << vec[i] << "+" << vec[j] << "=" << num << "\n";
//			}
//		}
//
//		j++;
//		if (j == n) 
//		{
//			i++;
//			j = i;			
//		}
//	}
//}
//n*(n+1)/2

void Question1::PrintSumPairs2(std::vector<int> vec, int num) // fix after critics
{
	std::sort(vec.begin(), vec.end());				// sorting smallest to biggest

	int left = 0, right = vec.size() - 1;			// left is smallest, right is biggest

	while (left < right)							// left must always be smaller
	{
		if (vec[left] + vec[right] == num)			// if they equal then right them down
		{
			std::cout << vec[left] << "+" << vec[right] << "=" << num << "\n";
			left++;									// if the sum of the numbers is equal to the wanted number, both numbers wont be usefull again
			right--;
		}

		else if (vec[left] + vec[right] < num)		// if the sum is too small then we should make the smaller number bigger
			left++;

		else										// if the sum is too big then we should make the bigger number smaller
			right--;
	}
}
