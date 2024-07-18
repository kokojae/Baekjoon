#include <iostream>

int Q2908()
{
	std::string a, b;
	std::cin >> a >> b;
	std::string c(a.rbegin(), a.rend()), d(b.rbegin(), b.rend());
	std::cout << (atoi(c.c_str()) > atoi(d.c_str()) ? c : d);

	return 0;
}
