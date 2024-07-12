#include <iostream>

int Q9086()
{
	int a;
	std::string b;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		std::cout << b.front() << b.back() << std::endl;
	}

	return 0;
}
