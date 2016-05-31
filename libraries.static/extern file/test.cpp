#include "test.h"

CTest::CTest()
{
	std::cout << "Test Constructor" << std::endl;
}

CTest::~CTest()
{
	std::cout << "Test Destructor" << std::endl;
}

void CTest::getVoid()
{
	std::cout << "this is the void" << std::endl;
}