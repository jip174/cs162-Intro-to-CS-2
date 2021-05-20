/*********************************************************************
** Program name : Lab6
** Author : Justin Phillips
** Date : 2 / 12 / 2018
** Description : Doubly- linked List
*********************************************************************/

#include "node.hpp"
#include <iostream>

/******************************************
*	Node::Node         					  *
*This is the constructor. It initializes  *
*the menu								  *
******************************************/

Node::Node()
{
	head = nullptr;
	tail = nullptr;
}

/******************************************
*	Node::~Node         				  *
*This is the deconstructor.				  *
*										  *
******************************************/

Node::~Node()
{
	ListNode *nodePtr = head;
	while (nodePtr != nullptr)
	{

		ListNode *garbage = nodePtr;
		nodePtr = nodePtr->next;
		delete garbage;
	}
}


/******************************************
*	Node::addHead      					  *
*This function adds the head to the list  *
*										  *
******************************************/

void Node::addHead(int number)
{
	if (head == nullptr) 
	{
		head = new ListNode(number, tail,nullptr );
		tail = head;
	}
	else 
	{
		ListNode *nodePtr = head;
		head = new ListNode(number, nodePtr);
		nodePtr->prev = head;
	}
}



/******************************************
*	Node::addtail     					  *
*This function adds the tail to the list  *
*										  *
******************************************/

void Node::addTail(int number)
{
	if (tail == nullptr) 
	{
		tail = new ListNode(number, nullptr, head);
		head = tail;
	}
	else 
	{
		ListNode *nodePtr = tail;
		while (nodePtr->next != nullptr)
			nodePtr = nodePtr->next;
		nodePtr->next = new ListNode(number);
		//nodePtr->next = tail;
		std::cout << "Tail " << tail << std::endl;
	}
}
/******************************************
*	Node::deleteHead     				  *	  
*This function deletes the head from the  *
*list									  *
******************************************/

void Node::deleteHead()
{
	ListNode *nodePtr;

	if (!head)
	{
		return;
	}
	else if (head == tail)
	{
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		
		nodePtr = head;

		
		head = head->next;// Move the head up one spot
		head->prev = nullptr;

		delete nodePtr;
	}
}
/******************************************
*	Node::deleteTail    				  *
*This function deletes the tail from the  *
*list									  *
******************************************/
void Node::deleteTail()
{
	ListNode *nodePtr;

	if (!tail) 
	{
		return;
	}

	else if (tail == head)
	{
		head = nullptr;
		tail = nullptr;
	}
	else
	{
		nodePtr = tail;

		
		tail = tail->prev;// Move the tail up one spot
		tail->next = nullptr;

		delete nodePtr;
	}
}

/******************************************
*	Node::displayList     				  *
*This function prints the values in the   *
*list									  *
******************************************/

void Node::displayList() const
{
	ListNode *nodePtr = head;
	/*if (head==nullptr) 
	{
		std::cout << "Nothing in this list.";
		return;
	}*/
	//ListNode *nodePtr = head;
	while (nodePtr) {
		
		std::cout << nodePtr->val << " ";
		
		nodePtr = nodePtr->next;
	}
}

/******************************************
*	Node::displayReverse     			  *
*This function prints the values in the   *
*list reversely							  *
******************************************/
void Node::displayReverse() const
{
	ListNode *nodePtr = tail;
	if (!head) 
	{
		std::cout << "Nothing in this list.";
		return;
	}
	
	while (nodePtr != nullptr)
		 
	{
		std::cout << nodePtr->val << " ";
		
		ListNode *prev = nodePtr->prev;
		nodePtr->prev =  nodePtr->next;
		nodePtr->next = prev;
		nodePtr = prev;
				
	}
	//nodePtr = nodePtr->prev;
}