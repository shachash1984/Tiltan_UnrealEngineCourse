#include <iostream>
#include <vector>
#include "BaseFactory.h"
#include "IdleAnimation.h"
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
	cout << "Printing all pairs with the sum of: " << num << endl;
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
	vector<int> numbers{ -30,0,2,23,25,55,83 };
	PrintSumPairsOneLoop(numbers, 25);
	return 0;
}


	//Print all of the couples in vec that their sum is equal to num



//Question 1:
//Interview question :
//1. implement a function that receives a vector of integers(not sorted) and an integer num.
//The function needs to print all the possible couples of
//elements in the vector that their sum is exactly equal to num
//
//void PrintSumPairs(std::vector<int> vec, int num)
//{
//	//Print all of the couples in vec that their sum is equal to num
//}
//2. Implement the function in O(n) time complexity(no nested loops) * *one loop is allowed



//Question 2:
//Factory design pattern
//implement a class template : Factory<T>
//that implements a function :
//std::shared_ptr<T> Create();

//create 3 classes:
//IdleAnimation
//WalkingAnimation
//CrawlingAnimation
//
//all animation classes have a void Play() method which print the animation name("Idle", "Walk"...)
//
//
//In main, Create instances of these classes using the Factory template class
//Call the Play() method on each instance
//
//** Bonus : make the animation classes derive from a base animation class
//
//** Life Bonus : Read the book "Game programming patterns" by Robert Nystrom

