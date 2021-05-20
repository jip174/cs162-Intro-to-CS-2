/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "space.hpp"

/******************************************
*	Character::Character       			  *
*This is the constructor. It initializes  *
*the Character class constructor		  *
******************************************/
Space::Space()
{
	Space *top = nullptr;
	Space *bottom = nullptr;
	Space *right = nullptr;
	Space *left = nullptr;
	empty = false;
	goat;
	row;
	col;
	touchdown = false;
	
}

/*****************************************
*	Space::~Space			       		  *
*This is the deconstructor				  *
******************************************/
Space::~Space()
{

}