#pragma once
#include <string>

class Model3D
{
	
public:
	Model3D();
	Model3D(std::string name);

	//Model3D(const Model3D& other);

	~Model3D();


	std::string GetName() const {return Name;} 


private:
	std::string Name;
};

