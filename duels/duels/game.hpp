/*********************************************************************
** Program name : Project 4
** Author : Justin Phillips
** Date : 2 / 19 / 2018
** Description : Fantasy Combat Tournament
*********************************************************************/
#ifndef GAME_H
#define GAME_H
#include "character.hpp"
#include "barb.hpp"
#include "blue.hpp"
#include "harry.hpp"
#include "medusa.hpp"
#include "menu.hpp"
#include "validator.hpp"
#include "vampire.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 

class Game
{
private:
		Character * player1;
		Character * player2;
public:
	Game();
	~Game();
	Character *getPlayer1()const { return player1; }
	void setPlayer1(int inputPlayer1);
	Character *getPlayer2()const { return player2; }
	void setPlayer2(int inputPlayer2);
	void playGame();
	//void results();

};
#endif