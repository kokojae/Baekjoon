#include <iostream>

int Q11720()
{
	int a, c = 0;
	std::string b;	//char b[101] = { 0 };

	std::cin >> a >> b;
	for (int i = 0; i < b.length(); i++)
		c += (b.at(i) - 48);
	std::cout << c;

	return 0;
}
