#include <iostream>
#include <vector>

#include "Farmer.h"
#include "Blacksmith.h"

int main()
{

	std::vector<NPC*> npcs;


	Farmer farmer_bob("Bob Stack");
	std::cout << "\n" << std::endl;

	Blacksmith blacksmith_joe("Joe Stack");
	std::cout << "\n" << std::endl;

	npcs.push_back(&farmer_bob);
	npcs.push_back(&blacksmith_joe);

	Farmer* farmerPtr = new Farmer("Bob Heap");
	std::cout << "\n" << std::endl;

	Blacksmith* blacksmithPtr = new Blacksmith("Joe Heap");
	std::cout << "\n" << std::endl;

	npcs.push_back(farmerPtr);
	npcs.push_back(blacksmithPtr);

	std::cout << "\n\n\n" << std::endl;

	for (NPC* npc : npcs)
	{
		npc->Interact();
	}
	std::cout << "\n\n\n" << std::endl;

	Farmer farmer_bob_copy(farmer_bob);
	farmer_bob_copy.Interact();
	std::cout << "\n" << std::endl;

	Blacksmith blacksmith_joe_copy(blacksmith_joe);
	blacksmith_joe_copy.Interact();

	std::cout << "\n\n\n" << std::endl;
	
	Farmer farmer_bob2 = farmer_bob;
	farmer_bob2.Interact();
	std::cout << "\n" << std::endl;

	Blacksmith blacksmith_joe2 = blacksmith_joe;
	blacksmith_joe2.Interact();

	std::cout << "\n\n\n" << std::endl;

	//Farmer farmer_bob3("Bobby3");
	Farmer farmer_bob3;
	farmer_bob3 = farmer_bob;
	farmer_bob3.Interact();
	std::cout << "\n" << std::endl;

	//Blacksmith blacksmith_joe3("Joey3");
	Blacksmith blacksmith_joe3;
	blacksmith_joe3 = blacksmith_joe;
	blacksmith_joe3.Interact();

	std::cout << "\n\n\n" << std::endl;

	Farmer* pFarmer = farmerPtr;
	pFarmer->Interact();
	std::cout << "\n" << std::endl;

	Blacksmith* pBlacksmith = blacksmithPtr;
	pBlacksmith->Interact();

	delete farmerPtr;
	farmerPtr = nullptr;
	pFarmer = nullptr;

	delete blacksmithPtr;
	blacksmithPtr = nullptr;
	pBlacksmith = nullptr;

	std::getchar();
	return 0;
	//Wait! is something leaking?
}














//What about delete?.....