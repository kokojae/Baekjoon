#include <iostream>

int Q1978()
{
	int a, b = 0, c;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> c;
		if (c == 1)
		{
			b++;
			continue;
		}
		for (int i = 2; i < c; i++)
		{
			if (c % i == 0)
			{
				b++;
				break;
			}
		}
	}
	std::cout << a - b;

	return 0;
}
