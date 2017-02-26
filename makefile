#/************************************************************************
#** Program name: CS 162 - Group Project - RPS Game
#** Author: Stephanie Gritz
#** Date: February 10, 2017
#** Description: Rock Paper Scissors Game makefile
#************************************************************************/

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
#CXXFLAGS += -g
#CXXFLAGS += -O3
LDFLAGS = -lboost_date_time

all: 
	g++ -std=c++11 getChar.cpp intValid.cpp Paper.cpp play_game.cpp Rock.cpp RPSGame.cpp Scissors.cpp Tool.cpp valChar.cpp -o groupProject_

clean:
	rm -f groupProject
