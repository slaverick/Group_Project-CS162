
//Date: 2/3/2017

//Implementation file for RPSGAME
#include "RPSGame.h"

//default constructor
RPSGame::RPSGame() {
}

//constructor
RPSGame::RPSGame(Tool *human[], Tool *computer[]) {
	Human = human;
	Computer = computer;
}

//destructor 
RPSGame::~RPSGame() {}

//Getters
int RPSGame::computer_wins() {
	return computer_wins;
}

int	RPSGame::human_wins() {
	return human_wins;
}

int RPSGame::ties() {
	return ties;
}

//setters
void RPSGame::setcomputer_wins() {
	++computer_wins;
}
void	RPSGame::sethuman_wins() {
	++human_wins;
}

void RPSGame::setties() {
	++ties;
}