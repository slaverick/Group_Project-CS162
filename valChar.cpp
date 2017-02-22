#include "valChar.hpp"
#include "getChar.hpp"
#include <iostream>

char valChar(char &c) {
	while (c != A && c != B && c != C)
	{
//		std::cout << "You entered " << c << "." << std::endl;
		std::cout << "Please enter one of the following characters: " << A << ", " << B << ", or " << C << "." << std::endl;
		c = getChar();
	}

	return c;
}
