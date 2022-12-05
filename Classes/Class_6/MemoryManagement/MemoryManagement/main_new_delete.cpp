#include <iostream>
 
struct Effect
{
	unsigned int Length{0};
	std::string Name{ "Default" };
};
 
int main()
{
	Effect* p1 = new Effect; // same as Effect* p1 = new Effect(); // same as Effect* p1 = new Effect{};
    delete p1;
    Effect* p2 = new Effect[10]; //
    delete[] p2;


	
	return 0;


}