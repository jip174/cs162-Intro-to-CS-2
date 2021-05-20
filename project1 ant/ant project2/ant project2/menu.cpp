/*********************************************************************
** Program name: Project 1
** Author: Justin Phillips
** Date: 9/23/2017
** Description: Langtons's ant
*********************************************************************/
#include "menu.hpp"
#include <iostream>

/******************************************
*	Menu::Menu         					  *
*This is the constructor. It initializes  *
*the menu to run langtons ants choices	  *
******************************************/

Menu::Menu()
{

}

/******************************************
*	Menu::Menu         					  *
*This is the constructor. It initializes  *
*the menu to run langtons ants choices	  *
******************************************/

Menu::Menu(std::string quest, std::string quest1)
{
	menu1 = quest1;
	question = quest;
}

/******************************************
*	Menu::Menu         					  *
*This is the constructor. It initializes  *
*the menu to run langtons ants choices	  *
******************************************/

Menu::Menu(std::string quest, std::string quest1, std::string quest2)
{
	menu1 = quest1;
	menu2 = quest2;
	question = quest;
}

/******************************************
*	Menu::Menu         					  *
*This is the constructor. It initializes  *
*the menu to run langtons ants choices	  *
******************************************/

Menu::Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3)

{
	menu1 = quest1;
	menu2 = quest2;
	menu3 = quest3;
	question = quest;
}

/******************************************
*	Menu::Menu         					  *
*This is the constructor. It initializes  *
*the menu to run langtons ants choices	  *
******************************************/

Menu::Menu(std::string quest, std::string quest1, std::string quest2,
	std::string quest3, std::string quest4)
{
	menu1 = quest1;
	menu2 = quest2;
	menu3 = quest3;
	menu4 = quest4;
	question = quest;
}

/******************************************
*	Ant::getAnswer       				      *
*This function returns answer				  *
******************************************/

int Menu::getAnswer()
{
	return answer;
}

/******************************************
*	Ant::getMenu       				      *
*This function returns count			  *
******************************************/

int Menu::getMenu()
{
	int count = 1;
	if (!(menu1 == ""))
	{
		count++;
	}
	if (!(menu2 == ""))
	{
		count++;
	}
	if (!(menu3 == ""))
	{
		count++;
	}
	if (!(menu4 == ""))
	{
		count++;
	}
	return count;
}

/******************************************
*	Ant::askQ      						  *
*This function intiates menu choices the  *
*user selects and validates there choice  *
******************************************/

void Menu::askQ()
{
	int userPick;

	do
	{
		int count = 1;

		std::cout << question << std::endl;

		if (!(menu1 == ""))
		{
			std::cout << "1:" << menu1 << std::endl;
			count++;
		}

		if (!(menu2 == ""))
		{
			std::cout << "2:" << menu1 << std::endl;
			count++;
		}

		if (!(menu3 == ""))
		{
			std::cout << "3:" << menu1 << std::endl;
			count++;
		}

		if (!(menu4 == ""))
		{
			std::cout << "4:" << menu1 << std::endl;
			count++;
		}
		std::cout << count << ": Quit " << std::endl;

		if (userPick <0 || userPick > getMenu())
		{
			std::cout << "Invalid choice, try again. " << std::endl;
		}
			
	} 
	while (userPick <0 || userPick > getMenu());
	
	answer = userPick;

}

