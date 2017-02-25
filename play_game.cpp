// play_game.cpp : Defines the entry point for the console application.

/**************************************************************************
**  Program Name: play_game.cpp
**  Name: Vinh Dong
**  Date: 2/20/2017
**  Description: 
**
***************************************************************************/
//#include "stdafx.h"
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

int scissorsCount=0;  
int rockCount=0;
int paperCount=0;
std::string lastPlayerToolName;
int turnCount=1;

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
         randomChoice =  (rand() % 3) +1;
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
         if (rand() % 2 +1 ==2)
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
                if (rockCount > scissorsCount)
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
                 if (paperCount > scissorsCount)
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
			cout << "What you want to set the computer's strengths to?" << endl;
			int comStrength;
			cin >> comStrength;
			for (int i = 0; i < 3; ++i) {
			Human[i]->setStrength(humanStrength);
			Computer[i]->setStrength(comStrength);
			}
		}

	cout << "Choose your tool (r-rock, p-paper, s-scissor, e-exit):" << endl;
		char choice;
		cin >> choice;
		int y;
		if (choice == 'r') {   //probably need another method to convert char input to integer
			y = 0;
			cout << "User picked rock" << endl;
			rockCount++;
			lastPlayerToolName = "Rock";
		}
		else if (choice == 'p') {
			 y = 1;
				cout << "User picked paper" << endl;
				paperCount++;
				lastPlayerToolName = "Paper";

		}
		else if (choice == 's') {
			y = 2;
			cout << "User picked scissor" << endl;
			scissorsCount++;
			lastPlayerToolName = "Scissor";
		}

		

		if (choice != 'e')
		{		
			//ai decides tool to use
			int computerChoice = computerTurn();
		
			//have ai tool fight player tool
			GameResult result = Computer[(computerChoice-1)]->fight(Human[y]);
		
			switch (result)
			{
				case PLAYER_WINS:
				{
					cout << "Human wins!" << endl;
					Game.sethuman_wins();
					break;
				}
				case COMPUTER_WINS:
				{
					cout << "Computer wins :-(" << endl;
					Game.setcomputer_wins();
					break;
				}
				case TIED:
				{
					cout << "Tie" << endl;
					Game.setties();
				}

				}
		




		

			

			cout << "Human wins: " << Game.gethuman_wins() << endl;
			cout << "Computer wins: " << Game.getcomputer_wins() << endl;
			cout << "Ties: " << Game.getties() << endl;
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





