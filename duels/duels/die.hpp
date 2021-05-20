/*********************************************************************
** Program name : Project 3
* * Author : Justin Phillips
** Date : 2 / 05 / 2018
* * Description : Fantasy Combat Game
*********************************************************************/

#ifndef DIE_H
#define DIE_H

#include <iostream>

class Die
{
protected:
	int N;
	//int roll;
	int countSides;
public:
	
	Die();
	Die(int);
	dieRoll();
	int getSides();

};
#endif