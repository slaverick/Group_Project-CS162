// play_game.cpp : Defines the entry point for the console application.

/**************************************************************************
**  Program Name: play_game.cpp
**  Name: Vinh Dong
**  Date: 2/20/2017
**  Description: 
**
***************************************************************************/
#include "stdafx.h"
#include "RPSGame.hpp"
#include "Tool.hpp"
#include "Rock.hpp"
#include "Paper.hpp"
#include "Scissors.hpp"

#include <iostream>
#include <string>
#include <cstdlib>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

	//Create dynamic array for
	Tool *Human[] = { new Rock(1), new Paper(1), new Scissors(1) };
	Tool *Computer[] = { new Rock(1), new Paper(1), new Scissors(1) };
	//create game object start
	RPSGame Game(Human, Computer);
	
	char choice = 'r';   //set as intial value

	while (choice != 'e') { //Use while loop to run the game
		cout << "Welcome to Rock, Paper, Scissors! Do you want to choose different ";
		cout << "strengths for the tool? (y-yes, n-no)" << endl;
		char answer;
		cin >> answer;
		if (answer == 'y') {
			cout << "What do you want to set the player's strength to?" << endl;
			int humanStrength;
			cin >> humanStrength;
			Human[]->setStrength(humanStrength);
			cout << "What you want to set the computer's strengths to?" << endl;
			int comStrength;
			cin >> comStrength;
			Computer[]->setStrength(comStrength);
		}

	cout << "Choose your tool (r-rock, p-paper, s-scissor, e-exit):" << endl;
		char choice;
		cin >> choice;
		int y;
		if (choice == 'r') {   //probably need another method to convert char input to integer
			y = 0;
			cout << "User picked rock" << endl;
		}
		else if (choice == 'p') {
			y = 1;
			cout << "User picked paper" << endl;
		}
		else if (choice == 's') {
			y = 2;
			cout << "User picked scissor" << endl;
		}

		int x = rand() % 2;
		bool h = Human[y]->fight(Computer);
		bool c = Computer[x]->fight(Human);

		if ((h == 1) && (c == 0)) {
			cout << "Human wins!" << endl;
			Game.sethuman_wins();
		}

		else if ((h == 0) && (c == 1)) {
			cout << "Computer wins :-(" << endl;
			Game.setcomputer_wins();
		}
		else {
			cout << "Tie" << endl;
			Game.setties();
		}
		cout << "Human wins: " << Game.human_wins() << endl;
		cout << "Computer wins: " << Game.computer_wins() << endl;
		cout << "Ties: " << Game.ties() << endl;
	} //end while loop
		
	//Deallocate dynamic memory
	for (int i = 0; i < 3; ++i) {
		delete Human[i];
		delete Computer[i];
	}

	
	return 0;
}
