#include <iostream>

int main() {

	signed int foo = -12;
	signed int bar = 12;

	std::cout << +foo << std::endl;		// will stay -12
	std::cout << -foo << std::endl;		// will "negate" to 12

	std::cout << +bar << std::endl;		// will stay 12
	std::cout << -bar << std::endl;		// will negaet to -12

	std::cout << foo << std::endl;		// is still -12
	std::cout << bar << std::endl;		// is still 12

	return 0;
}