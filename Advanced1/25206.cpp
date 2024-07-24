#include <iostream>

float GetSubjectRating(std::string rating)
{
	if (rating == "A+") return 4.5;
	else if (rating == "A0") return 4.0;
	else if (rating == "B+") return 3.5;
	else if (rating == "B0") return 3.0;
	else if (rating == "C+") return 2.5;
	else if (rating == "C0") return 2.0;
	else if (rating == "D+") return 1.5;
	else if (rating == "D0") return 1.0;
	else return 0.0;
}

int Q25206()
{
	std::string a;
	float b, c = 0, d = 0;
	for (int i = 0; i < 20; i++)
	{
		std::cin >> a >> b >> a;
		if (a == "P") continue;
		c += b * GetSubjectRating(a);
		d += b;
	}
	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << (c / d);

	return 0;
}
