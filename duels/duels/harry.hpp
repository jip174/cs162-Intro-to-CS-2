/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/
#include "character.hpp"

#ifndef HARRYPOTTER_H
#define HARRYPOTTER_H

class HarryPotter : public Character
{
private:
	int hogwarts;
public:
	HarryPotter();
	~HarryPotter();
	void setHog(int inputHog) { hogwarts= inputHog; }
	int getHog() { return hogwarts; }
	
	virtual int attack();
	virtual int defense();
	virtual void strengthDown(int damageRecieved);
};

#endif