#include <iostream>

int Q1157()
{
	std::string a;
	int b[26] = { 0 }, c = -1, d;
	std::cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		b[a[i] - (a[i] < 91 ? 65 : 97)]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if ((b[i] > c) && (b[i] > 0))
		{
			c = b[i];
			d = i;
		}
		else if (b[i] == c)
		{
			d = -1;
		}
	}
	std::cout << (d != -1 ? static_cast<char>(d + 65) : '?');

	return 0;
}
