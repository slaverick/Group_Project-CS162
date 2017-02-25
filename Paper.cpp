#include "Paper.hpp"

//default constructor
Paper::Paper()
{
  type = 'p';
  strength = 1;
}

//constructor
Paper::Paper(int s)
{
  strength = s;
  type = 'p';
}

GameResult Paper::fight(Tool *t)
{
  //get computer's choice
  char c = t->getType();
  
  //determine winner based on computer's choice
  switch (c)
  {
    case 'p':
      if (strength > t->getStrength())
        return COMPUTER_WINS;
      else if (strength == t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;

    case 's':
      if (static_cast<double>(strength/2)>t->getStrength())
        return COMPUTER_WINS;
       else if (static_cast<double>(strength/2)==t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;
    
    case 'r':
      if ((strength*2)>t->getStrength())
         return COMPUTER_WINS;
       else if ((strength*2)==t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;
  }
}
