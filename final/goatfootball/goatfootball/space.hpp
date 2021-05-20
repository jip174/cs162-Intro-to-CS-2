/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#ifndef SPACE_HPP
#define SPACE_HPP
#include <string>
class Space
{

protected:
	char goat;
	char name;
	int row;
	int col;
	bool empty;
	bool touchdown;

public:
	Space();
	Space *top;
	Space *bottom;
	Space *right;
	Space *left;
	void open() { empty = true; }
	void opponent() { empty = false; }
	int getRow() { return row; }
	int getCol() { return col; }
	char getGoat() { return goat; }
	char getName() { return name; }
	//char getChar() { return char; }
	bool getEmpty() { return empty; }
	bool getTouchdown() { return touchdown; }

	~Space();
};
#endif