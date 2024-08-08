#include <iostream>

int Q5073()
{
	int a, b, c;
	while (true)
	{
		std::cin >> a >> b >> c;
		if ((a == 0) && (b == 0) && (c == 0)) break;
		else if ((a == b) && (b == c)) std::cout << "Equilateral\n";
		else if (((a == b) && ((a + b) > c)) || ((b == c) && ((b + c) > a)) || ((c == a) && ((c + a) > b))) std::cout << "Isosceles\n";
		else if ((a > b ? (a > c ? (a < (b + c)) : (c < (a + b))) : (b > c ? (b < (a + c)) : (c < (a + b))))) std::cout << "Scalene\n";
		else std::cout << "Invalid\n";
	}

	return 0;
}
