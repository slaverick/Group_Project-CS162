//header file for RPSGame
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
	RPSGame(Tool *human[], Tool *computer[]);
	int computer_wins();
	int	human_wins();
	int ties();
	void setcomputer_wins();
	void sethuman_wins();
	void setties();
};
#endif