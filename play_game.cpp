// play_game.cpp : Defines the entry point for the console application.

/**************************************************************************
**  Program Name: play_game.cpp
**  Name: Vinh Dong
**  Date: 2/20/2017
**  Description: 
**
***************************************************************************/
#include "RPSGame.hpp"
#include "Tool.hpp"
#include "Rock.hpp"
#include "Paper.hpp"
#include "Scissors.hpp"
#include "getChar.hpp"
#include "valChar.hpp"
#include "intValid.hpp"

#include <iostream>
#include <string>

#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	int scissorsCount=0;  
	int rockCount=0;
	int paperCount=0;
	int turnCount=1;

	//Create dynamic array for
	Tool *Human[] = { new Rock(1), new Paper(1), new Scissors(1) };
	Tool *Computer[] = { new Rock(1), new Paper(1), new Scissors(1) };
	//create game object start
	RPSGame Game(Human, Computer);
	
	char choice = 'r';   //set as intial value

	
	cout << "Welcome to Rock, Paper, Scissors! Do you want to choose different ";
	cout << "strengths for the tool? (y-yes, n-no)" << endl;
	char answer = getChar();
	while (answer != 'y' && answer != 'n')
	{
		//		std::cout << "You entered " << c << "." << std::endl;
		std::cout << "Please enter 'y' for yes or 'n' for no." << std::endl;
		answer = getChar();
	}
	//set custom strengths for human and computer
	if (answer == 'y') {
		cout << "What do you want to set the player's strength to?" << endl;
		int humanStrength;
		int strIn;
		cin.ignore();
		strIn = intValid();
		humanStrength = strIn;
		cout << "What you want to set the computer's strengths to?" << endl;
		int comStrength;
		strIn = intValid();
		comStrength = strIn;
		for (int i = 0; i < 3; ++i) {
		Human[i]->setStrength(humanStrength);
		Computer[i]->setStrength(comStrength);
		}
	}

	while (choice != 'e') { //Use while loop to run the game
		cout << "Choose your tool (r-rock, p-paper, s-scissor, e-exit):" << endl;
		choice = getChar();
		choice = valChar(choice);
		int y;
		//set user choice
		if (choice != 'e')
		{
			if (choice == 'r') {   
				y = 0;
				cout << "User picked rock" << endl;
				rockCount++;
			}
			else if (choice == 'p') {
				 y = 1;
					cout << "User picked paper" << endl;
					paperCount++;
			}
			else if (choice == 's') {
				y = 2;
				cout << "User picked scissor" << endl;
				scissorsCount++;
			}

			int x = rand() % 3;
			char Cpick = Computer[x]->getType();
			//set random computer choice
			if (Cpick == 'r') {   
				cout << "Computer picked rock" << endl;
			}
			else if (Cpick == 'p') {
				cout << "Computer picked paper" << endl;
			}
			else if (Cpick == 's') {
				cout << "Computer picked scissor" << endl;
			}		
			//fight
			bool h = Human[y]->fight(Computer[x]);
			bool c = Computer[x]->fight(Human[y]);

			if ((h == 1) && (c == 0)) {
				cout << "Human wins!" << endl;
				Game.sethuman_wins();
			}

			else if ((h == 0) && (c == 1)) {
				cout << "Computer wins" << endl;
				Game.setcomputer_wins();
			}
			else {
				cout << "Tie" << endl;
				Game.setties();
			}
			//print out results
			cout << "Human wins: " << Game.gethuman_wins() << endl;
			cout << "Computer wins: " << Game.getcomputer_wins() << endl;
			cout << "Ties: " << Game.getties() << endl << endl;
			turnCount++;
		}		
	 } //end while loop
		
	//Deallocate dynamic memory
	for (int i = 0; i < 3; ++i) {
		delete Human[i];
		delete Computer[i];
	}

	
	return 0;
}





