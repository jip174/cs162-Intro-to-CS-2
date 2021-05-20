/*********************************************************************
** Program name : Lab7
** Author : Justin Phillips
** Date : 2 / 17 / 2018
** Description : Circular Linked List
*********************************************************************/
#include "menu.hpp"
#include "Queue.hpp"
#include <iostream>


int main()
{
	int menuStart = 0;
	int number;
	Queue list;
	std::cout << " This program we will create a  Queue data " << std::endl;
	std::cout << " structure utilizing circular linked list. " << std::endl;
	std::cout << "______________________________________________________ " << std::endl;



	Menu firstQuestion("What do you wish to do? ", " Add a value to the back of the queue. ",
		" Display the front value. ", " Remove the front node. ",
		" Display the queues content. ", " Exit ");

	do
	{

		firstQuestion.askQ();
		menuStart = firstQuestion.getAnswer();

		if (menuStart == 1)
		{
			std::cout << " You entered 1. You wish to add a value to the back of the queue. " << std::endl;
			std::cout << " Please enter a number. " << std::endl;
			number = getInt();
			list.addBack(number);
			std::cout << " New added number to the list. " << std::endl;
			//list.displayList();

		}
		else if (menuStart == 2)
		{
			std::cout << " You entered 2. You wish to display the first node value " << std::endl;
			list.getFront();
				//list.displayList();

		}
		else if (menuStart == 3)
		{
			std::cout << " You entered 3. You wish to remove the first node value. " << std::endl;
			list.removeFront();
			//std::cout << " Updated list after deleted number has been removed. " << std::endl;
			//list.displayList();

		}
		else if (menuStart == 4)
		{
			std::cout << " You entered 4. You wish to display the queue contents. " << std::endl;
			
			std::cout << " Updated list after deleted number has been removed. " << std::endl;
			list.printQueue();
		}
				
		else if (menuStart == 5)
		{
			std::cout << "You entered 5. You have wish to exit. " << std::endl;
			return 0;

		}

		else // validates to make sure a proper menu number is chosen
		{
			std::cout << " Invalid choice....try again. " << std::endl;
			menuStart;
		}

	} while (menuStart != 5);




	return 0;
}