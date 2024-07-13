#include <iostream>

int Q10809()
{
	std::string a;

	std::cin >> a;
	for (char i = 'a'; i <= 'z'; i++)
		std::cout << ((int)a.find(i)) << ' ';

	return 0;
}
