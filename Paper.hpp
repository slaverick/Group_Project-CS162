#include "Tool.hpp"

#ifndef PAPER_HPP
#define PAPER_HPP

class Paper: public Tool
{
public:
	//default constructor
  	Paper();

  	//constructor
  	Paper(int);

  	//method to play a round
  	GameResult fight(Tool*);
};

#endif
