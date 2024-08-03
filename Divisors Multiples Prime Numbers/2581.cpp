#include <iostream>

int Q2581()
{
	int a, b, c = 0, d = 10000;
	std::cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i == 1) continue;
		bool e = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				e = false;
				break;
			}
		}
		if (e)
		{
			c += i;
			if (d > i)
				d = i;
		}
	}
	if (c == 0)
		std::cout << -1;
	else
		std::cout << c << '\n' << d;

	return 0;
}
