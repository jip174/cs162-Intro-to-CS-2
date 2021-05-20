/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/
#include "character.hpp"
#include "barb.hpp"
#include "blue.hpp"
#include "harry.hpp"
#include "medusa.hpp"
#include "menu.hpp"
#include "validator.hpp"
#include "vampire.hpp"
#include "game.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 
int main()
{
	srand(time(NULL));
	std::cout << " You have entered the Fantasy Combat Game " << std::endl;
	std::cout << " The rules for the game are simple. Two   " << std::endl;
	std::cout << " characters are choosen to battle in the  " << std::endl;
	std::cout << " arena. Each player rolls their die one   " << std::endl;
	std::cout << " for attack and one for defense. The		" << std::endl;
	std::cout << " battle goes on till someone dies. Some of" << std::endl;
	std::cout << " the characters have special abilities.   " << std::endl;
	std::cout << " Lets get the battle started.			    " << std::endl;
	std::cout << " ________________________________________ " << std::endl;
	
	Game duel;
	
	duel.playGame();






	return 0;
}