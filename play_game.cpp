// play_game.cpp : Defines the entry point for the console application.

/**************************************************************************
**  Program Name: play_game.cpp
**  Name: Vinh Dong
**  Date: 2/20/2017
**  Description: 
**
***************************************************************************/
//#include "stdafx.h"
#include "RPSGame.h"
#include "Tool.h"
#include <iostream>
#include <string>
#include <csdtlib>


using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{

	//Create dynamic array for
	Tool *Human[] = { new rock(1), new paper(1), new Scissor(1) }
	Tool *Computer[] = { new rock(1), new paper(1), new Scissor(1) }
	//create game object start
	RPSGame Game();
	
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
			int compuerStrength;
			cin >> compStrength;
			Computer[]->setStrength(comStrength);
		}

	cout << "Choose your tool (r-rock, p-paper, s-scissor, e-exit):" << endl;
		char choice;
		cin >> choice;
		if (choice == 'r') {   //probably need another method to convert char input to integer
			int y = 0;
			cout << "User picked rock" << endl;
		}
		else if choice == 'p' {
			int y = 1
				cout << "User picked paper" << endl;
		}
		else if (choice == 's') {
			int	y = 2;
			cout << "User picked scissor" << endl;
		}

		int x = rand() % 2;
		bool h = Human[y]->fight(Computer);
		bool c = Computer[x]->fight(Human);

		if ((h == 1) && (c == 0)) {
			cout << "Human win!" << endl;
			Game.human_wins;
		}

		else if ((h == 0) && (c == 1)) {
			cout << "Computer win!" << endl;
			Game.computer_wins;
		}
		else {
			cout << "Tie" << endl;
			Game.ties;
		}
		cout << "Human wins: " << Game.gethuman_wins << endl;
		cout << "Computer wins: " << Game.getcomputer_wins << endl;
		cout << "Ties: " << Game.getties << endl;
	} //end while loop
		
	//Deallocate dynamic memory
	for (int i = 0; i < 3; ++i) {
		delete Human[i];
		delete Computer[i];
	}

	}
	return 0;
}
