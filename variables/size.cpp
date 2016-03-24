#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

void forTheSize(string, int);

int main(){
	
	const double PI = 3.14159265;
	int w = 19;
	
	int int1;
	float float1;
	double double1;
	short short1;
	long long1;
	char char1;
	string string1;
	
	forTheSize("Size of Integer:", w); cout << sizeof(int1) << endl;
	forTheSize("Size of Float:", w); cout << sizeof(float1) << endl;
	forTheSize("Size of Double:", w); cout << sizeof(double1) << endl;
	forTheSize("Size of Short:", w); cout << sizeof(short1) << endl;
	forTheSize("Size of Long:", w); cout << sizeof(long1) << endl;
	forTheSize("Size of Character:", w); cout << sizeof(char1) << endl;
	forTheSize("Size of String:", w); cout << sizeof(string1) << endl;
	
	cin.sync();
	cin.get();
	
	return 0;
}

void forTheSize(string str1, int theWidth){
	int length = str1.length();
	int newLength = theWidth - length;
	cout << setw(length) << str1 << ' ' << setw(newLength) << setfill(' ') << ' ';
}