/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/

#include "character.hpp"
#include <stdlib.h>
#include <iostream>
/******************************************
*	Character::Character       			  *
*This is the constructor. It initializes  *
*the Character class constructor		  *
******************************************/
Character::Character()
{



}

/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Character::attack()
 {
	int attRoll = 0;
		 for (int i = 0; i < getNumOfAttDie(); i++)
		 {
			 attRoll += rand() % getSides() + 1;
		 }
	 return attRoll;
 }
/******************************************
*	Character::defense       			  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
 int Character::defense()
 {
	 int defRoll = 0;
		 for (int i = 0; i < getNumOfDefDie(); i++)
		 {
			 defRoll += rand() % 6 + 1;
		 }
	 return defRoll;
 }
 /******************************************
 *	Character::alive       				   *
 *This is function checks to see if the    *
 *character is alive by see if strength is *
 *greater then zero						   *
 ******************************************/
bool Character::alive()
 {
	if (getStrength() <= 0)
	{
		return false;
	}
	return true;
 }

/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void Character::strengthDown(int damageRecieved)
 {
	if (damageRecieved > 0)
	{
		//damageRecieved -= (getArmor()-defense());
		//std::cout << damageRecieved << " received. " << std::endl;
		//std::cout << getStrength() << " strength.before set " << std::endl;
		setStrength(getStrength() - damageRecieved);
		//std::cout << " New Strength " << getStrength() << " Name" << getName() << std::endl;
	}
	else
	{
		std::cout << " Defense was greater then attack no damage done. " << std::endl;

	}
 }

 
 /*****************************************
*	Character::~Character        		  *
*This is the deconstructor				  *
******************************************/
Character::~Character()
{


}

