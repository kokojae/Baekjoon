#include <iostream>
#include <cmath>

int Q2745()
{
	long long a = 0;
	std::string b;
	int c;
	std::cin >> b >> c;
	for (int i = b.length() - 1; i >= 0; i--)
	{
		if ('0' <= b[i] && b[i] <= '9')
			a += (b[i] - 48) * pow(c, b.length() - 1 - i);
		else if ('A' <= b[i] && b[i] <= 'Z')
			a += (b[i] - 55) * pow(c, b.length() - 1 - i);
	}
	std::cout << a;

	return 0;
}
