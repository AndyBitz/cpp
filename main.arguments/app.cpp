#include <iostream>

using namespace std;

/*
* Example:
* enter: app arg1 arg2 arg3 arg4 arg5
* everything you entered will be stored in argv
* all arguments wille be seperated via space
*
* String Example:
* enter: app "This will be one arg" "This will be the second"
*
* argc saves the number of the arguments
* Example:
* enter: app arg1 arg2
* app = argv[0]
* arg1 = argv[1] ...
* argv[0] is the name of the programm
*/


int main(int argc, char *argv[])
{
	cout << "argc : " << argc << endl;
	cout << endl;

	for(int i = 0; i < argc; i++)
	{
		// 0 is always the name of the executable
		cout << i << " : " << argv[i] << endl;
	}

	return 0;
}