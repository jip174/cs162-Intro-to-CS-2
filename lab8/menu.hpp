/*********************************************************************
** Program name : Lab8
** Author : Justin Phillips
** Date : 2 / 25/ 2018
** Description : Searching and Sorting
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
	std::string menu6 = "";
	std::string question = "";

public:
	Menu();
	~Menu();
	Menu(std::string quest, std::string quest1);
	Menu(std::string quest, std::string quest1, std::string quest2);
	Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3);
	Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3, std::string quest4);
	Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3, std::string quest4,std::string quest5);
	Menu(std::string quest, std::string quest1, std::string quest2, std::string quest3, std::string quest4, std::string quest5,std::string quest6);
	int getAnswer();
	int getMenu();
	void askQ();

};
#endif
