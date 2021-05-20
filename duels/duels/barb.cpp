/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/
#include "character.hpp"
#include "barb.hpp"
#include <stdlib.h>


/******************************************
*	Barbarian::Barbarian       			  *
*This is the constructor. It initializes  *
*the animal class constructor			  *
******************************************/
Barbarian::Barbarian()
{
	setName(" Barbarian ");
	setAttDie(2);
	setSides(6);
	setDefDie(2);
	setArmor(0);
	setStrength(12);
}

/******************************************
*	Barbarian::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Barbarian::attack()
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
int Barbarian::defense()
{
	int defRoll = 0;
		for (int i = 0; i < getNumOfDefDie(); i++)
		{
			defRoll += rand() % 6 + 1;
		}
	return defRoll;
}
/******************************************
*	Barbarian::~Barbarian        		  *
*This is the deconstructor				  *
******************************************/
Barbarian::~Barbarian()
{

}