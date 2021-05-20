/*********************************************************************
** Program name : Project 3
** Author : Justin Phillips
** Date : 2 / 05 / 2018
** Description : Fantasy Combat Game
*********************************************************************/
#include "game.hpp"
/******************************************
*	Game::Game        					  *
*This is the constructor. It initializes  *
*the game class constructor				  *
******************************************/
Game::Game()
{

}


/******************************************
*	Game::~Game      					  *
*This is the deconstructor				  *
******************************************/
Game::~Game()
{

}
/******************************************
*	Game::setPlayer1        			  *
*This function uses the menu class to allow
*player one to pick their character		  *
******************************************/
void Game::setPlayer1(int inputPlayer1)
{
	int menuStart = 0;
	
	
	Menu firstQuestion("Pick Your Character. ", " Barabarian ", " Blue Men ",
		" Harry Potter ", " Medusa ", " Vampire ");
	
		do
		{

			firstQuestion.askQ();
			menuStart = firstQuestion.getAnswer();

			if (menuStart == 1)
			{
				std::cout << " You entered 1. You have choosen the Barbarian. " << std::endl;
				player1 = new Barbarian;

			}
			else if (menuStart == 2)
			{
				std::cout << "You entered 2. You have choosen The Blue Men. " << std::endl;
				player1 = new BlueMen;
			}
			else if (menuStart == 3)
			{
				std::cout << "You entered 3. You have choosen Harry Potter. " << std::endl;
				player1 = new HarryPotter;
			
			}
			else if (menuStart == 4)
			{
				std::cout << "You entered 4. You have choosen Medusa. " << std::endl;
				player1 = new Medusa;

			}
			else if (menuStart == 5)
			{
				std::cout << "You entered 5. You have choosen a Vampire. " << std::endl;
				player1 = new Vampire;

			}
			
			
			else // validates to make sure a proper menu number is chosen
			{
				std::cout << " Invalid choice....try again. " << std::endl;
				menuStart;
			}

		} while (menuStart < 1 || menuStart >5);

	
}
/******************************************
*	Game::setPlayer2        			  *
*This function uses the menu class to allow
*player two to pick their character		  *
******************************************/
void Game::setPlayer2(int inputPlayer2)
{
	int menuPlayer2 = 0;
	Menu secondQuestion(" Player 2 choose Your Character. ", " Barabarian ", " Blue Men ",
		" Harry Potter ", " Medusa ", " Vampire ");

	do
	{

		secondQuestion.askQ();
		menuPlayer2 = secondQuestion.getAnswer();

		if (menuPlayer2 == 1)
		{
			std::cout << " You entered 1. You have choosen the Barbarian. " << std::endl;
			player2 = new Barbarian;

		}
		else if (menuPlayer2 == 2)
		{
			std::cout << "You entered 2. You have choosen The Blue Men. " << std::endl;
			player2 = new BlueMen;
		}
		else if (menuPlayer2 == 3)
		{
			std::cout << "You entered 3. You have choosen Harry Potter. " << std::endl;
			player2 = new HarryPotter;

		}
		else if (menuPlayer2 == 4)
		{
			std::cout << "You entered 4. You have choosen Medusa. " << std::endl;
			player2 = new Medusa;

		}
		else if (menuPlayer2 == 5)
		{
			std::cout << "You entered 5. You have choosen a Vampire. " << std::endl;
			player2 = new Vampire;

		}

		else // validates to make sure a proper menu number is chosen
		{
			std::cout << " Invalid choice....try again. " << std::endl;
			menuPlayer2;
		}

	} while (menuPlayer2 < 1 || menuPlayer2 >5);


}


/******************************************
*	Game::playGame       				  *
*This function runs the major aspects of  *
*the fantasy game						  *
******************************************/
void Game::playGame()
{
	int menuEndOfRound = 0;
	int menuEndOfGame = 0;
	bool nextRound = false;
	bool nextGame = false;
	do
	{
		int att;
		int att2;
		int def;
		int def2;
		int totalDamage;
		int totalDamage2;
		int round = 1;
		int fighter[2];
		std::cout << " Lets Battle!!! " << std::endl;
		
		for (int i = 0; i < 2; i++)
		{
			fighter[i];
		}
		setPlayer1(fighter[0]);
		setPlayer2(fighter[1]);
		std::cout << player2->getStrength() << " strength.(p2) " << std::endl;
		std::cout << player1->getStrength() << " strength.(p1) " << std::endl;
		while(player1->alive() && player2->alive())
		{
			std::cout << " Round: " << round << std::endl;
			att = player1->attack();
			def = player2->defense()+ player2->getArmor();
			totalDamage = att - def; // check to see if damage will be zero
			std::cout << "Total damage (negative means def > att) " << totalDamage  << std::endl;
			std::cout << "Damage " << att << std::endl;
			std::cout << "Defense " << def << std::endl;
			
			
			if (def >= att)
			{
				player2->strengthDown(0);
			}
			else
			{
				player2->strengthDown(totalDamage);
			}
			
			
			std::cout << player1->getName() << " (p1) attack. " << att << " attacked " << std::endl;
			std::cout << player2->getName() << " (p2) defends. " << def << " defended " << std::endl;
			std::cout << player2->getArmor() << " (p2) armor. " << player2->getStrength() << " (p2) strength. " << std::endl;
			std::cout << "______________________________________________________________" << std::endl;
			std::cout << " Other Players turn to Attack " << std::endl;
			att2 = player2->attack();
			def2 = player1->defense() + player1->getArmor();
			totalDamage2 = att2 - def2;
			std::cout << "Total damage (negative means def > att) " << totalDamage2 << std::endl;
			std::cout << "Damage " << att2 << std::endl;
			std::cout << "Defense " << def2 << std::endl;
			
			if (def2 >= att2)
			{
				player1->strengthDown(0);
			}
			else
			{
				 player1->strengthDown(totalDamage2);
			}
									
			std::cout << player2->getName() << "(p2) attack. " << att2 << " attacked " << std::endl;
			std::cout << player1->getName() << "(p1) defends. " << def2 << " defended " << std::endl;
			std::cout << player1->getArmor() << "(p1) armor. " << player1->getStrength() << "(p1) strength. " << std::endl;
			std::cout << "______________________________________________________________" << std::endl;
			round++;
			if (!player1->alive())
			{
				std::cout << player1->getName() << " is DEAD...(p1) " << std::endl;
			}
			else if (!player2->alive())
			{
				std::cout << player2->getName() << " is DEAD...(p2) " << std::endl;
			}


		}
		if (!player1->alive() || !player2->alive())
		{

			Menu forthQuestion(" Do you wish to play again. ", " Yes ", " No ");


			do
			{

				forthQuestion.askQ();
				menuEndOfGame = forthQuestion.getAnswer();

				if (menuEndOfGame == 1)
				{
					std::cout << " You entered 1. You have choose to continue. " << std::endl;
					nextGame = true;

				}
				else if (menuEndOfGame == 2)
				{
					std::cout << "You entered 2. You have choose to quit. " << std::endl;
					nextGame = false;
				}
				else
				{
					std::cout << " Invalid choice....try again. " << std::endl;
					menuEndOfGame;
				}

			} while (menuEndOfGame < 1 || menuEndOfGame >2);
		}
		delete player1;
		delete player2;

	} while (nextGame);
}

