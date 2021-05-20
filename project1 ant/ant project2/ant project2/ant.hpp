/*********************************************************************
** Program name: Project 1
** Author: Justin Phillips
** Date: 9/23/2017
** Description: Langtons's ant
*********************************************************************/
#ifndef ANT_H
#define ANT_H
#include <string>


class Ant
{
private:
	int x,y;
	char orientation;
	char space;

public:
	Ant();

	// Location Setters
	void setX(int);
	void setY(int);
	void setOrientation(char);

	// Location Getters
	int getX();
	int getY();
	char getOrientation();
	char getSpace();

	void setSpace(char userSpace);
};
#endif