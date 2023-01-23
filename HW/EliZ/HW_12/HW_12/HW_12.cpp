// HW_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_set>
#include <vector>


//1. implement a function that receives a vector of integers(not sorted) and an integer num.
//The function needs to print all the possible couples of
//elements in the vector that their sum is exactly equal to num
void PrintSumPairs(std::vector<int> vec, int num) {
	for (int i = 0; i < vec.size(); i++) {
		for (int j = i + 1; j < vec.size(); j++) {
			if (vec[i] + vec[j] == num) {
				std::cout << "(" << vec[i] << ", " << vec[j] << ")" << std::endl;
			}
		}
	}
}
void PrintSumPairsLopped(std::vector<int> vec, int num) {
	std::unordered_set<int> set;
	for (int i = 0; i < vec.size(); i++) {
		if (set.count(num - vec[i]) > 0) {
			std::cout << "(" << vec[i] << ", " << num - vec[i] << ")" << std::endl;
		}
		set.insert(vec[i]);
	}
}

//Factory design pattern
//implement a class template : Factory<T>
//that implements a function :
template <typename T>
class Factory {
public:
	std::shared_ptr<T> Create() {
		return std::make_shared<T>();
	}
};


class IdleAnimation {
public:
	void Play() {
		std::cout << "Playing Idle Animation" << std::endl;
	}
};

class WalkingAnimation {
public:
	void Play() {
		std::cout << "Playing Walking Animation" << std::endl;
	}
};

class CrawlingAnimation {
public:
	void Play() {
		std::cout << "Playing Crawling Animation" << std::endl;
	}
};
//In main, Create instances of these classes using the Factory template class
//Call the Play() method on each instance
int main()
{
	std::vector<int> vec = { 1, 3, 5, 7, 9 };
	int num = 8;
	PrintSumPairs(vec, num);

	Factory<IdleAnimation> idleFactory;
	auto idle = idleFactory.Create();
	idle->Play();

	Factory<WalkingAnimation> walkFactory;
	auto walk = walkFactory.Create();
	walk->Play();

	Factory<CrawlingAnimation> crawlFactory;
	auto crawl = crawlFactory.Create();
	crawl->Play();
}