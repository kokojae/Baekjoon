#include <iostream>

int Q2292()
{
	int a, b = 0, c = 1;
	std::cin >> a;
	while (a > (b * 6) + c)
		c += b++ * 6;
	std::cout << b + 1;

	return 0;
}
