#include <iostream>

int Q3052()
{
	int a[42] = { 0 }, b, c = 0;
	for (int i = 0; i < 10; i++)
	{
		std::cin >> b;
		a[b % 42] = 1;
	}
	for (int i = 0; i < 42; i++)
	{
		c += a[i];
	}
	std::cout << c;

	return 0;
}
