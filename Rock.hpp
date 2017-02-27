/********************************************************************* 
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/17
** Description: Specification file for the Rock class.
*********************************************************************/

#include "Tool.hpp"

#ifndef ROCK_HPP
#define ROCK_HPP

class Rock: public Tool
{
public:
	//default constructor
  	Rock();

  	//constructor
  	Rock(int);

  	//method to play a round
  	GameResult fight(Tool*);
};

#endif
