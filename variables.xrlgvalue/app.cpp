#include <iostream>
#include <cstdlib>
#include "app.h"

int global = 10;

int  returnPRValue() {return global;}
int& returnLValue() {return global;}
// int&& returnXValue() {return global;}		// ERROR - cannot bind 'int' lvalue to 'int&&'
// int&& returnXValue() {return 20;}			// WARNING - returning reference to temporary - crashes programm
// int&& returnXValue(int&& i) {return i;}		// ERROR - cannot bind 'int' lvalue to 'int&&' - i is initialized with rvalue expression, but is actually an lvalue expression
// int&& returnXValue() {int const& foo = 100; return foo;}
int&& returnXValue() {};	// Returns its address

int main() {

	// MORE http://stackoverflow.com/questions/3601602/what-are-rvalues-lvalues-xvalues-glvalues-and-prvalues

	// IN C++ EVEN YOUR TYPES HAVE TYPES

	// int a = b is setting a's VALUE to b's VALUE
	// int* a = &b is setting a's VALUE to the ADDRESS of b
	// int& a = b is setting a's ADDRESS to b's ADDRESS (a is a reference to b)


	headline("returnLValue()");

	explain("returnLValue()");
	std::cout << returnLValue() << std::endl;	// 10; value of global

	explain("&global", 3);
	std::cout << &global << std::endl;			// 0x409004; address of global

	explain("&returnLValue()");
	std::cout << &returnLValue() << std::endl;	// 0x409004; address of gloabl

	explain("returnPRValue()");
	std::cout << returnPRValue() << std::endl;		// 10; value of global
	// std::cout << &returnPRValue() << std::endl;	// ERROR



	headline("int&& foo = 25");

	// int&& foo = global;		// ERROR - cannot bind 'int' lvalue to 'int&&'
	// int&& foo = &global;		// ERROR - invalid conversion from 'int*' to 'int'

	int&& foo = 25;

	explain("foo", 3);
	std::cout << foo << std::endl;	// 25; value of foo
	foo += 25;

	explain("foo += 25");
	std::cout << foo << std::endl;	// 50; value of foo

	explain("&foo", 3);
	std::cout << &foo << std::endl; // 0x61ff18; address of foo



	headline("const& bar = returnLValue()");
	int const& bar = returnLValue();

	explain("bar", 3);
	std::cout << bar << std::endl;	// 100;	value of bar

	explain("&bar", 3);
	std::cout << &bar << std::endl;	// 0x61ff14; address of bar



	headline("returnXValue()");

	explain("returnXValue()");
	std::cout << returnXValue() << std::endl;	// 0x6ff0a458, 1878041688

	// std::cout << &returnXValue() << std::endl;	// ERROR - taking address of xvalue (rvalue reference)



	headline("int&& koo = returnXValue()");

	int&& koo = returnXValue();

	explain("koo", 3);
	std::cout << koo << std::endl;	// 0x6ff0a458, 1878041688

	explain("&koo", 3);
	std::cout << &koo << std::endl;	// 0x6fefeb20

	// std::cout << &&koo << std::endl; 	// ERROR - label 'koo' used but not defined


	return 0;
}