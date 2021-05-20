/*********************************************************************
** Program name : Lab6
** Author : Justin Phillips
** Date : 2 / 12 / 2018
** Description : Doubly- linked List
*********************************************************************/

#ifndef NODE_HPP
#define NODE_HPP


class Node
{
private:
	struct ListNode
	{
		int val;
		ListNode *next;
		ListNode *prev;
		
		ListNode(int val1, ListNode *next1 = nullptr, ListNode *prev1 = nullptr) 
		{
			val = val1;
			next = next1;
			prev = prev1;
		}
	};
	ListNode *head;
	ListNode *tail;

public:
	
	Node();
	~Node();
	
	void addHead(int number);
	void deleteHead();
	void addTail(int number);
	void deleteTail();
	void displayList() const;
	void displayReverse() const;
};


#endif 
