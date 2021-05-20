/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/
#include "player.hpp"
#include "space.hpp"
#include "field.hpp"
#include "footballgame.hpp"
#include "menu.hpp"
#include "barry.hpp"
#include "jerry.hpp"
#include "jim.hpp"
#include "randy.hpp"
#include "ball.hpp"
#include "defender.hpp"
#include "validator.hpp"
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <iostream>

int main()
{
	srand(time(NULL));
	bool playAgain = true;

std::cout << " ----------------Welcome to Goat Football-----------------" << std::endl;
std::cout << " _________________________________________________________" << std::endl;
std::cout << " In this game we will choose from a list of some of the   " << std::endl;
std::cout << " Greatest Of All Time (g.o.a.t) football players and play " << std::endl;
std::cout << " a series to try to score a touchdown. Each chosen player " << std::endl;
std::cout << " will get 4 downs to try and score their will be defenders" << std::endl;
std::cout << " on the field who you will have top duel to try to break  " << std::endl;
std::cout << " tackles their is also the posiblity that the defender    " << std::endl;
std::cout << " strip the ball away. If you do defeat the defender you   " << std::endl;
std::cout << " will continue to move towards the end zone. If you are   " << std::endl;
std::cout << " not succesful in scoring in your 4 downs you turn over   " << std::endl;
std::cout << " ball and the game is over. You can play again though     " << std::endl;
std::cout << " _________________________________________________________" << std::endl;
std::cout << std::endl;

std::cout << " _________________________________________________________" << std::endl;
std::cout << " We will use basic controls to move your G.O.A.T          " << std::endl;
std::cout << " to move up: 'w'										   " << std::endl;
std::cout << " to move down: 's'										   " << std::endl;
std::cout << " to move right: 'd'									   " << std::endl;
std::cout << " to move left: 'a'										   " << std::endl;
std::cout << " _________________________________________________________" << std::endl;
std::cout << std::endl;


	while (playAgain)
	{
		FootBallGame game;
		game.play();
		int menuFinish = 0;


		Menu secondQuestion("Game has ended.What do you wish to do? ", " Play Again ", " Quit ");

		do
		{

			secondQuestion.askQ();
			menuFinish = secondQuestion.getAnswer();

			if (menuFinish == 1)
			{
				std::cout << " You entered 1. You wish to play again. " << std::endl;
				playAgain = true;

			}
			else if (menuFinish == 2)
			{
				std::cout << "You entered 2. You wish to exit. " << std::endl;
				playAgain = false;
				//exit(0);
			}
			else
			{
				std::cout << " Invalid Choice " << std::endl;
				menuFinish;

			}
		} while (menuFinish < 1 || menuFinish >2);

	}





	return 0;
}