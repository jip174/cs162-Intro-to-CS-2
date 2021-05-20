/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/

#include "character.hpp"
#include "medusa.hpp"
#include <iostream>
#include <stdlib.h>



/******************************************
*	Medusa::Medusa        				  *
*This is the constructor. It initializes  *
*the Medusa class constructor			  *
******************************************/
Medusa::Medusa()
{
	setName(" Medusa ");
	setAttDie(2);
	setSides(6);
	setDefDie(1);
	setArmor(3);
	setStrength(8);
}
/******************************************
*	Medusa::attack        				  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Medusa::attack()
{
	int attRoll = 0;
		for (int i = 0; i < getNumOfAttDie(); i++)
		{
			attRoll += rand() % getSides() + 1;
		}
	if (attRoll == 12)
	{
		std::cout << " Medusa has used GLARE and now her opponent is stoned. " << std::endl;
		attRoll = 100;
		return attRoll;
	}
	else 
	{
		std::cout << " Medusa attacks normal" << std::endl;
		return attRoll;
	}
	
}

/******************************************
*	Medusa::defense       				  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
int Medusa::defense()
{
	int defRoll = 0;
		for (int i = 0; i < getNumOfDefDie(); i++)
		{
			defRoll += rand() % 6 + 1;
		}
	return defRoll;
}
/******************************************
*	Medusa::~Medusa      				  *
*This is the deconstructor				  *
******************************************/
Medusa::~Medusa()
{


}