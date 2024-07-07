#include <iostream>

int Q10818()
{
	int a, b, c = -1000000, d = 1000000;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		if (b > c) c = b;
		if (b < d) d = b;
	}
	std::cout << d << ' ' << c;

	return 0;
}
