#include <iostream>

int Q10798()
{
	char a[5][16] = { NULL };
	for (int i = 0; i < 5; i++)
		std::cin >> a[i];
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[j][i] == NULL) continue;
			std::cout << a[j][i];
		}
	}

	return 0;
}
