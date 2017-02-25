#include "Tool.hpp"

#ifndef SCISSORS_HPP
#define SCISSORS_HPP

class Scissors: public Tool
{
public:
	//default constructor
  	Scissors();

  	//constructor
  	Scissors(int);

  	//method to play a round
  	GameResult fight(Tool*);
};

#endif
