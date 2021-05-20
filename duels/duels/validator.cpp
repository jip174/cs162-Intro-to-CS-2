/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/

#include "validator.hpp"
#include <string>
#include <iostream>
#include <limits>//numeric_limits<streamsize>


int numValidator(int min, int max) // validates to make sure user input is a integer
{
	int input;
	bool valid = false;
	while (!valid)
	{
		
		if (std::cin >> input && input >= min && input <= max) //test to see if user input is an integer
		{
			valid = true;
			std::cin.ignore(100000, '\n');
		}
		else
		{
			std::cout << "Invalid entry please try again. " << std::endl;
				std::cin.clear();
				std::cin.ignore(100000, '\n');
		}
	}
	return input;
}

/******************************************
*	getInt        						  *
*This is the function that checks user    *
*input to make sure its an int			  *
******************************************/
int getInt()
{
	int inputInt;

	do 
	{	
		if (!std::cin)
		{
			std::cin.clear();// clears error
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); //remove stored buffer
			std::cout << "Invalid entry please enter the proper number. " << std::endl;
		}
		std::cin >> inputInt;
	} while (!std::cin);
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	return inputInt;
}


