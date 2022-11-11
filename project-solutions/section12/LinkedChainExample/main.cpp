#include <iostream>
#include "Node.h"
using namespace std;

Node* createChain();
void deleteChain(Node*& head);
void printChain(Node* head);

int main()
{
	Node* theHead;

	theHead = createChain();

	printChain(theHead);
	deleteChain(theHead);

	return 0;
}

Node* createChain()
{
	Node* head = nullptr;

	for (int i = 0; i < 25; i++)
	{
		//make this the new head of the list
		head = new Node(i, head);  //make old head the "next"
	}//end for

	return head;
}

void deleteChain(Node*& head)
{
	Node* nodeToDelete;

	while (head != nullptr)
	{
		nodeToDelete = head;
		head = head->getNext();
		delete nodeToDelete;
	}//end while
}

void printChain(Node* head)
{
	Node* walker = head;  
	int counter = 0;

	while (walker != nullptr)
	{
		cout << walker->getData() << endl;
		walker = walker->getNext();
		counter++;
	}//end while

	cout << "Number elements: "<<counter << endl;
}