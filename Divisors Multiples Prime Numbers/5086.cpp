#include <iostream>

int Q5086()
{
	int a, b;
	while (true)
	{
		std::cin >> a >> b;
		if (a + b == 0)
			break;
		else if (b % a == 0)
			std::cout << "factor\n";
		else if (a % b == 0)
			std::cout << "multiple\n";
		else
			std::cout << "neither\n";
	}

	return 0;
}
