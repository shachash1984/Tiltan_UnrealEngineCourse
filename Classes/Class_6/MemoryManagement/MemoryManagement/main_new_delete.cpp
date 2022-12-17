#include <iostream>
 
struct Effect
{
	unsigned int Length{0};
	std::string Name{ "Default" };
};
 
int main_new_delete()
{
	Effect* p1 = new Effect; // same as Effect* p1 = new Effect(); // same as Effect* p1 = new Effect{};
    delete p1;
    Effect* p2 = new Effect[10]; //
    delete[] p2;


	getchar();
	return 0;


}