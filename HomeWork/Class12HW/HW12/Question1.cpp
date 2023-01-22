#include <iostream>
#include <vector>
#include <unordered_set>

class Question1 { 
	//In the code, I am using an unordered_set to store the elements that I have already seen and for each element, 
	//I am calculating its complement which is num-x and checking if it already exists in the set. 
	//If it exists, it means that the current element and the complement make a pair whose sum is equal to num. 
	//I am then printing the pair. As the time complexity for unordered_set is O(1) on average, the overall time complexity of the function is O(n).

	void PrintSumPairs(std::vector<int> vec, int num)
	{
		std::unordered_set<int> seen;
		for (auto x : vec) {
			int complement = num - x;
			if (seen.count(complement) > 0) {
				std::cout << "(" << x << ", " << complement << ")" << std::endl;
			}
			seen.insert(x);
		}
	}
};