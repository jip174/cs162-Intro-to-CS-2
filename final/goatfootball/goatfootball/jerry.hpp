/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "player.hpp"

#ifndef JERRY_H
#define JERRY_H

class Jerry : public Player
{


public:
	Jerry();
	//Jerry(std::string);
	~Jerry();
	void touchDown();
	int breakTackle();
	int tackle();

};

#endif
