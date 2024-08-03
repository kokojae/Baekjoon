#include <iostream>

int Q2501()
{
	int a, b;
	std::cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
			b--;
		if (b == 0)
		{
			std::cout << i;
			break;
		}
	}
	if (b != 0)
		std::cout << 0;

	return 0;
}
