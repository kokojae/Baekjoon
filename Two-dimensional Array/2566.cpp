#include <iostream>

int Q2566()
{
	int a, b = -1, c, d;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cin >> a;
			if (a > b)
			{
				b = a;
				c = i + 1;
				d = j + 1;
			}
		}
	}
	std::cout << b << '\n' << c << ' ' << d;

	return 0;
}
