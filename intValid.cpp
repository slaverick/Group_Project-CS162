/*************************************************************
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/2017
** Description: function to handle input validation.
** Initialization file.
**************************************************************/
#include "intValid.hpp"


using std::string;
using std::cin;

int intValid()
{
	std::string strNumber;
	int retInteger;

	while(true)
	{
		//std::cin.ignore();
		std::getline(cin, strNumber);
		std::stringstream convert(strNumber);

		if(convert >> retInteger && !(convert >> strNumber))
			return retInteger;
		std::cin.clear();
		std::cerr <<"Input must be an integer" << std::endl;
	}
}
