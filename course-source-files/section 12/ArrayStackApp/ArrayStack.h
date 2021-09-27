#include "Stack.h"

#include <iostream>
using namespace std;

class ArrayStack : public Stack
{
	public:
		ArrayStack(int s = 16) : MAX_SIZE(s)
		{
			top = -1;  //indicates no elements in stack
			mArray = new int[MAX_SIZE];  //initialize with capacity MAX_SIZE
		}
		
		virtual ~ArrayStack()
		{
			delete [] mArray;
		}

		void push(int newEntry)
		{
			if (top < MAX_SIZE - 1)
			{
				top++;
				mArray[top] = newEntry;
			}
			else
			{
				//could throw an exception instead
				cout << "Error:  Stack is full!  Cannot push." << endl;
			}
		}

		int pop()
		{
			int data = 0;

			if (!isEmpty())
			{
				data = mArray[top];
				top--;  //reduce the official top to the next element
			}
			else
			{
				//could throw an exception instead
				cout << "You can't pop on an empty stack!" << endl;
			}

			return data;
		}

		int peek() const
		{
			int data = 0;
			if (!isEmpty())
			{
				data = mArray[top];
			}
			else
			{
				//could throw an exception instead
				cout << "The stack is empty." << endl;
			}

			return data;
		}

		bool isEmpty() const
		{
			return top == -1;
		}

		void makeEmpty()
		{
			top = 0;
		}

	private:
		int* mArray;
		const int MAX_SIZE;
		int top;  //index of top element
};
