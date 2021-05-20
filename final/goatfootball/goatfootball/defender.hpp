/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#ifndef DEFENDER_HPP
#define DEFENDER_HPP
#include "player.hpp"
#include "space.hpp"

class Defender : public Player
{
protected:
	int xCoord;
	int yCoord;
	char defenderChar;

public:
	Defender();
	~Defender();
	char getChar() { return defenderChar; }
	void setChar(int inputChar) { defenderChar = inputChar; }
	int getX() { return xCoord; }
	void setX(int inputX) { xCoord = inputX; }
	int getY() { return yCoord; }
	void setY(int inputY) { yCoord = inputY; }
	int tackle();
	void stripBall();
	void autoMove(Space*** array, int row, int col);
};

#endif

