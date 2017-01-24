#include <iostream>


class Box {

private:
	int length;
	int width;
	int height;

public:
	Box(int length, int width, int height) {
		this->length	= length;
		this->width		= width;
		this->height	= height;
	}

	Box() {
		this->length	= 1;
		this->width		= 1;
		this->height	= 1;
	}

	int getVolumne() {
		return this->length*this->width*this->height;
	}

	int getLength()	{return this->length;}
	int getWidth()	{return this->width;}
	int getHeight()	{return this->height;}

	int setLength(int length)	{this->length = length;}
	int setWidth(int width)		{this->width  = width;}
	int setHeight(int height)	{this->height = height;}

	Box operator+ (Box &b) {
		return Box(
			this->getLength() + b.getLength(),
			this->getWidth()  + b.getWidth(),
			this->getHeight() + b.getHeight()
			);
	}

	Box operator- (Box &b) {
		return Box(
			this->getLength() - b.getLength(),
			this->getWidth()  - b.getWidth(),
			this->getHeight() - b.getHeight()
			);
	}

	Box operator++ () {
		++this->length;
		++this->height;
		++this->width;
	}

	Box operator-- () {
		--this->length;
		--this->height;
		--this->width;
	}

};



int main() {

	Box box1 = Box(24, 12, 4);
	Box box2 = Box(12, 6, 90);

	std::cout << box1.getVolumne() << std::endl;
	std::cout << box2.getVolumne() << std::endl;

	Box box3 = box1 + box2;
	std::cout << box3.getVolumne() << std::endl;

	box1 = box3 - box2;
	std::cout << box1.getVolumne() << std::endl;

	std::cout << box2.getVolumne() << std::endl;

	++box2;
	std::cout << box2.getVolumne() << std::endl;

	return 0;
}