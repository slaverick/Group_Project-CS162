#include "Tool.hpp"

#ifndef ROCK_HPP
#define ROCK_HPP

class Rock: public Tool
{
public:
	//default constructor
  	Rock();

  	//constructor
  	Rock(int);

  	//method to play a round
  	bool fight(Tool*);
};

#endif
