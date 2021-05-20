/*********************************************************************
** Program name : Project 4
** Author : Justin Phillips
** Date : 2 / 19 / 2018
** Description : Fantasy Combat Tournament
*********************************************************************/
#include "character.hpp"

#ifndef BARBARIAN_H
#define BARBARIAN_H

class Barbarian : public Character
{


public:
	Barbarian();
	Barbarian(std::string);
	~Barbarian();
	
	int attack();
	int defense();

};

#endif