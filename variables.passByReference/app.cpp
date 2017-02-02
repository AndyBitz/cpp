#include <iostream>

// ansii color codes | \033[ and m mark the beginning, 34 = blue; 0 = standard
#define c_blue 		"\033[34m"
#define c_reset		"\033[0m"

int passByReference(int &ref) {

	std::cout << std::endl;
	std::cout << "\tpassByReference()" << std::endl;
	std::cout << "\tref  - " << ref << std::endl;
	std::cout << "\t&ref - " << &ref << std::endl;

	return 0;
}

void headline(const char *msg) {
	std::cout << std::endl << c_blue << "--" << msg << "--" << c_reset << std::endl << std::endl;
	return;
}

void endHere() {
	std::cout << std::endl << std::endl;
}


int main() {

	headline("Pass by Reference");
	int passByReferenceValue = 10;
	std::cout << "\tpassByReferenceValue  - " << passByReferenceValue << std::endl;
	std::cout << "\t&passByReferenceValue - " << &passByReferenceValue << std::endl;
	passByReference(passByReferenceValue);
	std::cout << std::endl;
	std::cout << "\tpassByReferenceValue will just be referenced in the function." << std::endl;
	std::cout << "\tTherefor no new variable will be declared for the function and pushed onto the stack." << std::endl;
	endHere();

	return 0;
}