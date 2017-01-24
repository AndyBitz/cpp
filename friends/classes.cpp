// friend class
#include <iostream>
using namespace std;

class Square;

class Rectangle {
	private:		
		int width, height;

	public:
		int area ()
			{return (width * height);}
		void convert (Square a);
};

class Square {
	// friend class Rectangle, so it can access our stuff
	friend class Rectangle;			// now the whole class Rectangle can access everything from Square
	// alternative you could so only the convert function can access private and proteced members
	// friend void Rectangle::convert(Square);	

	private:
		int side;

	public:
		// constructor
		Square (int a) : side(a) {}	// this is an initialisation list
									// "int a" will be used as "side"
									// "side" will be set before the actual function is called because
									// the initialisation list is "executed" bofore any other code.
									// this makes it possible to initialise e.g. const variables
									// function body is empty
									// basically it takes the parameters/arguments from the function and will set them like
										// you'd call the member variables as functions with the variable name as parameter
									// more:
									// http://stackoverflow.com/questions/2785612/c-what-does-the-colon-after-a-constructor-mean
		// same as
		// Square (int a) {this->side = a;}
};

void Rectangle::convert (Square a) {
	width = a.side;
	height = a.side;
}

int main () {
	Rectangle rect;
	Square sqr (4);
	rect.convert(sqr);
	cout << rect.area();
	return 0;
}