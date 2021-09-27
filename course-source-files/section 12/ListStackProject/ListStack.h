#ifndef LIST_STACK_H
#define LIST_STACK_H

#include <iostream>
#include "Stack.h"
#include "LinkedList.h"
using namespace std;

class ListStack : public Stack
{
	public:
		ListStack()
		{
			top = -1;
		}

		~ListStack()
		{
			makeEmpty();
			top = -1;
		}

		void push(int newEntry)
		{
			top++;

			linkedListStack.add(newEntry);
		}

		int pop()
		{
			int data = 0;
			if (!isEmpty())
			{
				data =  linkedListStack.remove(top);
				top--;
			}
			else
			{
				cout << "Error - you can't pop on an empty stack!" << endl;
			}

			return data;
		}

		int peek()
		{
			int data = 0;
			
			if (!isEmpty())
			{
				//remove temporarily
				data = linkedListStack.remove(top);
				//add it back
				linkedListStack.add(data);
			}
			else
			{
				cout << "Error - you can't peek on an empty stack!" << endl;
			}

			return data;
		}

		bool isEmpty()
		{
			return linkedListStack.isEmpty();  //or top == -1
		}

		void makeEmpty()
		{
			linkedListStack.makeEmpty();
		}

	private:
		LinkedList linkedListStack;
		int top;
};

#endif