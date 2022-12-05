#include "Model3D.h"
#include <iostream>

void CreateLocalModel()
{
	Model3D localModel("localModel");
	std::string localString = localModel.GetName();
}

int main()
{
	CreateLocalModel();

	return 0;


}