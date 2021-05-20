/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#ifndef FIELD_HPP
#define FIELD_HPP
#include "player.hpp"
#include "space.hpp"
class Field
{
private:
	
	int numSteps;
	int rows;
	int cols;
	//Player ***fieldArr;
	Space ***fieldArr;
public:
	
	Field();
	void setField();
	void displayField();
	Space ***getField();
	int getRows();
	int getCols();
	~Field();
};
#endif