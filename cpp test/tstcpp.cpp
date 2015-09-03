#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void read();

int main(){

	read();
	
	cin.sync();
	cin.get();
	
}

void read(){
	
	system("cd C:\Users");
	system("dir > temp.txt");
	system("attrib temp.txt +h");
	
	string lookfor;
	
	ifstream temp("temp.txt");
	temp << 
	
	
}