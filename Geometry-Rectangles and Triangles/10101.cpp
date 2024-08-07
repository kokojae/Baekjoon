#include <iostream>

int Q10101()
{
	int a[3];
	for (int i = 0; i < 3; i++)
		std::cin >> a[i];
	if ((a[0] == 60) && (a[1] == 60) && (a[2] == 60))
		std::cout << "Equilateral";
	else if (((a[0] + a[1] + a[2]) == 180) && ((a[0] == a[1]) || (a[1] == a[2]) || (a[2] == a[0])))
		std::cout << "Isosceles";
	else if ((a[0] + a[1] + a[2]) == 180)
		std::cout << "Scalene";
	else
		std::cout << "Error";

	return 0;
}
