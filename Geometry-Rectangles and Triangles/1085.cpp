#include <iostream>

int Q1085()
{
	int a, b, c, d, e = 1000;
	std::cin >> a >> b >> c >> d;
	if (a < e) e = a;
	if (b < e) e = b;
	if ((c - a) < e) e = c - a;
	if ((d - b) < e)  e = d - b;
	std::cout << e;

	return 0;
}
