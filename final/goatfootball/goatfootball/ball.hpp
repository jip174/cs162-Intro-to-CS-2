/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#ifndef BALL_HPP
#define BALL_HPP
#include "space.hpp"

class Ball
{
public:
	Ball();
	Space *space;
	void move(char direction);
	int getRow();
	int getCol();
	~Ball();
};

#endif

