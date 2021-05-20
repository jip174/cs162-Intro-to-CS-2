/*********************************************************************
** Program name :  Final Project
** Author : Justin Phillips
** Date : 3 / 04 / 2018
** Description : Goat Football
*********************************************************************/


#ifndef MENU_H
#define MENU_H
#include <string>
#include <iostream>
#include "validator.hpp"
class Menu
{
private:
	int answer;

	std::string menu1 = "";
	std::string menu2 = "";
	std::string menu3 = "";
	std::string menu4 = "";
	std::string menu5 = "";
	std::string question = "";

public:
	Menu();
	~Menu();
	Menu(std::string quest, std::string quest1);
	Menu(std::string quest, std::string quest1, std::string quest2);
	Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3);
	Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3, std::string quest4);
	Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3, std::string quest4,std::string quest5);
	int getAnswer();
	int getMenu();
	void askQ();

};
#endif
