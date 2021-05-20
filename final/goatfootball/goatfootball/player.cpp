/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/

#include "player.hpp"
#include <stdlib.h>
#include <iostream>

/******************************************
*	Character::Character       			  *
*This is the constructor. It initializes  *
*the Character class constructor		  *
******************************************/
Player::Player()
{
	setMark('O');


}

/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Player::tackle()
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
int Player::breakTackle()
{
	int defRoll = 0;
	for (int i = 0; i < getNumOfDefDie(); i++)
	{
		defRoll += rand() % 6 + 1;
	}
	return defRoll;
}
/******************************************
*	Character::defense       			  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
bool Player::getHasBall()
{
	if (true)
	{
		return hasBall;
	}
	else {
		std::cout << " No Ball " << std::endl;
	}
}
/******************************************
*	Character::defense       			  *
*This is the function that gets the defense
*number and returns it to the player	  *
******************************************/
void Player::move(char direction)
{
	Space* tempdir;
		if (direction == 'W')
		{
			tempdir = space->top;
			space->top = space;
			
			//space = space->top;
			if (hasBall)
			{
				ball.move(direction);
			}
			else
			{
				std::cout << "Forgot the rock!!" << std::endl;
			}
		}
		
		else if (direction == 'S')
		{
			space = space->bottom;
			if (hasBall)
			{
				ball.move(direction);
			}
			else
			{
				std::cout << "Forgot the rock!!" << std::endl;
			}
		}
		else if (direction == 'A')
		{
			space = space->left;
			if (hasBall)
			{
				ball.move(direction);
			}
			else
			{
				std::cout << "Forgot the rock!!" << std::endl;
			}
		}
		else if (direction == 'D')
		{
			space = space->right;
			if (hasBall)
			{
				ball.move(direction);
			}
			else
			{
				std::cout << "Forgot the rock!!" << std::endl;
			}
		}
		else
		{
			std::cout << "Invalid entry" << std::endl;
		}


}

/******************************************
*	Character::alive       				   *
*This is function checks to see if the    *
*character is alive by see if strength is *
*greater then zero						   *
******************************************/
bool Player::downs()
{
	if (getDown() == 5)
	{
		std::cout << " Failed to scored turnover on downs. " << std::endl;
		return false;
	}
	return true;
}

/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void Player::strengthDown(int damageRecieved)
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
/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void Player::printChar()
{
	std::cout << "Name: " << getName() << "Strength: " << getStrength() << std::endl;
}
/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void Player::touchDown()
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




/*****************************************
*	Character::~Character        		  *
*This is the deconstructor				  *
******************************************/
Player::~Player()
{


}
