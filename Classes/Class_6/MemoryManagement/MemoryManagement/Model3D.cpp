#include "Model3D.h"

#include <iostream>
using std::cout;
using std::endl;

Model3D::Model3D()
	: Name("Default")
{
}

Model3D::Model3D(std::string name)
	:Name(name)
{
	cout << "Constructing " << Name << endl;
}

Model3D::~Model3D()
{
	cout << "Destructing " << Name << endl;
}
