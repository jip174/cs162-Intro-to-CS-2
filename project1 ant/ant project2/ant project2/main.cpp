/*********************************************************************
** Program name: Project 1
** Author: Justin Phillips
** Date: 9/23/2017
** Description: Langtons's ant
*********************************************************************/

#include <iostream>
#include <time.h>
#include "board.hpp"
#include "ant.hpp"
#include "menu.hpp"
#include "validator.hpp"

int main()
{
	int height = 20;
	int width = 20;
	int menuBoard = 0;
	int menuAnt = 0;
	int moves = 0;
	int antX, antY;

	std::cout << "LANGTON'S ANT SIMULATOR!!!! " << std::endl;
	 
	Menu firstQuestion ("Lets design the board!!!first choice is:",
		" Would you like to input your own height and width?",
		" Use the default board 20x20 ",
		" Or we can randomize it.");

	do
	{
		firstQuestion.askQ();
		menuBoard = firstQuestion.getAnswer();

		if (menuBoard == 1)
		{
			std::cout << " You choose 1. You would like to pick your height and width."<< std::endl;

			do
			{
				height = numValidator();
				width = numValidator();

				if (width < 0 || width > 40 || height < 0 || height >40)
				{
					std::cout << "Invalid entry. please try again. ";
				}
			} while (width < 0 || width > 40 || height < 0 || height > 40);
		}
		else if (menuBoard == 2)
		{
			std::cout << " You have chosen 2, default 20x20 board it is." << std::endl;
		}
		else if (menuBoard == 3)
		{
			std::cout << " you have chosen 3, Random creation of the board. " << std::endl;
			srand(time(NULL));
			height = rand() % (40 - 1);
			width = rand() % (40 - 1);
		}
		else
		{
			std::cout << " Invalid choice....try again. " << std::endl;
		}

	} while (menuBoard < 1 || menuBoard >4);

	Board game1(height, width);
	std::cout << " Height, " << height << "Width. " << width << std::endl;

	Menu secondQuestion("Lets determine the starting spot of the ant:",
		"You choose the x, y spot to start at. ",
		" Use the default starting spot.",
		" Randomize the starting spot.");

	do
	{
		secondQuestion.askQ();
		menuAnt = secondQuestion.getAnswer();

		if (menuAnt == 1)
		{
			std::cout << " You have choosen 1 and would like to determine the starting point of the ant." << std::endl;

			do
			{
				antX = numValidator();
				antY = numValidator();

				if (antX<0 || antX >width || antY <0 || antY > height)
				{
					std::cout << " Invalid starting spot. Please try again. " << std::endl;
				}
			} while (antX<0 || antX>(width - 1) || antY<0 || antY>(height - 1));

			game1.setAnt(antX, antY, 'N');
		}
		else if (menuAnt == 2)
		{
			std::cout << "You have choosen 2, we will start in the default spot. " << std::endl;
			antX = (width / 2);
			antY = (height / 2);

			game1.setAnt(antX, antY, 'N');
		}
		else if (menuAnt == 3)
		{
			std::cout << " You have choosen 3, We will randomize the ants starting spot." << std::endl;
			srand(time(NULL));
			antX = rand() % width;
			antY = rand() % height;

			game1.setAnt(antX, antY, 'N');
		}
		else
		{
			std::cout << " Invalid choice. please try again. " << std::endl;
		}
	} while (menuAnt < 1 && menuAnt > 3);
	

	std::cout << " How many turn would you like the ant to move before its finished?" << std::endl;
	std::cin >> moves;
	std::cout << std::endl;

	game1.print();

	for (int x = 0; x < moves; x++)
	{
		game1.move();
		game1.print();
	}

	game1.clearBoard;

	return 0;

}