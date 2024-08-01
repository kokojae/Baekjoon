#include <iostream>

int Q2869()
{
	int a, b, c, d = 1;
	std::cin >> a >> b >> c;
	c -= a;
	d += c / (a - b) + ((c % (a - b)) == 0 ? 0 : 1);
	std::cout << d;

	return 0;
}
