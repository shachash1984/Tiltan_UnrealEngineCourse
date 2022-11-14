#include <iostream>
using std::cout;
using std::endl;
using std::string;

int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

bool IsEven(int a)
{
	return a % 2 == 0;
}


int main() {

	int const answer = Add(1, 2);

	cout << "1 + 2 = " << answer << endl;

	cout << "1.5 + 2.5 = " << Add(1.5, 2.5) << endl;

	string const s1 = IsEven(2) ? "yes" : "no";

	cout << "Is 2 even? " << s1 << endl;


	/*unrelated but useful*/
	int const i = getchar(); //get a character from the console

	printf("This is a form of printing in C: i = %d", i);

	return 0;
}