#include <iostream>

int Q11653()
{
	int a, b = 2;
	std::cin >> a;
	while (true)
	{
		if (a == 1) break;
		if (a % b == 0)
		{
			std::cout << b << '\n';
			a /= b;
		}
		else
		{
			b++;
		}
	}

	return 0;
}
