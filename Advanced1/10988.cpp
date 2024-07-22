#include <iostream>

int Q10988()
{
	std::string a;
	int b = 0;
	std::cin >> a;
	for (int i = 0; i < a.length() / 2; i++)
		if (a[i] != a[a.length() - i - 1])
			b++;
	std::cout << (b > 0 ? 0 : 1);

	return 0;
}
