/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "player.hpp"

#ifndef RANDY_H
#define RANDY_H

class Randy : public Player
{


public:
	Randy();
	//Randy(std::string);
	~Randy();
	void touchDown();
	int tackle();
	int breakTackle();

};

#endif
