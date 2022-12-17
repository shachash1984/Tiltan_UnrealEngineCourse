#include "Model3D.h"
#include <iostream>
 
 
int main_exit_early()
{
	
	{
		Model3D localModel("localModel");
		std::string localString = localModel.GetName();
	}

	Model3D* pModel = new Model3D("HeapModel");
	std::string heapString = pModel->GetName();


	float f0 = 5.0f;
	float f1 = 0.1f;
	float f2 = f0 + f1;

	if (f2 > 5.0f)
	{
		return 0;
	}

	delete pModel;
	


	return 0;


}