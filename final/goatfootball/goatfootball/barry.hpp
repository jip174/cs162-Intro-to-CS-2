/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "player.hpp"

#ifndef BARRY_H
#define BARRY_H

class Barry : public Player
{


public:
	Barry();
	~Barry();

	int tackle();
	int breakTackle();
	void touchDown();

};

#endif
