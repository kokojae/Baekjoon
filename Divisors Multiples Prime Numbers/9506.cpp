#include <iostream>
#include <vector>

int Q9506()
{
	while (true)
	{
		int a, b = 0;
		std::vector<int> vector = std::vector<int>();
		std::cin >> a;
		if (a == -1) break;
		std::cout << a << ' ';
		for (int i = 1; i < a; i++)
		{
			if (a % i == 0)
			{
				b += i;
				vector.push_back(i);
			}
		}
		if (a - b == 0)
		{
			std::cout << "= ";
			for (std::vector<int>::iterator iter = vector.begin(); iter != vector.end(); iter++)
				std::cout << *iter << ((iter + 1) != vector.end() ? " + " : "\n");
		}
		else
		{
			std::cout << "is NOT perfect.\n";
		}
	}

	return 0;
}
