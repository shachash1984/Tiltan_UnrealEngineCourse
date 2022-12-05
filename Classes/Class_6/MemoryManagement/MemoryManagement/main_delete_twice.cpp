#include "Model3D.h"
#include <iostream>
 
 
int main()
{
	
	{
		Model3D localModel("localModel");
		std::string localString = localModel.GetName();
	}

	Model3D* pModel = new Model3D("HeapModel");
	std::string heapString = pModel->GetName();


	delete pModel;
	//pModel = nullptr;
	float f0 = 5.0f;
	float f1 = 0.1f;
	float f2 = f0 + f1;
	delete pModel;
	


	return 0;


}