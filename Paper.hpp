/********************************************************************* 
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/17
** Description: Specification file for the Paper class.
*********************************************************************/

#include "Tool.hpp"

#ifndef PAPER_HPP
#define PAPER_HPP

class Paper: public Tool
{
public:
	//default constructor
  	Paper();

  	//constructor
  	Paper(int);

  	//method to play a round
  	GameResult fight(Tool*);
};

#endif
