#include "Model3D.h"
#include <iostream>
 
 
int main_local_dynamic()
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

	pModel = nullptr;
	delete pModel;
	//pModel = nullptr;

	if (pModel)
	{
		std::string s0 = pModel->GetName();
	}
	//std::string s0 = pModel->GetName();

	return 0;


}