/*********************************************************************
** Program name : Lab6
** Author : Justin Phillips
** Date : 2 / 12 / 2018
** Description : Doubly- linked List
*********************************************************************/
#include "node.hpp"
#include "menu.hpp"
#include <iostream>


int main()
{
	int menuStart = 0;
	int number;
	Node list;
	std::cout << " This program we will create a doubly-linked list data " << std::endl;
	std::cout << " structures consisting of Node objects. " << std::endl;
	std::cout << "______________________________________________________ " << std::endl;
	
	
	
	Menu firstQuestion("What do you wish to do? ", " Add a new node to the head. ",
		" Add a new node to the tail. "," Delete the first node in the list. ", 
		" Delete the last node in the list. ", " Traverse the list reversely. ", " Exit ");

	do
	{

		firstQuestion.askQ();
		menuStart = firstQuestion.getAnswer();

		if (menuStart == 1)
		{
			std::cout << " You entered 1. You wish to add a new node to the head. " << std::endl;
			std::cout << " Please enter a number. " << std::endl;
			number = getInt();
			list.addHead(number);
			std::cout << " New added number to the list. " << std::endl;
			list.displayList();

		}
		else if (menuStart == 2)
		{
			std::cout << " You entered 2. You wish to add a new node to the tail " << std::endl;
			std::cout << " Please enter a number. " << std::endl;
			number = getInt();
			list.addTail(number);
			std::cout << " New added number to the list. " << std::endl;
			list.displayList();

		}
		else if (menuStart == 3)
		{
			std::cout << " You entered 3. You wish to delete the head. " << std::endl;
			list.deleteHead();
			std::cout << " Updated list after deleted number has been removed. " << std::endl;
			list.displayList();

		}
		else if (menuStart == 4)
		{
			std::cout << " You entered 4. You wish to delete the tail. " << std::endl;
			list.deleteTail();
			std::cout << " Updated list after deleted number has been removed. " << std::endl;
			list.displayList();
		}
		else if (menuStart == 5)
		{
			std::cout << "You entered 5. You have choosen to traverse the list in reverse. " << std::endl;
			std::cout << " This is the list in reverse. " << std::endl;
			list.displayReverse();

		}
		else if (menuStart == 6)
		{
			std::cout << "You entered 6. You have wish to exit. " << std::endl;
			return 0;

		}

		else // validates to make sure a proper menu number is chosen
		{
			std::cout << " Invalid choice....try again. " << std::endl;
			menuStart;
		}

	} while (menuStart !=6);




	return 0;
}