#include <stdio.h>
#include <iostream>

int main()
{

	std::cout << std::endl;

	// EXAMPLE ON HEAP
	std::cout << "-EXAMPLE ON HEAP-" << std::endl;

	int *myHeap = new int;
	*myHeap = 0x10203040;
	printf("size\t %d\n", sizeof(*myHeap));
	printf("hex\t %x\n", *myHeap);
	printf("dec\t %u\n", *myHeap);
	printf("addr\t 0x%p\n", myHeap);

	std::cout << std::endl;
	
	printf("0x%p\t%x\n", myHeap+3, *(((char *)(myHeap))+0));
	printf("0x%p\t%x\n", myHeap+2, *(((char *)(myHeap))+1));
	printf("0x%p\t%x\n", myHeap+1, *(((char *)(myHeap))+2));
	printf("0x%p\t%x\n", myHeap+0, *(((char *)(myHeap))+3));

	delete myHeap;

	std::cout << std::endl << std::endl;


	// EXAMPLE ON STACK
	std::cout << "-EXAMPLE ON STACK-" << std::endl;
	int myInt = 0x10203040;

	printf("size\t %d\n", sizeof(myInt));
	printf("hex\t %x\n", myInt);
	printf("dec\t %u\n", myInt);
	printf("addr\t 0x%p\n", &myInt);

	std::cout << std::endl;

	printf("0x%p\t%x\n", &myInt+3, *((char *)(&myInt)+0));
	printf("0x%p\t%x\n", &myInt+2, *((char *)(&myInt)+1));
	printf("0x%p\t%x\n", &myInt+1, *((char *)(&myInt)+2));
	printf("0x%p\t%x\n", &myInt+0, *((char *)(&myInt)+3));

	std::cout << std::endl;

	// REVERSE ORDER
	std::cout << "-REVERSE ORDER-" << std::endl;
	/*
		0x10     0x20     0x30     0x40
		00010000 00100000 00110000 01000000

	Step 1
		00010000 00000000 00000000 00000000 <- after: & 0xFF000000
		00000000 00100000 00000000 00000000 <- after: & 0x00FF0000
		00000000 00000000 00110000 00000000 <- after: & 0x0000FF00
		00000000 00000000 00000000 01000000 <- after: & 0x000000FF
	
	Step 2
		00000000 00000000 00000000 00010000 <- after: >> 24
		00000000 00000000 00100000 00000000 <- after: >> 8
		00000000 00110000 00000000 00000000 <- after: << 8
		01000000 00000000 00000000 00000000 <- after: << 24
	
	Step 3
		00000000 00000000 00000000 00010000 |
		00000000 00000000 00100000 00000000 |
		00000000 00110000 00000000 00000000 |
		01000000 00000000 00000000 00000000

	Result
		01000000 00110000 00100000 00010000
		0x40     0x30     0x20     0x10
	*/

	myInt = (((myInt & 0xFF000000) >> 24) |
			 ((myInt & 0x00FF0000) >> 8 ) |
			 ((myInt & 0x0000FF00) << 8 ) |
			 ((myInt & 0x000000FF) << 24));

	// myInt = (myInt & 0xFF000000) >> 24;

	printf("hex:\t %x\n", myInt);

	printf("0x%p\t%x\n", &myInt+3, *((char *)(&myInt)+0));
	printf("0x%p\t%x\n", &myInt+2, *((char *)(&myInt)+1));
	printf("0x%p\t%x\n", &myInt+1, *((char *)(&myInt)+2));
	printf("0x%p\t%x\n", &myInt+0, *((char *)(&myInt)+3));

	return 0;
}