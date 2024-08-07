#include <iostream>

int Q9063()
{
	int a, b, c[2][2] = { {10001,10001},{-10001,-10001} };
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> b;
		if (c[0][0] > b)
			c[0][0] = b;
		if (c[1][0] < b)
			c[1][0] = b;
		std::cin >> b;
		if (c[0][1] > b)
			c[0][1] = b;
		if (c[1][1] < b)
			c[1][1] = b;
	}
	std::cout << ((c[1][0] - c[0][0]) * (c[1][1] - c[0][1]));

	return 0;
}
