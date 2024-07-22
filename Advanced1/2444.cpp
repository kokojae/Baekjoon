#include <iostream>

int Q2444()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = a - 1 - i; j > 0; j--)
			std::cout << ' ';
		for (int j = 0; j < i * 2 + 1; j++)
			std::cout << '*';
		std::cout << std::endl;
	}
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < 1 + i; j++)
			std::cout << ' ';
		for (int j = (a - i) * 2 - 3; j > 0; j--)
			std::cout << '*';
		std::cout << std::endl;
	}

	return 0;
}
