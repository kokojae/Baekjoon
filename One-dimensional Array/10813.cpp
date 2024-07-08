#include <iostream>

int Q10813()
{
	int a[100] = { 0 }, b, c, d, e, f;

	std::cin >> b >> c;
	for (int i = 0; i < b; i++)
		a[i] = i + 1;

	for (int i = 0; i < c; i++)
	{
		std::cin >> d >> e;
		d--; e--;
		f = a[d];
		a[d] = a[e];
		a[e] = f;
	}

	for (int i = 0; i < b; i++)
		std::cout << a[i] << ' ';

	return 0;
}
