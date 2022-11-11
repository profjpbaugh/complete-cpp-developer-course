#ifndef ARRAY_QUEUE
#define ARRAY_QUEUE

#include <iostream>
#include "Queue.h"
using namespace std;


class ArrayQueue : public Queue
{
	public:

		ArrayQueue(int s = 16) : MAX_SIZE(s)
		{
			front = 0;
			back = 0;
			mArray = new int[MAX_SIZE];
			numElements = 0;
		}

		virtual ~ArrayQueue()
		{
			delete[] mArray;
		}

		void enqueue(int newEntry)
		{
			if (numElements < MAX_SIZE)
			{
				mArray[back] = newEntry;
				back = (back + 1) % MAX_SIZE;
				numElements++;
			}
			else
			{
				cout << "You cannot enqueue onto a full queue." << endl;
			}
		}

		int dequeue()
		{
			int data = 0;
			if (!isEmpty())
			{
				data = mArray[front];
				front = (front + 1) % MAX_SIZE;
				numElements--;
			}
			else
			{
				cout << "You cannot dequeue on an empty queue." << endl;
				data = 0;
			}

			return data;
		}

		int peekFront() const
		{
			if (!isEmpty())
			{
				return mArray[front];
			}

			//could also use exceptions
			cout << "Queue is empty. You cannot peek the front." << endl;

			return 0;
		}

		bool isEmpty() const
		{
			return numElements == 0;
		}

		void makeEmpty()
		{
			front = 0;
			back = 0;
			numElements = 0;
		}

	private:
		int* mArray;
		const int MAX_SIZE;
		int front;
		int back;
		int numElements;
};

#endif