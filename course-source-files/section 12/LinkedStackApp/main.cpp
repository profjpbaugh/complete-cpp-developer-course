#include <iostream>
#include "LinkedStack.h"

using namespace std;

void printStack(LinkedStack& stack);

int main()
{
	LinkedStack stack;

	stack.push(100);
	stack.push(150);
	stack.push(222);
	stack.push(71);
	stack.push(53);
	stack.push(125);

	//while (!stack.isEmpty())
	//{
	//	cout << stack.pop() << endl;
	//}//end while

	printStack(stack);
	cout << endl;
	printStack(stack);  //do it twice to make sure we're keeping values

	return 0;
}

void printStack(LinkedStack& stack)
{
	LinkedStack tempHolder;
	int data;

	while (!stack.isEmpty())
	{
		data = stack.pop();
		cout << data << endl;
		tempHolder.push(data);
	}//end while

	//now put back in the original stack
	while (!tempHolder.isEmpty())
	{
		stack.push(tempHolder.pop());
	}//end while
}//end printStack