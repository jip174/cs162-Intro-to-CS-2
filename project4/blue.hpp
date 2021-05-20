/*********************************************************************
** Program name : Project 4
** Author : Justin Phillips
** Date : 2 / 19 / 2018
** Description : Fantasy Combat Tournament
*********************************************************************/
#include "character.hpp"

#ifndef BLUEMEN_H
#define BLUEMEN_H

class BlueMen : public Character
{

public:
	BlueMen();
	BlueMen(std::string);
	~BlueMen();

	virtual int attack();
	virtual int defense();
	virtual void strengthDown(int damageRecieved);
};
#endif