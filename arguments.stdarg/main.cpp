// don't use this
#include <iostream>
#include <stdarg.h>

template <typename T>
void someStuff (T t) {
	std::cout << t << std::endl;
}

template <typename T, typename... Args>
void someStuff (T t, Args... args) { // recursive variadic function

	std::cout << t << std::endl;

	someStuff(args...);

}


int main() {

	someStuff('h', "Hello", 11.23, 545);

	someStuff(" ", 2, 'h', "No no no", 1, 1.12, 0.123123);

	return 0;
}