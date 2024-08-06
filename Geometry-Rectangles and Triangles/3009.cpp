#include <iostream>

int Q3009()
{
	int a[3][2], b[2] = { 0 };
	for (int i = 0; i < 3; i++)
		std::cin >> a[i][0] >> a[i][1];
	if (a[0][0] == a[1][0])
		b[0] = a[2][0];
	else if (a[0][0] == a[2][0])
		b[0] = a[1][0];
	else if (a[1][0] == a[2][0])
		b[0] = a[0][0];
	if (a[0][1] == a[1][1])
		b[1] = a[2][1];
	else if (a[0][1] == a[2][1])
		b[1] = a[1][1];
	else if (a[1][1] == a[2][1])
		b[1] = a[0][1];
	std::cout << b[0] << ' ' << b[1];

	return 0;
}
