#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <string>

using namespace std;

int main(){

	string sUserInput;

	// set the name of the file
	//
	char cFile[] = "example.txt";


	// init and open the file
	//
	ofstream myfile;
	myfile.open(cFile, ios::out | ios::app);

	// check if the file is open
	if( !myfile.is_open() )
	{
		// cout if there was an error
		cout << "file failed to open: " << cFile << endl;
	}


	// write something to file
	//
	getline(std::cin, sUserInput);
	myfile << time(NULL) << " - " << sUserInput << endl;

	// close file
	//
	myfile.close();				


	// end
	return 0;
}