
#include <iostream>

int main()
{
	char c;
	int i;
	double d;
	double epic[10];
	std::cout << sizeof(c) << '\n';
	std::cout << sizeof(i) << '\n';
	std::cout << sizeof(d) << '\n';
	std::cout << sizeof(epic) << '\n';

	std::cout << sizeof(epic) / sizeof(epic[0]) << '\n';
}
