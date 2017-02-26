#include "valChar.hpp"
#include "getChar.hpp"
#include <iostream>

char valChar(char &c) {
	while (c != A && c != B && c != C && c!=D)
	{
//		std::cout << "You entered " << c << "." << std::endl;
		std::cout << "Please enter one of the following characters: " << A << ", " << B << ", " << C << ", or " << D << "." << std::endl;
		c = getChar();
	}

	return c;
}