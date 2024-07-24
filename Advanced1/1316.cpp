#include <iostream>

int Q1316()
{
	int a, b = 0, d[26] = { 0 };
	std::string c;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		std::cin >> c;
		for (int j = 1; j < c.length(); j++)
		{
			if (c[j - 1] != c[j])
				d[c[j - 1] - 97]++;
			if (j + 1 == c.length())
				d[c[j] - 97]++;
		}
		for (int j = 0; j < 26; j++)
		{
			if (d[j] > 1)
			{
				b++;
				break;
			}
		}
		for (int j = 0; j < 26; j++)
			d[j] = 0;
	}
	std::cout << a - b;

	return 0;
}
