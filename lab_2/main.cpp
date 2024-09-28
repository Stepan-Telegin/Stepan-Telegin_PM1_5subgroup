#include <iostream>

int main()
{
	std::cout << "Enter the lengths of the sides of the rectangle" << std::endl;

	short a, b;

	std::cin >> a >> b ;

	char p = (a + b) * 2;

	std::cout << "Perimeter of the rectangle = " << static_cast<short>(p) << std::endl;

	return 0;
}