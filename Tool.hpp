/********************************************************************* 
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/17
** Description: Specification file for the Tool class.
*********************************************************************/

#ifndef TOOL_HPP
#define TOOL_HPP

enum GameResult {PLAYER_WINS, COMPUTER_WINS, TIED};

class Tool
{
protected:
	int strength;
	char type;

public:
	//default constructor
	Tool();

	//method to set strength
	virtual void setStrength(int);

	//method to get strength
	virtual int getStrength();

	//method to get type
	virtual char getType();

	//abstract method to play a round
	virtual GameResult fight(Tool*) = 0;
};

#endif
