/*******************************************************************
Project: Menu Function for CS 162
Author: Scott Laverick
Date: 1/31/2017
Description: Gives the user a set of menu options, validates the entry
and returns the user's choice as in integer.
**********************************************************************/

#include "menu.hpp"
#include "integerValidator.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

/*******************************************************************
menu() gives the user a set of menu options, validates the entry
and returns the user's choice as in integer.
**********************************************************************/

int menu()
{
	cout << "This is your grocery list. Please select from the options below:" << endl;
	cout << "1. Add an item to your grocery list." << endl;
	cout << "2. Remove an item from your grocery list." << endl;
	cout << "3. View the contents and total current price of your grocery list." << endl;
	cout << "4. Exit the grocery list application." << endl;

	std::string userChoice;
	cin >> userChoice;

	int finalChoice=intValidator(userChoice, 4, 1);

	return finalChoice;
}