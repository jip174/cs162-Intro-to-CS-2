/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#ifndef FOOTBALLGAME_HPP
#define FOOTBALLGAME_HPP
#include "player.hpp"
#include "space.hpp"
#include "field.hpp"
#include "defender.hpp"
class FootBallGame
{
private:
	int down = 1;
	int score;
	Field field;
	Player *goat;
	Player *defender;
	Space ***arrField;
public:

	FootBallGame();
	void setGoat(int inputGoat);
	Player *getGoat()const { return goat; }
	void setDefender(int inputDefender);
	Player *getDefender()const { return defender; }
	void play();
	void tackleBattle();
	void print();
	//void down();
	//bool downs();
	~FootBallGame();

};
#endif
