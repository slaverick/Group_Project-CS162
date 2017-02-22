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
#include <iostream>
#include <string>
#include <csdtlib>
#include <srand>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int scissorsCout=0;  
int rockCount=0;
int paperCount=0;
std::string lastPlayerToolName;
int turnCount=0;

/*
// Name: ComputerTurn
// Inputs:none
// Outputs: int with array index for selected tool for computer
// Description: chosses a tool for the AI to use. 50% of the time will chose a random tool
// 25% picks a tool to beat the last tool selected by user. 25% picks a tool to beat the most comon tool chosen by user                             
// on the first round will always pick a ranodm tool. 
*/ 
int computerTurn()
{
     
     if (turnCount==1 || (rand() % 2 +1)==1)
     {
         int randomChoice;
         randomChoice =  (rand() % 3) +1
         if (randomChoice==1)
         {
             return 1;
         }
         else if (randomChoice==2)
         {
             return 2;
         }
         else
         {
             return 3;
         }  
     }
     else
     {
         if ((rand) % 2 +1 ==2)
         {
           if (lastPlayerToolName=="Rock")
           {
               return 2;
           }
           else if (lastPlayerToolName=="Paper")
           {
               return 3;
           }
           else
           {
               return 1;
           }
         }
         else
         {
            if (rockCount> paperCount)
            {
                if (rockCount > scissorsCout)
                {
                    return 2;
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                 if (paperCount > scissorsCout)
                {
                    return 3;
                }
                else
                {
                    return 1;
                }
            }
            
         }
     }
}

int main()
{

	//Create dynamic array for
	Tool *Human[] = { new rock(1), new paper(1), new Scissor(1) }
	Tool *Computer[] = { new rock(1), new paper(1), new Scissor(1) }
	//create game object start
	RPSGame Game();
	char type = 'r';   //set as intial value

	while (type != 'e') { //Use while loop to run the game
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
		if (choice == ‘r’) {
			int y = 0;
			cout << "User picked rock" << endl;
			rockCount++;
			lastPlayerToolName = "Rock";
		}
		else if choice == 'p' {
			int y = 1
				cout << "User picked paper" << endl;
				paperCount++;
				lastPlayerToolName = "Paper";
		}
		else if (choice == 's') {
			int	y = 2;
			cout << "User picked scissor" << endl;
			scissorCount++;
			lastPlayerToolName = "Scissor";
		}
		else {
			type = 'e';
		}
		int x = rand() % 2;
		bool h = Human[y]->fight(Tool*Computer);
		int computerChoice = computerTurn();
		bool c = Computer[computerChoice]->fight(Tool*Human);

		if ((h == 1) && (c == 0)) {
			cout << "Human win!" << endl;
		}
		Game.human_wins;
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
			turnCount++;
	} //end while loop
		
	//Deallocate dynamic memory
	for (int i = 0; i < 3; ++i) {
		delete Human[i];
		delete Computer[i];
	}

	}
	return 0;
}





