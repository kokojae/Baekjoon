#include <iostream>

int Q2675()
{
	int a, b;
	std::string c;

	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> b >> c;
		for (int j = 0; j < c.length(); j++)
			for (int k = 0; k < b; k++)
				std::cout << c.at(j);
		std::cout << std::endl;
	}

	return 0;
}
