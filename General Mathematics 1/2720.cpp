#include <iostream>

int Q2720()
{
	int a, b;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		std::cout << b / 25 << ' ';
		b %= 25;
		std::cout << b / 10 << ' ';
		b %= 10;
		std::cout << b / 5 << ' ';
		b %= 5;
		std::cout << b / 1 << '\n';
		b %= 1;
	}

	return 0;
}
