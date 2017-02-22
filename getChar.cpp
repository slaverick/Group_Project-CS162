
#include "getChar.hpp"
#include <iostream>


char getChar()
{
	char c;
	std::cout << "Please enter the tool you would like to choose: r for rock, p for paper, or s for scissors:" << std::endl;
	std::cin >> c;

	while ((c < 97)||(c > 122))
	{
		std::cout << "Please enter a lowercase alphabet character." << std::endl;
		std::cin >> c;
	}
	std::cout << "You entered " << c << " ." << std::endl;
	return c;
}