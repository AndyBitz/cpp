#include <iostream>

int main() {

	for (int i=0; i <= 110; i++) {
		std::cout << "\033[" << i << "m" << "Code Nr: " << i << "\033[0m" << "\t\t";
		if (i%3 == 0 && i != 0) {
			std::cout << std::endl;
		}
	}

	return 0;

}