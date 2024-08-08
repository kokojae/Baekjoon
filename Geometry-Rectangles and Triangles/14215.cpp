#include <iostream>

int Q14215()
{
	int a[3], b = 0, c = 0;
	for (int i = 0; i < 3; i++)
	{
		std::cin >> a[i];
		if (b < a[i]) b = a[i];
		c += a[i];
	}
	std::cout << ((c - b) > b ? c : (c - b) * 2 - 1);

	return 0;
}
