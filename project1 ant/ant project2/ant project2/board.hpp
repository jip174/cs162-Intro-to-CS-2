/*********************************************************************
** Program name: Project 1
** Author: Justin Phillips
** Date: 9/23/2017
** Description: Langtons's ant
*********************************************************************/

#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "ant.hpp"

class Board
{
private:
	int length,width;
	char** boardPtr;
	int xX,yY;
	char boardSpace;

	Ant langAnt;

public:
	Board();
	Board(int, int);

	void print();
	void setAnt(int x, int y, char dir);
	void move();
	char getSpace();
	void clearBoard();
};

#endif 
