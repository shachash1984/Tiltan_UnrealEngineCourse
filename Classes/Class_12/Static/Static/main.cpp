#include <iostream>
#include <map>
#include <vector>

#include "GameManager.h"
#include "static_vars.h"

int main()
{
	
	//static var in function
	for (int i = 0; i < 10; i++)
	{
		CountCalls();
	}

	//static var in class
	GameManager* gm = GameManager::getInstance();
	gm->Print();


	delete gm;

	getchar();
	return 0;
}