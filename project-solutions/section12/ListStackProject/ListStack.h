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
		}

		virtual ~ListStack()
		{
			makeEmpty();
		}

		void push(int newEntry)
		{
			linkedListStack.add(newEntry);
		}

		int pop()
		{
			int data = 0;

			if (!isEmpty())
			{
				data = linkedListStack.remove(0);
			}
			else
			{
				cout << "Error - you can't pop on an empty stack!" << endl;
			}

			return data;
		}//end pop

		int peek()
		{
			int data = 0;

			if (!isEmpty())
			{
				data = linkedListStack.remove(0);

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
			return linkedListStack.isEmpty();
		}

		void makeEmpty()
		{
			linkedListStack.makeEmpty();
		}

	private:
		LinkedList linkedListStack;
};

#endif
