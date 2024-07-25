#include <iostream>

int a[100][100] = { 0 }, b[100][100] = { 0 }, c, d;

int Q2738()
{	
	std::cin >> c >> d;
	for (int i = 0; i < c; i++)
		for (int j = 0; j < d; j++)
			std::cin >> a[i][j];
	for (int i = 0; i < c; i++)
		for (int j = 0; j < d; j++)
			std::cin >> b[i][j];
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < d; j++)
		{
			std::cout << a[i][j] + b[i][j] << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}
