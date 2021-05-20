/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "field.hpp"
#include "player.hpp"
#include "ball.hpp"
#include "defender.hpp"
#include <iostream>

/*****************
*  Constructor
******************/
Field::Field()
{
	this->rows = 50;
	this->cols = 30;
	//field = new Space **[50];
	//for (int row = 0; row < 50; ++row)
	//{
	//	field[row] = new Space *[30];
	//}
}

/**********************************
*  Executes Game Play of Critters
***********************************/
void Field::setField()
{
	fieldArr = new Space**[rows];// creating the 2D array
	for (int i = 0; i < rows; i++)
	{
		fieldArr[i] = new Space*[cols];
	}
	
	for (int k = 0; k < rows; k++) //initializing the board to NULL
	{
		for (int m = 0; m < cols; m++) 
		{
			fieldArr[k][m] = nullptr;
		}
	}
	int count = 0;
	
	/*while (count < 11)//random placements for the defenders
	{
		int randRow;
		int randCol;
		
		randRow = rand() % rows;
		randCol = rand() % cols;
		if (fieldArr[randRow][randCol] == nullptr)
		{
			fieldArr[randRow][randCol] = new Defender(randRow, randCol, 'X');
			count += 1;
		}
	}*/
		
	displayField();
	
	/*for (int a = 0; a < numDowns; a++) 
	{
		
		for (int i = 0; i < rows; i++)//tracking the movement for the defenders
		{
			for (int j = 0; j < cols; j++) {
				if (fieldArr[i][j] != nullptr &&
					fieldArr[i][j]->getName()
					== 'X'
					&& !fieldArr[i][j]->getMoved()) {
					fieldArr[i][j]->autoMove(fieldArr,
						i, j);
				}
			}
		}
				
		displayGrid();
		
	}*/
	/*for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < cols; j++) 
		
		{
			delete[] fieldArr[i][j];
			fieldArr[i] = 0;
		}
		delete[] fieldArr;
		fieldArr = nullptr;
	}
	delete[] fieldArr;
	fieldArr = nullptr;*/
	
}
/******************
*  Shows the grid
*******************/
void Field::displayField()
{
	for (int i = 0; i < rows; i++) 
	{
		std::cout << "______________________________" << std::endl;
		for (int j = 0; j < cols; j++)
			if (fieldArr[i][j] != NULL)
			{
				std::cout << fieldArr[i][j]->getGoat();
				std::cout << fieldArr[i][j]->getName();
			}
			else
			{
				std::cout << ' ';
			}
			std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
}
/************************************
*  Gets the grid from Critter Class
*************************************/
Space ***Field::getField()
{
	return fieldArr;
}

/************************************
*  Getter for rows of the Grid
*************************************/
int Field::getRows()
{
	return rows;
}
/************************************
*  Getter for columns of the Grid
*************************************/
int Field::getCols()
{
	return cols;
}
/*****************
*  Destructor
******************/
Field::~Field()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			delete fieldArr[i][j];
		}
		delete[] fieldArr[i];
	}
	delete[] fieldArr;
}
