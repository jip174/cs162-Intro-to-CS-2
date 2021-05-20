/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/
#include "character.hpp"

#ifndef MEDUSA_H
#define MEDUSA_H

class Medusa : public Character
{


public:
	Medusa();
	~Medusa();
	
	virtual int attack();
	virtual int defense();

	};

#endif