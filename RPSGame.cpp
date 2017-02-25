
//Date: 2/3/2017

//Implementation file for RPSGAME
#include "RPSGame.hpp"

//default constructor
RPSGame::RPSGame() {
}

//constructor
RPSGame::RPSGame(Tool *human[], Tool *computer[]) {
	Human = *(human);
	Computer = *(computer);	
	computer_wins = 0;
	human_wins = 0;
	ties = 0;
}

//destructor 
//RPSGame::~RPSGame() {}

//Getters
int RPSGame::getcomputer_wins() {
	return computer_wins;
}

int	RPSGame::gethuman_wins() {
	return human_wins;
}

int RPSGame::getties() {
	return ties;
}

//setters
void RPSGame::setcomputer_wins() {
	++computer_wins;
}

void RPSGame::sethuman_wins() {
	++human_wins;
}

void RPSGame::setties() {
	++ties;
}