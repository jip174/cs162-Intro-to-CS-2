/*********************************************************************
** Program name : Project 3
* * Author : Justin Phillips
** Date : 2 / 05 / 2018
* * Description : Fantasy Combat Game
*********************************************************************/
#include "die.hpp"
#include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h> // to access rand

/******************************************
*	DIE::DIE         					  *
*This is the constructor. It initializes  *
*the die to run war game				  *
******************************************/

Die::Die() 
{
	N = 6 ;
	srand(std::time(NULL));
}

/******************************************
*	DIE::DIE         					  *
*This is the constructor. It initializes  *
*the die to run war game but counts sides *
* of die								  *
******************************************/

Die::Die(int countSides)
{
	N = countSides;
	srand(std::time(NULL));
}


/******************************************
*	DIE::dieRoll         				  *
*This is the function that returns a random 
*int between one and sides of die as a	  *
*result of rolling once.				  *
******************************************/

int Die::dieRoll()
{
	
	int rollDie = (rand() % N) + 1;
	return rollDie;
}


/******************************************
*	DIE::getSides         				  *
*This is the function that returns the	  *
*number of sides on the die				  *
*										  *
******************************************/

int Die::getSides()
{
	return N;
}