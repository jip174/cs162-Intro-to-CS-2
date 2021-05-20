/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/

#include "ball.hpp"
#include "space.hpp"
#include <iostream>

/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
Ball::Ball()
{
	space = nullptr;
}

/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
void Ball::move(char direction)
{
	if (direction == 'w')
	{
		space = space->top;
	}
	else if (direction == 's')
	{
		space = space->bottom;
	}
	else if (direction == 'a')
	{
		space = space->left;
	}
	else if (direction == 'd')
	{
		space = space->right;
	}
	else
	{
		std::cout << "Invalid entry " << std::endl;
	}


}

/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
int Ball::getRow()
{
	return space->getRow();
}
/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
int Ball::getCol()
{
	return space->getCol();
}

/******************************************
*	Character::strengthDown       		  *
*This is the function that gets the damage*
*recieved and changes strength			  *
******************************************/
Ball::~Ball()
{

}