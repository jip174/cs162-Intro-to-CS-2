/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "player.hpp"

#ifndef JIM_HPP
#define JIM_HPP

class Jim : public Player
{


public:
	Jim();
	//Jim(std::string);
	~Jim();
	void touchDown();
	int tackle();
	int breakTackle();

};

#endif
