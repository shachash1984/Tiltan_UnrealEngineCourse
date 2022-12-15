#include "Model3D.h"
#include <iostream>
 
 
//int main_copy()
int main()
{
	
	{
		Model3D localModel("localModel");
		std::string localString = localModel.GetName();
	}

	Model3D* pModel = new Model3D("HeapModel");
	std::string heapString = pModel->GetName();

	Model3D* pModel2 = pModel;


	delete pModel;
	std::string s2 = pModel2->GetName();
	float f0 = 5.0f;
	float f1 = 0.1f;
	float f2 = f0 + f1;
	


	return 0;


}