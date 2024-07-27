#include <iostream>
#include <list>

int Q11005()
{
	std::list<char> a = std::list<char>();
	int b, c;
	for (std::cin >> b >> c; b > 0; b /= c)
		a.push_front((b % c) > 9 ? (b % c) + 55 : (b % c) + 48);
	for (std::list<char>::iterator iter = a.begin(); iter != a.end(); iter++)
		std::cout << *iter;

	return 0;
}
