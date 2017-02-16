# Group_Project-CS162

//Group Project for Rock Paper Scissors game

class Tool
{
protected:
  int strength;
  char type;

public:
  Tool();
  virtual void setStrength(int);
  virtual bool fight(Tool)
};

Tool::Tool()
{
  strength = 1;
}

void Tool::setStrength(int str)
{
  strength = str;
}

bool Tool::fight(Tool t)
{
 =0;
}

class Rock : public Tool
{
private:
  (inherited)
public:
  Rock();
  bool fight(Tool)
};

Rock::Rock()
{
  type = r;
  strength = 1;
}

bool Rock::fight(Tool t)
{
  char c = t.type;
  
  switch (c)
  {
  case r
  {
    if (strength > t.strength)
      return true;
    else
      return false;
    break;
  }
  case p
  {
    if (static_cast<double>(strength/2)>t.strength)
      return true;
    else
      return false;
    break;
  }
  case s
  {
    if ((strength*2)>t.strength)
       return true;
    else
      return false;
    break;
  }
  }
