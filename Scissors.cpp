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
}

bool Scissors::fight(Tool *t)
{
  //get computer's choice
  char c = t->getType();
  
  //determine winner based on computer's choice
  switch (c)
  {
    case 's':
      if (strength > t->getStrength())
        return true;
      else
        return false;
      break;

    case 'r':
      if (static_cast<double>(strength/2)>t->getStrength())
        return true;
      else
        return false;
      break;
    
    case 'p':
      if ((strength*2)>t->getStrength())
         return true;
      else
        return false;
      break;
  }
}
