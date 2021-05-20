/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/
#include "character.hpp"

#ifndef BLUEMEN_H
#define BLUEMEN_H

class BlueMen : public Character
{

public:
	BlueMen();
	~BlueMen();

	virtual int attack();
	virtual int defense();
	virtual void strengthDown(int damageRecieved);
};
#endif