#include <iostream>

#include "QuestBase.h"
#include "QuestCollection.h"

int main()
{
	// Creating a local QuestBase object
	//QuestBase findEdwardQuest(1, "Finding Edward", "Find Edward and bring him back to the village");
	//std::cout << "\n\n";
	//{
	//	// Creating a local QuestCollection object
	//	QuestCollection rainQuest(2, "Rain Drops", "Collect 10 rain drops", 10);
	//	std::cout << "\n";
	//}

	//std::cout << "\n\n";





	QuestBase* gemsQuest = new QuestCollection(3, "Hidden Gems", "Collect 3 magical gems", 3);
	//QuestCollection* pQuestCollection2 = new QuestCollection(3, "Hidden Gems", "Collect 3 magical gems", 3);

	//gemsQuest->AddItemsCollected(5);

	gemsQuest->Update();

 	gemsQuest->Print();

	//QuestCollection* pQuestCollection2 = gemsQuest;
	//QuestCollection* pQuestCollection2 = dynamic_cast<QuestCollection*>(gemsQuest);


	/*pQuestCollection2->AddItemsCollected(3);
	pQuestCollection2->Update();
	pQuestCollection2->Print()*/;
	std::cout << "\n\n";
	

	delete gemsQuest;
	//delete pQuestCollection2;

	getchar();
	return 0;
}
