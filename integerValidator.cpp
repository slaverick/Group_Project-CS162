/*
Project: Project 1
Author: Scott Laverick
Date: 1/14/2017
Description: This function accepts a string, a max Number and a min Number
(ints). It then converts the string to an int - outputting an error if the
string cannot be converted - and checks to ensure the resulting int is
within the min and max numbers, thus validating the integer input against
the required input parameters.
*/

#include "integerValidator.hpp"
#include <string>
#include <iostream>

using std::string;

int intValidator(string valIn, int maxNum, int minNum)
{
	int validInt;
	string needsValid = valIn;
	bool validNum = false;

	while (validNum == false)
	{
		for (int i = 0; i < needsValid.length(); i++)
		{
			if (needsValid[i] < 48 || needsValid[i]>57)
			{
				std::cout << "Please enter a positive, non-zero integer." << std::endl;
				std::cin >> needsValid;
				break;
			}
			else
			{
				validInt = std::stoi(needsValid);
				if (validInt <= maxNum & validInt >= minNum)
					validNum = true;
				else
				{
					std::cout << "Please enter an integer between " << minNum << " and " << maxNum << "." << std::endl;
					std::cin >> needsValid;
					break;
				}
			}
		}
	}

	return validInt;
}