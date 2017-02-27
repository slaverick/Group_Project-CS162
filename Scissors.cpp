/********************************************************************* 
** Program: CS 162 Group Project Rock Paper Scissors
** Author: Group 8
** Date: 2/26/17
** Description: Implementation file for the Scissors class.
*********************************************************************/

#include "Scissors.hpp"

//default constructor
Scissors::Scissors()
{
  type = 's';
  strength = 1;
}

//constructor
Scissors::Scissors(int s)
{
  strength = s;
  type = 's';
}

GameResult Scissors::fight(Tool *t)
{
  //get computer's choice
  char c = t->getType();
  
  //determine winner based on computer's choice
  switch (c)
  {
    case 's':
      if (strength > t->getStrength())
        return COMPUTER_WINS;
      else if (strength == t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;

    case 'r':
      if (static_cast<double>(strength/2)>t->getStrength())
        return COMPUTER_WINS;
       else if (static_cast<double>(strength/2)==t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;
    
    case 'p':
      if ((strength*2)>t->getStrength())
         return COMPUTER_WINS;
       else if ((strength*2)==t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;
  }
}
