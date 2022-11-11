#ifndef LINKED_QUEUE_H
#define LINKED_QUEUE_H

#include "Queue.h"
#include <iostream>
using namespace std;

//-----------------Node--------------//
class Node
{
	public:
		Node(int data, Node* next, Node* previous)
		{
			this->data = data;
			this->next = next;
			this->previous = previous;
		}//end ctor

		int getData() const
		{
			return data;
		}

		void setData(int data)
		{
			this->data = data;
		}

		Node* getNext() const
		{
			return next;
		}

		void setNext(Node* next)
		{
			this->next = next;
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
			//create new node
			//new node sets its previous node to the current back
			Node* newNode = new Node(newEntry, back, nullptr);

			//if first node
			if (isEmpty())
			{
				//if this is the first node we're adding
				front = newNode;
			}
			else
			{
				//not empty
				//the last node sets its new next to the newNode
				//before being replaced as the back node
				//this ensures the double link
				back->setNext(newNode);	
			}

			back = newNode;  //regardless, the new node we add is now the new back node
		}

		int dequeue()
		{
			int data = 0;

			if (!isEmpty())
			{
				Node* tempToRemove = front;
				data = front->getData();
				front = front->getNext();  

				//remove the previous front
				delete tempToRemove;

				if (front == nullptr)
				{
					//if the front is nullptr, then we're empty, so 
					//back should be set to the nullptr too
					back = nullptr;
				}
				else
				{
					front->setPrevious(nullptr);
				}

			}
			else
			{
				cout << "You cannot dequeue from an empty queue." << endl;
			}

			return data;
		}

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
		}

		bool isEmpty() const
		{
			return front == back;
		}

		void makeEmpty()
		{
			//dequeue as long as the queue isn't empty
			while (!isEmpty())
			{
				dequeue();
			}
		}

	private:
		Node* front;
		Node* back;
};

#endif