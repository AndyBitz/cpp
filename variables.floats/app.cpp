#include <iostream>

using namespace std;

int main()
{

	float f = 123456789012345678901234567890.0f;
			/*
			* it won't save such a high value
			* it will lose most information,
			* because 1.23457e+029 will just append
			* zeros after the 1.23457...
			* = 123 457 000 000 000 000 000 000 000 000
			* = 123457000000000000000000000000
			* most data is lost
			*/  

	int i = 2147483647;
	unsigned int ui = 4294967295;

	cout << f << endl;
	cout << ui << endl;
	cout << ui << " = " << i << " * " << " 2 + 1 " << endl;
	cout << "unsigned integer max = signed integer max * 2 + 1" << endl;

	return 0;
	/*
	* http://stackoverflow.com/questions/11158476/
	*/
}