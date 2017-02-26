/*************************************************************
** Program: Project 3 - Fantasy Combat
** Author: Scott Laverick
** Date: 2/10/2017
** Description:
**************************************************************/
#include "intValid.hpp"
#include <string>
#include <iostream>

using std::string;

int intValid(string valIn)
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
				if (validInt > 0)
					validNum = true;
				else
				{
					std::cout << "Please enter a positive, non-zero integer." << std::endl;
					std::cin >> needsValid;
					break;
				}
			}
		}
	}

	return validInt;
}