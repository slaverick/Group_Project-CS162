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
}

bool Paper::fight(Tool *t)
{
  //get computer's choice
  char c = t->getType();
  
  //determine winner based on computer's choice
  switch (c)
  {
    case 'p':
      if (strength > t->getStrength())
        return true;
      else
        return false;
      break;

    case 's':
      if (static_cast<double>(strength/2)>t->getStrength())
        return true;
      else
        return false;
      break;
    
    case 'r':
      if ((strength*2)>t->getStrength())
         return true;
      else
        return false;
      break;
  }
}
