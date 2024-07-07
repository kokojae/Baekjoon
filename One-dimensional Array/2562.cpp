#include <iostream>

int Q2562()
{
	int a, b = 0, c;
	for (int i = 1; i <= 9; i++)
	{
		std::cin >> a;
		if (a > b)
		{
			b = a;
			c = i;
		}
	}
	std::cout << b << std::endl << c;

	return 0;
}
