#include <iostream>

int Q2563()
{
	bool a[100][100] = { false };
	int b, c, d, e = 0;
	std::cin >> b;
	for (int i = 0; i < b; i++)
	{
		std::cin >> c >> d;
		for (int j = 0; j < 10; j++)
			for (int k = 0; k < 10; k++)
				a[j + c][k + d] = true;
	}
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (a[i][j]) e++;
	std::cout << e;

	return 0;
}
