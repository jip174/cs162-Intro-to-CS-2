/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/

#include "defender.hpp"
#include "player.hpp"
#include <iostream>

/******************************************
*	Barbarian::Barbarian       			  *
*This is the constructor. It initializes  *
*the animal class constructor			  *
******************************************/
Defender::Defender()
{
	//this->xCoord = col;
	//this->yCoord = row;
	//this->defenderChar = mark;
	setName(" Big D ");
	setAttDie(1);
	setSides(6);
	setDefDie(2);
	//setSpeed(4);
	//setTackle(3);
	//setRunning(0);
	setStrength(6);
	setChar('O');
}

/******************************************
*	Barbarian::Barbarian       			  *
*This is the constructor. It initializes  *
*the animal class constructor			  *
******************************************/
void Defender::stripBall()
{

}
/******************************************
*	Barbarian::Barbarian       			  *
*This is the constructor. It initializes  *
*the animal class constructor			  *
******************************************/
void Defender::autoMove(Space*** array, int row, int col)
{
	
	
		int direction = rand() % 4 + 1;
		//Move up
		if (direction == 1 && row > 0 && array[row - 1][col] ==nullptr)
		{
			array[row - 1][col] = array[row][col];
			array[row][col] = nullptr;
		}
		//Move right
		else if (direction == 2 && col < 19 && array[row][col +1] ==nullptr)
		{
			array[row][col + 1] = array[row][col];
			array[row][col] = nullptr;
		}
		//Move down
		else if (direction == 3 && row < 19 && array[row +1][col] ==nullptr)
		{
			array[row + 1][col] = array[row][col];
			array[row][col] = nullptr;
		}
		//Move left
		else if (direction == 4 && col > 0 && array[row][col - 1]==nullptr)
		{
			array[row][col - 1] = array[row][col];
			array[row][col] = nullptr;
		}
	}
	
/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
int Defender::tackle()
{
	int attRoll = 0;
	for (int i = 0; i < getNumOfAttDie(); i++)
	{
		attRoll += rand() % getSides() + 1;
	}
	if (attRoll == 12)
	{
		std::cout << " Ball Stripped.. FUMBLE!!!" << std::endl;
	}
	return attRoll;
}
/*****************************************
*	Space::~Space			       		  *
*This is the deconstructor				  *
******************************************/
Defender::~Defender()
{

}