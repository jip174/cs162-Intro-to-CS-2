/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "player.hpp"
#include "barry.hpp"
#include <stdlib.h>
#include <iostream>


/******************************************
*	Barbarian::Barbarian       			  *
*This is the constructor. It initializes  *
*the animal class constructor			  *
******************************************/
Barry::Barry()
{
	setName(" Barry Sanders ");
	setAttDie(2);
	setSides(8);
	setDefDie(2);
	//setSpeed(4);
	//setTackle(3);
	//setRunning(8);
	setStrength(15);
}




/******************************************
*	Barbarian::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Barry::tackle()
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
int Barry::breakTackle()
{
	int defRoll = 0;
	for (int i = 0; i < getNumOfDefDie(); i++)
	{
		defRoll += rand() % 8 + 1;
	}
	return defRoll;
}
/******************************************
*	Barbarian::defense       			  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
void Barry::touchDown()
{

std::cout <<  "__________________________________________________" << std::endl;
std::cout <<  "                    ______                        " << std::endl;
std::cout <<  "                   | o  o |	                    " << std::endl;
std::cout <<  "                |  |------|  |                    " << std::endl;
std::cout <<  "                |  \------/  |                    " << std::endl;
std::cout <<  "                |___|    |___|                    " << std::endl;
std::cout <<  "                    | 20 |                        " << std::endl;
std::cout <<  "                    /----\                        " << std::endl;
std::cout <<  "                   /      \                       " << std::endl;
std::cout <<  "                  /        \                      " << std::endl;
std::cout <<  "                                                  " << std::endl;
std::cout <<  "                                                  " << std::endl;
std::cout <<  "__________________________________________________" << std::endl;
std::cout << std::endl;
		
}
/******************************************
*	Barbarian::~Barbarian        		  *
*This is the deconstructor				  *
******************************************/
Barry::~Barry()
{

}