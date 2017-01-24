#include <iostream>
#include <initializer_list>
#include <string>

/*  */
template <typename T>
void printStuff (std::initializer_list<T> list) {

	// remember to use "auto" for this kind of stuff
	for (auto elem : list) { // or for (T elem : list)
		std::cout << elem << std::endl;
	}
}


int main() {


	printStuff( {1,2,3,4,5,6} );

	printStuff( {'a', 'b', 'c', 'd'} );

	printStuff( {1.222, 1.444, 1.666, 1.888} );

	std::string str1("Hello World");
	std::string str2("hello world");

	printStuff( {str1, str2} );

	return 0;

}