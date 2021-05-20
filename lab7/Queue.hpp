#pragma once
/*********************************************************************
** Program name : Lab7
** Author : Justin Phillips
** Date : 2 / 17 / 2018
** Description : Circular Linked List
*********************************************************************/



class Queue
{
private:
	struct QueueNode
	{
		int val;
		QueueNode *next;
		QueueNode *prev;

		QueueNode(int val1, QueueNode *next1 = nullptr, QueueNode *prev1 = nullptr)
		{
			val = val1;
			next = next1;
			prev = prev1;
		}
	};
	QueueNode *front;
	QueueNode *back;
	
public:
	Queue();
	~Queue();
	bool isEmpty() const;
	void addBack(int val);
	int getFront();
	void removeFront(int &);
	void printQueue();
};

