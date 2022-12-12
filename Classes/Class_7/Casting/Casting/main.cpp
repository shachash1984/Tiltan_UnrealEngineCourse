#include <iostream>

int main()
{
	int i1 =1;
	std::cout << "i1= " << i1 << std::endl;
	int i2;
	i2 = 2;
	std::cout << "i2= " << i2 << std::endl;
	int i3(3);
	std::cout << "i3= " << i3 << std::endl;
	int i4{ 4 };
	std::cout << "i4= " << i4 << std::endl;

	double d1 = 2.2;
	double d2 = i1; // This is ok, no loss of precision
	//int i5 = d1; // This produces a warning, loss of precision
	int i5 = static_cast<int>(d1);
	std::cout << "d1= " << d1 << std::endl;
	std::cout << "d2= " << d2 << std::endl;
	std::cout << "i5= " << i5 << std::endl;

	char c1 ='a';
	char c_nullTerminator ='\0';
	//char c2 = "b"; // error = const char* cannot be converted to char. has a null terminator
	std::cout << "c1= " << c1 << std::endl;
	//std::cout << "c2= " << c2 << std::endl;

	bool flag = false;
	std::cout << "flag= " << flag << std::endl;
	flag = i1;
	std::cout << "flag= " << flag << std::endl;
	flag = d1;
	std::cout << "flag= " << flag << std::endl;


	auto a1 = 1;
	auto a2 = 2.2;
	auto a3 = 'c';
	auto a4 = "H";
	auto a5 = true;
	auto a6 = 3L;
	auto a7 = 1'000'000'000'000; //since c++14 for convenience
	auto a8 = 0xFF; // 255 hex literal
	auto a9 = 0b00111; // 7 binary literal
	auto a10 = 0.1f;
	auto a11 = 5u;

	//a1 = a2;
	a1 = static_cast<int>(a2); //expressive loss of information

	//unsigned char n1 = 128;
	//char n2 = 128;
	//std::cout << "n1= " << n1 << std::endl;
	//std::cout << "n2= " << n2 << std::endl; //overrun
	//n1 = 254;
	//n2 = 254;
	//std::cout << "n1= " << n1 << std::endl;
	//std::cout << "n2= " << n2 << std::endl;
	//n1 = 300;
	//n2 = 300;
	//std::cout << "n1= " << n1 << std::endl;
	//std::cout << "n2= " << n2 << std::endl;
}