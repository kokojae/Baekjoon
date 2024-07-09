#include <iostream>

int Q10811()
{
	int a[100] = { 0 }, b, c, d, e, f;

	std::cin >> b >> c;
	for (int i = 0; i < b; i++)
		a[i] = i + 1;
	for (int i = 0; i < c; i++)
	{
		std::cin >> d >> e;
		for (int i = 0; i < (((e - d) + 1) / 2); i++)
		{
			f = a[(d - 1) + i];
			a[(d - 1) + i] = a[(e - 1) - i];
			a[(e - 1) - i] = f;
		}
	}
	for (int i = 0; i < b; i++)
		std::cout << a[i] << ' ';

	return 0;
}
