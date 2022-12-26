#include <algorithm>
#include <array>
#include <cstdio>
#include <iostream>


//full documentation https://en.cppreference.com/w/cpp/container/array
int main_array()
{
	//Array example
	std::array<int, 5> arr = { 5, 2, 1, 4, 3 };

	std::cout << "Before sort: "<< std::endl;

	for (const int i : arr)
	{
		std::cout << i << " ";
	}

	std::cout << "\n\n";

	// Sort the array
	std::sort(arr.begin(), arr.end());

	std::cout << "After sort: " << std::endl;

	for (unsigned int j = 0; j < arr.size(); j++)  
	{
		std::cout << arr[j] << " ";
	}

	std::cout << "\n\n";

	// Another example of sort
	std::sort(begin(arr), end(arr)); //This also works

	std::array<std::string, 10> arr2;

	// Fill the array with the value passed
	arr2.fill("Hello");

	// Decalring an iterator for the array
	std::array<std::string, 10>::iterator it = arr2.begin(); //iterator example, better to use auto in this case...

	int count = 0;

	while (it != arr2.end())
	{
		std::cout << *it << " " << count << std::endl;

		++it;

		count++;
	}


	getchar();
	return 0;
}
