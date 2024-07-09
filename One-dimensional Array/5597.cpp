#include <iostream>

int Q5597()
{
	int a[30] = { 0 }, b;
	for (int i = 0; i < 28; i++)
	{
		std::cin >> b;
		a[b - 1] = b;
	}
	for (int i = 0; i < 30; i++)
	{
		if (a[i] == 0)
			std::cout << (i + 1) << std::endl;
	}

	return 0;
}
