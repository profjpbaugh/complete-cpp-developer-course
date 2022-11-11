#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include "List.h"
using namespace std;


//-----------------Node--------------//
class Node
{
	public:
		Node(int data, Node* next)
		{
			this->data = data;
			this->next = next;
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

	private:
		int data;
		Node* next;  
};


class LinkedList : public List
{
public:
	LinkedList()
	{
		mNumElements = 0;
		mHead = nullptr;  //empty list, no nodes
	}//end ctor

	//destructor - considered good programming to use virtual destructor
	//in case you may delete an object of a derived class through a polymorphic pointer
	virtual ~LinkedList()
	{
		makeEmpty();  
	}

	void add(int newEntry)
	{
		//ADT doesn't specify where to add it, so add at front!
		Node* newNode = new Node(newEntry, mHead);
		newNode->setNext(mHead);
		mHead = newNode;

		mNumElements++;
	}//end add

	//add to list at specified, 0-indexed position
	//case 1:  add at beginning (position 0)
	//case 2:  add somewhere that's not the beginning
	void add(int newEntry, int position)
	{
		Node* newNode = new Node(newEntry, mHead);

		//allow adding at the end, so @mNumElements itself is okay
		if (position >= mNumElements + 1 || position < 0)
		{
			//could also use exceptions
			cout << "Error:  Cannot add at specified position" << endl;
			return;  //get out of here. 
		}

		if (position == 0)  //case 1
		{
			newNode->setNext(mHead);
			mHead = newNode;
		}
		else  //case 2
		{
			Node* nodeBefore = mHead;
			Node* nodeAfter;

			for (int i = 0; i < position - 1; i++)
			{
				//find the nodeBefore the position we want
				nodeBefore = nodeBefore->getNext();
			}//end for

			nodeAfter = nodeBefore->getNext();
			//now splice our new node in between them
			newNode->setNext(nodeAfter);
			nodeBefore->setNext(newNode);  //instead of pointing to nodeAfter,
										   //nodeBefore now points to the node we're adding

		}

		mNumElements++;
	}//end add at position

	//replace element at this position
	void set(int newEntry, int position)
	{
		Node* walker = mHead;
		int index = 0;

		if (position >= mNumElements || position < 0)
		{
			//could also use exceptions
			cout << "Error:  Cannot set at specified position" << endl;
			return;  //get out of here. 
		}

		for (int i = 0; i < position; i++)
		{
			walker = walker->getNext();  //break out when i == position, which
			                             //is where we want to add!  Yaaay!
		}//end for 

		//by now, we're at the position we want to add
		walker->setData(newEntry);

	}  //replace element at position

	//leave for challenge at end
	bool contains(int entry) const
	{
		bool result = false;

		result = find(entry) != -1;  //is true if it does find it!

		return result;
	}  //does it exist?

	int find(int entry) const
	{
		int foundIndex = -1;  //-1 means not found
		int indexCounter = 0;
		Node* walker = mHead;
		while (walker != nullptr)
		{
			if (walker->getData() == entry)
			{
				foundIndex = indexCounter;
				break; //get outta here
			}

			indexCounter++;
		}

		return foundIndex;
	}  //return position of entry

	int remove(int position)
	{

		if (position >= mNumElements || position < 0)
		{
			//could also use exceptions
			cout << "Error:  Cannot remove at specified position" << endl;
			return 0;  //get out of here. 
		}

		int dataToReturn = 0;

		if (position == 0) //case:  first node
		{
			Node* temp = mHead;
			dataToReturn = temp->getData();
			mHead = mHead->getNext();
			delete temp;  //remove it
		}
		else              //case:  any other node, positions 1, ...
		{
			//find element before, element itself, and element after
			// and hold on to them, and bypass node at position
			Node* nodeBefore = mHead;
			Node* nodeToRemove;
			Node* nodeAfter;

			for (int i = 0; i < position - 1; i++)
			{
				nodeBefore = nodeBefore->getNext();
			}//end for

			//nodeBefore is at position - 1
			nodeToRemove = nodeBefore->getNext();
			dataToReturn = nodeToRemove->getData();

			nodeAfter = nodeToRemove->getNext();

			//bypass the node we're removing
			nodeBefore->setNext(nodeAfter);

			//delete the node
			delete nodeToRemove;

		}//end if-else

		mNumElements--;  //one less item now

		return dataToReturn;
	}

	//we actually have to delete the nodes
	void makeEmpty()
	{
		//destroy all the nodes in the list
		Node* temp;
		while (mHead != nullptr)
		{
			temp = mHead;
			mHead = mHead->getNext();
			delete temp;
		}//end while
	}//end makeEmpty

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
		Node* walker = mHead;

		while (walker != nullptr)
		{
			cout << walker->getData() << endl;
			walker = walker->getNext();
		}
	}//end printList

private:
	Node* mHead;  //the head of the list
	int mNumElements;  //num elements
};
#endif
