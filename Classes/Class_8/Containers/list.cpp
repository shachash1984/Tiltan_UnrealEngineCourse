#include <iostream>
#include <list>


// full documentation: https://en.cppreference.com/w/cpp/container/list
int main_list() {
	  // Create a list of integers
	  std::list<int> lst = {3, 1, 4, 1, 5, 9};

	  // Print the first and last elements
	  std::cout << "First element: " << lst.front() << std::endl;
	  std::cout << "Last element: " << lst.back() << std::endl;

	  // Check if the list is empty and print its size
	  if (lst.empty())
	  {
	  	   std::cout << "The list is empty" << std::endl;
	  }
	  else 
	  {
	  	   std::cout << "The list has " << lst.size() << " elements" << std::endl;
	  }

	  // Add a new element to the front and back of the list
	  lst.push_front(0);
	  lst.push_back(10);

	  // Remove the first and last elements from the list
	  lst.pop_front();
	  lst.pop_back();

	  // Sort and reverse the list
	  lst.sort();
	  lst.reverse();

	  // Print all the elements
	  std::cout << "Elements: ";
	  for (int x : lst)
	  {
	  	  std::cout << x << " ";
	  }

	  std::cout << std::endl;

	  getchar();
	  return 0;
}
