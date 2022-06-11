#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include <iostream>
#include "Queue.h"
using namespace std;


//-----------doubly linked Node-------------//

class Node
{
	public:
		Node(int data, Node* next, Node* previous)
		{
			this->data = data;
			this->next = next;
			this->previous = previous;
		}//end ctor

		void setData(int data)
		{
			this->data = data;
		}//end setData

		void setNext(Node* next)
		{
			this->next = next;
		}//end setNext

		int getData()
		{
			return data;
		}

		Node* getNext()
		{
			return next;
		}

		Node* getPrevious() const
		{
			return previous;
		}

		void setPrevious(Node* previous)
		{
			this->previous = previous;
		}


	private:
		int data;
		Node* next;
		Node* previous;
};


//----------------Linked Queue------------------------//

class LinkedQueue : public Queue
{
	public:
		LinkedQueue()
		{
			front = nullptr;
			back = nullptr;
		}

		void enqueue(int newEntry)
		{
			Node* newNode = new Node(newEntry, back, nullptr);

			if (isEmpty())
			{
				front = newNode;
			}
			else
			{
				back->setPrevious(newNode);
			}

			back = newNode;

		}//end enqueue

		int dequeue()
		{
			int data = 0;

			if (!isEmpty())
			{
				Node* tempToRemove = front;

				data = front->getData();
				front = front->getPrevious();

				delete tempToRemove;

				if (front == nullptr)
				{
					back = nullptr;
				}
				else
				{
					front->setNext(nullptr);
				}
			}
			else
			{
				cout << "You cannot dequeue from an empty queue." << endl;
			}

			return data;
		}//end dequeue

		int peekFront() const
		{
			int data = 0;

			if (!isEmpty())
			{
				data = front->getData();
			}
			else
			{
				cout << "You cannot peek the front of an empty queue!" << endl;
			}

			return data;
		}//end peekFront

		bool isEmpty() const
		{
			return front == nullptr && front == back;
		}//end isEmpty

		void makeEmpty()
		{
			while (!isEmpty())
			{
				dequeue();
			}
		}//end makeEmpty

	private:
		Node* front;
		Node* back;
};


#endif

