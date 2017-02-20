/*******************************************************************
Project: CS 162 Project 2
Author: Scott Laverick
Date: 1/31/2017
Description: The Item class has the following members: a name (string), 
a unit type - for measurement (string), a quantity to purchase (int), and 
a price (double). It's behaviors include calculated the price of an item 
(price * quantity), an overloaded == operator, and getters and setters.
**********************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP
#include <iostream>
#include <iomanip>
#include <string>


class Item
{
private:
	std::string name;
	std::string unit;
	int quantity;
	double price;

public:
	Item(std::string, std::string, int, double);
//	~Item();

	double calcPrice();
	void print();
	std::string getName();
	bool operator==(const Item*);

};
#endif