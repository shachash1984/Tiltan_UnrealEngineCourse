#include "Examples.h"

int main() {


	int A = 0;
	int B = 5;
	int C = -10;

	// & = Before of a variable is called "Address-Of" operator
	// int* is a pointer to an int


	int* pA = &A; // pA is a pointer to A
	int *pB = &B; // pB is a pointer to B
	int * pC = &C; // pC is a pointer to C

	int* pD = nullptr; // pD is a pointer to nothing

	// When * comes before a pointer (not in declaration) it is called the "Dereference operator"
	// and it is used to get through the pointer to its target
	*pA = -1;


	int& rA = A; // rA is a reference to A
	rA = 10;

	//int& rB = nullptr; // Error: Cannot reference a nullptr
	//int& rC = 5; // Error: Cannot reference a literal
	//int& rD = &A; // Error: Cannot reference a pointer


	// Error: Cannot reference a variable without initializing it
	//int& rE;  
	//rE = 4; 

	Enemy zombie{ "Zombie", 100 }; // Create an enemy

	Enemy* pZombie = &zombie; // Create a pointer to the enemy

	Enemy& rZombie = zombie; // Create a reference to the enemy

	unsigned int damage = rZombie.GetDamage(); // Get the damage of the enemy through the reference

	string enemyType = (*pZombie).GetType(); // Dereference the pointer to get the enemy, then call GetType() on it

	enemyType = pZombie->GetType(); // Same as above, but using the arrow operator


	//Runtime Error example
	int* badPointer = nullptr; // Uninitialized pointer
	//*badPointer = 5; // Dereferencing a nullptr is undefined behavior

	// how to check if a pointer is NOT nullptr
	if (badPointer)
	{
		*badPointer = 5; 
	}
	

	return 0;
}