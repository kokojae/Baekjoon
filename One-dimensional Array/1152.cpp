#include <iostream>
#include <sstream>

int Q1152()
{
	std::string str, sub;
	std::getline(std::cin, str);
	std::istringstream iss(str);
	int n = 0;
	while (std::getline(iss, sub, ' '))
	{
		if (sub.empty()) continue;
		n++;
	}
	std::cout << n;

	return 0;
}
