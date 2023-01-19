#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

void PrintSumPairs(std::vector<int> vec, int num)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == num)
                std::cout << "(" << vec[i] << ", " << vec[j] << ")" << std::endl;
        }
    }
}

void PrintSumPairs2(std::vector<int> vec, int num)
{
    std::unordered_map<int, int> nums;
    for (int i = 0; i < vec.size(); i++)
    {
        int complement = num - vec[i];
        if (nums.find(complement) != nums.end())
            std::cout << "(" << complement << ", " << vec[i] << ")" << std::endl;
        else
            nums[vec[i]] = i;
    }
}


int main()
{
	std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	PrintSumPairs(vec, 10);

	std::cout << std::endl;

	PrintSumPairs2(vec, 10);
}