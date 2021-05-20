/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "player.hpp"
#include "jim.hpp"
#include <stdlib.h>
#include <iostream>


/******************************************
*	Barbarian::Barbarian       			  *
*This is the constructor. It initializes  *
*the animal class constructor			  *
******************************************/
Jim::Jim()
{
	setName(" Jim Brown ");
	setAttDie(2);
	setSides(6);
	setDefDie(2);
	//setSpeed(4);
	//setTackle(3);
	//setRunning(8);
	setStrength(18);
}

/******************************************
*	Barbarian::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Jim::tackle()
{
	int attRoll = 0;
	for (int i = 0; i < getNumOfAttDie(); i++)
	{
		attRoll += rand() % getSides() + 1;
	}
	return attRoll;
}

/******************************************
*	Barbarian::defense       			  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
int Jim::breakTackle()
{
	int defRoll = 0;
	for (int i = 0; i < getNumOfDefDie(); i++)
	{
		defRoll += rand() % 6 + 1;
	}
	return defRoll;
}

/******************************************
*	Barbarian::defense       			  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
void Jim::touchDown()
{

	std::cout << "__________________________________________________" << std::endl;
	std::cout << "                    ______                        " << std::endl;
	std::cout << "      |     |      | o  o |	                    " << std::endl;
	std::cout << "      |     |   |  |------|  |                    " << std::endl;
	std::cout << "      |_____|   |  \------/  |                    " << std::endl;
	std::cout << "         |      |___|    |___|                    " << std::endl;
	std::cout << "         |          |    |                        " << std::endl;
	std::cout << "                    /----\                        " << std::endl;
	std::cout << "                   /      \                       " << std::endl;
	std::cout << "        <++>      /        \                      " << std::endl;
	std::cout << "                                                  " << std::endl;
	std::cout << "            TOUCHDOWN!!!!!                        " << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	std::cout << std::endl;
}
/******************************************
*	Barbarian::~Barbarian        		  *
*This is the deconstructor				  *
******************************************/
Jim::~Jim()
{

}