// MathClient.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include "MathLibrary.h"

#define MyMath MathLibrary::Functions

int main() {
	double a = 7.4;
	int b = 99;

	std::cout << "a + b = " << MyMath::Add(a, b) << std::endl;
	std::cout << "a * b = " << MyMath::Multiply(a, b) << std::endl;
	std::cout << "a + (a * b) = " << MyMath::AddMultiply(a, b) << std::endl;

	while (true) {

	}

    return 0;
}

