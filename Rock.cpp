#include "Rock.hpp"

//default constructor
Rock::Rock()
{
  type = 'r';
  strength = 1;
}

//constructor
Rock::Rock(int s)
{
  strength = s;
  type = 'r';
}

GameResult Rock::fight(Tool *t)
{
  //get computer's choice
  char c = t->getType();
  
  //determine winner based on computer's choice
  switch (c)
  {
    case 'r':
      if (strength > t->getStrength())
        return COMPUTER_WINS;
      else if (strength == t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;

    case 'p':
      if (static_cast<double>(strength/2)>t->getStrength())
        return COMPUTER_WINS;
       else if (static_cast<double>(strength/2)==t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;
    
    case 's':
      if ((strength*2)>t->getStrength())
         return COMPUTER_WINS;
       else if ((strength*2)==t->getStrength())
        return TIED;
      else
        return PLAYER_WINS;
      break;
  }
}
