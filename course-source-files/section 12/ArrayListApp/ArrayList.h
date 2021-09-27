#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#include <iostream>
#include "List.h"
using namespace std;

class ArrayList : public List
{
	public:
		ArrayList(int s = 16) : MAX_SIZE(s)
		{
			mArray = new int[MAX_SIZE];  //capacity is MAX_SIZE
			mNumElements = 0;  //true size = 0
		}//end ctor

		virtual ~ArrayList()
		{
			delete [] mArray;
		}

		void add(int newEntry)
		{ 
			if (mNumElements >= MAX_SIZE)
			{
				//better to use an exception
				cout << "Cannot add any more elements.  List is full." << endl;
				return;  //just get out of here
			}

			//otherwise, we have room!
			mArray[mNumElements] = newEntry;
			mNumElements++;  
		}

		//add and move stuff over
		void add(int newEntry, int position)
		{
			if (mNumElements >= MAX_SIZE)
			{
				//better to use an exception
				cout << "Cannot add any more elements.  List is full." << endl;
				return;  //just get out of here
			}

			if (position < 0 || position > mNumElements)
			{
				cout << "Out of range with position." << endl;
				return;
			}

			//otherwise,
			//1.  Move elements over
			//2.  Add the new element

			//1 Move elements over
			for (int i = mNumElements; i > position; i--)
			{
				mArray[i] = mArray[i - 1];
			}//end for

			mArray[position] = newEntry;

			mNumElements++;
		}//end add at position

		//replace element at this position
		void set(int newEntry, int position)
		{
			if (position < 0 || position >= mNumElements)
			{
				cout << "You cannot set this element at an out of range position" << endl;
				return;
			}

			mArray[position] = newEntry;
		}  //replace element at position

		bool contains(int entry) const
		{
			bool found = false;

			for (int i = 0; i < mNumElements; i++)
			{
				if (mArray[i] == entry)
				{
					found = true;
					break;
				}
			}

			return found;
		}  //does it exist?

		int find(int entry) const
		{
			int foundIndex = -1;  //assume not found at first 

			for (int i = 0; i < mNumElements; i++)
			{
				if (mArray[i] == entry)
				{
					foundIndex = i;
					break;
				}
			}

			return foundIndex;
		}  //return position of entry

		int remove(int position)
		{
			if (position < 0 || position >= mNumElements)
			{
				cout << "The position is out of range." << endl;
				return -1;
			}

			int value = mArray[position];

			//close the gap and reduce mNumElements
			for (int i = position; i < mNumElements - 1; i++)
			{
				mArray[i] = mArray[i + 1];
			}//end for

			mNumElements--;  //reduce by 1
			return value;
		}

		void makeEmpty()
		{
			mNumElements = -1;  //just set to "empty"
		}

		int size() const
		{ 
			return mNumElements;
		} //get length of list

		bool isEmpty() const
		{
			return mNumElements == 0;
		}//end isEmpty

		void printList() const
		{ 
			for (int i = 0; i < mNumElements; i++)
			{
				cout << mArray[i] << endl;
			}
		}//end printList

	private:
		int* mArray;
		const int MAX_SIZE;
		int mNumElements;  //num elements
};

#endif 