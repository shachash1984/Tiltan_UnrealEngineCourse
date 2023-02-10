#include <iostream>
#include <vector>
#include "BaseFactory.h"
#include "Animal.h"
#include <unordered_map>
using namespace std;

void PrintSumPairs(vector<int> vec, int num)
{
	vector<int> partnersPrinted;
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
				cout << vec[i] << "," << vec[j] << endl;
			};
		}
	}

	//num = 25
	//[0,55,-30,2,83,25,23]
	//[-30,0,2,23,25,55,83]
	//Print all of the couples in vec that their sum is equal to num
	//go through each number and see if he has a couple, save their's index,

}
void PrintSumPairsOneLoop(vector<int> vec, int num)
{
	unordered_map<int, int> intMap;
	for (size_t i = 0; i < vec.size(); i++)
	{
		int tempNum = num - vec[i];
		if (intMap.find(tempNum) != intMap.end())
		{
			cout << tempNum << "," << vec[i] << endl;
		}
		else
		{
			intMap[vec[i]] = vec[i];
		}
	}
}


int main()
{

	//Animal* frog = BaseFactory<Animal>::Create("Frog");
	//shared_ptr<Animal> frog = animalFactory.Create("Frog");
	PrintSumPairsOneLoop(vector<int>{-30, 0, 2, 23, 25, 55, 83}, 25);
	return 0;
}
//CPP:
//Question 1 :
//Interview question :
//1. implement a function that receives a vector of integers(not sorted) and an integer num.
//The function needs to print all the possible couples of
//elements in the vector that their sum is exactly equal to num


//2. Implement the function in O(n) time complexity(no nested loops) * *one loop is allowed




//create 3 classes:
//IdleAnimation
//WalkingAnimation
//CrawlingAnimation

//all animation classes have a void Play() method which print the animation name("Idle", "Walk"...)


//In main, Create instances of these classes using the Factory template class
//Call the Play() method on each instance

//** Bonus : make the animation classes derive from a base animation class

//** Life Bonus : Read the book "Game programming patterns" by Robert Nystrom