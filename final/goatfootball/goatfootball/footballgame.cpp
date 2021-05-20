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
#include <cctype>



/******************************************
*	Character::Character       			  *
*This is the constructor. It initializes  *
*the Character class constructor		  *
******************************************/
FootBallGame::FootBallGame()
{
	


}
/******************************************
*	Game::setPlayer1        			  *
*This function uses the menu class to allow
*player one to pick their character		  *
******************************************/
void FootBallGame::setGoat(int inputGoat)
{
	int menuStart = 0;


	Menu firstQuestion("Pick Your A Player that is one of the greatest. ", " Jerry Rice ", " Barry Sanders",
		" Jim Brown ", " Randy Moss ", " or exit ");

	do
	{

		firstQuestion.askQ();
		menuStart = firstQuestion.getAnswer();

		if (menuStart == 1)
		{
			std::cout << " You entered 1. You have choosen the Jerry Rice. " << std::endl;
			goat = new Jerry();
			break;

		}
		else if (menuStart == 2)
		{
			std::cout << "You entered 2. You have choosen Barry Sanders. " << std::endl;
			goat = new Barry();
			break;
		}
		else if (menuStart == 3)
		{
			std::cout << "You entered 3. You have choosen Jim Brown. " << std::endl;
			goat = new Jim();
			break;

		}
		else if (menuStart == 4)
		{
			std::cout << "You entered 4. You have choosen randy Moss. " << std::endl;
			goat = new Randy();
			break;

		}
		else if (menuStart == 5)
		{
			std::cout << "You entered 5. You wish to quit. " << std::endl;
			exit(0);
		}


		else // validates to make sure a proper menu number is chosen
		{
			std::cout << " Invalid choice....try again. " << std::endl;
			menuStart;
		}

	} while (menuStart < 1 || menuStart >5);


}
/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
void FootBallGame::play()
{
	int att;
	int def;
	int totalDamage;
	
	int user[1];
	int count = 1;
	int rows;
	int cols;
	char direction;
	
	field.setField();
	arrField = field.getField();
	defender = new Defender();
	setGoat(user[1]);
	goat->space = arrField[10][15];
	//goat->space->open();
	std::cout << " Set the d " << std::endl;
	//while (count < 11)//random placements for the defenders
	//{
		int randRow;
		int randCol;
		std::cout << " yup " << std::endl;
		randRow = rand() % 50 + 1;
		randCol = rand() % 30 + 1;
		//if (arrField[randRow][randCol] == nullptr)
		do
		{
			if (arrField[randRow][randCol] == nullptr)
			{
				std::cout << "row " << randRow << "col " << randCol << std::endl;
				defender->space = arrField[randRow][randCol];
				//defender->setChar('O');
				//arrField[randRow][randCol] = new Defender(randRow, randCol, 'X');
				count += 1;
				std::cout << " COunt: " << count << std::endl;
			}
			else
				{
				std::cout << " not working " << std::endl;
				}
			
		} while (count < 11);
	
		//else
		//{
			//std::cout << " not working " << std::endl;

		//}
	//}

	while (goat->getDown() != 5 || goat->space->getRow() != 50)
	{
		while( direction != 'W' || direction != 'S' || direction != 'A'|| direction != 'D')
		{
			std::cout << " Which way do you wish to move? (UP= W, down = s, left= a, right = d) " << std::endl;
			std::cin.get(direction);
			direction = std::toupper(direction);
			goat->move(direction);

		}
		if (goat->space != nullptr)
		{
			tackleBattle();
			std::cout << goat->getName() << "is hit " << std::endl;
		}
		else
		{
			std::cout << goat->getName() << " sees daylight " << std::endl;
		}
		if (goat->space->getRow() == 50)
		{
			std::cout << goat->getName() << " has scored!! TOUCHDOWN!! " << std::endl;
			goat->touchDown();
		}
	}

}
/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
void FootBallGame::print()
{


}
/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
void FootBallGame::tackleBattle()
{
	int att;
	int def;
	int totalDamage;
	//while (goat->getStrength()>0) && defender->getStrength()>0)
	do
	{
		//std::cout << " Round: " << round << std::endl;
		att = defender->tackle();
		def = goat->breakTackle();
			totalDamage = att - def; // check to see if damage will be zero
		std::cout << "Total damage (negative means def > att) " << totalDamage << std::endl;
		std::cout << "Damage " << att << std::endl;
		std::cout << "Defense " << def << std::endl;


		if (def >= att)
		{
			goat->strengthDown(0);
			std::cout << goat->getName() << " breaks the tackle " << std::endl;
			break;
		}
		else
		{
			goat->strengthDown(totalDamage);
			if (goat->getStrength() == 0)
			{
				down++;
				std::cout << goat->getName() << " has been brought down " << down << " down " << std::endl;
			}
			else
			{
				std::cout << " what a battle " << std::endl;
			}

		}
		if (att == 12)
		{
			std::cout << goat->getName() << "Has Fumbled!! " << std::endl;
			goat->strengthDown(18);
			down++;
			break;
		}

		std::cout << defender->getName() << " (p1) attack. " << att << " attacked " << std::endl;
		std::cout << goat->getName() << " (p2) defends. " << def << " defended " << std::endl;
		std::cout << goat->getStrength() << " (p2) strength. " << std::endl;
		std::cout << "______________________________________________________________" << std::endl;
	} while (goat->getStrength() > 0);
}
/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
//void FootBallGame::down()
//{

//}
/******************************************
*	Character::attack        			  *
*This is the function that gets the attack*
*and returns it to the player			  *
******************************************/
/*bool FootBallGame::downs()
{
	
		if (getDown() == 5)
		{
			std::cout << " Failed to scored turnover on downs. " << std::endl;
			return false;
		}
		return true;
	
}*/

/*****************************************
*	Space::~Space			       		  *
*This is the deconstructor				  *
******************************************/
FootBallGame::~FootBallGame()
{

}
