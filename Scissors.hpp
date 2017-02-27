/********************************************************************* 
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/17
** Description:  Specification file for the Scissors class.
*********************************************************************/

#include "Tool.hpp"

#ifndef SCISSORS_HPP
#define SCISSORS_HPP

class Scissors: public Tool
{
public:
	//default constructor
  	Scissors();

  	//constructor
  	Scissors(int);

  	//method to play a round
  	GameResult fight(Tool*);
};

#endif
