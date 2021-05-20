/*********************************************************************
** Program name : Project 4
** Author : Justin Phillips
** Date : 2 / 19 / 2018
** Description : Fantasy Combat Tournament
*********************************************************************/

#include "character.hpp"
#include "blue.hpp"
#include <stdlib.h>
#include <iostream>
/******************************************
*	BlueMen::BlueMen        			  *
*This is the constructor. It initializes  *
*the blueMen class constructor			  *
******************************************/
BlueMen::BlueMen()
{
	setName(" Blue Men ");
	setAttDie(2);
	setSides(10);
	setDefDie(3);
	setArmor(3);
	setStrength(12);
}

/******************************************
*	BlueMen::BlueMen        			  *
*This is the constructor. It initializes  *
*the blueMen class constructor			  *
******************************************/
BlueMen::BlueMen(std::string inputName)
{
	setName(inputName);
	setAttDie(2);
	setSides(10);
	setDefDie(3);
	setArmor(3);
	setStrength(12);
}
/******************************************
*	BlueMen::attack        				  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int BlueMen::attack()
{
	int attRoll = 0;
		for (int i = 0; i < getNumOfAttDie(); i++)
		{
			attRoll += rand() % getSides() + 1;
		}
	return attRoll;
}

/******************************************
*	BlueMen::defense       				  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
int BlueMen::defense()
{
	int defRoll = 0;
		for (int i = 0; i < getNumOfDefDie(); i++)
		{
			defRoll += rand() % 6 + 1;
		}
	return defRoll;
}
/******************************************
*	BlueMen::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void BlueMen::strengthDown(int damageRecieved)
{
	int totalDamage = 0;
	if (damageRecieved > 0)
	{
		totalDamage += damageRecieved;
		//damageRecieved -= (getArmor() + defense());
			setStrength(getStrength() - damageRecieved);
	}
	if (totalDamage > 4)
	{
		std::cout << "Blue Man down!!!! " << std::endl;
		setDefDie(getStrength() / 4);
	}
		
}

/******************************************
*	BlueMen::~BlueMen        			  *
*This is the deconstructor				  *
******************************************/
BlueMen::~BlueMen()
{


}