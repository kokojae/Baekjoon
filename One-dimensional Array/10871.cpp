#include <iostream>

int Q10871()
{
	int a, b, c;

	std::cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		std::cin >> c;
		if (c < b)
			std::cout << c << ' ';
	}

	return 0;
}
