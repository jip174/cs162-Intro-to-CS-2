/*********************************************************************
** Program name: Project 1
** Author: Justin Phillips
** Date: 9/23/2017
** Description: Langtons's ant
*********************************************************************/
#include "board.hpp"
#include <iostream>

/******************************************
*	Board::Board          				  *
*This is the constructor. It initializes  *
*the board to run langtons ant			  *
******************************************/


Board::Board() // default contructor
{
	length = 5;
	width = 5;

	boardPtr = new char*[width];
	
	for (int r = 0; r < width ; r++)
	{
		boardPtr[r] = new char[length];
	}
	
	
	for (int r = 0; r < width; r++)// make board blank
	{
		for (int c = 0; c < length; c++)
		{
			boardPtr[r][c] = ' ';
		}
	}
}

Board::Board(int wid, int len) // user built board
{
	length = len;
	width = wid;

	boardPtr = new char*[width];

	for (int r = 0; r < width; r++)
	{
		boardPtr[r] = new char[length];
	}

	for (int r = 0; r < width; r++)// make board blank
	{
		for (int c = 0; c < length; c++)
		{
			boardPtr[r][c] = ' ';
		}
	}
}
/*****************************************
*	Board::print						 *
*This function prints out the 			 *
*Langton Ant board						 *
******************************************/

void Board::print()
{
for (int r = 0; r < length; r++)
{
	for (int c = 0; c < width; c++)
	{
		std::cout << boardPtr[r][c];
	}
	std::cout << std::endl;
}
}

/*****************************************
*	Board::setAnt						 *
*This function prints out the 			 *
*Langton Ant board						 *
******************************************/

void Board::setAnt(int x, int y, char orient)
{
	langAnt.setX(x);
	langAnt.setY(y);
	langAnt.setOrientation(orient);
	boardPtr[x][y] = '@';
}
/*****************************************
*	Board::move							 *
*This function prints out the 			 *
*Langton Ant board						 *
******************************************/

void Board::move()
{
	xX = langAnt.getX();
	yY = langAnt.getY();
	boardSpace = langAnt.getSpace();

	if (langAnt.getOrientation() == 'N')
	{
		if (boardSpace == ' ')
		{
			langAnt.setX((xX + 1) % width);
			langAnt.setOrientation('E');
		}
		else
		{
			if ((xX - 1) < 0)
			{
				langAnt.setX(width - 1);
			}
			else
			{
				langAnt.setX(xX - 1);
			}
			langAnt.setOrientation('W');
		}
	}
	else if (langAnt.getOrientation() == 'E')
	{
		if (boardSpace == ' ')
		{
			langAnt.setY((yY + 1) % length);
			langAnt.setOrientation('S');
		}
		else
		{
			if ((yY - 1) < 0)
			{
				langAnt.setY(length - 1);
			}
			else
			{
				langAnt.setY(yY - 1);
			}
			langAnt.setOrientation('N');
		}
	}
	else if (langAnt.getOrientation() == 'S')
	{
		if (boardSpace == ' ')
		{
			if ((xX - 1) < 0)
			{
				langAnt.setX(width - 1);
			}
			else
			{
				langAnt.setX(xX - 1);
			}
			langAnt.setOrientation('W');
		}
		else
		{
			langAnt.setX((xX + 1) % width);
			langAnt.setOrientation('E');
		}
	}
	else
	{
		if (boardSpace == ' ')
		{
			if ((yY - 1) < 0)
			{
			langAnt.setY(length - 1);
			}
			else
			{
				langAnt.setY(yY - 1);
			}
			langAnt.setOrientation('N');
		}
		else
		{
			langAnt.setY((yY + 1) % length);
			langAnt.setOrientation('S');
		}
	}
	langAnt.setSpace(boardPtr[langAnt.getX()][langAnt.getY()]);//ant spot

	boardPtr[langAnt.getY()][langAnt.getX()] = '@';

	if (boardSpace == ' ')
	{
		boardPtr[xX][yY] = '#';
	}
	else
	{
		boardPtr[xX][yY] = ' ';
	}
}

/*****************************************
*	Board::getSpace						 *
*This function gets the board space	for	 *
*Langton Ant							 *
******************************************/

char Board::getSpace()
{
	return boardPtr[langAnt.getY()][langAnt.getX()];
}

/*****************************************
*	Board::clearBoard					 *
*This function clears the board for		 *
*Langtons Ant 							 *
******************************************/

void Board::clearBoard()
{
	for (int r = 0; r < length; r++)//clear memory
	{
		delete[] boardPtr[r];
	}
	delete[] boardPtr;
	boardPtr = NULL;
}