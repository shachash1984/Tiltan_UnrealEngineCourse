#include <queue>
#include <iostream>

// full documentation: https://en.cppreference.com/w/cpp/container/queue
int main() {
	std::queue<int> myQueue;

	// Push elements onto the queue
	myQueue.push(5);
	myQueue.push(2);
	myQueue.push(1);
	myQueue.push(3);
	myQueue.push(4);

	// Check if the queue is empty
	if (myQueue.empty())
	{
		std::cout << "Queue is empty" << std::endl;
	}
	else 
	{
		std::cout << "Queue is not empty" << std::endl;
	}

	// Get the size of the queue
	std::cout << "Size of queue: " << myQueue.size() << std::endl;

	// Access the front element of the queue
	std::cout << "Front element of queue: " << myQueue.front() << std::endl;

	// Pop an element from the queue
	myQueue.pop();

	// Iterate through the queue (note: a queue is a FIFO data structure, so the elements will be printed in the same order they were added)
	while (!myQueue.empty())
	{
		std::cout << myQueue.front() << " ";
		myQueue.pop();
	}
	std::cout << std::endl;

	getchar();
	return 0;
}
