#include <iostream>
#include <vector>

int main ()
{
	std::vector<int> wayPoints;
	for (int i = 0; i < 10; i++)
	{
		wayPoints.push_back(i);
	}

	std::cout << "Waypoints size: " << wayPoints.size() << std::endl;


	for (int i = 0; i < wayPoints.size(); i++)
	{
		std::cout << wayPoints[i] << std::endl;
	}

	for (int i = 0; i < wayPoints.size(); i++)
	{
		std::cout << wayPoints.at(i) << std::endl;
	}

	int* pi = wayPoints.data();

	while (!wayPoints.empty())
	{
		wayPoints.pop_back();
	}

	std::cout << "Waypoints size: " << wayPoints.size() << std::endl;

	wayPoints.clear();

	/*std::cout << "wayPoints contains: \n";
	for (std::vector<int>::iterator it = wayPoints.begin() ; it != wayPoints.end(); ++it)
	{
		std::cout << ' ' << *it;
		std::cout << '\n';
	}*/

	auto attributes = std::vector<float>(10, 0.5f);

	for (float f : attributes)
	{
		f *= 2;
		std::cout << f << std::endl;
	}
	

  return 0;
}

