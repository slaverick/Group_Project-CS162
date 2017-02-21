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
