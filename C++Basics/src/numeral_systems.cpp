#include <iostream>

int main()
{
	int x{012};
	std::cout << x << "\n"; 

	int y{0xF};
	std::cout << y << "\n";

	int bin{};
	bin = 0b1;

	long value{2'132'673};

	int z{12};
	std::cout << std::hex << z << "\n";

	return 0;
}