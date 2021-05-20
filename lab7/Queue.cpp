/*********************************************************************
** Program name : Lab7
** Author : Justin Phillips
** Date : 2 / 17 / 2018
** Description : Circular Linked List
*********************************************************************/


#include "Queue.hpp"
#include <iostream>

/******************************************
*	Turtle::Turtle        				  *
*This is the constructor. It initializes  *
*the turtle class constructor			  *
******************************************/

Queue::Queue()
{
	front = nullptr;
	back = nullptr;
}

/******************************************
*	Turtle::Turtle        				  *
*This is the constructor. It initializes  *
*the turtle class constructor			  *
******************************************/
Queue::~Queue()
{
	QueueNode *garbage = front;
	while (garbage != nullptr)
	{
		front = front->next;
		garbage->next = nullptr;
		delete garbage;
		garbage = front;

	}
}

/******************************************
*	Turtle::Turtle        				  *
*This is the constructor. It initializes  *
*the turtle class constructor			  *
******************************************/
bool Queue::isEmpty() const
{
	if (front == nullptr)
		return true;
	else
		return false;
}

/******************************************
*	Turtle::Turtle        				  *
*This is the constructor. It initializes  *
*the turtle class constructor			  *
******************************************/
void Queue::addBack(int val)
{
	if (isEmpty())
	{
		front = new QueueNode(val);
		back = front;
	}
	else
	{
		back->next = new QueueNode(val);
		back = back->next;
	}
}

/******************************************
*	Turtle::Turtle        				  *
*This is the constructor. It initializes  *
*the turtle class constructor			  *
******************************************/
int Queue::getFront()
{
	if (!isEmpty())
	{
		return front->val;
	}
}

/******************************************
*	Queue::removeFront       			  *
*This function removes the front QueueNode*
*of the queue and free the memory		  *
******************************************/
void Queue::removeFront(int &num)
{
	QueueNode *temp = nullptr;
	if (isEmpty())
	{
		std::cout << "Queue is empty " << std::endl;
	}
	else
	{
		num = front->val;
		temp = front;
		front = front->next;
		delete temp;
	}
}

/******************************************
*	Queue::printQueue       			  *
*This function traverse through the queue *
*from the head using next pointers and    *
*prints the values of each node in queue  *
******************************************/
void Queue::printQueue()
{
	if (front)
	{
		QueueNode *queuePtr = front;
		//std::cout << " Queue list is: " << std::endl;
		while (queuePtr != back)
		{

			std::cout << queuePtr->val << " " << std::endl;
			queuePtr = queuePtr->next;
		}
		if (back)
		{
			std::cout << queuePtr->val << " " << std::endl;
		}
	}
	else
	{
		std::cout << "Queue is empty. " << std::endl;
		return;
	}
}