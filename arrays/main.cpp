#include <iostream>

int main() {

	std::cout <<	*("abcd" + 2)	<< std::endl;
	std::cout <<	2["abcd"]		<< std::endl;
	std::cout << 	"abcd"[2]		<< std::endl;

	return 0;
}