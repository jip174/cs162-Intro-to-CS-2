/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/
#include "character.hpp"

#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "character.hpp"

class Vampire : public Character
{
public:
	Vampire();
	~Vampire();
	
	virtual int attack();
	virtual int defense();
	virtual void strengthDown(int damageRecieved);
};

#endif