#include <iostream>

int Q1193()
{
	int a, b = 1, c = 1, d = 1;
	bool e = true, f = false;
	std::cin >> a;
	for (int i = 1; i < a; i++)
	{
		if ((c == d) && !f)
		{
			e = !e;
			c = ++d;
			f = true;
		}
		else if ((b == d) && !f)
		{
			e = !e;
			b = ++d;
			f = true;
		}
		else if (e)
		{
			b--;
			c++;
			f = false;
		}
		else if (!e)
		{
			b++;
			c--;
			f = false;
		}
	}
	std::cout << b << '/' << c;

	return 0;
}
