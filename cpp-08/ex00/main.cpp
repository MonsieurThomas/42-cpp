
#include "easyfind.hpp"

int		main(void)
{

	std::vector<int> v;

	for (int i = 0; i < 5; i ++)
		v.push_back(i);

	for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try
	{
		std::cout << "trying to find 4 in the vector : " << easyfind(v, 4) << std::endl;
		std::cout << "trying to find 6 in the vector : " << easyfind(v, 6) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Could not find the 2nd argument in the container" << std::endl;
	}
	return 0;
}