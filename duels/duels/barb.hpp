/*********************************************************************
** Program name : Project 3
* * Author : Justin Phillips
** Date : 2 / 05 / 2018
* * Description : Fantasy Combat Game
*********************************************************************/
#include "character.hpp"

#ifndef BARBARIAN_H
#define BARBARIAN_H

class Barbarian : public Character
{


public:
	Barbarian();
	~Barbarian();
	
	int attack();
	int defense();

};

#endif