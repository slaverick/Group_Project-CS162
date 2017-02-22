//header file for RPSGame
#include "Tool.h"

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
	int computer_wins();
	int	human_wins();
	int ties()
	void setcomputer_wins();
	void sethuman_wins();
	void setties();
};
#endif