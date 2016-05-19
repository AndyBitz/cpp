#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

	// file
	char cFile[] = ("example.txt");

	// string
	string sUserInput;
	sUserInput = "thebuffers";


	// output
	//
	ofstream myfile;
	myfile.open(cFile, ios::out | ios::binary);

	// buffer
	int sizeInput = sUserInput.length();
	char *buffer = new char[sizeInput];

	// show empty buffer
	cout << endl << "Before Writing" << endl;
	for(int i = 0; i < sizeInput; i++)
	{
		// cout << i << " " << buffer[i] << endl;
		cout << i << " " << sUserInput[i] << endl;
	}

	// write buffer to file
	myfile.write(sUserInput.c_str(), sizeInput);
	myfile.close();

	// input
	//
	ifstream mynewfile;
	mynewfile.open(cFile, ios::in | ios::binary);

	// write file to buffer
	mynewfile.read(buffer, sizeInput);
	mynewfile.close();

	// show filled buffer
	cout << endl << "After Reading" << endl;
	for(int i = 0; i < sizeInput; i++)
	{
		cout << i << " " << buffer[i] << endl;
	}

	delete[] buffer;
	buffer = NULL;

	return 0;
}