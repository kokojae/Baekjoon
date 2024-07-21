#include <iostream>

int Q3003()
{
	int a[6], b[6] = { 1,1,2,2,2,8 };
	for (int i = 0; i < 6; i++)
		std::cin >> a[i];
	for (int i = 0; i < 6; i++)
		std::cout << b[i] - a[i] << ' ';

	return 0;
}
