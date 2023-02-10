#include <iostream>
#include <vector>

using namespace std;

int main()
{

	return 0;
}

void PrintSumPairs(std::vector<int> vec, int num)
{
	for (int i = 0; i < vec.size(); i++)
	{
		
	}
	//Print all of the couples in vec that their sum is equal to num
}

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

