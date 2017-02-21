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
}

bool Rock::fight(Tool *t)
{
  //get computer's choice
  char c = t->getType();
  
  //determine winner based on computer's choice
  switch (c)
  {
    case 'r':
      if (strength > t->getStrength())
        return true;
      else
        return false;
      break;

    case 'p':
      if (static_cast<double>(strength/2)>t->getStrength())
        return true;
      else
        return false;
      break;
    
    case 's':
      if ((strength*2)>t->getStrength())
         return true;
      else
        return false;
      break;
  }
}
