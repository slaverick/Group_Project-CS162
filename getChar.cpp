
#include "getChar.hpp"
#include <iostream>


char getChar()
{
	char c;
	std::cin >> c;

	while ((c < 97)||(c > 122))
	{
		std::cout << "Invalid selection. Please re-enter." << std::endl;
		std::cin >> c;
	}
//	std::cout << "You entered " << c << " ." << std::endl;
	return c;
}