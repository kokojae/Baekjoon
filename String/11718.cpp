#include <iostream>
#include <string>

int Q11718()
{
	std::string a[100];
	for (int i = 0; i < 100; i++)
	{
		std::getline(std::cin, a[i]);
		if (a[i].empty()) break;
	}
	for (int i = 0; i < 100; i++)
	{
		if (a[i].empty()) break;
		std::cout << a[i] << std::endl;
	}

	return 0;
}
