#include <iostream>

int Q10810()
{
	int a[100] = { 0 }, b, c, d, e, f;
	std::cin >> b >> c;
	for (int i = 0; i < c; i++)
	{
		std::cin >> d >> e >> f;
		for (int j = d - 1; j < e; j++)
		{
			a[j] = f;
		}
	}
	for (int i = 0; i < b; i++)
	{
		std::cout << a[i] << ' ';
	}

	return 0;
}
