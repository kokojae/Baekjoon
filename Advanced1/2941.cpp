#include <iostream>

int Q2941()
{
	std::string a;
	int b = 0;
	std::cin >> a;
	for (int i = 0; i < a.length(); i++)
	{
		if (((a[i] == 'c') && ((a[i + 1] == '=') || (a[i + 1] == '-'))) ||
			((a[i] == 'd') && (a[i + 1] == '-')) ||
			((a[i] == 'l') && (a[i + 1] == 'j')) ||
			((a[i] == 'n') && (a[i + 1] == 'j')) ||
			((a[i] == 's') && (a[i + 1] == '=')) ||
			((a[i] == 'z') && (a[i + 1] == '=')))
		{
			i++;
			b++;
			continue;
		}
		else if ((a[i] == 'd') && (a[i + 1] == 'z') && (a[i + 2] == '='))
		{
			i += 2;
			b++;
			continue;
		}
		b++;
	}
	std::cout << b;

	return 0;
}
