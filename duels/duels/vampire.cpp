/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/

#include "character.hpp"
#include "vampire.hpp"

#include <iostream>
#include <stdlib.h>


/******************************************
*	Vampire::Vampire       				  *
*This is the constructor. It initializes  *
*the vampire class constructor			  *
******************************************/
Vampire::Vampire() 
{
	setName(" Vampire ");
	setAttDie(1);
	setSides(12);
	setDefDie(1);
	setArmor(1);
	setStrength(18);
}

/******************************************
*	Vampire::~Vampire      				  *
*This is the deconstructor				  *
******************************************/
Vampire::~Vampire()
{


}

/******************************************
*	Vampire::attack        				  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Vampire::attack()
{
	int attRoll = 0;
		for (int i = 0; i < getNumOfAttDie(); i++)
		{
			attRoll += rand() % getSides() + 1;
		}
	return attRoll;
}

/******************************************
*	Vampire::defense       				  *
*This is the function that gets the defense  
*number and returns it to the player	  *	
******************************************/
int Vampire::defense()
{
	int defRoll = 0;
		for (int i = 0; i < getNumOfDefDie(); i++)
		{
			defRoll += rand() % 6 + 1;
		}
	return defRoll;
}
/******************************************
*	Vampire::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void Vampire::strengthDown(int damageRecieved)
{
	if (damageRecieved > 0)
		if (rand() % 2 == 0)
		{
			//damageRecieved -= (getArmor() + defense());
			setStrength(getStrength() - damageRecieved);
		}
		else	
		{
			std::cout << " Vampire used CHARM and no attack is done. " << std::endl;
			damageRecieved = 0;
		}
}
