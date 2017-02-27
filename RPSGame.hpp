/********************************************************************* 
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/17
** Description: Specification file for the RPSGame class.
*********************************************************************/

#include "Tool.hpp"

#ifndef RPSGAME_H
#define RPSGAME_H

class RPSGame
{
private:
	int computer_wins;
	int human_wins;
	int ties;
	Tool *Human;
	Tool *Computer;
public:
	RPSGame();
	RPSGame(Tool *human[], Tool *computer[]);
	int getcomputer_wins();
	int	gethuman_wins();
	int getties();
	void setcomputer_wins();
	void sethuman_wins();
	void setties();
};
#endif