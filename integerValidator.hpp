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

#ifndef INTEGERVALIDATOR_HPP
#define INTEGERVALIDATOR_HPP

#include <string>

int intValidator(std::string valIn, int maxNum, int minNum);


#endif