#include <stack>
#include <iostream>

// full documentation: https://en.cppreference.com/w/cpp/container/stack
int main_stack() {
	std::stack<int> myStack;

	// Push elements onto the stack
	myStack.push(5);
	myStack.push(2);
	myStack.push(1);
	myStack.push(3);
	myStack.push(4);

	// Check if the stack is empty
	if (myStack.empty()) 
	{
		std::cout << "Stack is empty" << std::endl;
	}
	else 
	{
		std::cout << "Stack is not empty" << std::endl;
	}

	// Get the size of the stack
	std::cout << "Size of stack: " << myStack.size() << std::endl;

	// Access the top element of the stack
	std::cout << "Top element of stack: " << myStack.top() << std::endl;

	// Pop an element from the stack
	myStack.pop();

	// Iterate through the stack (note: a stack is a LIFO data structure, so the elements will be printed in reverse order)
	while (!myStack.empty())
	{
		std::cout << myStack.top() << " ";
		myStack.pop();
	}
	std::cout << std::endl;

	getchar();
	return 0;
}
