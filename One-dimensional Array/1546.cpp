#include <iostream>

int Q1546()
{
	float a[1000] = { 0 }, b, c = 0, d = 0;
	std::cin >> b;
	for (int i = 0; i < b; i++)
	{
		std::cin >> a[i];
		if (c < a[i])
			c = a[i];
	}
	for (int i = 0; i < b; i++)
	{
		d += a[i] / c * 100;
	}
	std::cout << (d / b);

	return 0;
}
