/********************************************************************* 
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/17
** Description: Specification file for the Tool class.
*********************************************************************/

#include "Tool.hpp"

//default constructor
Tool::Tool()
{
	type = ' ';
  	strength = 0;
}

//method to set strength
void Tool::setStrength(int str)
{
  	strength = str;
}

//method to get strength
int Tool::getStrength()
{
	return strength;
}

//method to get type
char Tool::getType()
{
	return type;
}
