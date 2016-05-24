#include <iostream>
#include <fstream>
#include "classes.hpp"


using namespace std;

// prototypes
void writeToFile(CInput *test1);
void readFromFile(CInput *test1);
void printClass(CInput *test1);
void overwrite(CInput *test1);

int main()
{

	// create class
	CInput *test1;
	test1 = new CInput;

	// init class
	test1->m_bRunning = false;
	test1->m_iAmount = 10;
	test1->m_fSpeed = 0.01f;

	// create app loop
	bool bRunning = true;
	char cOption;

	while(bRunning)
	{
		cin >> cOption;

		switch(cOption)
		{
			case('e'):
			{
				bRunning = false;
			} break;

			case('w'):
			{
				writeToFile(test1);
			} break;

			case('r'):
			{
				readFromFile(test1);
			} break;

			case('p'):
			{
				printClass(test1);
			} break;

			case('o'):
			{
				overwrite(test1);
			} break;

			case('v'):
			{
				cout << "test1:  " << sizeof(test1) << endl;
				cout << "*test1: " << sizeof(*test1) << endl;
			} break;

			default:
				break;
		}

	}


	delete test1;
	test1 = NULL;

	return 0;
}




// write to file
//
void writeToFile(CInput *test1)
{

	ofstream myfile;
	myfile.open("save.data", ios::binary);
	if(!myfile.is_open())
	{
		cout << "file error" << endl;
	}
	else
	{
		myfile.write((char*)test1,sizeof(*test1));
		cout << "complete" << endl;
		cout << endl;
	}

	myfile.close();
} // writeToFile


// read from file
//
void readFromFile(CInput *test1)
{
	ifstream myfile;
	myfile.open("save.data", ios::binary);

	if(!myfile.is_open())
	{
		cout << "file error" << endl;
	}
	else
	{
		myfile.read((char*)test1, sizeof(*test1));
		cout << "complete" << endl;
		cout << endl;
	}

	myfile.close();
} // readFromFile


// print vars from class
//
//
void printClass(CInput *test1)
{
	cout << "run: " << test1->m_bRunning << endl;
	cout << "amo: " << test1->m_iAmount << endl;
	cout << "vel: " << test1->m_fSpeed << endl;
	cout << endl;
} //printClass


// overwrite class wit new vars
//
void overwrite(CInput *test1)
{

	cout << "0 or 1: ";
	cin >> test1->m_bRunning;

	cout << "int: ";
	cin >> test1->m_iAmount;

	cout << "float: ";
	cin >> test1->m_fSpeed;

} //overwrite