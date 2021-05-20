/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/

#include "character.hpp"
#include "harry.hpp"
#include <iostream>
#include <stdlib.h>

/******************************************
*	HarryPotter::HarryPotter        	  *
*This is the constructor. It initializes  *
*the animal class constructor			  *
******************************************/
HarryPotter::HarryPotter()
{
	setName(" Harry Potter ");
	setAttDie(2);
	setSides(6);
	setDefDie(2);
	setArmor(0);
	setStrength(10);
	setHog(1);
}
/******************************************
*	HarryPotter::attack      			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int HarryPotter::attack()
{
	int attRoll = 0;
		for (int i = 0; i < getNumOfAttDie(); i++)
		{
			attRoll += rand() % getSides() + 1;
		}
	return attRoll;
}

/******************************************
*	HarryPotter::defense       			  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
int HarryPotter::defense()
{
	int defRoll = 0;
		for (int i = 0; i < getNumOfDefDie(); i++)
		{
			defRoll += rand() % 6 + 1;
		}
	return defRoll;
}
/******************************************
*	HarryPotter::strengthDown       	  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void HarryPotter::strengthDown(int damageRecieved)
{
	
	
	if (damageRecieved > 0)
		{
			//damageRecieved -= (getArmor() + defense());
			setStrength(getStrength() - damageRecieved);
			//std::cout << "HOG1 " << hogwarts << std::endl;
			if (getStrength() < 0 && getHog() == 1)
			{
				
				std::cout << " Harry has used HOGWARTS and has double strength! " << std::endl;
				setStrength(20);
				hogwarts--;
				setHog(hogwarts);
				//std::cout << "HOG2 " << hogwarts << std::endl;
			}
			//else if (hogwarts == 0)
				//{
					//std::cout << " Harry can only use HOGWARTS one time he is DEAD!! " << std::endl;
					//setStrength(0);
					
				//}
			
		
		}
}
/******************************************
*	HarryPotter::~HarryPotter        	  *
*This is the deconstructor				  *
******************************************/
HarryPotter::~HarryPotter()
{


}