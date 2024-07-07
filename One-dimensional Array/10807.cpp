#include <iostream>

int Q10807()
{
	int a, b[100] = { 0 }, c, d = 0;

	std::cin >> a;
	for (int i = 0; i < a; i++)
		std::cin >> b[i];
	std::cin >> c;

	for (int i = 0; i < a; i++)
		if (b[i] == c)
			d++;

	std::cout << d;

	return 0;
}
