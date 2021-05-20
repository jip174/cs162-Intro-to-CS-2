/*********************************************************************
** Program name: Project 1
** Author: Justin Phillips
** Date: 9/23/2017
** Description: Langtons's ant
*********************************************************************/

#include<iostream>
#include"ant.hpp"

/******************************************
*	Ant::Ant        				      *
*This is the constructor. It initializes  *
*the ant in langtons ant				  *
******************************************/

Ant::Ant()
{
	x = 5;
	y = 5;
	orientation= 'N';
	space= ' ';
}

/******************************************
*	Ant::setX							  *
*This function validates the  value		  *
*of x before signing it to the member	  *
*variable.								  *
******************************************/

void Ant::setX(int spotX )
{
	x = spotX;
}


/******************************************
*	Ant::setY							  *
*This function validates the  value		  *
*y before signing it to the member		  *
*variable.								  *
******************************************/

void Ant::setY(int spotY)

{
	y = spotY;
}

/******************************************
*	Ant::setOreientation				  *
*This function validates the  value		  *
*orientation before signing it to the	  *
* member variable.						  *
******************************************/

void Ant::setOrientation(char orient)
{
	orientation = orient;
}

/******************************************
*	Ant::setSpace						  *
*This function validates the value		  *
*space before signing it to the member	  *
*variable.								  *
******************************************/

void Ant::setSpace(char spaceSpace)
{
	space = spaceSpace;
}

/******************************************
*	Ant::getX       				      *
*This function returns x				  *
******************************************/

int Ant::getX()
{
	return x;
}

/******************************************
*	Ant::getY       				      *
*This function returns y    			  *
******************************************/

int Ant::getY()
{
	return y;
}

/******************************************
*	Ant::getOrientation        			  *
*This function returns orientation		  *
******************************************/

char Ant::getOrientation()
{
	return orientation;
}

/******************************************
*	Ant::getSpace        				  *
*This function returns space			  *
******************************************/

char Ant::getSpace()
{
	return space;
}

