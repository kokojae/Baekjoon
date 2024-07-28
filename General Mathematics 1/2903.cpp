#include <iostream>
#include <math.h>

int Q2903()
{
	int a, b = 0;
	std::cin >> a;
	b += 4;
	b += (pow(2, a) - 1) * 4;
	b += (pow(2, a) - 1) * (pow(2, a) - 1);
	std::cout << b;

	return 0;
}
